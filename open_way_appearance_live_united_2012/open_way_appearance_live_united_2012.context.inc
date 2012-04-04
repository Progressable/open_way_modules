<?php
/**
 * @file
 * open_way_appearance_live_united_2012.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_appearance_live_united_2012_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_copyright';
  $context->description = '';
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
        'boxes-ow_copyright' => array(
          'module' => 'boxes',
          'delta' => 'ow_copyright',
          'region' => 'bottom',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_copyright'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_front_eih_welcome';
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
        'boxes-ow_eih_welcome' => array(
          'module' => 'boxes',
          'delta' => 'ow_eih_welcome',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_front_eih_welcome'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_navigation';
  $context->description = '';
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
        'boxes-ow_navigation_donation_button' => array(
          'module' => 'boxes',
          'delta' => 'ow_navigation_donation_button',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => 1,
          'region' => 'navigation',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_navigation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_side_boxes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ow_page' => 'ow_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ow_cc_email_signup' => array(
          'module' => 'boxes',
          'delta' => 'ow_cc_email_signup',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-ow_gav_actionboxes_2012' => array(
          'module' => 'boxes',
          'delta' => 'ow_gav_actionboxes_2012',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-ow_social_media_buttons_box' => array(
          'module' => 'boxes',
          'delta' => 'ow_social_media_buttons_box',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_side_boxes'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_top_search';
  $context->description = '';
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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_top_search'] = $context;

  return $export;
}
