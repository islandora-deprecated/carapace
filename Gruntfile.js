/**
 * Grunt task runners for AT Subthemes.
 * http://gruntjs.com/
 */

'use strict';

module.exports = function(grunt) {

	grunt.initConfig({

    pkg: grunt.file.readJSON('package.json'),

    sass_globbing: {
      layout_site_builder_form: {
        files: {
          'layout/site-builder/sass/site-builder-form.scss': [
            'layout/site-builder/sass/**/*.scss',
            'layout/site-builder/sass/_site-builder-form-global.scss',
            '!layout/site-builder/sass/site-builder-global.scss'
          ]
        }
      },
      layout_flex_builder_form: {
        files: {
          'layout/flex-builder/sass/flex-builder-form.scss': [
            'layout/flex-builder/sass/**/*.scss',
            'layout/flex-builder/sass/_flex-builder-form-global.scss',
            '!layout/flex-builder/sass/flex-builder-global.scss'
          ]
        }
      }
    },

    sass: {
      uikit: {
        files: [{
          expand: true,
          cwd: 'styles/uikit/components',
          src: ['*.scss'],
          dest: 'styles/css/components',
          ext: '.css'
        }],
        options: {
          require: 'susy',
          precision: 5,
          outputStyle: 'expanded',
          imagePath: "../css/images",
          sourceMap: true
        }
      },
      layout_site_builder: {
        files: [{
          expand: true,
          cwd: 'layout/site-builder/sass',
          src: ['**/*.scss'],
          dest: 'layout/site-builder/css',
          ext: '.css'
        }],
        options: {
          require: 'susy',
          precision: 5,
          outputStyle: 'expanded'
        }
      },
      layout_flex_builder: {
        files: [{
          expand: true,
          cwd: 'layout/flex-builder/sass',
          src: ['**/*.scss'],
          dest: 'layout/flex-builder/css',
          ext: '.css'
        }],
        options: {
          require: 'susy',
          precision: 5,
          outputStyle: 'expanded'
        }
      },
      layout_plugin: {
        files: [{
          expand: true,
          cwd: 'styles/layout_plugin/sass',
          src: ['*.scss'],
          dest: 'styles/layout_plugin/css',
          ext: '.css'
        }],
        options: {
          require: 'susy',
          precision: 5,
          outputStyle: 'expanded'
        }
      }
    },

    postcss: {
      uikit: {
        src: 'styles/css/components/**.css',
        options: {
          map: {
            inline: false,
            annotation: 'styles/css/components'
          },
          processors: [
            require('autoprefixer')({browsers: 'last 5 versions'})
          ]
        }
      },
      layout_flex_builder: {
        src: 'layout/flex-builder/css/*/**.css',
        options: {
          processors: [
            require('autoprefixer')({browsers: 'last 5 versions'})
          ]
        }
      },
      layout_plugin: {
        src: 'styles/layout_plugin/css/**.css',
        options: {
          processors: [
            require('autoprefixer')({browsers: 'last 5 versions'})
          ]
        }
      }
    },

    csslint: {
      options: {
        csslintrc: '.csslintrc'
      },
      strict: {
        options: {
          import: 2
        },
        src: ['styles/css/components/**.css']
      }
    },

    watch: {
      uikit: {
        files: 'styles/uikit/components/**/*.scss',
        tasks: ['sass:uikit', 'postcss:uikit'],
        options: {
        //  livereload: 35729
        }
      },
      layout_site_builder: {
        files: 'layout/site-builder/sass/**/*.scss',
        tasks: ['sass_globbing:layout_site_builder_form', 'sass:layout_site_builder']
      },
      layout_flex_builder: {
        files: 'layout/flex-builder/sass/**/*.scss',
        tasks: ['sass_globbing:layout_flex_builder_form', 'sass:layout_flex_builder', 'postcss:layout_flex_builder']
      },
      layout_plugin: {
        files: 'styles/layout_plugin/sass/**/*.scss',
        tasks: ['sass:layout_plugin', 'postcss:layout_plugin']
      }

		}
	});

  grunt.loadNpmTasks('grunt-postcss');
  grunt.loadNpmTasks('grunt-sass');
  grunt.loadNpmTasks('grunt-sass-globbing');
  grunt.loadNpmTasks('grunt-contrib-csslint');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-browser-sync');

  grunt.registerTask('default', ['watch:uikit']);
};
