<?php

/**
 * @file
 * Web service client - include file.
 */

/**
 * Class representing web service descriptions.
 */
class WSClientServiceDescription extends Entity {

  public $settings = array();
  public $operations = array();
  public $datatypes = array();
  public $global_parameters = array();
  public $name;
  public $label;
  public $url;
  public $type;
  public $token;

  protected $endpoint = NULL;
  protected $cache = array();
  protected $subscriptions = array();

  function __construct($values = array(), $entity_type = 'wsclient_service') {
    parent::__construct($values, $entity_type);
    // Make sure there is a token for communicating with the remote service.
    if (!isset($this->token)) {
      $this->token = drupal_get_token(time());
    }
  }

  /**
   * Magic method to catch service invocations.
   */
  public function __call($operation, $arguments) {
    return $this->invoke($operation, $arguments);
  }

  /**
   * Invoke a service via its endpoint.
   *
   * @param string $operation
   *   The name of the operation to execute.
   * @param array $arguments
   *   Arguments to pass to the service with this operation. If the array keys
   *   do not match the parameter information, the array values are assigned in
   *   sequential order according to the order of parameters.
   */
  public function invoke($operation, array $arguments) {
    if (!isset($this->operations[$operation])) {
      throw new WSClientException('Operation %operation does not exist for web service %service.', array('%operation' => $operation, '%service' => $this->name));
    }
    $named_arguments = array();
    if (isset($this->operations[$operation]['parameter'])) {
      $remaining_params = $this->operations[$operation]['parameter'];
      // Assign named arguments and hidden parameters.
      foreach ($this->operations[$operation]['parameter'] as $param => $info) {
        if (isset($arguments[$param])) {
          $named_arguments[$param] = $arguments[$param];
          unset($arguments[$param]);
          unset($remaining_params[$param]);
        }
        elseif ($info['type'] == 'hidden') {
          $named_arguments[$param] = $info['default value'];
          unset($remaining_params[$param]);
        }
      }
      // Assign the rest in sequential order.
      foreach ($remaining_params as $param => $info) {
        $named_arguments[$param] = array_shift($arguments);
      }
    }

    // Fill in global parameters.
    foreach ($this->global_parameters as $param => $info) {
      if (!isset($named_arguments[$param])) {
        $named_arguments[$param] = $info['default value'];
      }
    }

    return $this->endpoint()->call($operation, $named_arguments);
  }

  /**
   * Determines access to the web service.
   */
  public function access($account = NULL) {
    if (method_exists($this->endpoint(), 'access')) {
      return $this->endpoint()->access($account);
    }
    return user_access('interact with ' . $this->name, $account);
  }

  /**
   * Returns the associated web service endpoint object.
   *
   * @return WSClientEndpointInterface
   */
  public function endpoint() {
    if (!isset($this->endpoint)) {
      $types = wsclient_get_types();
      $this->endpoint = new $types[$this->type]['class']($this);
    }
    return $this->endpoint;
  }

  /**
   * Loads the entity of the given type and id. In case of errors a
   * WSClientException is thrown.
   */
  public function load($type, $id) {
    try {
      return $this->endpoint()->load($type, $id);
    }
    catch (Exception $e) {
      $args = array('%name' => $this->name, '%message' => $e->getMessage(), '%type' => $type, '%id' => print_r($id,1));
      throw new WSClientException('Unable to load %id of type %type from the web service description %name. Error message: %message', $args);
    }
  }

  protected function cache($part) {
    if (empty($this->cache)) {
      $this->refreshInfo();
    }
    return !empty($this->cache[$part]) ? $this->cache[$part] : array();
  }

  /**
   * Returns info about events of the web service.
   */
  public function events() {
    return $this->cache('events');
  }

  /**
   * Returns info about the entities of the web service.
   */
  public function entities() {
    return $this->cache('entities');
  }

