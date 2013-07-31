<?php

/**
 * Implements hook_panels_layouts().
 */
function lembib_theme_lembib_node_page_panels_layouts() {
  $items['lembib_node_page'] = array(
    'title' => t('Lembib node page layout'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'lembib_node_page.png',
    'theme' => 'lembib_node_page',
    'admin css' => '../omega_panels_admin_12.css',
    'regions' => array(
      'left' => t('Left side'),
      'center' => t('Center side'),
      'right' => t('Right side'),
    ),
    'regions_image_styles' => array(
      'left' => 'ding_nodelist_small',
      'center' => 'ding_nodelist_extra_medium',
      'right' => 'ding_nodelist_small',
    ),
  );

  return $items;
}
