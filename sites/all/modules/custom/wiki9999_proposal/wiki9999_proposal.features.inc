<?php
/**
 * @file
 * wiki9999_proposal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_proposal_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wiki9999_proposal_node_info() {
  $items = array(
    'proposal' => array(
      'name' => t('Proposal'),
      'base' => 'node_content',
      'description' => t('Make a proposal for a topic that could be supported by the whole community.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
