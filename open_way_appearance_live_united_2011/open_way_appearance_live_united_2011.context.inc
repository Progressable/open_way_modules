<?php
/**
 * @file
 * open_way_appearance_live_united_2011.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_appearance_live_united_2011_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gav_action_buttons_live_united_theme_2011';
  $context->description = 'Give Advocate and Volunteer Buttons for Live United 2011 theme';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-gav_action_buttons' => array(
          'module' => 'boxes',
          'delta' => 'gav_action_buttons',
          'region' => 'sidebar_second',
          'weight' => '-39',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Give Advocate and Volunteer Buttons for Live United 2011 theme');
  $export['gav_action_buttons_live_united_theme_2011'] = $context;

  return $export;
}
