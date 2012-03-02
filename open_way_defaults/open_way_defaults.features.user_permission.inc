<?php
/**
 * @file
 * open_way_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
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

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Extra - Content',
      2 => 'Extra - Menus and URL',
      3 => 'Level0 - Webmaster',
      4 => 'Level1 - Administrator',
      5 => 'Level2 - Publisher',
      6 => 'Level3 - Editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Extra - Menus and URL',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Publisher',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Extra - Blocks',
      1 => 'Extra - Content',
      2 => 'Extra - Forms',
      3 => 'Extra - Menus and URL',
      4 => 'Extra - Users',
      5 => 'Level0 - Webmaster',
      6 => 'Level1 - Administrator',
      7 => 'Level2 - Publisher',
      8 => 'Level3 - Editor',
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
      7 => 'Level2 - Publisher',
      8 => 'Level3 - Editor',
      9 => 'Level4 - Contributer',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
      4 => 'Level4 - Contributer',
      5 => 'Level5 - Blogger',
      6 => 'Type - Partner',
    ),
    'module' => 'media_internet',
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
    ),
    'module' => 'block',
  );

  // Exported permission: administer boxes
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'Level1 - Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'features',
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'image',
  );

  // Exported permission: administer media
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'Level1 - Administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: administer profile types
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'Extra - Users',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'Level0 - Webmaster',
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
    ),
    'module' => 'path',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'Extra - Users',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'Level1 - Administrator',
      1 => 'Level2 - Publisher',
      2 => 'Level3 - Editor',
      3 => 'Level4 - Contributer',
      4 => 'Level5 - Blogger',
      5 => 'Type - Partner',
      6 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Extra - Menus and URL',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Publisher',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'Level0 - Webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
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
      3 => 'Level2 - Publisher',
      4 => 'Level3 - Editor',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit file
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit media
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
    ),
    'module' => 'media',
  );

  // Exported permission: edit node machine name
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(),
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: import media
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Publisher',
      4 => 'Level3 - Editor',
      5 => 'Level4 - Contributer',
      6 => 'Level5 - Blogger',
      7 => 'Type - Partner',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'Level1 - Administrator',
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

  // Exported permission: save draft
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
      4 => 'Level4 - Contributer',
    ),
    'module' => 'save_draft',
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

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
  );

  // Exported permission: show format selection for comment
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(),
  );

  // Exported permission: show format selection for file
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(),
  );

  // Exported permission: show format selection for node
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
  );

  // Exported permission: show format selection for profile2
  $permissions['show format selection for profile2'] = array(
    'name' => 'show format selection for profile2',
    'roles' => array(),
  );

  // Exported permission: show format selection for taxonomy_term
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(),
  );

  // Exported permission: show format selection for user
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
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

  // Exported permission: switch shortcut sets
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'Level0 - Webmaster',
      1 => 'Level1 - Administrator',
      2 => 'Level2 - Publisher',
      3 => 'Level3 - Editor',
      4 => 'Level4 - Contributer',
      5 => 'Level5 - Blogger',
      6 => 'Type - Partner',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Publisher',
      4 => 'Level3 - Editor',
      5 => 'Level4 - Contributer',
      6 => 'Level5 - Blogger',
      7 => 'Type - Partner',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Publisher',
      4 => 'Level3 - Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format html_code
  $permissions['use text format html_code'] = array(
    'name' => 'use text format html_code',
    'roles' => array(
      0 => 'Extra - Content',
      1 => 'Level0 - Webmaster',
      2 => 'Level1 - Administrator',
      3 => 'Level2 - Publisher',
      4 => 'Level3 - Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view file
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'file_entity',
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
      5 => 'Level1 - Administrator',
      6 => 'Level2 - Publisher',
      7 => 'Level3 - Editor',
      8 => 'Level4 - Contributer',
    ),
    'module' => 'system',
  );

  return $permissions;
}
