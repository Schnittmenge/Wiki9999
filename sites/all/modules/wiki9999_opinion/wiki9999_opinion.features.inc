<?php
/**
 * @file
 * wiki9999_opinion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_opinion_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function wiki9999_opinion_node_info() {
  $items = array(
    'opinion' => array(
      'name' => t('Opinion'),
      'base' => 'node_content',
      'description' => t('Opinion to a discourse'),
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
function wiki9999_opinion_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: opinion
  $rdf_mappings['node']['opinion'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
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
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
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
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_website_source' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:source property',
      ),
    ),
    'field_publisher' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:publisher',
      ),
    ),
    'field_content_type_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:type',
      ),
    ),
    'field_language' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:language',
      ),
    ),
    'field_legal_rights_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:rights',
      ),
    ),
  );

  return $rdf_mappings;
}
