<?php
/**
 * @file
 * open_way_structure_front_page_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function open_way_structure_front_page_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ow_slideshow_frontpage_2012';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow Frontpage 2012';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_ow_slide_link' => 0,
    'title' => 0,
    'field_ow_slide_image' => 0,
    'field_ow_slide_content' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nothing' => 'nothing',
    'field_ow_slide_link' => 0,
    'title' => 0,
    'field_ow_slide_image' => 0,
    'field_ow_slide_content' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Call to Action */
  $handler->display->display_options['fields']['field_ow_slide_action']['id'] = 'field_ow_slide_action';
  $handler->display->display_options['fields']['field_ow_slide_action']['table'] = 'field_data_field_ow_slide_action';
  $handler->display->display_options['fields']['field_ow_slide_action']['field'] = 'field_ow_slide_action';
  $handler->display->display_options['fields']['field_ow_slide_action']['label'] = '';
  $handler->display->display_options['fields']['field_ow_slide_action']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_slide_action']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_action']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_action']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_action']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ow_slide_link']['id'] = 'field_ow_slide_link';
  $handler->display->display_options['fields']['field_ow_slide_link']['table'] = 'field_data_field_ow_slide_link';
  $handler->display->display_options['fields']['field_ow_slide_link']['field'] = 'field_ow_slide_link';
  $handler->display->display_options['fields']['field_ow_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_ow_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ow_slide_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_ow_slide_link']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '#';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
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
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_ow_slide_image']['id'] = 'field_ow_slide_image';
  $handler->display->display_options['fields']['field_ow_slide_image']['table'] = 'field_data_field_ow_slide_image';
  $handler->display->display_options['fields']['field_ow_slide_image']['field'] = 'field_ow_slide_image';
  $handler->display->display_options['fields']['field_ow_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['path'] = '[field_ow_slide_link]';
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ow_slide_image']['settings'] = array(
    'image_style' => 'ow_large-rectangle',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ow_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Slide Content */
  $handler->display->display_options['fields']['field_ow_slide_content']['id'] = 'field_ow_slide_content';
  $handler->display->display_options['fields']['field_ow_slide_content']['table'] = 'field_data_field_ow_slide_content';
  $handler->display->display_options['fields']['field_ow_slide_content']['field'] = 'field_ow_slide_content';
  $handler->display->display_options['fields']['field_ow_slide_content']['label'] = '';
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['text'] = '<div id="slide-transparency"></div>
<div id="slide-content">
<a href="[field_ow_slide_link]"><h2>[title]</h2>
<p>[field_ow_slide_content]</p>
</a> 
</div>
<div class="take-action-slide-button">
<a href="[field_ow_slide_link]">[field_ow_slide_action]</a>
</div>';
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_slide_content']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_content']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ow_slide_content']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ow_slide_content']['field_api_classes'] = 0;
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
    'ow_slide' => 'ow_slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ow_slideshow_frontpage_2012'] = $view;

  return $export;
}
