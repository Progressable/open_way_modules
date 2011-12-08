<?php
/**
 * @file
 * open_way_structure_front_page_slideshow_classic.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_structure_front_page_slideshow_classic_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Front Page Slideshow Classic';
  $context->description = '';
  $context->tag = 'Content Classic';
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
        'views-9aaaf0a450cbf4ba4cc92f4f41b341d3' => array(
          'module' => 'views',
          'delta' => '9aaaf0a450cbf4ba4cc92f4f41b341d3',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Classic');
  $export['Front Page Slideshow Classic'] = $context;

  return $export;
}
