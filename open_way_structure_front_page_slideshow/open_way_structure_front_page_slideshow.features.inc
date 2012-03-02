<?php
/**
 * @file
 * open_way_structure_front_page_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_structure_front_page_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function open_way_structure_front_page_slideshow_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
