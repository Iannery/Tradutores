/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "bison/clang_syntax.y"


    /**
    * IMPORTANT DISCLAIMER
    * 
    * This file, along with all files that have been documented
    * contains a lot of self-deprecating, sincere and (maybe?) 
    * funny comments that I really hope brings you a little laugh
    * while reading and correcting it. It was really tough making 
    * this project alone, and it would not be possible without José's
    * and all my colleagues' help. 
    *
    * I believe this should be a group project.
    * 
    * All the jokes are means of relieving a little bit of the sanity
    * I lost while making this. If this and all the comments are unappreciated,
    * I'm sincerely sorry for those, but I won't remove any of them.
    * 
    * I hope you have a good one, whoever you might be,
    * 
    * Ian Nery Bandeira
    **/

    // I'm afraid to comment inside this file, but it will be done eventually.
    // Hopefully without breaking everything and making me regret all the
    // life choices I made in the last 23 years for about 3 hours.
    #include "symbol_table.h"
    #include "stack.h"
    #include "tree.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    // All things are extern and global, since there was a
    // metric ton of scope issues, and could not be solved without those.
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* a);
    extern char* scopeHandler(char* title, int line, int column);
    extern void qtdHandler(char* title, int line, int column);
    extern int line;
    extern int column;
    extern int errors;
    extern int context;
    int errors_sem;
    int qtdParams;
    extern FILE *yyin;

