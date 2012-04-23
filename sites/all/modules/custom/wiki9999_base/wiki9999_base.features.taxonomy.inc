<?php
/**
 * @file
 * wiki9999_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wiki9999_base_taxonomy_default_vocabularies() {
  return array(
    'status_translation_taxonomy' => array(
      'name' => 'status_translation_taxonomy',
      'machine_name' => 'status_translation_taxonomy',
      'description' => 'Status translation',
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
