<?php
/**
 * @file
 * wiki9999_rdfa.features.inc
 */

/**
 * Implements hook_rdf_default_mappings().
 */
function wiki9999_rdfa_rdf_default_mappings() {
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
      'type' => 'property',
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
    'field_global_id' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
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
        0 => 'dc:right',
      ),
    ),
    'field_publisher' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:publisher',
      ),
    ),
    'field_topic_id_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
      ),
    ),
    'field_website_source' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:source',
      ),
    ),
  );

  // Exported RDF mapping: standpoint
  $rdf_mappings['node']['standpoint'] = array(
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
      'type' => 'property',
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
    'field_global_id' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
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
    'field_publisher' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:publisher',
      ),
    ),
    'field_topic_id_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
      ),
    ),
    'field_website_source' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:source',
      ),
    ),
  );

  // Exported RDF mapping: proposal
  $rdf_mappings['node']['proposal'] = array(
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
      'type' => 'property',
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
    'field_global_id' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
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
    'field_publisher' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:publisher',
      ),
    ),
    'field_topic_id_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
      ),
    ),
    'field_website_source' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:source',
      ),
    ),
  );

  // Exported RDF mapping: topic
  $rdf_mappings['node']['topic'] = array(
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
      'type' => 'property',
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
    'field_language' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:language',
      ),
    ),
    'field_legal_rights_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:rights property',
      ),
    ),
    'field_publisher' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'publisher homepage',
      ),
    ),
    'field_topic_id_taxonomy' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
      ),
    ),
    'field_website_source' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:source',
      ),
    ),
    'field_content_type' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:type property',
      ),
    ),
  );

  return $rdf_mappings;
}
