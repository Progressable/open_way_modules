<?php
/**
 * @file
 * open_way_structure_slides.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function open_way_structure_slides_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ow_slide';
  $strongarm->value = '0';
  $export['comment_anonymous_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ow_slide';
  $strongarm->value = 0;
  $export['comment_default_mode_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ow_slide';
  $strongarm->value = '50';
  $export['comment_default_per_page_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ow_slide';
  $strongarm->value = 0;
  $export['comment_form_location_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ow_slide';
  $strongarm->value = '0';
  $export['comment_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ow_slide';
  $strongarm->value = '0';
  $export['comment_preview_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ow_slide';
  $strongarm->value = 0;
  $export['comment_subject_field_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ow_slide';
  $strongarm->value = array();
  $export['menu_options_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ow_slide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ow_slide';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ow_slide';
  $strongarm->value = '0';
  $export['node_preview_ow_slide'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ow_slide';
  $strongarm->value = 0;
  $export['node_submitted_ow_slide'] = $strongarm;

  return $export;
}
