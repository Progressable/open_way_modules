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
      1 => 'Extra - Users',
      2 => 'Level0 - Webmaster',
      3 => 'Level1 - Administrator',
      4 => 'Level2 - Manager',
      5 => 'Level3 - Publisher',
      6 => 'Level4 - Editor',
      7 => 'Level5 - Contributer',
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
      0 => 'Level0 - Webmaster',
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
      5 => 'Level0 - Webmaster',
      6 => 'Level1 - Administrator',
      7 => 'Level2 - Manager',
      8 => 'Level3 - Publisher',
      9 => 'Level4 - Editor',
      10 => 'Level5 - Contributer',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
      5 => 'Level4 - Editor',
      6 => 'Level5 - Contributer',
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
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
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
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
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
      0 => 'Level0 - Webmaster',
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
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
      5 => 'Level5 - Contributer',
    ),
    'module' => 'system',
  );

  return $permissions;
}
