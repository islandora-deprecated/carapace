<?php
/**
 * @file
 * Lists available colors and color schemes for the AT Starterkit. By default
 * the color scheme relies almost entirely on color shift, where the user
 * changes the base color and all other unspecified colors shift relative to
 * the new base.
 */
$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'base' => t('Base'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Carbon Neutral'),
      'colors' => [
        'base' => '#000000',
        'text' => '#555555', // $text-color
        'link' => '#0066cc', // $link-color
      ],
    ],
    'goodearth' => [
      'title' => t('The Good Earth'),
      'colors' => [
        'base' => '#4ba943',
        'text' => '#555555',
        'link' => '#8dd087',
      ],
    ],
    'tippingpoint' => [
      'title' => t('Tipping Point'),
      'colors' => [
        'base' => '#e65200',
        'text' => '#1b1918',
        'link' => '#ff792f',
      ],
    ],
    'palebluedot' => [
      'title' => t('Pale Blue Dot'),
      'colors' => [
        'base' => '#089de3',
        'text' => '#777777',
        'link' => '#089de3',
      ],
    ],
  ],

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'styles/css/components/color.css',
    'styles/css/components/tabs.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
    'logo.png',
  ],

  // Gradient definitions.
  'gradients' => [],
];
