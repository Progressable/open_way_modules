<?php
/**
 * @file
 * open_way_structure_blogger_bio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function open_way_structure_blogger_bio_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function open_way_structure_blogger_bio_default_profile2_type() {
  $items = array();
  $items['blogging_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "blogging_profile",
    "label" : "Blogging Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}
