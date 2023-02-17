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
    'paragraph__std_banner' => [
      'template' => 'paragraph--std-banner',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_image' => [
      'template' => 'paragraph--std-image',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_image_grid' => [
      'template' => 'paragraph--std-image-grid',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_image_text' => [
      'template' => 'paragraph--std-image-text',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_image_text_grid' => [
      'template' => 'paragraph--std-image-text-grid',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_image_text_grid_item' => [
      'template' => 'paragraph--std-image-text-grid-item',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_text' => [
      'template' => 'paragraph--std-text',
      'base hook' => 'paragraph',
    ],
    'paragraph__std_text_grid' => [
      'template' => 'paragraph--std-text-grid',
      'base hook' => 'paragraph',
    ],
  ];
}
