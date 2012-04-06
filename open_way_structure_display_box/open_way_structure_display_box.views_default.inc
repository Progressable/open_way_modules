<?php
/**
 * @file
 * open_way_structure_display_box.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function open_way_structure_display_box_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ow_front_display_boxes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Display Boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_display_link' => 'field_display_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_display_link_1']['id'] = 'field_display_link_1';
  $handler->display->display_options['fields']['field_display_link_1']['table'] = 'field_data_field_display_link';
  $handler->display->display_options['fields']['field_display_link_1']['field'] = 'field_display_link';
  $handler->display->display_options['fields']['field_display_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_display_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_link_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_display_link_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_display_link_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_display_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_display_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_display_link_1']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_display_image']['id'] = 'field_display_image';
  $handler->display->display_options['fields']['field_display_image']['table'] = 'field_data_field_display_image';
  $handler->display->display_options['fields']['field_display_image']['field'] = 'field_display_image';
  $handler->display->display_options['fields']['field_display_image']['label'] = '';
  $handler->display->display_options['fields']['field_display_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_display_image']['alter']['path'] = '[field_display_link_1]';
  $handler->display->display_options['fields']['field_display_image']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_display_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_display_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_display_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_display_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_display_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_display_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_display_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_display_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_display_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_display_image']['settings'] = array(
    'image_style' => 'ow_small-rectangle',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_display_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_display_link_1]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Statement */
  $handler->display->display_options['fields']['field_display_statement']['id'] = 'field_display_statement';
  $handler->display->display_options['fields']['field_display_statement']['table'] = 'field_data_field_display_statement';
  $handler->display->display_options['fields']['field_display_statement']['field'] = 'field_display_statement';
  $handler->display->display_options['fields']['field_display_statement']['label'] = '';
  $handler->display->display_options['fields']['field_display_statement']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_display_statement']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_display_statement']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_statement']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_display_statement']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_display_statement']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_display_statement']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_display_link']['id'] = 'field_display_link';
  $handler->display->display_options['fields']['field_display_link']['table'] = 'field_data_field_display_link';
  $handler->display->display_options['fields']['field_display_link']['field'] = 'field_display_link';
  $handler->display->display_options['fields']['field_display_link']['label'] = '';
  $handler->display->display_options['fields']['field_display_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_display_link']['alter']['text'] = 'Read More >>';
  $handler->display->display_options['fields']['field_display_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_display_link']['alter']['path'] = '[field_display_link-url] ';
  $handler->display->display_options['fields']['field_display_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_display_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_display_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_display_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_display_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_display_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_display_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_display_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_display_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_display_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_display_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ow_display' => 'ow_display',
  );

  /* Display: Block Front Display Boxes */
  $handler = $view->new_display('block', 'Block Front Display Boxes', 'block');
  $export['ow_front_display_boxes'] = $view;

  return $export;
}
