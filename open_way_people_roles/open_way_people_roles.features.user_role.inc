<?php
/**
 * @file
 * open_way_people_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function open_way_people_roles_user_default_roles() {
  $roles = array();

  // Exported role: Extra - Blocks
  $roles['Extra - Blocks'] = array(
    'name' => 'Extra - Blocks',
    'weight' => '10',
  );

  // Exported role: Extra - Content
  $roles['Extra - Content'] = array(
    'name' => 'Extra - Content',
    'weight' => '14',
  );

  // Exported role: Extra - Forms
  $roles['Extra - Forms'] = array(
    'name' => 'Extra - Forms',
    'weight' => '12',
  );

  // Exported role: Extra - Menus and URL
  $roles['Extra - Menus and URL'] = array(
    'name' => 'Extra - Menus and URL',
    'weight' => '13',
  );

  // Exported role: Extra - Users
  $roles['Extra - Users'] = array(
    'name' => 'Extra - Users',
    'weight' => '11',
  );

  // Exported role: Level0 - Webmaster
  $roles['Level0 - Webmaster'] = array(
    'name' => 'Level0 - Webmaster',
    'weight' => '2',
  );

  // Exported role: Level1 - Administrator
  $roles['Level1 - Administrator'] = array(
    'name' => 'Level1 - Administrator',
    'weight' => '3',
  );

  // Exported role: Level2 - Manager
  $roles['Level2 - Manager'] = array(
    'name' => 'Level2 - Manager',
    'weight' => '4',
  );

  // Exported role: Level3 - Publisher
  $roles['Level3 - Publisher'] = array(
    'name' => 'Level3 - Publisher',
    'weight' => '5',
  );

  // Exported role: Level4 - Editor
  $roles['Level4 - Editor'] = array(
    'name' => 'Level4 - Editor',
    'weight' => '6',
  );

  // Exported role: Level5 - Contributer
  $roles['Level5 - Contributer'] = array(
    'name' => 'Level5 - Contributer',
    'weight' => '7',
  );

  // Exported role: Type - Blogger
  $roles['Type - Blogger'] = array(
    'name' => 'Type - Blogger',
    'weight' => '8',
  );

  // Exported role: Type - Partner
  $roles['Type - Partner'] = array(
    'name' => 'Type - Partner',
    'weight' => '9',
  );

  return $roles;
}
