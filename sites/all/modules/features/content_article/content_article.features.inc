<?php
/**
 * @file
 * content_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function content_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function content_article_image_default_styles() {
  $styles = array();

  // Exported image style: headline.
  $styles['headline'] = array(
    'label' => 'Headline (600x300)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon.
  $styles['icon'] = array(
    'label' => 'Icon (300x200)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon-large.
  $styles['icon-large'] = array(
    'label' => 'Icon Large (339x300)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 339,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon-medium.
  $styles['icon-medium'] = array(
    'label' => 'Icon Medium (169x150)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 169,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mega.
  $styles['mega'] = array(
    'label' => 'Mega (679x300)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 679,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Default article content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
