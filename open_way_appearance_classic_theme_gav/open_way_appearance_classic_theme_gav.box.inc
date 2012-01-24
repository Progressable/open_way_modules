<?php
/**
 * @file
 * open_way_appearance_classic_theme_gav.box.inc
 */

/**
 * Implements hook_default_box().
 */
function open_way_appearance_classic_theme_gav_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_nav_large_gav';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Large Give Advocate Volunteer Buttons';
  $box->options = array(
    'body' => array(
      'value' => '<div id="threeColourfulBoxes" style="right: 5px; position: relative; top: 0pt;"><div class="box"><a class="rollover-give" href="/give" title="Give"><span class="displace">Give</span></a></div><div class="box midbox"><a class="rollover-advocate" href="/advocate" title="Advocate"><span class="displace">Advocate</span></a></div><div class="box"><a class="rollover-volunteer" href="/volunteer" title="Volunteer"><span class="displace">Volunteer</span></a></div></div>',
      'format' => 'html_code',
    ),
  );
  $export['ow_nav_large_gav'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_nav_small_gav';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Navigation Small GAV';
  $box->options = array(
    'body' => array(
      'value' => '<div id="colourfulHeads"><div class="colourfulHeaderBlue" id="colourfulHeader"><h1 style="margin-bottom: 0pt;">&nbsp;</h1></div><div class="second" id="give"><a class="rollover" href="/give"><img alt="GIVE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_give.gif" /> </a></div><div class="mid" id="advocate"><a class="rollover" href="/advocate"><img alt="ADVOCATE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_advocate.gif" /> </a></div><div id="volunteer"><a class="rollover" href="/volunteer"><img alt="VOLUNTEER" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_volunteer.gif" /> </a></div></div>',
      'format' => 'html_code',
    ),
  );
  $export['ow_nav_small_gav'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_nav_small_gav_advocate';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Navigation Small GAV Advocate';
  $box->options = array(
    'body' => array(
      'value' => '<div id="colourfulHeads"><div id="lg_give"><a href="/advocate"><img alt="GIVE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_advocate_lg.gif"></a></div><div class="mid" id="advocate"><a class="rollover" href="/give"><img alt="ADVOCATE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_give.gif"></a></div><div id="volunteer"><a class="rollover" href="/volunteer"><img alt="VOLUNTEER" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_volunteer.gif"></a></div></div>',
      'format' => 'html_code',
    ),
  );
  $export['ow_nav_small_gav_advocate'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_nav_small_gav_give';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Navigation Small GAV Give';
  $box->options = array(
    'body' => array(
      'value' => '<div id="colourfulHeads"><div id="lg_give"><a href="/give"><img alt="GIVE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_give_lg.gif"></a></div><div class="mid" id="advocate"><a class="rollover" href="/advocate"><img alt="ADVOCATE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_advocate.gif"></a></div><div id="volunteer"><a class="rollover" href="/volunteer"><img alt="VOLUNTEER" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_volunteer.gif"></a></div></div>',
      'format' => 'html_code',
    ),
  );
  $export['ow_nav_small_gav_give'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_nav_small_gav_volunteer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Navigation Small GAV Volunteer';
  $box->options = array(
    'body' => array(
      'value' => '<div id="colourfulHeads"><div id="lg_give"><a href="/volunteer"><img alt="GIVE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_volunteer_lg.gif"></a></div><div class="mid" id="advocate"><a class="rollover" href="/give"><img alt="ADVOCATE" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_give.gif"></a></div><div id="volunteer"><a class="rollover" href="/advocate"><img alt="VOLUNTEER" border="0" src="/sites/all/themes/live_united_classic/images/colourfulHead_advocate.gif"></a></div></div>',
      'format' => 'html_code',
    ),
  );
  $export['ow_nav_small_gav_volunteer'] = $box;

  return $export;
}