  /**
   * Returns info about the data types of the web service, thus types being not
   * entities.
   */
  public function dataTypes() {
    $types = $this->datatypes + $this->cache('dataTypes');
    foreach ($types as $type => $info) {
      // Add in the service name so that others know where this type comes from.
      $types[$type]['service'] = $this->name;
    }
    return $types;
  }

  /**
   * Returns info about the actions of the web service.
   */
  public function actions() {
    $actions = array();
    foreach ($this->operations as $name => $operation) {
      $actions[$name] = $operation += array(
        'base' => 'wsclient_service_action',
        'named parameter' => TRUE,
      );
      $actions[$name]['parameter'] = array();
      if (isset($operation['parameter'])) {
        // Prefix operation parameter names to avoid name clashes.
        foreach ((array) $operation['parameter'] as $param => $info) {
          $actions[$name]['parameter']['param_' . $param] = $info;
        }
      }
      $actions[$name]['parameter']['service'] = array(
        'type' => 'hidden',
        'default value' => $this->name,
      );
      $actions[$name]['parameter']['operation'] = array(
        'type' => 'hidden',
        'default value' => $name,
      );
      // Pass through the service result as provided variable.
      if (!empty($actions[$name]['result'])) {
        $actions[$name]['provides']['result'] = $actions[$name]['result'];
        unset($actions[$name]['result']);
      }
    }
    return $actions;
  }

  protected function refreshInfo() {
    try {
      $this->cache['entities'] = $this->endpoint()->entities();
      $this->cache['dataTypes'] = $this->endpoint()->dataTypes();
      $this->cache['events'] = $this->endpoint()->events();
      $this->storeInfo();
    }
    catch (Exception $e) {
      $args = array('%name' => $this->name, '%message' => $e->getMessage());
      watchdog('wsclient', 'Error getting definitions from the web service %name. Error message: %message.', $args, WATCHDOG_ALERT);
    }
  }

  public function clearCache() {
    $this->refreshInfo();
    $this->endpoint()->clearCache();
  }

  public function isSubscribedTo($event) {
    return isset($this->subscriptions[$event]);
  }

  /**
   * Subscribes to the given event, so we get event notitifcations whenever the
   * event occurs.
   */
  public function subscribe($event) {
    // Make sure the info is retrieved and thus the token is stored, so the
    // token won't change in future. $this->events() does that for us.
    if (($events = $this->events()) && isset($events[$event])) {
      try {
        $this->endpoint()->subscribe($event);
        $this->subscriptions[$event] = TRUE;
        db_merge('wsclient_subscriptions')
          ->key(array(
            'name' => $this->name,
            'event' => $event,
          ))
          ->execute();
      }
      catch (Exception $e) {
        $args = array('%event' => $event, '%name' => $this->name, '%message' => $e->getMessage());
        watchdog('wsclient', 'Error subscribing to event %event of web service %name. Error message: %message.', $args, WATCHDOG_ERROR);
      }
    }
  }

  /**
   * Unsubscribes from the given event.
   */
  public function unsubscribe($event) {
    try {
      $this->endpoint()->unsubscribe($event);
      unset($this->subscriptions[$event]);
      db_delete('wsclient_subscriptions')
        ->condition('name', $this->name)
        ->condition('event', $event)
        ->execute();
    }
    catch (Exception $e) {
      $args = array('%event' => $event, '%name' => $this->name, '%message' => $e->getMessage());
      watchdog('wsclient', 'Error unsubscribing from event %event of web service %name. Error message: %message.', $args, WATCHDOG_ERROR);
    }
  }

  /**
   * Stores the token and remote metadata independent from the web service
   * object itself, so a web service may live in code via the default hook but
   * still store this information.
   */
  protected function storeInfo() {
    db_merge('wsclient_info')
      ->key(array('name' => $this->name))
      ->fields(array(
        'info' => serialize($this->cache),
        'token' => $this->token,
      ))
      ->execute();
  }

