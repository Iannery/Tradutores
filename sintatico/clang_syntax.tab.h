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

#ifndef YY_YY_CLANG_SYNTAX_TAB_H_INCLUDED
# define YY_YY_CLANG_SYNTAX_TAB_H_INCLUDED
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
    MAIN = 258,                    /* MAIN  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    EMPTY = 261,                   /* EMPTY  */
    IF_KW = 262,                   /* IF_KW  */
    ELSE_KW = 263,                 /* ELSE_KW  */
    FOR_KW = 264,                  /* FOR_KW  */
    FORALL_KW = 265,               /* FORALL_KW  */
    RETURN_KW = 266,               /* RETURN_KW  */
    IN_KW = 267,                   /* IN_KW  */
    ISSET_KW = 268,                /* ISSET_KW  */
    ADD_KW = 269,                  /* ADD_KW  */
    REMOVE_KW = 270,               /* REMOVE_KW  */
    EXISTS_KW = 271,               /* EXISTS_KW  */
    OUT = 272,                     /* OUT  */
    IN = 273,                      /* IN  */
    TYPE = 274,                    /* TYPE  */
    ID = 275,                      /* ID  */
    SUM_OP = 276,                  /* SUM_OP  */
    MUL_OP = 277,                  /* MUL_OP  */
    BIN_LOG_OP = 278,              /* BIN_LOG_OP  */
    UN_LOG_OP = 279,               /* UN_LOG_OP  */
    REL_OP = 280,                  /* REL_OP  */
    ASS_OP = 281,                  /* ASS_OP  */
    COMMENT = 282,                 /* COMMENT  */
    STRING = 283,                  /* STRING  */
    CHAR = 284                     /* CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_CLANG_SYNTAX_TAB_H_INCLUDED  */
