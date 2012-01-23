<?php
/**
 * @file
 * open_way_appearance_live_united_2011.box.inc
 */

/**
 * Implements hook_default_box().
 */
function open_way_appearance_live_united_2011_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'gav_action_buttons';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Give Advocate Volunteer buttons';
  $box->options = array(
    'body' => array(
      'value' => '<div id="action-box">
<dl id="social-btns"><dt class="clickable" id="give-btn"><a href="/give">GIVE</a></dt>
<dt class="clickable" id="advocate-btn"><a href="/advocate">ADVOCATE</a></dt>
<dt class="clickable" id="volunteer-btn"><a href="/volunteer">VOLUNTEER</a></dt>
</dl></div>',
      'format' => 'html_code',
    ),
  );
  $export['gav_action_buttons'] = $box;

  return $export;
}