#line 119 "bison/clang_syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "clang_syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_EMPTY = 5,                      /* EMPTY  */
  YYSYMBOL_IF_KW = 6,                      /* IF_KW  */
  YYSYMBOL_ELSE_KW = 7,                    /* ELSE_KW  */
  YYSYMBOL_FOR_KW = 8,                     /* FOR_KW  */
  YYSYMBOL_FORALL_KW = 9,                  /* FORALL_KW  */
  YYSYMBOL_RETURN_KW = 10,                 /* RETURN_KW  */
  YYSYMBOL_IN_KW = 11,                     /* IN_KW  */
  YYSYMBOL_ISSET_KW = 12,                  /* ISSET_KW  */
  YYSYMBOL_ADD_KW = 13,                    /* ADD_KW  */
  YYSYMBOL_REMOVE_KW = 14,                 /* REMOVE_KW  */
  YYSYMBOL_EXISTS_KW = 15,                 /* EXISTS_KW  */
  YYSYMBOL_OUT = 16,                       /* OUT  */
  YYSYMBOL_IN = 17,                        /* IN  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_SUM_OP = 20,                    /* SUM_OP  */
  YYSYMBOL_MUL_OP = 21,                    /* MUL_OP  */
  YYSYMBOL_BIN_LOG_OP = 22,                /* BIN_LOG_OP  */
  YYSYMBOL_UN_LOG_OP = 23,                 /* UN_LOG_OP  */
  YYSYMBOL_THEN = 24,                      /* THEN  */
  YYSYMBOL_REL_OP = 25,                    /* REL_OP  */
  YYSYMBOL_ASS_OP = 26,                    /* ASS_OP  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_CHAR = 28,                      /* CHAR  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_declarationList = 37,           /* declarationList  */
  YYSYMBOL_declaration = 38,               /* declaration  */
  YYSYMBOL_varDeclaration = 39,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 40,           /* funcDeclaration  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_params = 43,                    /* params  */
  YYSYMBOL_param = 44,                     /* param  */
  YYSYMBOL_simpleVDeclaration = 45,        /* simpleVDeclaration  */
  YYSYMBOL_simpleFDeclaration = 46,        /* simpleFDeclaration  */
  YYSYMBOL_compoundStmt = 47,              /* compoundStmt  */
  YYSYMBOL_stmtList = 48,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 49,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 50,                  /* exprStmt  */
  YYSYMBOL_condStmt = 51,                  /* condStmt  */
  YYSYMBOL_iterStmt = 52,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 53,                /* returnStmt  */
  YYSYMBOL_setStmt = 54,                   /* setStmt  */
  YYSYMBOL_pertOP = 55,                    /* pertOP  */
  YYSYMBOL_setReturner = 56,               /* setReturner  */
  YYSYMBOL_typeOP = 57,                    /* typeOP  */
  YYSYMBOL_setParams = 58,                 /* setParams  */
  YYSYMBOL_addOP = 59,                     /* addOP  */
  YYSYMBOL_remOP = 60,                     /* remOP  */
  YYSYMBOL_selectOP = 61,                  /* selectOP  */
  YYSYMBOL_forallOP = 62,                  /* forallOP  */
  YYSYMBOL_expression = 63,                /* expression  */
  YYSYMBOL_assignExp = 64,                 /* assignExp  */
  YYSYMBOL_simpleExp = 65,                 /* simpleExp  */
  YYSYMBOL_constOP = 66,                   /* constOP  */
  YYSYMBOL_inOP = 67,                      /* inOP  */
  YYSYMBOL_outOP = 68,                     /* outOP  */
  YYSYMBOL_outConst = 69,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 70,             /* binLogicalExp  */
  YYSYMBOL_unLogicalExp = 71,              /* unLogicalExp  */
  YYSYMBOL_relationalExp = 72,             /* relationalExp  */
  YYSYMBOL_sumExp = 73,                    /* sumExp  */
  YYSYMBOL_mulExp = 74,                    /* mulExp  */
  YYSYMBOL_factor = 75,                    /* factor  */
  YYSYMBOL_functionCall = 76,              /* functionCall  */
  YYSYMBOL_77_3 = 77,                      /* $@3  */
  YYSYMBOL_callParams = 78                 /* callParams  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3703

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  429

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      31,    32,     2,     2,    34,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   118,   118,   124,   129,   135,   138,   144,   150,   154,
     150,   163,   171,   176,   182,   200,   218,   235,   241,   246,
     249,   255,   258,   261,   264,   267,   270,   273,   276,   279,
     282,   288,   294,   299,   308,   318,   325,   331,   338,   346,
     349,   355,   359,   366,   372,   375,   378,   385,   392,   399,
     406,   414,   417,   420,   426,   437,   440,   443,   446,   452,
     456,   460,   467,   476,   484,   488,   492,   498,   504,   510,
     515,   521,   527,   533,   539,   545,   551,   554,   562,   568,
     571,   574,   580,   580,   593,   603,   609
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "EMPTY", "IF_KW", "ELSE_KW", "FOR_KW", "FORALL_KW", "RETURN_KW", "IN_KW",
  "ISSET_KW", "ADD_KW", "REMOVE_KW", "EXISTS_KW", "OUT", "IN", "TYPE",
  "ID", "SUM_OP", "MUL_OP", "BIN_LOG_OP", "UN_LOG_OP", "THEN", "REL_OP",
  "ASS_OP", "STRING", "CHAR", "'{'", "'}'", "'('", "')'", "';'", "','",
  "$accept", "program", "declarationList", "declaration", "varDeclaration",
  "funcDeclaration", "$@1", "$@2", "params", "param", "simpleVDeclaration",
  "simpleFDeclaration", "compoundStmt", "stmtList", "primitiveStmt",
  "exprStmt", "condStmt", "iterStmt", "returnStmt", "setStmt", "pertOP",
  "setReturner", "typeOP", "setParams", "addOP", "remOP", "selectOP",
  "forallOP", "expression", "assignExp", "simpleExp", "constOP", "inOP",
  "outOP", "outConst", "binLogicalExp", "unLogicalExp", "relationalExp",
  "sumExp", "mulExp", "factor", "functionCall", "$@3", "callParams", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   123,
     125,    40,    41,    59,    44
};
#endif

#define YYPACT_NINF (-307)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    10,    34,    27,   266,   282,   388,    25,     7,   -14,
    -307,   522,   547,   233,    36,    92,  1824,   554,    96,   418,
     443,    19,  1298,  1315,   108,   109,   148,   685,   156,   176,
     200,   209,   210,   219,  1342,    17,   346,   434,  2747,  2778,
    2809,  2840,  2871,  2902,  2933,  2964,  2995,  3026,    52,    87,
      55,   142,   268,    68,  3057,   269,   295,    72,  1349,  3088,
    3119,   111,   127,   356,   315,  1369,  1388,  1422,   454,   326,
      92,   434,   379,   555,   384,   728,   555,   555,   555,   814,
     417,   685,   138,  1291,  1446,   344,   214,   194,    89,  3150,
     569,  3181,  3212,   636,   214,   104,   104,    17,    36,   580,
     179,   468,   484,   204,   433,  3243,  1607,   253,   492,   493,
    1630,   392,   482,   495,   505,   517,   510,   521,   524,   501,
    1476,   596,   728,  1507,   101,   115,   478,   802,  1523,  1543,
     584,  3613,   617,  1824,   162,   543,   546,   195,   571,   585,
      46,   592,   614,  1275,   236,  3274,  3305,  3336,  1550,   596,
     261,  1824,   609,   144,  3367,   620,  1824,  3398,  1824,   623,
     626,  1699,  1715,  1732,   638,   644,  1622,    50,   690,   434,
     525,   650,   707,  1772,   166,   348,   560,  1440,  1886,  1902,
    1910,  1491,  1638,  1766,   656,   661,  1792,    94,   859,   434,
     670,   696,  1953,    24,    73,   305,  1216,  3629,  3636,  3642,
     691,   695,   669,   698,  1003,   703,   722,   330,   335,   177,
     351,   973,   979,   725,   730,   530,    99,   913,   434,   191,
     241,   411,   999,   140,   188,    39,  1238,  1014,  1038,  1069,
     731,   738,   745,   685,   750,   755,  1824,  1673,  2065,   716,
     763,  2096,  2127,  2158,  2189,  2220,  2251,  2282,   751,  2313,
    2344,  1140,   770,  3429,  3460,   258,   728,   555,   464,  1918,
     768,   586,   429,   713,   586,   239,   239,    50,   728,   555,
    3648,   777,   884,   224,   733,   884,   835,   835,    94,   555,
     555,   781,   783,   778,   837,   838,   870,   555,   555,  3654,
     596,   728,   555,   500,  1086,   794,   935,   245,   894,   935,
     889,   889,    99,   434,   379,   555,   797,   814,   812,  3491,
    2375,   342,  2406,   801,   813,   467,   634,   651,   718,   960,
    3522,   817,    92,   811,   902,  1937,   596,   728,  1961,   470,
    3623,  1985,  2014,   836,   910,   728,  3660,   307,  1232,  3666,
    3672,   938,   945,   555,   555,   949,   950,   631,   840,   974,
    1115,   596,   728,  1130,   448,  1239,  1145,  1173,   991,   819,
    1015,  2437,   843,   844,  2468,   848,    92,   555,   555,  1578,
     851,   853,   854,  1018,  3553,   640,  1019,  1030,   680,   863,
     869,   908,   891,   892,   895,  1034,  1053,   408,   474,  3678,
     726,   743,   683,   899,  3613,   617,  3613,   912,   917,  2499,
     693,  1072,  1082,   326,  2022,  1085,   932,  1089,  1111,  1200,
     746,  2530,   480,  2561,  2592,  2623,   326,   753,   759,   817,
    3613,   609,   848,  3584,  2654,   914,  2685,  3613,  2716
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -307,  -307,  -307,   954,     0,     1,  -241,    44,  -306,   897,
       5,     6,   -12,  -147,    70,  -116,  -113,  -107,  -103,   -88,
    1697,   312,    35,   -97,   455,   532,  1196,   -84,    15,   -65,
    1305,  1593,   -75,   -63,   652,  1404,   820,  1097,   779,   502,
      -4,   377,  -199,  -277
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    38,    39,    15,    98,    19,    20,
     159,   160,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   190,   109,    51,    52,   191,    54,    55,    56,
     104,    58,    59,    60,   117,   193,   194,   195,   196,   197,
     198,   199,   121,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,     6,    17,     5,     6,     7,     8,   102,     7,     8,
     290,   253,    66,   347,   322,   242,   375,   -16,   243,   -15,
      21,    22,    23,    66,   244,   142,     1,    -2,   245,     9,
     -59,    84,    66,   179,    10,   -55,    83,    66,    13,   -59,
     -59,   -59,    74,   246,   -59,     1,   275,   247,    37,   378,
     -70,    50,   -59,   161,   162,   163,   249,   251,    12,   326,
     400,   -70,    50,   -56,   300,    16,   -58,   179,   250,   166,
     366,   -70,   171,   -70,   392,   179,    50,    66,   -86,   -57,
     -86,   169,    66,    93,   -68,   -56,   130,   155,   -58,   309,
      66,    66,    66,   129,   351,   -68,   119,   181,   182,   183,
     204,   -57,   210,   211,   212,   -52,   171,    21,    22,    23,
      18,    91,   -37,   186,   171,    68,    50,   228,   215,   241,
     -53,   123,   -55,    83,    35,   189,   -38,    66,    66,    66,
     218,   237,   238,    94,   -37,    37,   239,   240,   -68,    71,
      72,   -82,   -82,   -82,   -55,   228,   248,    66,   -38,   -68,
     -82,   -55,    66,   -82,    66,   251,   220,   -82,   -82,   323,
     -68,   -82,   299,   259,   179,   179,    50,    50,    50,   -82,
     120,   333,   -55,   -41,   -55,   -39,   -85,   -55,   -85,    73,
     -82,   -82,   -82,   270,   220,   179,    50,    75,   264,   -82,
     204,    50,   -82,    50,   348,   -41,   -82,   -82,   -55,   -68,
     -82,   143,   -56,   145,   171,   -69,   -49,    76,   -82,   289,
     -68,   131,   294,   228,   179,   -56,   -69,    21,    22,    23,
     -68,   154,   -68,   -56,   171,   -56,   157,   -69,   -49,    66,
     379,    77,    66,    83,    35,   -69,   133,    86,   382,   359,
      78,    79,   161,   162,   163,    37,   -69,    93,   306,    66,
      80,    -8,   -58,   171,   372,   393,   -69,   179,   166,   167,
     179,   179,   179,   332,   -56,    14,    -4,   -69,    50,   152,
     169,    50,   -42,   -58,   340,   -58,    -8,   -69,   242,   -69,
     242,   243,    -5,   243,    -4,   -44,   228,   244,    50,   244,
     321,   245,   228,   245,   -42,   228,   228,   228,   357,   179,
      -5,   -40,    92,   179,   242,    66,   246,   243,   246,   374,
     247,   242,   247,   244,   243,   179,   -70,   245,   -67,   249,
     244,   249,   228,    91,   245,   220,   -72,   -70,   -51,   -67,
     276,   250,   246,   250,   371,    96,   247,   -72,   171,   246,
     -72,   -39,   171,   247,    50,   249,   -40,   228,   -72,    21,
      22,    23,   249,   399,   171,    -9,   425,   250,    85,   -68,
      -8,   220,   -59,   -39,   250,    83,    35,   -70,   -40,    86,
     -68,   -59,   -59,   -59,   365,   122,   -59,    37,   -70,    91,
     -68,    95,   241,   -59,   241,   -59,   220,   108,    -6,   -70,
      66,    66,    66,    67,   237,   238,   237,   238,   101,   239,
     240,   239,   240,   -56,    67,   125,    -6,   423,   241,   248,
     426,   248,    67,    67,   180,   241,    66,   105,    67,   -47,
     237,   238,   -57,    66,   135,   239,   240,   237,   238,    50,
      50,    50,   239,   240,   108,   248,   118,   161,   162,   163,
     -69,   -47,   248,   -57,   204,   -57,   164,   419,   180,   165,
      69,   -69,    70,   166,   167,    50,   180,   168,    67,   -67,
     422,   -69,    50,    67,   411,   169,   413,   -82,   -82,   -82,
     -67,    67,    67,    67,    67,   -13,   -82,   -13,   -37,   -82,
     -67,   -67,   -67,   -82,   -82,   -48,   -14,   -82,   -14,   -67,
     424,    93,   -67,   -56,    81,   -82,   325,   428,   229,   -37,
     -67,   -37,   -67,   -82,   -82,   -82,   -56,   -48,    67,    67,
      67,   -67,   -82,   421,   136,   -82,   284,   132,    65,   -82,
     -82,   204,    -3,   -82,   -45,   134,   229,   137,    67,    65,
     202,   -82,   350,    67,   -54,    67,   -56,   -64,    65,   178,
      -3,   -78,   -66,    65,   180,   180,   180,    -7,   207,   -65,
     -78,   -78,   -78,   138,   -11,   -78,   139,   -56,   181,   182,
     183,   293,   -78,   316,   -78,    -7,   180,   184,   108,   -17,
     185,   -70,   -11,   178,   186,   187,   -47,   202,   188,   -48,
     108,   178,   -70,    65,   -10,   265,   189,   -17,    65,   161,
     162,   163,   -70,   229,   229,   180,    65,    65,   128,   210,
     211,   212,   -10,   108,   146,   166,   167,   203,   213,   261,
      67,   214,   -12,    67,   -12,   215,   216,   169,   147,   217,
      21,    22,    23,   227,   148,   208,   149,   218,   252,    28,
      67,   370,    31,    65,    65,    65,    83,    35,   180,   108,
      36,   180,   180,   180,   180,   -38,   150,   108,    37,   205,
     206,   227,   156,    65,   203,   124,   254,   255,    65,   285,
      65,   -58,   -39,   389,   108,   149,   -38,   229,   -38,   256,
     178,   178,   403,   229,    70,   257,   229,   229,   229,   229,
     180,   -58,   -58,   -39,   180,   -39,    67,   268,    21,    22,
      23,   178,   269,   161,   162,   163,   180,    28,    29,    30,
      31,   -39,   260,   229,    34,    35,   317,   -57,    36,   166,
     167,   202,   404,   261,   149,   409,    37,   149,   -57,   227,
     178,   169,   279,   202,   204,   416,   280,    70,   229,   -40,
     -40,   161,   162,   163,   287,    65,   286,   -41,    65,   -57,
     184,   200,   201,   185,   204,   328,   202,   106,   187,   310,
     -40,   188,   -40,   288,   -49,    65,   291,   -42,   -41,   189,
     -41,   292,   303,   178,   -47,   336,   178,   178,   331,   304,
     -48,    67,    67,    67,   202,   -49,   305,   -49,   -42,   339,
     -42,   307,   202,   318,   312,   -47,   308,   -47,   203,   -37,
     202,   -48,   227,   -48,   311,    64,   319,    67,   227,   327,
     203,   227,   227,   356,    67,   178,    64,   202,   335,   178,
     -37,    65,   343,   -71,   344,    64,   177,   161,   162,   163,
      64,   178,    96,   203,   -71,   352,   164,   -71,   227,   165,
     361,   363,   367,   166,   167,   -71,    62,   168,   181,   182,
     183,   114,   115,   376,   368,   169,   158,    62,   -38,   -39,
     177,   203,   395,   227,   186,   187,    87,   175,   177,   203,
      64,    62,   181,   182,   183,    64,   189,   203,   380,   -38,
     -39,   271,   390,    64,   127,   397,   398,   236,   186,   187,
     -41,   -40,   272,   -53,   203,   -54,   -51,   181,   182,   183,
     189,   175,   210,   211,   212,   405,    65,    65,    65,   175,
     226,    62,   -40,   186,   187,   204,    87,   272,   215,   216,
      64,    64,    64,   -56,   126,   189,   210,   211,   212,   -49,
     218,   -56,    65,   406,   -47,   295,   353,   -48,   226,    65,
      64,   410,   215,   216,   377,    64,   296,    64,   210,   211,
     212,   224,   381,   -42,   218,   414,   427,   177,   177,   -56,
     415,    62,    62,    62,   215,   216,   -56,    11,   296,   362,
     -56,   -56,     0,   161,   162,   163,   218,    99,   177,   224,
     383,    62,   164,   200,   201,   165,    62,   384,    62,   369,
     167,   387,   388,   168,   -60,   -56,     0,     0,   262,   175,
     -61,   169,     0,   -60,   -60,   -60,   226,   177,   -60,   -61,
     -61,   -61,   204,     0,   -61,   -60,   391,   -60,   273,   175,
     -81,   -61,    64,   -61,     0,    64,   281,   282,     0,   -81,
     -81,   -81,   283,   394,   -81,   -74,   -56,     0,     0,   204,
     -41,   -81,    64,   -81,   -74,   302,   -74,   297,   175,   -74,
     177,   -49,     0,   177,   330,   -56,   -74,   396,   -74,   -76,
     -52,   -41,     0,    62,     0,   338,    62,     0,   -76,   -76,
     -76,     0,   -49,   -76,   -56,     0,   407,     0,     0,   226,
     -76,     0,   -76,    62,     0,   226,     0,     0,   226,   355,
     -79,   262,   177,   -56,   329,   408,   177,     0,    64,   -79,
     -79,   -79,   273,   -56,   -79,   337,   -42,   -77,   177,     0,
     -47,   -79,     0,   -79,   417,   226,   -77,   -77,   -77,     0,
     224,   -77,     0,    63,   418,     0,   297,   -42,   -77,   354,
     -77,   -47,   -48,   175,    63,     0,   -84,   175,     0,    62,
     226,     0,     0,    63,   176,   -84,   -84,   -84,    63,   175,
     -84,   -80,     0,   -48,     0,     0,   224,   -84,     0,   -84,
     -80,   -80,   -80,   313,   314,   -80,   -73,     0,     0,   315,
       0,     0,   -80,     0,   -80,   -73,   302,   -73,   176,     0,
     -73,   224,     0,    64,    64,    64,   176,   -73,    63,   -73,
       0,     0,     0,    63,   -75,     0,     0,     0,     0,     0,
       0,    63,     0,   -75,   -75,   -75,     0,     0,   -75,    64,
       0,     0,     0,     0,     0,   -75,    64,   -75,     0,     0,
       0,   -83,    53,     0,    62,    62,    62,     0,   225,     0,
     -83,   -83,   -83,    53,     0,   -83,     0,   -72,    63,    63,
      63,     0,   -83,   172,   -83,     0,   277,    53,   -72,     0,
      62,   -72,     0,   -71,     0,     0,   225,    62,    63,   -72,
     -71,     0,   277,    63,   -71,    63,     0,   -71,   301,   301,
     -72,   -71,     0,   -72,   -71,   176,   176,   172,     0,     0,
     -72,   -71,   -72,   -71,     0,   172,   -32,    53,   -32,   -32,
     -32,   -32,   151,   -32,   -32,   -32,   176,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
       0,     0,   -78,     0,   -32,   -32,   -32,     0,     0,   -60,
       0,   -78,   -78,   -78,   225,   176,   -78,   221,   -60,   -60,
     -60,    57,    82,   -60,   -78,     0,   -61,    53,    53,    53,
      63,   -60,    57,    63,     0,   -61,   -61,   -61,     0,     0,
     -61,     0,    88,     0,     0,   221,    57,    53,   -61,     0,
      63,     0,    53,   -78,    53,     0,     0,     0,   176,     0,
     -81,   176,   -78,   -78,   -78,   172,     0,   -78,    81,   -81,
     -81,   -81,     0,    82,   -81,   -78,   100,     0,     0,     0,
     -74,     0,   -81,     0,   116,   172,    57,   225,     0,   -74,
      97,   -74,     0,   225,   -74,     0,   225,     0,     0,   -76,
     176,     0,   -74,     0,   176,     0,    63,     0,   -76,   -76,
     -76,     0,     0,   -76,   172,     0,   176,     0,     0,     0,
      61,   -76,     0,   225,     0,     0,   140,     0,     0,    53,
       0,    61,    53,   -79,     0,     0,    57,   144,    57,     0,
       0,   174,   -79,   -79,   -79,    61,     0,   -79,   225,    53,
       0,   -72,     0,     0,   153,   -79,    57,   -77,     0,     0,
     266,    57,   -72,    57,     0,   -72,   -77,   -77,   -77,     0,
       0,   -77,   -72,     0,   263,   174,     0,     0,     0,   -77,
       0,     0,     0,   174,     0,    61,   221,   -84,     0,     0,
       0,    63,    63,    63,   274,     0,   -84,   -84,   -84,   172,
       0,   -84,   -59,   172,     0,    53,     0,     0,     0,   -84,
       0,   -59,   -59,   -59,     0,   172,   -59,    63,   -80,     0,
       0,     0,   221,   298,    63,   223,     0,   -80,   -80,   -80,
       0,     0,   -80,     0,   -73,    61,    61,    61,    57,     0,
     -80,    57,     0,   -73,    97,   -73,     0,   221,   -73,     0,
       0,     0,     0,   223,   -75,    61,   -73,     0,    57,     0,
      61,   -83,    61,   -75,   -75,   -75,     0,     0,   -75,     0,
     -83,   -83,   -83,   174,     0,   -83,   -75,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,     0,     0,   -78,
      53,    53,    53,   174,     0,   140,     0,     0,   -78,   -78,
     -78,     0,     0,   -78,   319,     0,     0,     0,   358,   258,
     -78,     0,   116,     0,    57,     0,    53,     0,   -78,     0,
       0,     0,   174,    53,   373,     0,     0,   -78,   -78,   -78,
     173,   140,   -78,   -78,     0,     0,     0,    61,   209,   -43,
      61,   -81,   -78,   -78,   -78,     0,     0,   -78,     0,   -60,
     -81,   -81,   -81,   258,   -78,   -81,   140,    61,   -60,   -60,
     -60,     0,   -46,   -60,   173,     0,   192,     0,   110,   192,
     192,   192,   173,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   223,     0,   -29,     0,     0,    57,
     412,    57,   -29,   -29,   -29,     0,     0,   174,     0,     0,
     -59,   174,     0,    61,   222,   110,     0,     0,     0,   -59,
     -59,   -59,     0,   174,   -59,    57,   -60,     0,     0,     0,
     223,   -59,    57,     0,   170,   -60,   -60,   -60,     0,     0,
     -60,     0,   222,   -61,     0,     0,     0,   -60,     0,     0,
       0,     0,   -61,   -61,   -61,   223,     0,   -61,     0,     0,
     173,   173,   173,     0,   -61,     0,     0,     0,   170,     0,
     103,     0,   107,   111,   112,   113,   170,   -61,     0,     0,
     192,   192,   173,   -81,     0,     0,   -61,   -61,   -61,     0,
       0,   -61,   -81,   -81,   -81,     0,     0,   -81,    61,    61,
      61,     0,     0,   -78,   -81,     0,     0,     0,     0,   222,
     222,   173,   -78,   -78,   -78,     0,     0,   -78,   219,   107,
       0,     0,     0,   209,    61,     0,     0,    21,    22,    23,
      24,    61,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,     1,    34,    35,     0,   219,    36,     0,   110,
     192,     0,     0,   158,   173,    37,     0,   173,   173,   173,
     173,   110,   192,     0,     0,   192,   170,     0,   192,   192,
     192,   192,   192,   192,     0,     0,     0,     0,     0,     0,
     192,   192,     0,   222,   110,   192,   170,     0,     0,   222,
       0,     0,   222,   222,   222,   222,   173,   -74,   192,     0,
     173,     0,     0,     0,     0,     0,   -74,   267,   -74,     0,
       0,   -74,   173,   -76,     0,   170,     0,     0,   -74,   222,
     110,   -79,   -76,   -76,   -76,     0,     0,   -76,   110,   -77,
     -79,   -79,   -79,     0,   -76,   -79,   192,   192,   -77,   -77,
     -77,     0,   -79,   -77,   222,   110,     0,     0,   -84,     0,
     -77,     0,     0,   107,   324,     0,     0,   -84,   -84,   -84,
     192,   192,   -84,     0,   -81,   107,   334,     0,     0,   -84,
       0,     0,   -80,   -81,   -81,   -81,   341,   342,   -81,     0,
       0,   -80,   -80,   -80,   345,   346,   -80,   219,   107,   349,
       0,     0,     0,   -80,     0,     0,   -73,     0,     0,     0,
     170,     0,   360,     0,   170,   -73,   267,   -73,     0,     0,
     -73,     0,     0,     0,     0,     0,   170,   -73,     0,     0,
       0,     0,     0,   219,   107,   -75,     0,     0,     0,     0,
       0,     0,   107,   -83,   -75,   -75,   -75,     0,     0,   -75,
     385,   386,   -83,   -83,   -83,     0,   -75,   -83,   219,   107,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,   402,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,
       0,     0,     0,     0,    -7,    -7,    -7,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
       0,   -17,     0,     0,     0,     0,     0,   -17,   -17,   -17,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
       0,     0,   -11,     0,     0,     0,     0,     0,   -11,   -11,
     -11,   -32,     0,   -32,   -32,   -32,   -32,   420,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,   -63,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -62,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,
       0,     0,     0,     0,   -10,   -10,   -10,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -29,     0,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -22,     0,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,     0,     0,     0,     0,     0,   -22,   -22,
     -22,    89,     0,    21,    22,    23,    24,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,    33,     1,    34,
      35,     0,     0,    36,     0,     0,     0,     0,     0,   158,
      90,    37,   -20,     0,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,   -20,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,     0,
       0,   -21,   -21,   -21,   -23,     0,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,   -23,     0,     0,     0,
       0,     0,   -23,   -23,   -23,   -24,     0,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,     0,
       0,     0,     0,   -24,   -24,   -24,   -25,     0,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -26,     0,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -36,     0,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -27,
       0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,
     -28,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,     0,     0,   -19,     0,     0,     0,     0,     0,   -19,
     -19,   -19,   -18,     0,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,     0,     0,     0,     0,     0,
     -18,   -18,   -18,   -31,     0,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -35,     0,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -50,     0,   -50,   -50,   -50,
     -50,     0,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,     0,   -50,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -63,     0,   -63,   -63,
     -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -63,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -62,     0,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -33,     0,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -34,
       0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,
      89,     0,    21,    22,    23,    24,     0,    25,    26,    27,
       0,    28,    29,    30,    31,    32,    33,     1,    34,    35,
       0,     0,    36,     0,     0,     0,     0,     0,   158,   320,
      37,    -7,     0,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,    -7,     0,     0,     0,     0,     0,    -7,
      -7,    -7,    89,     0,    21,    22,    23,    24,     0,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,     1,
      34,    35,     0,     0,    36,     0,     0,     0,     0,     0,
     158,   364,    37,   -17,     0,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,     0,     0,     0,     0,
       0,   -17,   -17,   -17,   -11,     0,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,     0,     0,   -11,     0,     0,     0,
       0,     0,   -11,   -11,   -11,   -10,     0,   -10,   -10,   -10,
     -10,     0,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,     0,
       0,     0,     0,   -10,   -10,   -10,    21,    22,    23,   230,
       0,   231,   232,   233,     0,    28,    29,    30,    31,   234,
     235,     1,    34,    35,   -71,     0,    36,     0,     0,     0,
     -74,     0,   236,   266,    37,   -71,     0,   -76,   -71,   -74,
     278,   -74,     0,   -79,   -74,   -71,   -76,   -76,   -76,   -77,
       0,   -76,   -79,   -79,   -79,   -84,     0,   -79,   -77,   -77,
     -77,   -80,     0,   -77,   -84,   -84,   -84,   -73,     0,   -84,
     -80,   -80,   -80,   -75,     0,   -80,   -73,   278,   -73,   -83,
       0,   -73,   -75,   -75,   -75,     0,     0,   -75,   -83,   -83,
     -83,     0,     0,   -83
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,     0,     0,    72,     3,     3,
     209,   158,    16,   290,   255,   131,   322,    31,   131,    33,
       3,     4,     5,    27,   131,   122,    18,     0,   131,    19,
      11,    35,    36,    37,     0,    11,    19,    41,    31,    20,
      21,    22,    27,   131,    25,    18,    22,   131,    31,   326,
      11,    16,    33,     3,     4,     5,   131,    11,    33,   258,
     366,    22,    27,    11,    25,    29,    11,    71,   131,    19,
     311,    32,    37,    34,   351,    79,    41,    81,    32,    11,
      34,    31,    86,    11,    11,    33,    98,   152,    33,   236,
      94,    95,    96,    97,   293,    22,    81,     3,     4,     5,
      11,    33,     3,     4,     5,    33,    71,     3,     4,     5,
      18,    41,    11,    19,    79,    19,    81,   121,    19,   131,
      33,    32,    11,    19,    20,    31,    11,   131,   132,   133,
      31,   131,   131,    22,    33,    31,   131,   131,    11,    31,
      31,     3,     4,     5,    33,   149,   131,   151,    33,    22,
      12,    11,   156,    15,   158,    11,   121,    19,    20,   256,
      33,    23,    22,   167,   168,   169,   131,   132,   133,    31,
      32,   268,    32,    11,    34,    33,    32,    11,    34,    31,
       3,     4,     5,   187,   149,   189,   151,    31,    22,    12,
      11,   156,    15,   158,   291,    33,    19,    20,    32,    11,
      23,   131,    11,   133,   169,    11,    11,    31,    31,    32,
      22,    32,   216,   217,   218,    11,    22,     3,     4,     5,
      32,   151,    34,    32,   189,    34,   156,    33,    33,   233,
     327,    31,   236,    19,    20,    11,    32,    23,   335,   304,
      31,    31,     3,     4,     5,    31,    22,    11,   233,   253,
      31,    18,    11,   218,   319,   352,    11,   261,    19,    20,
     264,   265,   266,   267,    11,    32,     0,    22,   233,    33,
      31,   236,    11,    32,   278,    34,    18,    32,   394,    34,
     396,   394,     0,   396,    18,    32,   290,   394,   253,   396,
      32,   394,   296,   396,    33,   299,   300,   301,   302,   303,
      18,    33,    33,   307,   420,   309,   394,   420,   396,   321,
     394,   427,   396,   420,   427,   319,    11,   420,    11,   394,
     427,   396,   326,   253,   427,   290,    11,    22,    33,    22,
      25,   394,   420,   396,   319,    20,   420,    22,   303,   427,
      25,    11,   307,   427,   309,   420,    11,   351,    33,     3,
       4,     5,   427,   365,   319,    29,   421,   420,    12,    11,
      18,   326,    11,    33,   427,    19,    20,    11,    33,    23,
      22,    20,    21,    22,    32,    31,    25,    31,    22,   309,
      32,    25,   394,    32,   396,    34,   351,    75,     0,    33,
     394,   395,   396,    16,   394,   394,   396,   396,    19,   394,
     394,   396,   396,    11,    27,    93,    18,   419,   420,   394,
     422,   396,    35,    36,    37,   427,   420,    33,    41,    11,
     420,   420,    11,   427,    32,   420,   420,   427,   427,   394,
     395,   396,   427,   427,   122,   420,    19,     3,     4,     5,
      11,    33,   427,    32,    11,    34,    12,   403,    71,    15,
      32,    22,    34,    19,    20,   420,    79,    23,    81,    11,
     416,    32,   427,    86,   394,    31,   396,     3,     4,     5,
      22,    94,    95,    96,    97,    32,    12,    34,    11,    15,
      32,    11,    34,    19,    20,    11,    32,    23,    34,    11,
     420,    11,    22,    11,    26,    31,    32,   427,   121,    32,
      22,    34,    32,     3,     4,     5,    11,    33,   131,   132,
     133,    33,    12,    33,    32,    15,   204,    33,    16,    19,
      20,    11,     0,    23,    32,    32,   149,    32,   151,    27,
      75,    31,    32,   156,    33,   158,    11,    32,    36,    37,
      18,    11,    32,    41,   167,   168,   169,     0,    93,    32,
      20,    21,    22,    32,     0,    25,    32,    32,     3,     4,
       5,    31,    32,   251,    34,    18,   189,    12,   256,     0,
      15,    11,    18,    71,    19,    20,    33,   122,    23,    33,
     268,    79,    22,    81,     0,    25,    31,    18,    86,     3,
       4,     5,    32,   216,   217,   218,    94,    95,    96,     3,
       4,     5,    18,   291,    33,    19,    20,    75,    12,    23,
     233,    15,    32,   236,    34,    19,    20,    31,    33,    23,
       3,     4,     5,   121,    32,    93,    34,    31,    19,    12,
     253,   319,    15,   131,   132,   133,    19,    20,   261,   327,
      23,   264,   265,   266,   267,    11,    32,   335,    31,    13,
      14,   149,    32,   151,   122,    19,    33,    31,   156,   204,
     158,    11,    11,    32,   352,    34,    32,   290,    34,    31,
     168,   169,    32,   296,    34,    31,   299,   300,   301,   302,
     303,    11,    32,    32,   307,    34,   309,    31,     3,     4,
       5,   189,    31,     3,     4,     5,   319,    12,    13,    14,
      15,    32,    12,   326,    19,    20,   251,    11,    23,    19,
      20,   256,    32,    23,    34,    32,    31,    34,    11,   217,
     218,    31,    31,   268,    11,    32,    31,    34,   351,    11,
      32,     3,     4,     5,    31,   233,   204,    11,   236,    32,
      12,    13,    14,    15,    11,    32,   291,    19,    20,    33,
      32,    23,    34,    31,    11,   253,    31,    11,    32,    31,
      34,    31,    31,   261,    11,    32,   264,   265,   266,    31,
      11,   394,   395,   396,   319,    32,    31,    34,    32,   277,
      34,    31,   327,   251,    33,    32,    31,    34,   256,    11,
     335,    32,   290,    34,    31,    16,    26,   420,   296,    31,
     268,   299,   300,   301,   427,   303,    27,   352,    31,   307,
      32,   309,    31,    11,    31,    36,    37,     3,     4,     5,
      41,   319,    20,   291,    22,    31,    12,    25,   326,    15,
      33,    19,    31,    19,    20,    33,    16,    23,     3,     4,
       5,    27,    28,    32,    31,    31,    29,    27,    11,    11,
      71,   319,    33,   351,    19,    20,    36,    37,    79,   327,
      81,    41,     3,     4,     5,    86,    31,   335,    32,    32,
      32,    12,    32,    94,    95,    32,    32,    29,    19,    20,
      11,    11,    23,    32,   352,    32,    32,     3,     4,     5,
      31,    71,     3,     4,     5,    32,   394,   395,   396,    79,
     121,    81,    32,    19,    20,    11,    86,    23,    19,    20,
     131,   132,   133,    11,    94,    31,     3,     4,     5,    11,
      31,    11,   420,    32,    32,    12,    32,    32,   149,   427,
     151,    32,    19,    20,    32,   156,    23,   158,     3,     4,
       5,   121,    32,    11,    31,    33,    32,   168,   169,    11,
      33,   131,   132,   133,    19,    20,    11,     3,    23,   307,
      11,    11,    -1,     3,     4,     5,    31,    70,   189,   149,
      32,   151,    12,    13,    14,    15,   156,    32,   158,    19,
      20,    32,    32,    23,    11,    11,    -1,    -1,   168,   169,
      11,    31,    -1,    20,    21,    22,   217,   218,    25,    20,
      21,    22,    11,    -1,    25,    32,    32,    34,   188,   189,
      11,    32,   233,    34,    -1,   236,    13,    14,    -1,    20,
      21,    22,    19,    32,    25,    11,    11,    -1,    -1,    11,
      11,    32,   253,    34,    20,    21,    22,   217,   218,    25,
     261,    11,    -1,   264,   265,    11,    32,    32,    34,    11,
      32,    32,    -1,   233,    -1,   276,   236,    -1,    20,    21,
      22,    -1,    32,    25,    11,    -1,    32,    -1,    -1,   290,
      32,    -1,    34,   253,    -1,   296,    -1,    -1,   299,   300,
      11,   261,   303,    11,   264,    32,   307,    -1,   309,    20,
      21,    22,   272,    11,    25,   275,    11,    11,   319,    -1,
      11,    32,    -1,    34,    32,   326,    20,    21,    22,    -1,
     290,    25,    -1,    16,    32,    -1,   296,    32,    32,   299,
      34,    32,    11,   303,    27,    -1,    11,   307,    -1,   309,
     351,    -1,    -1,    36,    37,    20,    21,    22,    41,   319,
      25,    11,    -1,    32,    -1,    -1,   326,    32,    -1,    34,
      20,    21,    22,    13,    14,    25,    11,    -1,    -1,    19,
      -1,    -1,    32,    -1,    34,    20,    21,    22,    71,    -1,
      25,   351,    -1,   394,   395,   396,    79,    32,    81,    34,
      -1,    -1,    -1,    86,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    20,    21,    22,    -1,    -1,    25,   420,
      -1,    -1,    -1,    -1,    -1,    32,   427,    34,    -1,    -1,
      -1,    11,    16,    -1,   394,   395,   396,    -1,   121,    -1,
      20,    21,    22,    27,    -1,    25,    -1,    11,   131,   132,
     133,    -1,    32,    37,    34,    -1,    20,    41,    22,    -1,
     420,    25,    -1,    11,    -1,    -1,   149,   427,   151,    11,
      11,    -1,    20,   156,    22,   158,    -1,    25,    20,    20,
      22,    22,    -1,    25,    25,   168,   169,    71,    -1,    -1,
      32,    32,    34,    34,    -1,    79,     1,    81,     3,     4,
       5,     6,     7,     8,     9,    10,   189,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    11,    -1,    29,    30,    31,    -1,    -1,    11,
      -1,    20,    21,    22,   217,   218,    25,   121,    20,    21,
      22,    16,    31,    25,    33,    -1,    11,   131,   132,   133,
     233,    33,    27,   236,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,    37,    -1,    -1,   149,    41,   151,    33,    -1,
     253,    -1,   156,    11,   158,    -1,    -1,    -1,   261,    -1,
      11,   264,    20,    21,    22,   169,    -1,    25,    26,    20,
      21,    22,    -1,    31,    25,    33,    71,    -1,    -1,    -1,
      11,    -1,    33,    -1,    79,   189,    81,   290,    -1,    20,
      21,    22,    -1,   296,    25,    -1,   299,    -1,    -1,    11,
     303,    -1,    33,    -1,   307,    -1,   309,    -1,    20,    21,
      22,    -1,    -1,    25,   218,    -1,   319,    -1,    -1,    -1,
      16,    33,    -1,   326,    -1,    -1,   121,    -1,    -1,   233,
      -1,    27,   236,    11,    -1,    -1,   131,   132,   133,    -1,
      -1,    37,    20,    21,    22,    41,    -1,    25,   351,   253,
      -1,    11,    -1,    -1,   149,    33,   151,    11,    -1,    -1,
      20,   156,    22,   158,    -1,    25,    20,    21,    22,    -1,
      -1,    25,    32,    -1,   169,    71,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    79,    -1,    81,   290,    11,    -1,    -1,
      -1,   394,   395,   396,   189,    -1,    20,    21,    22,   303,
      -1,    25,    11,   307,    -1,   309,    -1,    -1,    -1,    33,
      -1,    20,    21,    22,    -1,   319,    25,   420,    11,    -1,
      -1,    -1,   326,   218,   427,   121,    -1,    20,    21,    22,
      -1,    -1,    25,    -1,    11,   131,   132,   133,   233,    -1,
      33,   236,    -1,    20,    21,    22,    -1,   351,    25,    -1,
      -1,    -1,    -1,   149,    11,   151,    33,    -1,   253,    -1,
     156,    11,   158,    20,    21,    22,    -1,    -1,    25,    -1,
      20,    21,    22,   169,    -1,    25,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    11,
     394,   395,   396,   189,    -1,   290,    -1,    -1,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,   303,    31,
      32,    -1,   307,    -1,   309,    -1,   420,    -1,    11,    -1,
      -1,    -1,   218,   427,   319,    -1,    -1,    20,    21,    22,
      37,   326,    25,    11,    -1,    -1,    -1,   233,    31,    32,
     236,    11,    20,    21,    22,    -1,    -1,    25,    -1,    11,
      20,    21,    22,    31,    32,    25,   351,   253,    20,    21,
      22,    -1,    32,    25,    71,    -1,    73,    -1,    75,    76,
      77,    78,    79,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   290,    -1,    23,    -1,    -1,   394,
     395,   396,    29,    30,    31,    -1,    -1,   303,    -1,    -1,
      11,   307,    -1,   309,   121,   122,    -1,    -1,    -1,    20,
      21,    22,    -1,   319,    25,   420,    11,    -1,    -1,    -1,
     326,    32,   427,    -1,    37,    20,    21,    22,    -1,    -1,
      25,    -1,   149,    11,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    20,    21,    22,   351,    -1,    25,    -1,    -1,
     167,   168,   169,    -1,    32,    -1,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    79,    11,    -1,    -1,
     187,   188,   189,    11,    -1,    -1,    20,    21,    22,    -1,
      -1,    25,    20,    21,    22,    -1,    -1,    25,   394,   395,
     396,    -1,    -1,    11,    32,    -1,    -1,    -1,    -1,   216,
     217,   218,    20,    21,    22,    -1,    -1,    25,   121,   122,
      -1,    -1,    -1,    31,   420,    -1,    -1,     3,     4,     5,
       6,   427,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,   149,    23,    -1,   256,
     257,    -1,    -1,    29,   261,    31,    -1,   264,   265,   266,
     267,   268,   269,    -1,    -1,   272,   169,    -1,   275,   276,
     277,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,
     287,   288,    -1,   290,   291,   292,   189,    -1,    -1,   296,
      -1,    -1,   299,   300,   301,   302,   303,    11,   305,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    25,   319,    11,    -1,   218,    -1,    -1,    32,   326,
     327,    11,    20,    21,    22,    -1,    -1,    25,   335,    11,
      20,    21,    22,    -1,    32,    25,   343,   344,    20,    21,
      22,    -1,    32,    25,   351,   352,    -1,    -1,    11,    -1,
      32,    -1,    -1,   256,   257,    -1,    -1,    20,    21,    22,
     367,   368,    25,    -1,    11,   268,   269,    -1,    -1,    32,
      -1,    -1,    11,    20,    21,    22,   279,   280,    25,    -1,
      -1,    20,    21,    22,   287,   288,    25,   290,   291,   292,
      -1,    -1,    -1,    32,    -1,    -1,    11,    -1,    -1,    -1,
     303,    -1,   305,    -1,   307,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,   319,    32,    -1,    -1,
      -1,    -1,    -1,   326,   327,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   335,    11,    20,    21,    22,    -1,    -1,    25,
     343,   344,    20,    21,    22,    -1,    32,    25,   351,   352,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   367,   368,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    11,    -1,    23,    -1,    -1,    -1,
      11,    -1,    29,    20,    31,    22,    -1,    11,    25,    20,
      21,    22,    -1,    11,    25,    32,    20,    21,    22,    11,
      -1,    25,    20,    21,    22,    11,    -1,    25,    20,    21,
      22,    11,    -1,    25,    20,    21,    22,    11,    -1,    25,
      20,    21,    22,    11,    -1,    25,    20,    21,    22,    11,
      -1,    25,    20,    21,    22,    -1,    -1,    25,    20,    21,
      22,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    36,    37,    38,    39,    40,    45,    46,    19,
       0,    38,    33,    31,    32,    41,    29,    47,    18,    43,
      44,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    19,    20,    23,    31,    39,    40,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    70,    71,    72,    73,    74,    75,    76,    19,    32,
      34,    31,    31,    31,    63,    31,    31,    31,    31,    31,
      31,    26,    31,    19,    75,    12,    23,    71,    65,     1,
      30,    49,    33,    11,    22,    25,    20,    21,    42,    44,
      65,    19,    64,    55,    65,    33,    19,    55,    56,    58,
      66,    55,    55,    55,    27,    28,    65,    69,    19,    63,
      32,    77,    31,    32,    19,    56,    71,    73,    74,    75,
      47,    32,    33,    32,    32,    32,    32,    32,    32,    32,
      65,    78,    58,    49,    65,    49,    33,    33,    32,    34,
      32,     7,    33,    65,    49,    64,    32,    49,    29,    45,
      46,     3,     4,     5,    12,    15,    19,    20,    23,    31,
      55,    57,    61,    66,    70,    71,    72,    73,    74,    75,
      76,     3,     4,     5,    12,    15,    19,    20,    23,    31,
      57,    61,    66,    70,    71,    72,    73,    74,    75,    76,
      13,    14,    59,    60,    11,    13,    14,    59,    60,    31,
       3,     4,     5,    12,    15,    19,    20,    23,    31,    55,
      57,    61,    66,    70,    71,    72,    73,    74,    75,    76,
       6,     8,     9,    10,    16,    17,    29,    39,    40,    45,
      46,    47,    50,    51,    52,    53,    54,    62,    63,    67,
      68,    11,    19,    48,    33,    31,    31,    31,    31,    75,
      12,    23,    71,    65,    22,    25,    20,    21,    31,    31,
      75,    12,    23,    71,    65,    22,    25,    20,    21,    31,
      31,    13,    14,    19,    56,    59,    60,    31,    31,    32,
      77,    31,    31,    31,    75,    12,    23,    71,    65,    22,
      25,    20,    21,    31,    31,    31,    63,    31,    31,    48,
      33,    31,    33,    13,    14,    19,    56,    59,    60,    26,
      30,    32,    41,    58,    55,    32,    77,    31,    32,    71,
      73,    74,    75,    58,    55,    31,    32,    71,    73,    74,
      75,    55,    55,    31,    31,    55,    55,    78,    58,    55,
      32,    77,    31,    32,    71,    73,    74,    75,    65,    64,
      55,    33,    69,    19,    30,    32,    41,    31,    31,    19,
      56,    63,    64,    65,    47,    43,    32,    32,    78,    58,
      32,    32,    58,    32,    32,    55,    55,    32,    32,    32,
      32,    32,    78,    58,    32,    33,    32,    32,    32,    47,
      43,    55,    55,    32,    32,    32,    32,    32,    32,    32,
      32,    49,    65,    49,    33,    33,    32,    32,    32,    42,
       7,    33,    42,    47,    49,    64,    47,    32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    41,    42,
      40,    40,    43,    43,    44,    45,    46,    47,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    50,    51,    51,    52,    53,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    58,    58,    59,    60,    61,
      62,    63,    63,    63,    64,    65,    65,    65,    65,    66,
      66,    66,    67,    68,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    73,    74,    74,    74,    75,    75,
      75,    75,    77,    76,    76,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     0,
       7,     4,     3,     1,     2,     2,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     7,     9,     3,     1,     3,     3,     1,
       1,     4,     5,     1,     1,     1,     1,     4,     4,     4,
       5,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     1,     1,     1,     3,     1,     2,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     1,
       3,     1,     0,     5,     3,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declarationList  */
