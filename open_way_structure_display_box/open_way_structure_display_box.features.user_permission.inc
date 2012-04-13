<?php
/**
 * @file
 * open_way_structure_display_box.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_display_box_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_display content
  $permissions['create ow_display content'] = array(
    'name' => 'create ow_display content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_display content
  $permissions['delete any ow_display content'] = array(
    'name' => 'delete any ow_display content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_display content
  $permissions['delete own ow_display content'] = array(
    'name' => 'delete own ow_display content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_display content
  $permissions['edit any ow_display content'] = array(
    'name' => 'edit any ow_display content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ow_display content
  $permissions['edit own ow_display content'] = array(
    'name' => 'edit own ow_display content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
