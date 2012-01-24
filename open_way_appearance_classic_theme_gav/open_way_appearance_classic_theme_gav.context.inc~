<?php
/**
 * @file
 * open_way_appearance_classic_theme_gav.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_appearance_classic_theme_gav_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_large_gav';
  $context->description = '';
  $context->tag = 'GAV Navigation';
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
        'boxes-nav_large_gav' => array(
          'module' => 'boxes',
          'delta' => 'nav_large_gav',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('GAV Navigation');
  $export['nav_large_gav'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_small_gav';
  $context->description = '';
  $context->tag = 'GAV Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~<front>' => '~<front>',
        '~give' => '~give',
        '~give/*' => '~give/*',
        '~advocate' => '~advocate',
        '~advocate/*' => '~advocate/*',
        '~volunteer' => '~volunteer',
        '~volunteer/*' => '~volunteer/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-nav_small_gav' => array(
          'module' => 'boxes',
          'delta' => 'nav_small_gav',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('GAV Navigation');
  $export['nav_small_gav'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_small_gav_advocate';
  $context->description = '';
  $context->tag = 'GAV Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'advocate' => 'advocate',
        'advocate/*' => 'advocate/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-nav_small_gav_advocate' => array(
          'module' => 'boxes',
          'delta' => 'nav_small_gav_advocate',
          'region' => 'navigation',
          'weight' => '25',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('GAV Navigation');
  $export['nav_small_gav_advocate'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_small_gav_give';
  $context->description = '';
  $context->tag = 'GAV Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'give' => 'give',
        'give/*' => 'give/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-nav_small_gav_give' => array(
          'module' => 'boxes',
          'delta' => 'nav_small_gav_give',
          'region' => 'navigation',
          'weight' => '25',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('GAV Navigation');
  $export['nav_small_gav_give'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_small_gav_volunteer';
  $context->description = '';
  $context->tag = 'GAV Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'volunteer' => 'volunteer',
        'volunteer/*' => 'volunteer/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-nav_small_gav_volunteer' => array(
          'module' => 'boxes',
          'delta' => 'nav_small_gav_volunteer',
          'region' => 'navigation',
          'weight' => '25',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('GAV Navigation');
  $export['nav_small_gav_volunteer'] = $context;

  return $export;
}
