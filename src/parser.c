#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_depends = 2,
  anon_sym_EQ = 3,
  anon_sym_modules = 4,
  anon_sym_main = 5,
  anon_sym_executable = 6,
  anon_sym_version = 7,
  anon_sym_langversion = 8,
  sym_package_name = 9,
  anon_sym_authors = 10,
  anon_sym_maintainers = 11,
  anon_sym_license = 12,
  anon_sym_brief = 13,
  anon_sym_readme = 14,
  anon_sym_homepage = 15,
  anon_sym_sourceloc = 16,
  anon_sym_bugtracker = 17,
  anon_sym_opts = 18,
  anon_sym_sourcedir = 19,
  anon_sym_builddir = 20,
  anon_sym_outputdir = 21,
  anon_sym_prebuild = 22,
  anon_sym_postbuild = 23,
  anon_sym_preinstall = 24,
  anon_sym_postinstall = 25,
  anon_sym_preclean = 26,
  anon_sym_postclean = 27,
  sym_string_value = 28,
  anon_sym_COMMA = 29,
  sym_module_name = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_GT = 34,
  anon_sym_AMP_AMP = 35,
  sym_version_number = 36,
  anon_sym_True = 37,
  anon_sym_False = 38,
  sym_comment = 39,
  sym_source_file = 40,
  sym_package_declaration = 41,
  sym_dependency_declaration = 42,
  sym_module_declaration = 43,
  sym_main_declaration = 44,
  sym_executable_declaration = 45,
  sym_version_declaration = 46,
  sym_langversion_declaration = 47,
  sym_field_declaration = 48,
  sym_field_name = 49,
  sym_module_list = 50,
  sym_dependency_list = 51,
  sym_dependency_item = 52,
  sym_version_range_op = 53,
  sym_version_range = 54,
  sym_boolean_value = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_module_list_repeat1 = 57,
  aux_sym_dependency_list_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_depends] = "depends",
  [anon_sym_EQ] = "=",
  [anon_sym_modules] = "modules",
  [anon_sym_main] = "main",
  [anon_sym_executable] = "executable",
  [anon_sym_version] = "version",
  [anon_sym_langversion] = "langversion",
  [sym_package_name] = "package_name",
  [anon_sym_authors] = "authors",
  [anon_sym_maintainers] = "maintainers",
  [anon_sym_license] = "license",
  [anon_sym_brief] = "brief",
  [anon_sym_readme] = "readme",
  [anon_sym_homepage] = "homepage",
  [anon_sym_sourceloc] = "sourceloc",
  [anon_sym_bugtracker] = "bugtracker",
  [anon_sym_opts] = "opts",
  [anon_sym_sourcedir] = "sourcedir",
  [anon_sym_builddir] = "builddir",
  [anon_sym_outputdir] = "outputdir",
  [anon_sym_prebuild] = "prebuild",
  [anon_sym_postbuild] = "postbuild",
  [anon_sym_preinstall] = "preinstall",
  [anon_sym_postinstall] = "postinstall",
  [anon_sym_preclean] = "preclean",
  [anon_sym_postclean] = "postclean",
  [sym_string_value] = "string_value",
  [anon_sym_COMMA] = ",",
  [sym_module_name] = "module_name",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_AMP_AMP] = "&&",
  [sym_version_number] = "version_number",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_package_declaration] = "package_declaration",
  [sym_dependency_declaration] = "dependency_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_main_declaration] = "main_declaration",
  [sym_executable_declaration] = "executable_declaration",
  [sym_version_declaration] = "version_declaration",
  [sym_langversion_declaration] = "langversion_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym_field_name] = "field_name",
  [sym_module_list] = "module_list",
  [sym_dependency_list] = "dependency_list",
  [sym_dependency_item] = "dependency_item",
  [sym_version_range_op] = "version_range_op",
  [sym_version_range] = "version_range",
  [sym_boolean_value] = "boolean_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_list_repeat1] = "module_list_repeat1",
  [aux_sym_dependency_list_repeat1] = "dependency_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_depends] = anon_sym_depends,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_modules] = anon_sym_modules,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_langversion] = anon_sym_langversion,
  [sym_package_name] = sym_package_name,
  [anon_sym_authors] = anon_sym_authors,
  [anon_sym_maintainers] = anon_sym_maintainers,
  [anon_sym_license] = anon_sym_license,
  [anon_sym_brief] = anon_sym_brief,
  [anon_sym_readme] = anon_sym_readme,
  [anon_sym_homepage] = anon_sym_homepage,
  [anon_sym_sourceloc] = anon_sym_sourceloc,
  [anon_sym_bugtracker] = anon_sym_bugtracker,
  [anon_sym_opts] = anon_sym_opts,
  [anon_sym_sourcedir] = anon_sym_sourcedir,
  [anon_sym_builddir] = anon_sym_builddir,
  [anon_sym_outputdir] = anon_sym_outputdir,
  [anon_sym_prebuild] = anon_sym_prebuild,
  [anon_sym_postbuild] = anon_sym_postbuild,
  [anon_sym_preinstall] = anon_sym_preinstall,
  [anon_sym_postinstall] = anon_sym_postinstall,
  [anon_sym_preclean] = anon_sym_preclean,
  [anon_sym_postclean] = anon_sym_postclean,
  [sym_string_value] = sym_string_value,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_module_name] = sym_module_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [sym_version_number] = sym_version_number,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_declaration] = sym_package_declaration,
  [sym_dependency_declaration] = sym_dependency_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_main_declaration] = sym_main_declaration,
  [sym_executable_declaration] = sym_executable_declaration,
  [sym_version_declaration] = sym_version_declaration,
  [sym_langversion_declaration] = sym_langversion_declaration,
  [sym_field_declaration] = sym_field_declaration,
  [sym_field_name] = sym_field_name,
  [sym_module_list] = sym_module_list,
  [sym_dependency_list] = sym_dependency_list,
  [sym_dependency_item] = sym_dependency_item,
  [sym_version_range_op] = sym_version_range_op,
  [sym_version_range] = sym_version_range,
  [sym_boolean_value] = sym_boolean_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_list_repeat1] = aux_sym_module_list_repeat1,
  [aux_sym_dependency_list_repeat1] = aux_sym_dependency_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_langversion] = {
    .visible = true,
    .named = false,
  },
  [sym_package_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_authors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maintainers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_license] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brief] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_homepage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sourceloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bugtracker] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sourcedir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builddir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outputdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prebuild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postbuild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preinstall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postinstall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preclean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postclean] = {
    .visible = true,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_version_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_main_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_executable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_version_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_langversion_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_item] = {
    .visible = true,
    .named = true,
  },
  [sym_version_range_op] = {
    .visible = true,
    .named = true,
  },
  [sym_version_range] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      ADVANCE_MAP(
        '"', 1,
        '&', 2,
        ',', 191,
        '-', 5,
        '<', 193,
        '=', 165,
        '>', 196,
        'F', 8,
        'T', 121,
        'a', 149,
        'b', 116,
        'd', 40,
        'e', 158,
        'h', 106,
        'l', 9,
        'm', 11,
        'o', 112,
        'p', 12,
        'r', 51,
        's', 107,
        'v', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 157:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 158:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 161:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_depends);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_modules);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_main);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_langversion);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_authors);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_maintainers);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_license);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_brief);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_readme);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_homepage);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_sourceloc);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_bugtracker);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_opts);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_sourcedir);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_builddir);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_outputdir);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_prebuild);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_postbuild);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_preinstall);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_postinstall);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_preclean);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_postclean);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_version_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_depends] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_modules] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_langversion] = ACTIONS(1),
    [anon_sym_authors] = ACTIONS(1),
    [anon_sym_maintainers] = ACTIONS(1),
    [anon_sym_license] = ACTIONS(1),
    [anon_sym_brief] = ACTIONS(1),
    [anon_sym_readme] = ACTIONS(1),
    [anon_sym_homepage] = ACTIONS(1),
    [anon_sym_sourceloc] = ACTIONS(1),
    [anon_sym_bugtracker] = ACTIONS(1),
    [anon_sym_opts] = ACTIONS(1),
    [anon_sym_sourcedir] = ACTIONS(1),
    [anon_sym_builddir] = ACTIONS(1),
    [anon_sym_outputdir] = ACTIONS(1),
    [anon_sym_prebuild] = ACTIONS(1),
    [anon_sym_postbuild] = ACTIONS(1),
    [anon_sym_preinstall] = ACTIONS(1),
    [anon_sym_postinstall] = ACTIONS(1),
    [anon_sym_preclean] = ACTIONS(1),
    [anon_sym_postclean] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [sym_version_number] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym_package_declaration] = STATE(3),
    [sym_dependency_declaration] = STATE(3),
    [sym_module_declaration] = STATE(3),
    [sym_main_declaration] = STATE(3),
    [sym_executable_declaration] = STATE(3),
    [sym_version_declaration] = STATE(3),
    [sym_langversion_declaration] = STATE(3),
    [sym_field_declaration] = STATE(3),
    [sym_field_name] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_depends] = ACTIONS(7),
    [anon_sym_modules] = ACTIONS(9),
    [anon_sym_main] = ACTIONS(11),
    [anon_sym_executable] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_langversion] = ACTIONS(17),
    [anon_sym_authors] = ACTIONS(19),
    [anon_sym_maintainers] = ACTIONS(19),
    [anon_sym_license] = ACTIONS(19),
    [anon_sym_brief] = ACTIONS(19),
    [anon_sym_readme] = ACTIONS(19),
    [anon_sym_homepage] = ACTIONS(19),
    [anon_sym_sourceloc] = ACTIONS(19),
    [anon_sym_bugtracker] = ACTIONS(19),
    [anon_sym_opts] = ACTIONS(19),
    [anon_sym_sourcedir] = ACTIONS(19),
    [anon_sym_builddir] = ACTIONS(19),
    [anon_sym_outputdir] = ACTIONS(19),
    [anon_sym_prebuild] = ACTIONS(19),
    [anon_sym_postbuild] = ACTIONS(19),
    [anon_sym_preinstall] = ACTIONS(19),
    [anon_sym_postinstall] = ACTIONS(19),
    [anon_sym_preclean] = ACTIONS(19),
    [anon_sym_postclean] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_package_declaration] = STATE(2),
    [sym_dependency_declaration] = STATE(2),
    [sym_module_declaration] = STATE(2),
    [sym_main_declaration] = STATE(2),
    [sym_executable_declaration] = STATE(2),
    [sym_version_declaration] = STATE(2),
    [sym_langversion_declaration] = STATE(2),
    [sym_field_declaration] = STATE(2),
    [sym_field_name] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_package] = ACTIONS(23),
    [anon_sym_depends] = ACTIONS(26),
    [anon_sym_modules] = ACTIONS(29),
    [anon_sym_main] = ACTIONS(32),
    [anon_sym_executable] = ACTIONS(35),
    [anon_sym_version] = ACTIONS(38),
    [anon_sym_langversion] = ACTIONS(41),
    [anon_sym_authors] = ACTIONS(44),
    [anon_sym_maintainers] = ACTIONS(44),
    [anon_sym_license] = ACTIONS(44),
    [anon_sym_brief] = ACTIONS(44),
    [anon_sym_readme] = ACTIONS(44),
    [anon_sym_homepage] = ACTIONS(44),
    [anon_sym_sourceloc] = ACTIONS(44),
    [anon_sym_bugtracker] = ACTIONS(44),
    [anon_sym_opts] = ACTIONS(44),
    [anon_sym_sourcedir] = ACTIONS(44),
    [anon_sym_builddir] = ACTIONS(44),
    [anon_sym_outputdir] = ACTIONS(44),
    [anon_sym_prebuild] = ACTIONS(44),
    [anon_sym_postbuild] = ACTIONS(44),
    [anon_sym_preinstall] = ACTIONS(44),
    [anon_sym_postinstall] = ACTIONS(44),
    [anon_sym_preclean] = ACTIONS(44),
    [anon_sym_postclean] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_package_declaration] = STATE(2),
    [sym_dependency_declaration] = STATE(2),
    [sym_module_declaration] = STATE(2),
    [sym_main_declaration] = STATE(2),
    [sym_executable_declaration] = STATE(2),
    [sym_version_declaration] = STATE(2),
    [sym_langversion_declaration] = STATE(2),
    [sym_field_declaration] = STATE(2),
    [sym_field_name] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_depends] = ACTIONS(7),
    [anon_sym_modules] = ACTIONS(9),
    [anon_sym_main] = ACTIONS(11),
    [anon_sym_executable] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_langversion] = ACTIONS(17),
    [anon_sym_authors] = ACTIONS(19),
    [anon_sym_maintainers] = ACTIONS(19),
    [anon_sym_license] = ACTIONS(19),
    [anon_sym_brief] = ACTIONS(19),
    [anon_sym_readme] = ACTIONS(19),
    [anon_sym_homepage] = ACTIONS(19),
    [anon_sym_sourceloc] = ACTIONS(19),
    [anon_sym_bugtracker] = ACTIONS(19),
    [anon_sym_opts] = ACTIONS(19),
    [anon_sym_sourcedir] = ACTIONS(19),
    [anon_sym_builddir] = ACTIONS(19),
    [anon_sym_outputdir] = ACTIONS(19),
    [anon_sym_prebuild] = ACTIONS(19),
    [anon_sym_postbuild] = ACTIONS(19),
    [anon_sym_preinstall] = ACTIONS(19),
    [anon_sym_postinstall] = ACTIONS(19),
    [anon_sym_preclean] = ACTIONS(19),
    [anon_sym_postclean] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_version_range_op] = STATE(37),
    [sym_version_range] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_package] = ACTIONS(49),
    [anon_sym_depends] = ACTIONS(49),
    [anon_sym_modules] = ACTIONS(49),
    [anon_sym_main] = ACTIONS(51),
    [anon_sym_executable] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(49),
    [anon_sym_langversion] = ACTIONS(49),
    [anon_sym_authors] = ACTIONS(49),
    [anon_sym_maintainers] = ACTIONS(49),
    [anon_sym_license] = ACTIONS(49),
    [anon_sym_brief] = ACTIONS(49),
    [anon_sym_readme] = ACTIONS(49),
    [anon_sym_homepage] = ACTIONS(49),
    [anon_sym_sourceloc] = ACTIONS(49),
    [anon_sym_bugtracker] = ACTIONS(49),
    [anon_sym_opts] = ACTIONS(49),
    [anon_sym_sourcedir] = ACTIONS(49),
    [anon_sym_builddir] = ACTIONS(49),
    [anon_sym_outputdir] = ACTIONS(49),
    [anon_sym_prebuild] = ACTIONS(49),
    [anon_sym_postbuild] = ACTIONS(49),
    [anon_sym_preinstall] = ACTIONS(49),
    [anon_sym_postinstall] = ACTIONS(49),
    [anon_sym_preclean] = ACTIONS(49),
    [anon_sym_postclean] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(53),
    [sym_version_number] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_main,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_dependency_list_repeat1,
    ACTIONS(59), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [40] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_main,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_module_list_repeat1,
    ACTIONS(65), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [80] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_main,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_module_list_repeat1,
    ACTIONS(71), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_main,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_dependency_list_repeat1,
    ACTIONS(78), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_main,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 26,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
      anon_sym_COMMA,
  [198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_main,
    STATE(7), 1,
      aux_sym_module_list_repeat1,
    ACTIONS(91), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_main,
    STATE(8), 1,
      aux_sym_dependency_list_repeat1,
    ACTIONS(95), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_main,
    ACTIONS(99), 26,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
      anon_sym_COMMA,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_main,
    ACTIONS(103), 26,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
      anon_sym_COMMA,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_main,
    ACTIONS(107), 26,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
      anon_sym_COMMA,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_main,
    ACTIONS(71), 26,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
      anon_sym_COMMA,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_main,
    ACTIONS(78), 26,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
      anon_sym_COMMA,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_main,
    ACTIONS(111), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_main,
    ACTIONS(115), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_main,
    ACTIONS(119), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_main,
    ACTIONS(123), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_main,
    ACTIONS(127), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_main,
    ACTIONS(131), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_main,
    ACTIONS(135), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_main,
    ACTIONS(139), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_main,
    ACTIONS(143), 25,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_depends,
      anon_sym_modules,
      anon_sym_executable,
      anon_sym_version,
      anon_sym_langversion,
      anon_sym_authors,
      anon_sym_maintainers,
      anon_sym_license,
      anon_sym_brief,
      anon_sym_readme,
      anon_sym_homepage,
      anon_sym_sourceloc,
      anon_sym_bugtracker,
      anon_sym_opts,
      anon_sym_sourcedir,
      anon_sym_builddir,
      anon_sym_outputdir,
      anon_sym_prebuild,
      anon_sym_postbuild,
      anon_sym_preinstall,
      anon_sym_postinstall,
      anon_sym_preclean,
      anon_sym_postclean,
  [759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_version_number,
    STATE(18), 1,
      sym_version_range,
    STATE(37), 1,
      sym_version_range_op,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_version_range_op,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_string_value,
    STATE(23), 1,
      sym_boolean_value,
    ACTIONS(149), 2,
      anon_sym_True,
      anon_sym_False,
  [809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_package_name,
    STATE(5), 1,
      sym_dependency_item,
    STATE(17), 1,
      sym_dependency_list,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_package_name,
    STATE(16), 1,
      sym_dependency_item,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_module_name,
    STATE(20), 1,
      sym_module_list,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_package_name,
  [856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_module_name,
  [863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_version_number,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_EQ,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_version_number,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_version_number,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_EQ,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_module_name,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_package_name,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_EQ,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_EQ,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_EQ,
  [947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_version_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 278,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 453,
  [SMALL_STATE(18)] = 487,
  [SMALL_STATE(19)] = 521,
  [SMALL_STATE(20)] = 555,
  [SMALL_STATE(21)] = 589,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 657,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 759,
  [SMALL_STATE(27)] = 780,
  [SMALL_STATE(28)] = 795,
  [SMALL_STATE(29)] = 809,
  [SMALL_STATE(30)] = 822,
  [SMALL_STATE(31)] = 832,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 849,
  [SMALL_STATE(34)] = 856,
  [SMALL_STATE(35)] = 863,
  [SMALL_STATE(36)] = 870,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 884,
  [SMALL_STATE(39)] = 891,
  [SMALL_STATE(40)] = 898,
  [SMALL_STATE(41)] = 905,
  [SMALL_STATE(42)] = 912,
  [SMALL_STATE(43)] = 919,
  [SMALL_STATE(44)] = 926,
  [SMALL_STATE(45)] = 933,
  [SMALL_STATE(46)] = 940,
  [SMALL_STATE(47)] = 947,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_item, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_item, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_list, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_list, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_list_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_list_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_range, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_range, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_list, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_list, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_list, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_range, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_range, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_range, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_range, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_item, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_item, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_declaration, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_declaration, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_langversion_declaration, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_langversion_declaration, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_declaration, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_declaration, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_declaration, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_declaration, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable_declaration, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_executable_declaration, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_value, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_value, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_range_op, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ipkg(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