#line 118 "bison/clang_syntax.y"
                    {
        tree = (yyval.node);
    }
#line 2364 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 124 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2374 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 129 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2382 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 135 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2390 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 138 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2398 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 144 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2406 "bison/clang_syntax.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 150 "bison/clang_syntax.y"
                           {
        context++;
        pushScopeStack(&scope, context);
    }
#line 2415 "bison/clang_syntax.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 154 "bison/clang_syntax.y"
               {
        populateParams(symbolTable);
    }
#line 2423 "bison/clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleFDeclaration '(' $@1 params ')' $@2 compoundStmt  */
#line 156 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-3].node);
        (yyval.node)->node3 = (yyvsp[0].node);
        popScopeStack(&scope);
    }
#line 2435 "bison/clang_syntax.tab.c"
    break;

  case 11: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 163 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2445 "bison/clang_syntax.tab.c"
    break;

  case 12: /* params: params ',' param  */
#line 171 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2455 "bison/clang_syntax.tab.c"
    break;

  case 13: /* params: param  */
#line 176 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2463 "bison/clang_syntax.tab.c"
    break;

  case 14: /* param: TYPE ID  */
#line 182 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, (yyvsp[-1].token).t_title);
        strcat(auxstr, reset);
        (yyval.node) = createNode(strcat(auxstr," parameter ID"));
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, (yyvsp[-1].token).t_title);
        errors_sem += insertSymbol(symbolTable, 
                        (yyvsp[0].token).t_title, 
                        (yyvsp[-1].token).t_title, 
                        2,
                        (yyvsp[0].token).t_line, 
                        (yyvsp[0].token).t_column,
                        (yyvsp[0].token).t_context);
    }
