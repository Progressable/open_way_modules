<?php
/**
 * @file
 * open_way_appearance_live_united_2012.box.inc
 */

/**
 * Implements hook_default_box().
 */
function open_way_appearance_live_united_2012_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_cc_email_signup';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Open Way Cotnstant Contact Email Signup';
  $box->options = array(
    'body' => array(
      'value' => '<div class="block-email-form">
<form action="http://visitor.constantcontact.com/d.jsp" method="post" name="ccoptin" target="_blank">
 <input autocomplete="OFF" name="ea" size="14" style="border: 1px solid rgb(153, 153, 153); font-family: arial; font-size: 10px;" type="text"  placeholder="Signup for email updates">&nbsp;<input class="submit" name="go" style="font-family: arial,helvetica,sans-serif; font-size: 11px;" type="submit" value="Join"> <input name="m" type="hidden" value="-----Your-account-number-----"> <input name="p" type="hidden" value="oi">
</form>
</div>',
      'format' => 'html_code',
    ),
  );
  $export['ow_cc_email_signup'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_copyright';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Copyright';
  $box->options = array(
    'body' => array(
      'value' => '<div id="copyright" style="text-align: center;"><span>&copy;2012 United Way of Anytown.</span></div>',
      'format' => 'html_code',
    ),
    'additional_classes' => '',
  );
  $export['ow_copyright'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_gav_actionboxes_2012';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Open Way GAV Action Boxes Live United 2012';
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
  $export['ow_gav_actionboxes_2012'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_navigation_donation_button';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Navigation Donation Button 2012';
  $box->options = array(
    'body' => array(
      'value' => '<div class="nav-donate-wrapper"><h3 id="nav-donate"><a href="/donate"><span>Donate</span></a></h3></div>',
      'format' => 'html_code',
    ),
    'additional_classes' => '',
  );
  $export['ow_navigation_donation_button'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_social_media_buttons_box';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Open Way Social Media Buttons';
  $box->options = array(
    'body' => array(
      'value' => '<div class="social-media-links">
<a class="facebook-icon" href="http://www.facebook.com/UWAnytown" title="Facebook"><span class="displace">Facebook</span></a>
<a class="twitter-icon" href="http://twitter.com/UWAnytown" title="Twitter"><span class="displace">Twitter</span></a>
<a class="youtube-icon" href="http://www.youtube.com/UWAnytown" title="You Tube"><span class="displace">You Tube</span></a>
<a class="linkedin-icon" href="http://www.linkedin.com/groups/UWAnytown" title="Linked In"><span class="displace">Linked In</span></a>

</div>',
      'format' => 'html_code',
    ),
    'additional_classes' => '',
  );
  $export['ow_social_media_buttons_box'] = $box;

  return $export;
}
