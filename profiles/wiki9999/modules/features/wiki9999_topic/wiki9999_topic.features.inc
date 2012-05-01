<?php
/**
 * @file
 * wiki9999_topic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_topic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wiki9999_topic_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wiki9999_topic_node_info() {
  $items = array(
    'topic' => array(
      'name' => t('Topic'),
      'base' => 'node_content',
      'description' => t('To start a new topic'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