#line 2483 "bison/clang_syntax.tab.c"
    break;

  case 15: /* simpleVDeclaration: TYPE ID  */
#line 200 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, (yyvsp[-1].token).t_title);
        strcat(auxstr, reset);
        (yyval.node) = createNode(strcat(auxstr," variable ID"));
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, (yyvsp[-1].token).t_title);
        errors_sem += insertSymbol(symbolTable, 
                        (yyvsp[0].token).t_title, 
                        (yyvsp[-1].token).t_title, 
                        0,
                        (yyvsp[0].token).t_line, 
                        (yyvsp[0].token).t_column,
                        (yyvsp[0].token).t_context);
    }
#line 2503 "bison/clang_syntax.tab.c"
    break;

  case 16: /* simpleFDeclaration: TYPE ID  */
#line 218 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, (yyvsp[-1].token).t_title);
        strcat(auxstr, reset);
        (yyval.node) = createNode(strcat(auxstr," function ID"));
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, (yyvsp[-1].token).t_title);
        errors_sem += insertSymbol(symbolTable, 
                        (yyvsp[0].token).t_title, 
                        (yyvsp[-1].token).t_title, 
                        1, 
                        (yyvsp[0].token).t_line, 
                        (yyvsp[0].token).t_column,
                        (yyvsp[0].token).t_context);
    }
