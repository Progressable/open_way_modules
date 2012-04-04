<?php
/**
 * @file
 * open_way_configuration_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function open_way_configuration_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__dialog_theme';
  $strongarm->value = 'seven';
  $export['media__dialog_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__file_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico';
  $export['media__file_extensions'] = $strongarm;

  return $export;
}
