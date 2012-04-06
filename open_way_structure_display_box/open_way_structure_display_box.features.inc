<?php
/**
 * @file
 * open_way_structure_display_box.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_structure_display_box_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function open_way_structure_display_box_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function open_way_structure_display_box_node_info() {
  $items = array(
    'ow_display' => array(
      'name' => t('Display Box'),
      'base' => 'node_content',
      'description' => t('Box for display on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
