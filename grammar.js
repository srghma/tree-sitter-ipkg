/**
 * @file Idris package .ipkg
 * @author Serhii Khoma <srghma@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "ipkg",

  externals: ($) => [$.block_comment],

  extras: ($) => [
    /\s/,
    $.line_comment,
    $.block_comment
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.package_declaration,
      $.dependency_declaration,
      $.module_declaration,
      $.field_declaration,
      $.main_declaration,
      $.executable_declaration,
      $.version_declaration,
      $.langversion_declaration,
      // $.line_comment,
      // $.block_comment,
    )),

    package_declaration: $ => seq(
      'package',
      $.package_name
    ),

    dependency_declaration: $ => seq(
      'depends',
      '=',
      $.dependency_list
    ),

    module_declaration: $ => seq(
      'modules',
      '=',
      $.module_list
    ),

    main_declaration: $ => seq(
      'main',
      '=',
      $.module_name
    ),

    executable_declaration: $ => seq(
      'executable',
      '=',
      choice(
        ($.string_value),
        ($.package_name)
      )
    ),

    version_declaration: $ => seq(
      'version',
      '=',
      $.version_number,
    ),

    langversion_declaration: $ => seq(
      'langversion',
      $.version_range,
    ),

    field_declaration: $ => seq(
      $.field_name,
      '=',
      choice(
        ($.string_value),
        ($.boolean_value)
      )
    ),

    // identifier_value: $ => /[a-zA-Z][a-zA-Z0-9_'-]*/,
    package_name: $ => /[a-zA-Z][a-zA-Z0-9_'-]*/,

    field_name: $ => choice(
      'authors',
      'maintainers',
      'license',
      'brief',
      'readme',
      'homepage',
      'sourceloc',
      'bugtracker',
      'opts',
      'sourcedir',
      'builddir',
      'outputdir',
      'prebuild',
      'postbuild',
      'preinstall',
      'postinstall',
      'preclean',
      'postclean'
    ),

    string_value: $ => /"[^"]*"/,

    module_list: $ => sepBy1(',', $.module_name),

    module_name: $ => /[a-zA-Z][a-zA-Z0-9_']*(\.[a-zA-Z][a-zA-Z0-9_']*)*/,

    dependency_list: $ => prec.left(seq(
      $.dependency_item,
      repeat(seq(
        // repeat($._linebreak),
        ',',
        $.dependency_item,
      ))),
    ),

    // dependency_list: $ => seq(
    //   $.dependency_item,
    //   repeat(
    //     choice(
    //       seq(',', $.dependency_item),
    //       $.comment
    //     )
    //   )
    //   // optional(seq($.comment, $._linebreak)),
    //   // repeat(seq(
    //   //   ',',
    //   //   // optional($._),
    //   //   $.dependency_item
    //   // ))
    //   // sepBy1(seq(',', optional($.comment), optional($._linebreak), optional($.comment)), $.dependency_item)
    // ),


    dependency_item: $ => seq(
      $.package_name,
      optional($.version_range)
    ),

    version_range_op: $ => choice('<', '<=', '>=', '>'),

    version_range: $ => prec.left(
      choice(
        $.version_number,
        seq(
          $.version_range_op,
          $.version_number,
          optional(seq('&&', $.version_range_op, $.version_number))
        )
      )
    ),

    version_number: $ => /[0-9]+\.[0-9]+\.[0-9]+/, // e.g. 0.6.0

    boolean_value: $ => choice('True', 'False'),

    line_comment: $ => token(seq('--', /.*/)),

    _linebreak: () => /\n/,

    _: $ => choice(
      /\s/,
      $.line_comment
    ),
  },
});

function sep1(separator, ignored, element) {
  return seq(
    element,
    repeat(seq(
      ignored,
      separator,
      ignored,
      element
    ))
  );
}

/**
 * Helper function to create a sequence with separators
 */
function sepBy(separator, rule) {
  return optional(sepBy1(separator, rule));
}

function sepBy1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
