<?php
/**
 * @file
 * wiki9999_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function wiki9999_base_flag_default_flags() {
  $flags = array();
  // Exported flag: "Promote".
  $flags['promote'] = array(
    'content_type' => 'node',
    'title' => 'Promote',
    'global' => '1',
    'types' => array(
      0 => 'opinion',
      1 => 'proposal',
      2 => 'standpoint',
    ),
    'flag_short' => 'Promote',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unpromote',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'wiki9999_base',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
