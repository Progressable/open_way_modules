<?php
/**
 * @file
 * open_way_structure_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_page content
  $permissions['create ow_page content'] = array(
    'name' => 'create ow_page content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_page content
  $permissions['delete any ow_page content'] = array(
    'name' => 'delete any ow_page content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_page content
  $permissions['delete own ow_page content'] = array(
    'name' => 'delete own ow_page content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_page content
  $permissions['edit any ow_page content'] = array(
    'name' => 'edit any ow_page content',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
      5 => 'Level4 - Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ow_page content
  $permissions['edit own ow_page content'] = array(
    'name' => 'edit own ow_page content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
