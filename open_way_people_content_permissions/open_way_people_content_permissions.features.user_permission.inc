<?php
/**
 * @file
 * open_way_people_content_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_content_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'image',
  );

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'search',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit meta tags
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit node machine name
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(),
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(),
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
      5 => 'Level5 - Contributer',
      6 => 'Type - Blogger',
      7 => 'Type - Partner',
    ),
    'module' => 'search',
  );

  return $permissions;
}
