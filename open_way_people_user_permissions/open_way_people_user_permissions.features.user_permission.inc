<?php
/**
 * @file
 * open_way_people_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: administer userprotect
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'Extra - Users',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
    ),
    'module' => 'user',
  );

  // Exported permission: assign Extra - Blocks role
  $permissions['assign Extra - Blocks role'] = array(
    'name' => 'assign Extra - Blocks role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Content role
  $permissions['assign Extra - Content role'] = array(
    'name' => 'assign Extra - Content role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Forms role
  $permissions['assign Extra - Forms role'] = array(
    'name' => 'assign Extra - Forms role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Menus and URL role
  $permissions['assign Extra - Menus and URL role'] = array(
    'name' => 'assign Extra - Menus and URL role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Users role
  $permissions['assign Extra - Users role'] = array(
    'name' => 'assign Extra - Users role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Level1 - Administrator role
  $permissions['assign Level1 - Administrator role'] = array(
    'name' => 'assign Level1 - Administrator role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Level2 - Manager role
  $permissions['assign Level2 - Manager role'] = array(
    'name' => 'assign Level2 - Manager role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Level3 - Publisher role
  $permissions['assign Level3 - Publisher role'] = array(
    'name' => 'assign Level3 - Publisher role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Level4 - Editor role
  $permissions['assign Level4 - Editor role'] = array(
    'name' => 'assign Level4 - Editor role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Level5 - Contributer role
  $permissions['assign Level5 - Contributer role'] = array(
    'name' => 'assign Level5 - Contributer role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Type - Blogger role
  $permissions['assign Type - Blogger role'] = array(
    'name' => 'assign Type - Blogger role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Type - Partner role
  $permissions['assign Type - Partner role'] = array(
    'name' => 'assign Type - Partner role',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign all roles
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(),
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
  );

  // Exported permission: change own e-mail
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: change own openid
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: change own password
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
  );

  return $permissions;
}
