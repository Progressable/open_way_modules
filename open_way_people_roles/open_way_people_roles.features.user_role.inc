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
    'weight' => '11',
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
    'weight' => '14',
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

  // Exported role: Type - Partner
  $roles['Type - Partner'] = array(
    'name' => 'Type - Partner',
    'weight' => '9',
  );

  return $roles;
}
