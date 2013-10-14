<?php

/**
 * Implements hook_panels_layouts().
 */
function lembib_theme_lembib_frontpage_panels_layouts() {
  $items['lembib_frontpage'] = array(
    'title' => t('Lembib frontpage layout'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'lembib_frontpage.png',
    'theme' => 'lembib_frontpage',
    'admin css' => '../omega_panels_admin_12.css',
    'regions' => array(
      'top_wide' => t('Top wide side'),
      'left_large' => t('Left large side'),
      'right_small' => t('Right small side'),
    ),
    'regions_image_styles' => array(
      'right_small' => 'ding_nodelist_small',
      'left_large' => 'ding_nodelist_extra_medium',
      'top_wide' => 'ding_nodelist_large',
    ),
  );

  return $items;
}
