<?php
/**
 * @file
 * open_way_content_default_pages.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function open_way_content_default_pages_content_defaults() {
  $content = array();

  $content['about-us'] = (object) array(
    'exported_path' => 'about-us',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/about-us',
      'router_path' => 'node/%',
      'link_title' => 'About Us',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-47',
      'identifier' => 'main-menu:node-name/about-us',
    ),
    'title' => 'About Us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '1',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314720663',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'about-us',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['advocate'] = (object) array(
    'exported_path' => 'advocate',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/advocate',
      'router_path' => 'node/%',
      'link_title' => 'Advocate',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '1',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-49',
      'identifier' => 'main-menu:node-name/advocate',
    ),
    'title' => 'Advocate',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314721602',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'advocate',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
      ',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['born-learning'] = (object) array(
    'exported_path' => 'education/born-learning',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/born-learning',
      'router_path' => 'node/%',
      'link_title' => 'Born Learning',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-50',
      'parent_path' => 'node-name/education',
      'identifier' => 'main-menu:node-name/born-learning',
    ),
    'title' => 'Born Learning',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314724558',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'born-learning',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['campaign-coordinator-toolkit'] = (object) array(
    'exported_path' => 'community-campaign/coordinator-toolkit',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/campaign-coordinator-toolkit',
      'router_path' => 'node/%',
      'link_title' => 'Coordinator Toolkit',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-50',
      'parent_path' => 'node-name/community-campaign',
      'identifier' => 'main-menu:node-name/campaign-coordinator-toolkit',
    ),
    'title' => 'Campaign Coordinator Toolkit',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1315602634',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'campaign-coordinator-toolkit',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['community-campaign'] = (object) array(
    'exported_path' => 'community-campaign',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/community-campaign',
      'router_path' => 'node/%',
      'link_title' => 'Community Campaign',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-43',
      'identifier' => 'main-menu:node-name/community-campaign',
    ),
    'title' => 'Community Campaign',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1315601439',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'community-campaign',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>&quot;Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum &quot;Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>"Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['directions'] = (object) array(
    'exported_path' => 'about-us/directions',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/directions',
      'router_path' => 'node/%',
      'link_title' => 'Directions',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-48',
      'parent_path' => 'node-name/about-us',
      'identifier' => 'main-menu:node-name/directions',
    ),
    'title' => 'Directions',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1315603210',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'directions',
    'body' => array(),
  );

  $content['education'] = (object) array(
    'exported_path' => 'education',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/education',
      'router_path' => 'node/%',
      'link_title' => 'Education',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-46',
      'identifier' => 'main-menu:node-name/education',
    ),
    'title' => 'Education',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314722787',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'education',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['give'] = (object) array(
    'exported_path' => 'give',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/give',
      'router_path' => 'node/%',
      'link_title' => 'Give',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => '1',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '1',
      'weight' => '-50',
      'identifier' => 'main-menu:node-name/give',
    ),
    'title' => 'Give',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314721454',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'give',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
      ',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['health'] = (object) array(
    'exported_path' => 'health',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/health',
      'router_path' => 'node/%',
      'link_title' => 'Heath',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-44',
      'identifier' => 'main-menu:node-name/health',
    ),
    'title' => 'Health',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314722844',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'health',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['income'] = (object) array(
    'exported_path' => 'income',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/income',
      'router_path' => 'node/%',
      'link_title' => 'Income',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-45',
      'identifier' => 'main-menu:node-name/income',
    ),
    'title' => 'Income',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314722822',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'income',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['media-room'] = (object) array(
    'exported_path' => 'about-us/media',
    'title' => 'Media Room',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1315608200',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'media-room',
    'body' => array(),
  );

  $content['our-community'] = (object) array(
    'exported_path' => 'about-us/community',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/our-community',
      'router_path' => 'node/%',
      'link_title' => 'Our Community',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-50',
      'parent_path' => 'node-name/about-us',
      'identifier' => 'main-menu:node-name/our-community',
    ),
    'title' => 'Our Community',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1315602980',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'our-community',
    'body' => array(),
  );

  $content['success-by-6'] = (object) array(
    'exported_path' => 'success-by-6',
    'title' => 'Success By 6',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314723223',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'success-by-6',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['volunteer'] = (object) array(
    'exported_path' => 'volunteer',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/volunteer',
      'router_path' => 'node/%',
      'link_title' => 'Volunteer',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => '1',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '1',
      'weight' => '-48',
      'identifier' => 'main-menu:node-name/volunteer',
    ),
    'title' => 'Volunteer',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1314721890',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'volunteer',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>"Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?"</p>
      ',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>"Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?"</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['volunteer-leadership'] = (object) array(
    'exported_path' => 'about-us/volunteer-leadership',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/volunteer-leadership',
      'router_path' => 'node/%',
      'link_title' => 'Volunteer Leadership',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-49',
      'parent_path' => 'node-name/about-us',
      'identifier' => 'main-menu:node-name/volunteer-leadership',
    ),
    'title' => 'Volunteer Leadership',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1315603293',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'volunteer-leadership',
    'body' => array(),
  );

  $content['welcome'] = (object) array(
    'exported_path' => 'welcome',
    'title' => 'Welcome to Open Way!',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'ow_page',
    'language' => 'und',
    'created' => '1330096823',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'welcome',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Now that you have installed the platform, please take some time to look around.</p>
      <p>Having intalled this yourself you have a great number of choices on what you do next. You may want to enhance your site but doing some additional configuration and customization. &nbsp;Here are some good places to start:&nbsp;</p>
      <ul>
      	<li>Customize theme settings:&nbsp;<a href="/appearance/settings/live_united_2012">yoursite.org/appearance/settings/live_united_2012</a></li>
      	<li>Add, move or remove blocks of content:<a href="/admin/structure/block">&nbsp;yoursite.org/admin/structure/block</a></li>
      	<li>Add some content to see how it works:&nbsp;<a href="/node/add">yoursite.org/node/add</a></li>
      </ul>
      <p>&nbsp;</p>
      <p>If you have questions or suggestions make them known at&nbsp;<a href="http://openwayproject.org/">http://openwayproject.org/</a></p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Now that you have installed the platform, please take some time to look around.</p>
  <p>Having intalled this yourself you have a great number of choices on what you do next. You may want to enhance your site but doing some additional configuration and customization.  Here are some good places to start: </p>
  <ul><li>Customize theme settings: <a href="/appearance/settings/live_united_2012">yoursite.org/appearance/settings/live_united_2012</a></li>
  <li>Add, move or remove blocks of content:<a href="/admin/structure/block"> yoursite.org/admin/structure/block</a></li>
  <li>Add some content to see how it works: <a href="/node/add">yoursite.org/node/add</a></li>
  </ul><p> </p>
  <p>If you have questions or suggestions make them known at <a href="http://openwayproject.org/">http://openwayproject.org/</a></p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
