<?php
/**
 * @file
 * wiki9999_topic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wiki9999_topic_taxonomy_default_vocabularies() {
  return array(
    'topic_id_taxonomy' => array(
      'name' => 'topic-id-taxonomy',
      'machine_name' => 'topic_id_taxonomy',
      'description' => 'Topic ID',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
