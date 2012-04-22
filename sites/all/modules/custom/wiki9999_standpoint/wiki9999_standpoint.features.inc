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
