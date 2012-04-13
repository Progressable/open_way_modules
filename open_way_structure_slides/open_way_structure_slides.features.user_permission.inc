<?php
/**
 * @file
 * open_way_structure_slides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_slides_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_slide content
  $permissions['create ow_slide content'] = array(
    'name' => 'create ow_slide content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_slide content
  $permissions['delete any ow_slide content'] = array(
    'name' => 'delete any ow_slide content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_slide content
  $permissions['delete own ow_slide content'] = array(
    'name' => 'delete own ow_slide content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_slide content
  $permissions['edit any ow_slide content'] = array(
    'name' => 'edit any ow_slide content',
    'roles' => array(
      0 => 'Webmaster',
      1 => 'Administrator',
      2 => 'Manager',
      3 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ow_slide content
  $permissions['edit own ow_slide content'] = array(
    'name' => 'edit own ow_slide content',
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
