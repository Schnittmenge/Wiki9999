<?php
/**
 * @file
 * wiki9999_standpoint.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_standpoint_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function wiki9999_standpoint_node_info() {
  $items = array(
    'standpoint' => array(
      'name' => t('Standpoint'),
      'base' => 'node_content',
      'description' => t('Standpoint of a Website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function wiki9999_standpoint_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: comment_node_standpoint
  $rdf_mappings['comment']['comment_node_standpoint'] = array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Comment',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'comment_body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'pid' => array(
      'predicates' => array(
        0 => 'sioc:reply_of',
      ),
      'type' => 'rel',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
  );

  return $rdf_mappings;
}
