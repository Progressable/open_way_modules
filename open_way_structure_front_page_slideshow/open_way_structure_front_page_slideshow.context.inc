<?php
/**
 * @file
 * open_way_structure_front_page_slideshow.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_structure_front_page_slideshow_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_frontpage';
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
        'views-a799175b70ccf6bb2d8a1636b9d17eb2' => array(
          'module' => 'views',
          'delta' => 'a799175b70ccf6bb2d8a1636b9d17eb2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_frontpage'] = $context;

  return $export;
}