#line 2523 "bison/clang_syntax.tab.c"
    break;

  case 17: /* compoundStmt: '{' stmtList '}'  */
#line 235 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2531 "bison/clang_syntax.tab.c"
    break;

  case 18: /* stmtList: stmtList primitiveStmt  */
#line 241 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2541 "bison/clang_syntax.tab.c"
    break;

  case 19: /* stmtList: stmtList error  */
#line 246 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 2549 "bison/clang_syntax.tab.c"
    break;

  case 20: /* stmtList: primitiveStmt  */
#line 249 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2557 "bison/clang_syntax.tab.c"
    break;

  case 21: /* primitiveStmt: exprStmt  */
#line 255 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2565 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: compoundStmt  */
#line 258 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2573 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: condStmt  */
#line 261 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2581 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: iterStmt  */
#line 264 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2589 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: returnStmt  */
#line 267 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2597 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: setStmt  */
#line 270 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2605 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: inOP  */
#line 273 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2613 "bison/clang_syntax.tab.c"
    break;

  case 28: /* primitiveStmt: outOP  */
#line 276 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2621 "bison/clang_syntax.tab.c"
    break;

  case 29: /* primitiveStmt: varDeclaration  */
#line 279 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2629 "bison/clang_syntax.tab.c"
    break;

  case 30: /* primitiveStmt: funcDeclaration  */
