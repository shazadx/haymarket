<?php
/**
 * @file
 * content_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_article_taxonomy_default_vocabularies() {
  return array(
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
