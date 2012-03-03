<?php
/**
 * @file
 * open_way_structure_blogger_bio.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_blogger_bio_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit any blogging_profile profile
  $permissions['edit any blogging_profile profile'] = array(
    'name' => 'edit any blogging_profile profile',
    'roles' => array(
      0 => 'Extra - Users',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own blogging_profile profile
  $permissions['edit own blogging_profile profile'] = array(
    'name' => 'edit own blogging_profile profile',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any blogging_profile profile
  $permissions['view any blogging_profile profile'] = array(
    'name' => 'view any blogging_profile profile',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own blogging_profile profile
  $permissions['view own blogging_profile profile'] = array(
    'name' => 'view own blogging_profile profile',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
