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
      0 => 'Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Webmaster',
      2 => 'Administrator',
      3 => 'Manager',
      4 => 'Publisher',
      5 => 'Editor',
      6 => 'Contributor',
      7 => 'Blogger',
      8 => 'Partner',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Webmaster',
      2 => 'Administrator',
      3 => 'Manager',
      4 => 'Publisher',
      5 => 'Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format html_code
  $permissions['use text format html_code'] = array(
    'name' => 'use text format html_code',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Webmaster',
      2 => 'Administrator',
      3 => 'Manager',
      4 => 'Publisher',
      5 => 'Editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
