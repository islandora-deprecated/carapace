# Templates

WARNING: do not change the directory structure - the layout generation system relies on the location of page.html.twig: `templates/page/page.html.twig`

Here you can place template overrides and suggestions. By default only page.html.twig is included, unless you choose to include all AT Cores template overrides during when generating a new sub-theme (or you copy them in manually).

Note that all AT Core templates are used by this sub-theme due to Drupals template inheritance feature - sub-themes automatically use any template in the base theme, unless overridden in the sub-theme.

SEE: at_core/templates/README.md for more information on AT Cores templates and the changes made compared to Drupal core.

---

## Included Template Overrides

### page.html.twig

* In Adaptivetheme sub-themes page.html.twig is generated - this means it can be overwritten when saving the theme settings. A backup is always stored in your themes /backup/ directory. Backups are time stamped and never removed, so if you get a build up you can manaually clear them out.

---

## Developing with Twig

Please see your sites settings.php file, there are three important settings you can uncomment to aid in twig template editing:

$settings['twig_debug'] = TRUE;
$settings['twig_auto_reload'] = TRUE;
$settings['twig_cache'] = FALSE;

The final two of these are most useful when making a lot of changes to templates - normally changes will not show until you clear the sites cache.

---