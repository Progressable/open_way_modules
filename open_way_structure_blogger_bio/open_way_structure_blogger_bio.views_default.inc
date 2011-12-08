<?php
/**
 * @file
 * open_way_structure_blogger_bio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function open_way_structure_blogger_bio_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'blog_top_mini_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Blog Top Mini Profile';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 1;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_picture_medium';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Blogger Bio';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name_1']['overwrite_anonymous'] = 0;
  /* Field: Profile: Blogger Introduction */
  $handler->display->display_options['fields']['field_blogger_intro']['id'] = 'field_blogger_intro';
  $handler->display->display_options['fields']['field_blogger_intro']['table'] = 'field_data_field_blogger_intro';
  $handler->display->display_options['fields']['field_blogger_intro']['field'] = 'field_blogger_intro';
  $handler->display->display_options['fields']['field_blogger_intro']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_blogger_intro']['label'] = '';
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogger_intro']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_blogger_intro']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_blogger_intro']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_blogger_intro']['field_api_classes'] = 0;
  /* Field: Profile: Blogger Affilations */
  $handler->display->display_options['fields']['field_blogger_affiliation']['id'] = 'field_blogger_affiliation';
  $handler->display->display_options['fields']['field_blogger_affiliation']['table'] = 'field_data_field_blogger_affiliation';
  $handler->display->display_options['fields']['field_blogger_affiliation']['field'] = 'field_blogger_affiliation';
  $handler->display->display_options['fields']['field_blogger_affiliation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['element_class'] = 'inline-lable';
  $handler->display->display_options['fields']['field_blogger_affiliation']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_blogger_affiliation']['element_label_class'] = 'inline-lable';
  $handler->display->display_options['fields']['field_blogger_affiliation']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_blogger_affiliation']['element_wrapper_class'] = 'inline-lable';
  $handler->display->display_options['fields']['field_blogger_affiliation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_blogger_affiliation']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_blogger_affiliation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_blogger_affiliation']['type'] = 'default';
  $handler->display->display_options['fields']['field_blogger_affiliation']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_blogger_affiliation']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_blogger_affiliation']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_blogger_affiliation']['field_api_classes'] = 0;
  /* Field: Profile: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_twitter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_twitter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_twitter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_twitter']['element_wrapper_class'] = 'blogger-twitter-link';
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_twitter']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_twitter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_twitter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter']['type'] = 'label';
  $handler->display->display_options['fields']['field_twitter']['field_api_classes'] = 0;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Mini Profile */
  $handler = $view->new_display('block', 'Mini Profile', 'block');
  $export['blog_top_mini_profile'] = $view;

  return $export;
}
