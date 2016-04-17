<?php
/**
 * @file
 * content_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inline|node|article|form';
  $field_group->group_name = 'group_inline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Fields',
    'weight' => '0',
    'children' => array(
      0 => 'field_ref_type',
      1 => 'field_short',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'form-inline-field',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_inline|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inline Fields');

  return $field_groups;
}
