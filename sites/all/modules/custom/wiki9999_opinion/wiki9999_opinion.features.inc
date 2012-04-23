<?php
/**
 * @file
 * wiki9999_opinion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_opinion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
