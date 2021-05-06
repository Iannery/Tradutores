/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BISON_CLANG_SYNTAX_TAB_H_INCLUDED
# define YY_YY_BISON_CLANG_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    EMPTY = 260,                   /* EMPTY  */
    IF_KW = 261,                   /* IF_KW  */
    ELSE_KW = 262,                 /* ELSE_KW  */
    FOR_KW = 263,                  /* FOR_KW  */
    FORALL_KW = 264,               /* FORALL_KW  */
    RETURN_KW = 265,               /* RETURN_KW  */
    IN_KW = 266,                   /* IN_KW  */
    ISSET_KW = 267,                /* ISSET_KW  */
    ADD_KW = 268,                  /* ADD_KW  */
    REMOVE_KW = 269,               /* REMOVE_KW  */
    EXISTS_KW = 270,               /* EXISTS_KW  */
    OUT = 271,                     /* OUT  */
    IN = 272,                      /* IN  */
    TYPE = 273,                    /* TYPE  */
    ID = 274,                      /* ID  */
    SUM_OP = 275,                  /* SUM_OP  */
    MUL_OP = 276,                  /* MUL_OP  */
    BIN_LOG_OP = 277,              /* BIN_LOG_OP  */
    UN_LOG_OP = 278,               /* UN_LOG_OP  */
    THEN = 279,                    /* THEN  */
    REL_OP = 280,                  /* REL_OP  */
    ASS_OP = 281,                  /* ASS_OP  */
    STRING = 282,                  /* STRING  */
    CHAR = 283                     /* CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 59 "bison/clang_syntax.y"

    struct Token {
        int     t_line;
        int     t_column;
        char    t_title[101];
        int     t_context;
    } token;
    struct Node* node;

#line 102 "bison/clang_syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_CLANG_SYNTAX_TAB_H_INCLUDED  */
