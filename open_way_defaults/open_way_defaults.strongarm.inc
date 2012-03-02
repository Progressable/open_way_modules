<?php
/**
 * @file
 * open_way_defaults.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function open_way_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/49';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'United Way of Any Town';
  $export['site_name'] = $strongarm;

  return $export;
}
