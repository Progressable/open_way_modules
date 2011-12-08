<?php
/**
 * @file
 * open_way_structure_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_structure_story_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function open_way_structure_story_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('Use story for time-sensitive content like news, press releases or blog posts. They are the most general type of content. You can use them for almost anything. They are ideal for creating and displaying timely information about the organization. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
