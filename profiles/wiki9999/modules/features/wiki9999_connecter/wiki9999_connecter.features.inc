<?php
/**
 * @file
 * wiki9999_connecter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_connecter_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wiki9999_connecter_views_api() {
  return array("version" => "3.0");
}
