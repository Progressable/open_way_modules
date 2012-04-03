<?php
/**
 * @file
 * open_way_configuration_text_formats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_configuration_text_formats_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
      5 => 'Level4 - Editor',
      6 => 'Level5 - Contributer',
      7 => 'Type - Blogger',
      8 => 'Type - Partner',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
      5 => 'Level4 - Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format html_code
  $permissions['use text format html_code'] = array(
    'name' => 'use text format html_code',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
      5 => 'Level4 - Editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
