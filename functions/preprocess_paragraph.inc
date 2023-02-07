<?php

use Drupal\Core\Template\Attribute;

function standard_page_preprocess_paragraph(&$variables) {
  $is_admin = \Drupal::service('router.admin_context')->isAdminRoute();
  $paragraph = $variables['paragraph'];

  if ($paragraph->hasField('field_std_bgcolor')) {
    $bgcolor = $paragraph->get('field_std_bgcolor')->getString();
    $variables['attributes']['class'][] = $bgcolor;
  }

  if ($paragraph->hasField('field_std_cols')) {
    $cols = $paragraph->get('field_std_cols')->getString();
    $variables['std_cols'] = new Attribute(['class' => ['std-cols', $cols]]);
  }

  if ($paragraph->hasField('field_std_halign')) {
    $halign = $paragraph->get('field_std_halign')->getString();
    $variables['attributes']['class'][] = $halign;
  }

  if ($paragraph->hasField('field_std_order')) {
    $order = $paragraph->get('field_std_order')->getString();
    $variables['attributes']['class'][] = $order;
  }

  if (!$is_admin && $paragraph->hasField('field_std_padding_bottom')) {
    $padding_bottom = $paragraph->get('field_std_padding_bottom')->getString();
    $variables['attributes']['class'][] = $padding_bottom;
  }

  if (!$is_admin && $paragraph->hasField('field_std_padding_top')) {
    $padding_top = $paragraph->get('field_std_padding_top')->getString();
    $variables['attributes']['class'][] = $padding_top;
  }

  if ($paragraph->hasField('field_std_valign')) {
    $valign = $paragraph->get('field_std_valign')->getString();
    $variables['attributes']['class'][] = $valign;
  }
}