  public function save() {
    parent::save();
    $this->storeInfo();
  }

  /**
   * Loads the stored info for the given web service objects.
   *
   * @see wsclient_wsclient_service_load()
   */
  public static function attachLoad($services) {
    if (empty($services)) {
      return;
    }
    $result = db_select('wsclient_info', 'r')
      ->fields('r')
      ->condition('name', array(array_keys($services)))
      ->execute();

    foreach ($result as $record) {
      $services[$record->name]->cache = unserialize($record->info);
      $services[$record->name]->token = $record->token;
    }

    // Load subscribed events.
    $result = db_select('wsclient_subscriptions', 'r')
      ->fields('r')
      ->condition('name', array(array_keys($services)))
      ->execute();
    foreach ($result as $record) {
      $services[$record->name]->subscriptions[$record->event] = TRUE;
    }
  }
}

/**
 * Implements hook_wsclient_service_load().
 */
function wsclient_wsclient_service_load($services) {
  WSClientServiceDescription::attachLoad($services);
}

/**
 * Interface for remote endpoints. In case of any errors the implementing
 * classes should throw exceptions.
 */
interface WSClientEndpointInterface {

  public function __construct(WSClientServiceDescription $service);

  /**
   * Load remote data.
   */
  public function load($type, $id);

  /**
   * Connect to the remote web service and call an operation.
   *
   * @param string $operation
   *   The name of the operation.
   * @param $arguments
   *   The arguments needed for the operation.
   *
   * @return
   *   The response of the web service call.
   */
  public function call($operation, $arguments);

  /**
   * An array of definitions for the provided events.
   */
  public function events();

  /**
   * Subscribe to a remote event.
   */
  public function subscribe($event);

  /**
   * Unsubscribe from a remote event.
   */
  public function unsubscribe($event);

  /**
   * An array of info about entity types used by the provided events/actions.
   */
  public function entities();

  /**
   * An array of info about data types used by the provided events/actions
   * being not entities.
   */
  public function dataTypes();

  /**
   * Allows altering the configuration form of web service definitions, such
   * that the form can include endpoint type specific configuration settings.
   */
  public function formAlter(&$form, &$form_state);

  /**
   * Clear any caches the endpoint maintains.
   */
  public function clearCache();

}

/**
 * Default parent class for service endpoints.
 */
abstract class WSClientEndpoint implements WSClientEndpointInterface {

  /**
   * @var WSClientServiceDescription
   */
  protected $service;

  protected $url;

  protected $client;

  public function __construct(WSClientServiceDescription $service) {
    $this->service = $service;
    $this->url = $service->url;
  }

  public function load($type, $id) {}

  public function call($operation, $arguments) {}

  public function events() {}

  public function subscribe($event) {}

  public function unsubscribe($event) {}

  public function entities() {}

  public function dataTypes() {}

  public function formAlter(&$form, &$form_state) {}

  public function clearCache() {
    unset($this->client);
  }
}

/**
 * A controller for loading remote data as entities.
 */
class WSClientServiceEntityController extends DrupalDefaultEntityController {

  protected $service;

  function __construct($entityType) {
    parent::__construct($entityType);
    $this->service = wsclient_service_load($this->entityInfo['wsclient']['remote']);
  }


