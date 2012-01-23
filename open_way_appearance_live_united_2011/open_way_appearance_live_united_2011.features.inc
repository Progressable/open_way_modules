<?php
/**
 * @file
 * open_way_appearance_live_united_2011.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_appearance_live_united_2011_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