#line 282 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2637 "bison/clang_syntax.tab.c"
    break;

  case 31: /* exprStmt: expression ';'  */
#line 288 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2645 "bison/clang_syntax.tab.c"
    break;

  case 32: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 294 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2655 "bison/clang_syntax.tab.c"
    break;

  case 33: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 299 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2666 "bison/clang_syntax.tab.c"
    break;

  case 34: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt  */
#line 308 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2678 "bison/clang_syntax.tab.c"
    break;

  case 35: /* returnStmt: RETURN_KW expression ';'  */
#line 318 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2687 "bison/clang_syntax.tab.c"
    break;

  case 36: /* setStmt: forallOP  */
#line 325 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2695 "bison/clang_syntax.tab.c"
    break;

  case 37: /* pertOP: simpleExp IN_KW ID  */
#line 331 "bison/clang_syntax.y"
                      {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 2707 "bison/clang_syntax.tab.c"
    break;

  case 38: /* pertOP: simpleExp IN_KW setReturner  */
#line 338 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2717 "bison/clang_syntax.tab.c"
    break;

  case 39: /* setReturner: addOP  */
#line 346 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2725 "bison/clang_syntax.tab.c"
    break;

  case 40: /* setReturner: remOP  */
#line 349 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2733 "bison/clang_syntax.tab.c"
    break;

  case 41: /* typeOP: ISSET_KW '(' setParams ')'  */
#line 355 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2742 "bison/clang_syntax.tab.c"
    break;

  case 42: /* typeOP: UN_LOG_OP ISSET_KW '(' setParams ')'  */
#line 359 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2751 "bison/clang_syntax.tab.c"
    break;

  case 43: /* setParams: ID  */
#line 366 "bison/clang_syntax.y"
       {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("is_set parameter");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 2762 "bison/clang_syntax.tab.c"
    break;

  case 44: /* setParams: pertOP  */
#line 372 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2770 "bison/clang_syntax.tab.c"
    break;

  case 45: /* setParams: setReturner  */
#line 375 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2778 "bison/clang_syntax.tab.c"
    break;

  case 46: /* setParams: constOP  */
#line 378 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2786 "bison/clang_syntax.tab.c"
    break;

  case 47: /* addOP: ADD_KW '(' pertOP ')'  */
#line 385 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2795 "bison/clang_syntax.tab.c"
    break;

  case 48: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 392 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2804 "bison/clang_syntax.tab.c"
    break;

  case 49: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 399 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2813 "bison/clang_syntax.tab.c"
    break;

  case 50: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 406 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2823 "bison/clang_syntax.tab.c"
    break;

  case 51: /* expression: assignExp  */
#line 414 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2831 "bison/clang_syntax.tab.c"
    break;

  case 52: /* expression: simpleExp  */
#line 417 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2839 "bison/clang_syntax.tab.c"
    break;

  case 53: /* expression: setReturner  */
#line 420 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2847 "bison/clang_syntax.tab.c"
    break;

  case 54: /* assignExp: ID ASS_OP expression  */
#line 426 "bison/clang_syntax.y"
                         {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("assignment operator");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[0].node);
        typeHandler((yyval.node));
    }
#line 2860 "bison/clang_syntax.tab.c"
    break;

  case 55: /* simpleExp: binLogicalExp  */
#line 437 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2868 "bison/clang_syntax.tab.c"
    break;

  case 56: /* simpleExp: pertOP  */
#line 440 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2876 "bison/clang_syntax.tab.c"
    break;

  case 57: /* simpleExp: selectOP  */
#line 443 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2884 "bison/clang_syntax.tab.c"
    break;

  case 58: /* simpleExp: typeOP  */
#line 446 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2892 "bison/clang_syntax.tab.c"
    break;

  case 59: /* constOP: INT  */
#line 452 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST"BMAG" int"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "int");
    }
