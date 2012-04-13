<?php
/**
 * @file
 * open_way_structure_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog content
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      0 => 'Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      0 => 'Level1 - Administrator',
      1 => 'Level2 - Manager',
      2 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog content
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      0 => 'Level1 - Administrator',
      1 => 'Level2 - Manager',
      2 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog content
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog content
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      0 => 'Blogger',
    ),
    'module' => 'node',
  );

  return $permissions;
}
