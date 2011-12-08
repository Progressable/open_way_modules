<?php
/**
 * @file
 * open_way_structure_pages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function open_way_structure_pages_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_8' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_8',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