#line 2901 "bison/clang_syntax.tab.c"
    break;

  case 60: /* constOP: FLOAT  */
#line 456 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" float"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "float");
    }
#line 2910 "bison/clang_syntax.tab.c"
    break;

  case 61: /* constOP: EMPTY  */
#line 460 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" EMPTY"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "set");
    }
#line 2919 "bison/clang_syntax.tab.c"
    break;

  case 62: /* inOP: IN '(' ID ')' ';'  */
#line 467 "bison/clang_syntax.y"
                      {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, NULL);
    }
#line 2930 "bison/clang_syntax.tab.c"
    break;

  case 63: /* outOP: OUT '(' outConst ')' ';'  */
#line 476 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2940 "bison/clang_syntax.tab.c"
    break;

  case 64: /* outConst: STRING  */
#line 484 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
    }
#line 2949 "bison/clang_syntax.tab.c"
    break;

  case 65: /* outConst: CHAR  */
#line 488 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
    }
#line 2958 "bison/clang_syntax.tab.c"
    break;

  case 66: /* outConst: simpleExp  */
#line 492 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2966 "bison/clang_syntax.tab.c"
    break;

  case 67: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 498 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2977 "bison/clang_syntax.tab.c"
    break;

  case 68: /* binLogicalExp: unLogicalExp  */
