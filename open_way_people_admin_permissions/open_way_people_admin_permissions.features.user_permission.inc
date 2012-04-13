<?php
/**
 * @file
 * open_way_people_admin_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_admin_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Webmaster',
      2 => 'Administrator',
      3 => 'Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(),
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Extra - Content',
      2 => 'Extra - Forms',
      3 => 'Extra - Menus and URL',
      4 => 'Extra - Users',
      5 => 'Webmaster',
      6 => 'Administrator',
      7 => 'Manager',
      8 => 'Publisher',
      9 => 'Editor',
      10 => 'Contributor',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Webmaster',
      2 => 'Administrator',
      3 => 'Manager',
      4 => 'Publisher',
      5 => 'Editor',
      6 => 'Contributor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
  );

  // Exported permission: administer workbench
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'workbench',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Editor',
      5 => 'Contributor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
