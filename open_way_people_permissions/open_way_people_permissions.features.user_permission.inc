<?php
/**
 * @file
 * open_way_people_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'views',
  );

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
      5 => 'Level5 - Contributer',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Extra - Content',
      2 => 'Extra - Menus and URL',
      3 => 'Level0 - Webmaster',
      4 => 'Level1 - Administrator',
      5 => 'Level2 - Manager',
      6 => 'Level3 - Publisher',
      7 => 'Level4 - Editor',
      8 => 'Level5 - Contributer',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
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
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
      5 => 'Level5 - Contributer',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
    ),
    'module' => 'block',
  );

  // Exported permission: administer boxes
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'boxes',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'features',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'image',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'search',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
    ),
    'module' => 'path',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'views',
  );

  // Exported permission: administer workbench
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'workbench',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
      4 => 'Level3 - Publisher',
    ),
    'module' => 'path',
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
    ),
    'module' => 'node',
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

  // Exported permission: edit boxes
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Manager',
    ),
    'module' => 'boxes',
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

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'backup_migrate',
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

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
    ),
    'module' => 'node',
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

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
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
    'module' => 'node',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Manager',
      3 => 'Level3 - Publisher',
      4 => 'Level4 - Editor',
      5 => 'Level5 - Contributer',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
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
    ),
    'module' => 'system',
  );

  return $permissions;
}
