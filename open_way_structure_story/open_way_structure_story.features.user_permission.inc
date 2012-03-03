<?php
/**
 * @file
 * open_way_structure_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_story content
  $permissions['create ow_story content'] = array(
    'name' => 'create ow_story content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
      4 => 'Level4 - Contributer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_story content
  $permissions['delete any ow_story content'] = array(
    'name' => 'delete any ow_story content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_story content
  $permissions['delete own ow_story content'] = array(
    'name' => 'delete own ow_story content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_story content
  $permissions['edit any ow_story content'] = array(
    'name' => 'edit any ow_story content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ow_story content
  $permissions['edit own ow_story content'] = array(
    'name' => 'edit own ow_story content',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
      4 => 'Level4 - Contributer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
