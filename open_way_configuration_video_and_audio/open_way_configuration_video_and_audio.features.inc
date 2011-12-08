<?php
/**
 * @file
 * open_way_configuration_video_and_audio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_configuration_video_and_audio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