  /**
   * Override load to fetch the data from the web service. For now we don't
   * support using $conditions or revisions.
   */
  public function load($ids = array(), $conditions = array()) {
    $entities = array();

    // Create a new variable which is either a prepared version of the $ids
    // array for later comparison with the entity cache, or FALSE if no $ids
    // were passed. The $ids array is reduced as items are loaded from cache,
    // and we need to know if it's empty for this reason to avoid querying the
    // database when all requested entities are loaded from cache.
    $passed_ids = !empty($ids) ? array_flip($ids) : FALSE;
    // Try to load entities from the static cache, if the entity type supports
    // static caching.
    if ($this->cache) {
      $entities += $this->cacheGet($ids, $conditions);
      // If any entities were loaded, remove them from the ids still to load.
      if ($passed_ids) {
        $ids = array_keys(array_diff_key($passed_ids, $entities));
      }
    }

    // Load any remaining entities from the web service.
    if ($ids === FALSE || $ids) {
      foreach ($ids as $id) {
        $queried_entities[$id] = $this->service->load($this->entityInfo['wsclient']['type'], $id);
      }
    }

    // Pass all entities loaded through $this->attachLoad(),
    // which attaches fields (if supported by the entity type) and calls the
    // entity type specific load callback, for example hook_node_load().
    if (!empty($queried_entities)) {
      $this->attachLoad($queried_entities);
      $entities += $queried_entities;
    }

    if ($this->cache && !empty($queried_entities)) {
      $this->cacheSet($queried_entities);
    }

    // Ensure that the returned array is ordered the same as the original
    // $ids array if this was passed in and remove any invalid ids.
    if ($passed_ids) {
      // Remove any invalid ids from the array.
      $passed_ids = array_intersect_key($passed_ids, $entities);
      foreach ($entities as $entity) {
        $passed_ids[$entity->{$this->idKey}] = $entity;
      }
      $entities = $passed_ids;
    }

    return $entities;
  }
}

/**
 * Menu callback for notifying us of a remote event.
 */
function wsclient_notify($service) {
  if (($json = file_get_contents('php://input')) && $data = @drupal_json_decode($json)) {
    // Check message token.
    if (!wsclient_valid_message($service, $data)) {
      drupal_add_http_header('Status', '403 Forbidden');
      return;
    }
    $events = $service->events();
    if (!empty($data['event_name']) && !empty($data['event_data']) && isset($events[$data['event_name']])) {
      $name = 'wsclient_' . $service->name . '_' . $data['event_name'];
      if ($event_set = rules_get_cache('event_' . $name)) {
        // Make sure passed arguments are complete and invoke event.
        $event_args = $event_set->parameterInfo();
        if (($args = array_intersect_key((array) $data['event_data'], $event_args)) && count($args) == count($event_args)) {
          // Make sure data passed for entities is an object.
          $info = entity_get_info();
          foreach ($args as $name => $value) {
            if (isset($info[$event_args[$name]['type']]) && is_array($value)) {
              $args[$name] = (object) $value;
            }
          }
          $event_set->executeByArgs($args);
          $t_args = array('%event' => $data['event_name'], '%name' => $service->label, '!log' => RulesLog::logger()->render());
          watchdog('wsclient', 'Event %event of web service %name triggered rule evaluation: !log', $t_args, WATCHDOG_NOTICE);
        }
      }
      else {
        // We don't have any configured rules, so unsubscribe.
        $service->unsubscribe($data['event_name']);
      }
    }
    elseif (isset($data['handshake'])) {
      // Accept handshakes to verify that this is a valid callback.
      return TRUE;
    }
    else {
      drupal_add_http_header('Status', '404 Not Found');
    }
  }
  else {
    drupal_add_http_header('Status', '415 Unsupported Media Type');
  }
}

/**
 * Checks whether the provided message is a valid event notification by checking
 * the token.
 */
function wsclient_valid_message($service, $data) {
  if (isset($data['time']) && isset($data['token'])) {
    // We don't accept too old messages.
    if (($time = (int)$data['time']) + 3600 > time()) {
      return $data['token'] === md5($time . md5($service->token));
    }
  }
  return FALSE;
}

/**
 * Custom exception class to enhance default PHP exceptions.
 */
class WSClientException extends Exception {

  /**
   * @param $msg
   *   The exception message containing placeholder as t().
   * @param $args
   *   Replacement arguments such as for t().
   */
  function __construct($msg, $args = array()) {
    $message = t($msg, $args);
    parent::__construct($message);
  }
}
