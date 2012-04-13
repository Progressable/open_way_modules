<?php
/**
 * @file
 * open_way_people_structure_perm.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_structure_perm_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Webmaster',
      2 => 'Administrator',
      3 => 'Manager',
      4 => 'Publisher',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
    ),
    'module' => 'path',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'path',
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  return $permissions;
}
