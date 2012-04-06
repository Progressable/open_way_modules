<?php
/**
 * @file
 * open_way_configuration_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_configuration_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit file
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: import media
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
      5 => 'Level5 - Contributer',
      6 => 'Type - Blogger',
    ),
    'module' => 'media',
  );

  // Exported permission: show format selection for node
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: view file
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Extra - Content',
      2 => 'Extra - Forms',
      3 => 'Extra - Menus and URL',
      4 => 'Extra - Users',
      5 => 'Level0 - Webmaster',
      6 => 'Level1 - Administrator',
      7 => 'Level2 - Manager',
      8 => 'Level3 - Publisher',
      9 => 'Level4 - Editor',
      10 => 'Level5 - Contributer',
      11 => 'Type - Blogger',
      12 => 'Type - Partner',
      13 => 'anonymous user',
      14 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
