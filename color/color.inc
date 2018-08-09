<?php

/**
 * Lists available color schemes for Carapace.
 */

$info = array(
  // Fields.
  'fields' => array(
    'base'                      => t('Base'),
    'text'                      => t('Text color'),
    'textbackground'            => t('Text highlights'),
    'link'                      => t('Link color'),
    'body'                      => t('Body'),
    'page'                      => t('Page'),
    'document'                  => t('Document'),
    'borders'                   => t('Borders'),
    'borderslight'              => t('Borders light'),
    'leaderboardbg'             => t('Leaderboard background'),
    'leaderboardtx'             => t('Leaderboard text'),
    'headerbg'                  => t('Header background'),
    'headertx'                  => t('Header text'),
    'sitename'                  => t('Site name'),
    'navbarbg'                  => t('Navbar background'),
    'navbartx'                  => t('Navbar text'),
    'footerbg'                  => t('Footer background'),
    'footertx'                  => t('Footer text'),
    'sidebarblockheaderbg'      => t('Sidebar block header'),
    'sidebarblockbodybg'        => t('Sidebar block body'),
    'buttontx'                  => t('Button text'),
    'buttonbg'                  => t('Button background'),
  ),
  // Schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('carapace (default)'),
      'colors' => array(
        'base'                              => '#140404',
        'text'                              => '#5d5d5d',
        'textbackground'                    => '#ededed',
        'link'                              => '#a42424',
        'body'                              => '#3d0d0d',
        'page'                              => '#f7f7f7',
        'document'                          => '#ffffff',
        'borders'                           => '#cccccc',
        'borderslight'                      => '#ebebeb',
        'leaderboardbg'                     => '#521212',
        'leaderboardtx'                     => '#f5f5f5',
        'headerbg'                          => '#8f1f1f',
        'headertx'                          => '#f0f0f0',
        'sitename'                          => '#f0f0f0',
        'navbarbg'                          => '#3d0d0d',
        'navbartx'                          => '#fafafa',
        'footerbg'                          => '#240808',
        'footertx'                          => '#f5f5f5',
        'sidebarblockheaderbg'              => '#f5f5f5',
        'sidebarblockbodybg'                => '#f0f0f0',
        'buttontx'                          => '#fcfcfc',
        'buttonbg'                          => '#999999',
      ),
    ),
    'magneto' => array(
      'title' => t('Magneto'),
      'colors' => array(
        'base'                              => '#000000',
        'text'                              => '#404040',
        'textbackground'                    => '#ededed',
        'link'                              => '#3188d1',
        'body'                              => '#333333',
        'page'                              => '#e8e8e8',
        'document'                          => '#ffffff',
        'borders'                           => '#cccccc',
        'borderslight'                      => '#ebebeb',
        'leaderboardbg'                     => '#363636',
        'leaderboardtx'                     => '#f5f5f5',
        'headerbg'                          => '#f0f0f0',
        'headertx'                          => '#a9a9a9',
        'sitename'                          => '#434343',
        'navbarbg'                          => '#171717',
        'navbartx'                          => '#fafafa',
        'footerbg'                          => '#292929',
        'footertx'                          => '#e3e3e3',
        'sidebarblockheaderbg'              => '#e0e0e0',
        'sidebarblockbodybg'                => '#f7f7f7',
        'buttontx'                          => '#fcfcfc',
        'buttonbg'                          => '#999999',
      ),
    ),
    'magnium' => array(
      'title' => t('Magnium'),
      'colors' => array(
        'base'                              => '#0b223b',
        'text'                              => '#141414',
        'textbackground'                    => '#ededed',
        'link'                              => '#4484ce',
        'body'                              => '#000000',
        'page'                              => '#fafafa',
        'document'                          => '#ffffff',
        'borders'                           => '#d9d9d9',
        'borderslight'                      => '#ebebeb',
        'leaderboardbg'                     => '#ebebeb',
        'leaderboardtx'                     => '#333333',
        'headerbg'                          => '#ffffff',
        'headertx'                          => '#17477c',
        'sitename'                          => '#17477c',
        'navbarbg'                          => '#4484ce',
        'navbartx'                          => '#ffffff',
        'footerbg'                          => '#17477c',
        'footertx'                          => '#ffffff',
        'sidebarblockheaderbg'              => '#ffffff',
        'sidebarblockbodybg'                => '#ffffff',
        'buttontx'                          => '#ffffff',
        'buttonbg'                          => '#17477c',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'styles/css/components/color.css',
    'styles/css/components/tabs.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.svg',
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(),
);
