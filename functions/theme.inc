<?php

function xen_paragraphs_theme() {
  return [
    'field__field_std_items' => [
      'template' => 'field--reset',
      'base hook' => 'field',
    ],
    'node__std_page' => [
      'template' => 'node--std-page',
      'base hook' => 'node',
    ],
    'paragraph__std_image' => [
      'template' => 'paragraph--std-image',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_image_text' => [
      'template' => 'paragraph--std-image-text',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_text' => [
      'template' => 'paragraph--std-text',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_grid' => [
      'template' => 'paragraph--std-grid',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_grid_item' => [
      'template' => 'paragraph--std-grid-item',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_acc' => [
      'template' => 'paragraph--std-acc',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_acc_item' => [
      'template' => 'paragraph--std-acc-item',
      'base hook' => 'paragraph',
    ],
  ];
}
