Getting started...

ATD8 uses grunt-sass (Libsass), Susy, Modular Scale, a customized
bower package of Compass mixins (vertical rhythem only), PostCSS (for 
browser extensions and SourceMaps), and various others.

You need bower, nodejs and grunt installed to grab all the packages and
run the task runners.

https://nodejs.org/ for node package manager (npm) for node modules https://www.npmjs.com/
http://bower.io/ for bower and git packages.
http://gruntjs.com/ our task runner + installing grunt packages.

Get all that installed then fire off some commands from the theme root...

bower install
npm install
grunt watch (watches the UIKit).

For page layout files:
grunt watch:layout 

For DS/Paragraphs Layout Plugin layouts.
grunt watch:layout_plugin 


Now edit some SCSS files in the UIKit, and remember to turn off CSS aggregation in Drupal.