#line 504 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2985 "bison/clang_syntax.tab.c"
    break;

  case 69: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 510 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2995 "bison/clang_syntax.tab.c"
    break;

  case 70: /* unLogicalExp: relationalExp  */
#line 515 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3003 "bison/clang_syntax.tab.c"
    break;

  case 71: /* relationalExp: relationalExp REL_OP sumExp  */
#line 521 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3014 "bison/clang_syntax.tab.c"
    break;

  case 72: /* relationalExp: sumExp  */
#line 527 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3022 "bison/clang_syntax.tab.c"
    break;

  case 73: /* sumExp: sumExp SUM_OP mulExp  */
#line 533 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3033 "bison/clang_syntax.tab.c"
    break;

  case 74: /* sumExp: mulExp  */
#line 539 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3041 "bison/clang_syntax.tab.c"
    break;

  case 75: /* mulExp: mulExp MUL_OP factor  */
#line 545 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("*/÷ operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3052 "bison/clang_syntax.tab.c"
    break;

  case 76: /* mulExp: factor  */
#line 551 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3060 "bison/clang_syntax.tab.c"
    break;

  case 77: /* mulExp: SUM_OP factor  */
#line 554 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("signed factor");
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 3070 "bison/clang_syntax.tab.c"
    break;

  case 78: /* factor: ID  */
#line 562 "bison/clang_syntax.y"
       {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("ID");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 3081 "bison/clang_syntax.tab.c"
    break;

  case 79: /* factor: functionCall  */
#line 568 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3089 "bison/clang_syntax.tab.c"
    break;

  case 80: /* factor: '(' simpleExp ')'  */
#line 571 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3097 "bison/clang_syntax.tab.c"
    break;

  case 81: /* factor: constOP  */
#line 574 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3105 "bison/clang_syntax.tab.c"
    break;

  case 82: /* $@3: %empty  */
#line 580 "bison/clang_syntax.y"
           {
        qtdParams = 0;
    }
#line 3113 "bison/clang_syntax.tab.c"
    break;

  case 83: /* functionCall: ID '(' $@3 callParams ')'  */
#line 583 "bison/clang_syntax.y"
                   {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[-1].node);
        qtdHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column);

        // typeHandler($$);
    }
#line 3128 "bison/clang_syntax.tab.c"
    break;

  case 84: /* functionCall: ID '(' ')'  */
#line 593 "bison/clang_syntax.y"
                 {
        qtdParams = 0;
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
    }
#line 3140 "bison/clang_syntax.tab.c"
    break;

  case 85: /* callParams: callParams ',' simpleExp  */
#line 603 "bison/clang_syntax.y"
                            {
        qtdParams++;
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3151 "bison/clang_syntax.tab.c"
    break;

  case 86: /* callParams: simpleExp  */
#line 609 "bison/clang_syntax.y"
                {
        qtdParams++;
        (yyval.node) = (yyvsp[0].node);
    }
#line 3160 "bison/clang_syntax.tab.c"
    break;


#line 3164 "bison/clang_syntax.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 615 "bison/clang_syntax.y"

extern void yyerror(const char* a) {
    printf(BRED"[%d:%d] ", line, column);
    printf("SYNTAX ERROR --> ");
    printf("%s\n"reset, a);
    errors++;
}

extern void qtdHandler(char* title, int line, int column){
    int qtdArgs = findArgs(symbolTable, title);
    if(qtdArgs != qtdParams){
        errors_sem++;
        printf(BRED"[%d:%d] ", line, column);
        printf("SEMANTIC ERROR --> Wrong number of arguments in function call: %s\n"reset, title);
        printf(BRED"\t\t\t EXPECTED: %d\n"reset, qtdArgs);
        printf(BRED"\t\t\t      GOT: %d\n"reset, qtdParams);
    }

}

extern char* scopeHandler(char* title, int line, int column){
    int idx = searchScopeStack(&scope);
    int inContext = 0;
    int st_pos = 0;
    for(int i = 0; i < idx; i++){
        st_pos = searchVarContext(symbolTable, title, scope.stack[i]);
        if(st_pos >= 0){
            // printf("S TYPE DO SCOPE HANDLER ACHOU ISSO AQUI OW %s\n", symbolTable[st_pos].s_type);
            return symbolTable[st_pos].s_type;
        }
    }
    if(!inContext){
        errors_sem++;
        printf(BRED"[%d:%d] ", line, column);
        printf("SEMANTIC ERROR --> Undeclared variable in context: %s\n"reset, title);
    }
    return "";
}

int main(int argc, char **argv){
    errors_sem = 0;
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    initScopeStack(&scope);
    pushScopeStack(&scope, 0);
    if(argc > 1){
        if(fp){
            yyin = fp;
            yyparse();
        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    fclose(yyin);
    
    errors_sem += findMain(symbolTable);

    printf("\nAnalysis completed with %d error(s)\n", errors+errors_sem);
    if(!errors && !errors_sem){
        printf("Correct program.\n");
        printf("\n--------AST--------\n");
        printTree(tree, 0);
    }
    else if(errors){
        printf(BRED"The Abstract Syntax Tree will not be shown if there are syntactic or lexical errors.\n");
        printf(reset);
    }
    else{
        printf("\n--------AST--------\n");
        printTree(tree, 0);
    }
    printf("\n--------Symbol Table--------\n");
    printTable(symbolTable);
    freeTree();
    yylex_destroy();
    return 0;
}
