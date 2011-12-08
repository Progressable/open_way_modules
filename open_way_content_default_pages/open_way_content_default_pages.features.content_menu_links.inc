<?php
/**
 * @file
 * open_way_content_default_pages.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function open_way_content_default_pages_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/4
  $menu_links['main-menu:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/about-us',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/6
  $menu_links['main-menu:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/advocate',
    'router_path' => 'node/%',
    'link_title' => 'Advocate',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/12
  $menu_links['main-menu:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/born-learning',
    'router_path' => 'node/%',
    'link_title' => 'Born Learning',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/success-by-6',
  );
  // Exported menu link: main-menu:node/18
  $menu_links['main-menu:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/campaign-coordinator-toolkit',
    'router_path' => 'node/%',
    'link_title' => 'Coordinator Toolkit',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/community-campaign',
  );
  // Exported menu link: main-menu:node/17
  $menu_links['main-menu:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/community-campaign',
    'router_path' => 'node/%',
    'link_title' => 'Campaign',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:node/20
  $menu_links['main-menu:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/directions',
    'router_path' => 'node/%',
    'link_title' => 'Directions',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about-us',
  );
  // Exported menu link: main-menu:node/8
  $menu_links['main-menu:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/education',
    'router_path' => 'node/%',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/13
  $menu_links['main-menu:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/example-sub-page',
    'router_path' => 'node/%',
    'link_title' => 'example',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/born-learning',
  );
  // Exported menu link: main-menu:node/5
  $menu_links['main-menu:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/give',
    'router_path' => 'node/%',
    'link_title' => 'Give',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/10
  $menu_links['main-menu:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/health',
    'router_path' => 'node/%',
    'link_title' => 'Health',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/9
  $menu_links['main-menu:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/income',
    'router_path' => 'node/%',
    'link_title' => 'Income',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/22
  $menu_links['main-menu:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/media-room',
    'router_path' => 'node/%',
    'link_title' => 'Media',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/19
  $menu_links['main-menu:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/our-community',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about-us',
  );
  // Exported menu link: main-menu:node/11
  $menu_links['main-menu:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/success-by-6',
    'router_path' => 'node/%',
    'link_title' => 'Success By 6',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/education',
  );
  // Exported menu link: main-menu:node/7
  $menu_links['main-menu:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/volunteer',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:node/21
  $menu_links['main-menu:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/volunteer-leadership',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer Leadership',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about-us',
  );
  // Exported menu link: main-menu:taxonomy/term/1
  $menu_links['main-menu:taxonomy/term/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Taxonomy term',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/media-room',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Advocate');
  t('Born Learning');
  t('Campaign');
  t('Community');
  t('Coordinator Toolkit');
  t('Directions');
  t('Education');
  t('Give');
  t('Health');
  t('Income');
  t('Media');
  t('Success By 6');
  t('Taxonomy term');
  t('Volunteer');
  t('Volunteer Leadership');
  t('example');


  return $menu_links;
}
