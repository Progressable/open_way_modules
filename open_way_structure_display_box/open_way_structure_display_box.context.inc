<?php
/**
 * @file
 * open_way_structure_display_box.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_structure_display_box_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_display_boxes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ow_front_display_boxes-block' => array(
          'module' => 'views',
          'delta' => 'ow_front_display_boxes-block',
          'region' => 'sidebar_second',
          'weight' => '15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_display_boxes'] = $context;

  return $export;
}
