<?php
/**
 * @file
 * open_way_structure_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_structure_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function open_way_structure_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('<h3>What are Pages</h3>
<p>A simple method for creating and displaying information that rarely changes, such as an &quot;About us&quot; section of a website. By default, a&nbsp;page&nbsp;entry does not allow visitor comments</p>
<h3>When to use Pages</h3>
<p>Pages should be used to display the long term (over&nbsp;six months) efforts of our organization.</p>
<h3>Where Pages&nbsp;appear</h3>
<p>Pages typically appear as the content in static menus.&nbsp;</p>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
