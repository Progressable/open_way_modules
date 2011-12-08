<?php
/**
 * @file
 * open_way_configuration_vissual_enhancements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_configuration_vissual_enhancements_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
