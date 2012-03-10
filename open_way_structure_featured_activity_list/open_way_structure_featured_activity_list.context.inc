<?php
/**
 * @file
 * open_way_structure_featured_activity_list.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_structure_featured_activity_list_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_frontpage_featured_activity';
  $context->description = 'Lists featured activity from the site';
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
        'views-ow_featured_activity-block' => array(
          'module' => 'views',
          'delta' => 'ow_featured_activity-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lists featured activity from the site');
  $export['ow_frontpage_featured_activity'] = $context;

  return $export;
}
