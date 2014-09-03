<?php

function lembib_theme_alpha_preprocess_html(&$vars) {
  drupal_add_css(drupal_get_path('theme', 'lembib_theme') . '/css/ie/ie.css',
    array(
      'browsers' => array('!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2000,
    )
  );

  drupal_add_css(drupal_get_path('theme', 'lembib_theme') . '/css/ie/ie7-8.css',
    array(
      'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2000,
    )
  );

  drupal_add_css(drupal_get_path('theme', 'lembib_theme') . '/css/ie/ie7.css',
    array(
      'browsers' => array('IE' => 'IE 7', '!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2000,
    )
  );

  drupal_add_css(drupal_get_path('theme', 'lembib_theme') . '/css/ie/ie8.css',
    array(
      'browsers' => array('IE' => 'IE 8', '!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2000,
    )
  );

  drupal_add_css(drupal_get_path('theme', 'lembib_theme') . '/css/fonts.css',
    array(
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2000,
    )
  );

  drupal_add_js(
    array(
     'pathToTheme' => '/' . drupal_get_path('theme', 'lembib_theme'),
     'every_page' => TRUE,
     'scope' => 'header',
     'weight' => -19.95,
    ), 'setting'
  );

  drupal_add_js(drupal_get_path('theme', 'lembib_theme') . '/js/webtrends.load.js',
    array(
      'scope' => 'footer',
    )
  );
}
