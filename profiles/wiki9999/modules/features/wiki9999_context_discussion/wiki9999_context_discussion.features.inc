<?php
/**
 * @file
 * wiki9999_context_discussion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiki9999_context_discussion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
