<?php
/**
 * @file
 * open_way_configuration_video_and_audio.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function open_way_configuration_video_and_audio_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediaelement_sitewide';
  $strongarm->value = 1;
  $export['mediaelement_sitewide'] = $strongarm;

  return $export;
}
