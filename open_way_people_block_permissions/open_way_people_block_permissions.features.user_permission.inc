<?php
/**
 * @file
 * open_way_people_block_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_block_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'contextual',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
    ),
    'module' => 'block',
  );

  // Exported permission: administer boxes
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit boxes
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
    ),
    'module' => 'boxes',
  );

  return $permissions;
}
