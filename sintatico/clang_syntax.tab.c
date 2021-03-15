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
#line 5 "clang_syntax.y"

    #include "global_vars.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    extern int yylex();
    extern FILE *yyin;
    extern int yylex_destroy();
    void yyerror(const char* msg) {
        fprintf(stderr, "%s\n", msg);
    }


#line 86 "clang_syntax.tab.c"

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
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_EMPTY = 6,                      /* EMPTY  */
  YYSYMBOL_IF_KW = 7,                      /* IF_KW  */
  YYSYMBOL_ELSE_KW = 8,                    /* ELSE_KW  */
  YYSYMBOL_FOR_KW = 9,                     /* FOR_KW  */
  YYSYMBOL_FORALL_KW = 10,                 /* FORALL_KW  */
  YYSYMBOL_RETURN_KW = 11,                 /* RETURN_KW  */
  YYSYMBOL_IN_KW = 12,                     /* IN_KW  */
  YYSYMBOL_ISSET_KW = 13,                  /* ISSET_KW  */
  YYSYMBOL_ADD_KW = 14,                    /* ADD_KW  */
  YYSYMBOL_REMOVE_KW = 15,                 /* REMOVE_KW  */
  YYSYMBOL_EXISTS_KW = 16,                 /* EXISTS_KW  */
  YYSYMBOL_OUT = 17,                       /* OUT  */
  YYSYMBOL_IN = 18,                        /* IN  */
  YYSYMBOL_TYPE = 19,                      /* TYPE  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_SUM_OP = 21,                    /* SUM_OP  */
  YYSYMBOL_MUL_OP = 22,                    /* MUL_OP  */
  YYSYMBOL_BIN_LOG_OP = 23,                /* BIN_LOG_OP  */
  YYSYMBOL_UN_LOG_OP = 24,                 /* UN_LOG_OP  */
  YYSYMBOL_REL_OP = 25,                    /* REL_OP  */
  YYSYMBOL_ASS_OP = 26,                    /* ASS_OP  */
  YYSYMBOL_COMMENT = 27,                   /* COMMENT  */
  YYSYMBOL_STRING = 28,                    /* STRING  */
  YYSYMBOL_CHAR = 29,                      /* CHAR  */
  YYSYMBOL_30_ = 30,                       /* '{'  */
  YYSYMBOL_31_ = 31,                       /* '}'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_declarationList = 38,           /* declarationList  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_comment = 40,                   /* comment  */
  YYSYMBOL_varDeclaration = 41,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 42,           /* funcDeclaration  */
  YYSYMBOL_params = 43,                    /* params  */
  YYSYMBOL_param = 44,                     /* param  */
  YYSYMBOL_simpleDeclaration = 45,         /* simpleDeclaration  */
  YYSYMBOL_compoundStmt = 46,              /* compoundStmt  */
  YYSYMBOL_localDeclarations = 47,         /* localDeclarations  */
  YYSYMBOL_stmtList = 48,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 49,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 50,                  /* exprStmt  */
  YYSYMBOL_condStmt = 51,                  /* condStmt  */
  YYSYMBOL_iterStmt = 52,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 53,                /* returnStmt  */
  YYSYMBOL_setStmt = 54,                   /* setStmt  */
  YYSYMBOL_pertOP = 55,                    /* pertOP  */
  YYSYMBOL_typeOP = 56,                    /* typeOP  */
  YYSYMBOL_addOP = 57,                     /* addOP  */
  YYSYMBOL_remOP = 58,                     /* remOP  */
  YYSYMBOL_selectOP = 59,                  /* selectOP  */
  YYSYMBOL_forallOP = 60,                  /* forallOP  */
  YYSYMBOL_expression = 61,                /* expression  */
  YYSYMBOL_assignExp = 62,                 /* assignExp  */
  YYSYMBOL_simpleExp = 63,                 /* simpleExp  */
  YYSYMBOL_constOP = 64,                   /* constOP  */
  YYSYMBOL_inOP = 65,                      /* inOP  */
  YYSYMBOL_outOP = 66,                     /* outOP  */
  YYSYMBOL_outConst = 67,                  /* outConst  */
  YYSYMBOL_logicalExp = 68,                /* logicalExp  */
  YYSYMBOL_relationalExp = 69,             /* relationalExp  */
  YYSYMBOL_sumExp = 70,                    /* sumExp  */
  YYSYMBOL_mulExp = 71,                    /* mulExp  */
  YYSYMBOL_factor = 72,                    /* factor  */
  YYSYMBOL_functionCall = 73               /* functionCall  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1976

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  300

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      32,    33,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    60,    61,    65,    66,    67,    71,    75,
      79,    83,    84,    85,    89,    93,    97,    98,   102,   103,
     107,   108,   112,   113,   114,   115,   116,   117,   121,   125,
     126,   130,   134,   138,   139,   140,   141,   142,   143,   147,
     151,   155,   159,   163,   164,   168,   172,   173,   174,   175,
     176,   180,   184,   185,   189,   190,   191,   195,   199,   203,
     204,   208,   209,   213,   214,   218,   219,   223,   224,   228,
     229,   230,   231,   235
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
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "INT", "FLOAT",
  "EMPTY", "IF_KW", "ELSE_KW", "FOR_KW", "FORALL_KW", "RETURN_KW", "IN_KW",
  "ISSET_KW", "ADD_KW", "REMOVE_KW", "EXISTS_KW", "OUT", "IN", "TYPE",
  "ID", "SUM_OP", "MUL_OP", "BIN_LOG_OP", "UN_LOG_OP", "REL_OP", "ASS_OP",
  "COMMENT", "STRING", "CHAR", "'{'", "'}'", "'('", "')'", "';'", "','",
  "$accept", "program", "declarationList", "declaration", "comment",
  "varDeclaration", "funcDeclaration", "params", "param",
  "simpleDeclaration", "compoundStmt", "localDeclarations", "stmtList",
  "primitiveStmt", "exprStmt", "condStmt", "iterStmt", "returnStmt",
  "setStmt", "pertOP", "typeOP", "addOP", "remOP", "selectOP", "forallOP",
  "expression", "assignExp", "simpleExp", "constOP", "inOP", "outOP",
  "outConst", "logicalExp", "relationalExp", "sumExp", "mulExp", "factor",
  "functionCall", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     123,   125,    40,    41,    59,    44
};
#endif

#define YYPACT_NINF (-215)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -17,    15,    10,    18,    21,    32,    44,    58,    30,
     171,  -215,    -8,    65,   264,    67,   542,    27,   196,   287,
     358,   658,     5,   542,   832,    19,    62,   687,   861,  1665,
    1672,  1680,    64,    69,    74,    26,    88,    89,    97,   105,
     108,   139,  1657,     9,    53,   156,   890,   919,   948,   977,
    1006,  1035,  1064,  1093,    78,    91,   144,   149,  1122,   104,
     119,    42,  1686,   129,   134,    70,   228,   632,  1700,  1705,
    1719,    80,   381,   166,   156,   164,    85,   163,   178,    85,
      85,   319,    59,   182,   393,   264,   591,   362,  1724,   353,
    1151,  1180,  1209,  1238,   206,  1267,     9,   296,   296,   296,
     555,   221,   218,   222,   244,  1296,   227,   242,   255,   616,
     262,   274,   277,   282,   288,   136,   411,  1738,  1325,   378,
    1769,  1743,  1757,   240,   237,   299,   258,   292,   300,   322,
     323,   155,   165,  1762,   716,   327,  1354,   320,   299,   342,
     338,  1383,   361,   299,  1412,   355,   375,   745,   542,   542,
     324,  1790,  1798,   386,   387,  1784,   237,   156,   388,   440,
    1804,   389,   398,   463,   487,   259,  1812,  1818,  1826,   720,
     807,   836,  1943,   156,   156,   865,   770,  1147,   457,   894,
     923,   952,  1832,  1844,  1849,   404,   418,  1776,   285,   156,
     441,   209,  1856,   460,   469,   253,   403,  1712,  1861,  1868,
    1873,   156,   360,    26,   467,    85,   264,   542,   505,  1878,
     237,   425,   468,   433,   477,   542,  1441,   542,  1470,    59,
     483,   264,   596,  1176,   425,   425,   264,  1205,  1234,   360,
     360,    59,   495,   426,   450,  1885,  1263,   285,   435,   435,
     435,  1292,  1126,   485,   489,   523,   509,   542,  1499,   627,
     511,   565,  1528,  1557,  1586,   132,   517,   530,   551,  1892,
    1897,  1902,   569,   981,  1010,  1039,   531,   534,  1916,   484,
    1731,  1921,  1928,  1933,  1615,   774,   545,   549,   573,   554,
     557,  1321,  1068,   558,   576,  1644,   193,   577,   581,  1938,
    1097,   598,   614,   803,    59,   607,   601,   602,   603,   610
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,   636,  -215,     2,  -215,   -76,   605,    12,
      11,  -141,   -22,  -215,  -215,  -215,  -215,  -215,  -215,   604,
    -215,  -215,  -215,  -215,  -215,    63,    43,   328,   -24,    76,
      93,  -214,   419,   444,   303,   232,    34,   130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    21,     8,    18,    19,    22,
      46,    23,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   175,    63,
      64,   113,    65,    66,    67,    68,    69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    28,     7,    10,    62,   256,     7,   215,   217,   116,
      11,   160,     9,    29,    30,    31,     9,   266,    -8,    88,
       1,    12,    16,    17,    -4,    27,    20,    -2,     2,    86,
     150,   151,   152,    43,    -8,    -7,    71,     1,    20,   147,
      -4,    45,    -8,   153,   154,     2,   155,    -5,    -4,   149,
     156,    -7,   192,   -17,   -47,   192,   192,   192,   157,    -7,
      62,    -6,    14,    -5,    15,    96,   247,    97,    -3,   167,
      -9,    -5,    88,    88,    88,    88,   -47,    -6,   158,   180,
     296,   145,   -52,   -10,    -3,    -6,    -9,   111,   112,   182,
     183,   184,    -3,   -52,    -9,   -52,    74,    20,    77,   -10,
     209,    75,   185,   186,   -52,   187,    76,   -10,   180,   188,
     199,   161,    90,   199,   199,   199,    94,   189,   102,   190,
      78,    79,   190,   190,   190,    91,   216,   218,   162,    80,
     246,   -46,   209,   122,   134,   -17,   136,    81,    95,   104,
      82,   -49,   104,   104,   104,   258,   -50,   115,   -51,   141,
     262,   -17,   193,   -46,   144,   193,   193,   193,   167,   -17,
     169,   170,   171,   -49,   235,   168,   -16,   -58,   -50,   194,
     -51,    83,   194,   194,   194,   181,   172,   -57,    92,   160,
     173,   192,   142,    93,   101,   248,   209,   209,   174,   -58,
     167,   180,    62,   252,    62,   254,   -16,   105,   106,   -57,
     209,   209,   114,   -15,   181,   -15,   200,   180,   180,   200,
     200,   200,   -16,   235,   235,   235,   235,    27,    20,    27,
     -16,   -47,   199,   180,    62,   274,   118,   282,    62,    25,
      62,    26,   237,    20,   238,   180,   180,   167,    20,   199,
     -53,   150,   151,   152,   167,   167,   158,   203,   190,    27,
      62,   -53,   124,   -53,   168,   125,   204,   208,   167,   261,
     126,   156,   -53,   180,   265,   -52,   243,   166,   245,   157,
     207,   199,   199,   199,   272,   127,   -52,   179,   -52,   161,
     224,   193,   -64,   145,   -64,   180,   168,   181,   128,   182,
     183,   184,   -40,   -64,   280,   130,   162,   -13,   194,   -13,
      29,    30,    31,   181,   181,   233,   179,   -59,   198,   188,
     -60,   198,   198,   198,   279,   131,    86,   189,   200,   181,
     -12,   132,   -12,   182,   183,   184,   -41,   283,    45,   148,
     121,   181,   181,   168,   -42,   200,   185,   186,   165,   109,
     168,   168,   137,   188,   284,   -54,   -54,   -54,   178,   -54,
     210,   189,   211,   140,   168,   168,   166,   -43,   -54,   181,
     181,   139,   212,   159,   169,   170,   171,   200,   200,   200,
     200,    87,   -44,    89,   -62,   213,   201,   178,   202,   197,
     172,   181,   197,   197,   197,    96,   117,    97,   166,   179,
     -61,   -14,   174,   -14,   143,   214,   -62,    29,    30,    31,
     120,    96,   100,    97,   191,   179,   179,   191,   191,   191,
      40,    41,   -61,    42,   -11,   -53,   -11,    43,   219,   220,
     198,   179,   -46,   -49,   119,    45,   -53,   165,   -53,   150,
     151,   152,   -50,   179,   179,   166,   231,   198,   -69,   182,
     183,   184,   166,   166,   133,   208,    26,   -69,   -69,   -69,
     232,   -69,   135,   -46,   163,   233,   260,   157,   206,   165,
     178,   264,   -62,   210,   176,   211,   -15,   189,   -15,   198,
     198,   271,   -49,   237,   -47,   238,   178,   178,   229,   164,
     -64,   -50,   -64,   179,   222,   223,   -52,   244,   -52,   177,
     -64,   197,   178,   176,   251,   195,   -61,   -52,   195,   195,
     195,   227,   228,   257,   178,   242,   165,   237,   197,   238,
     -53,   -15,   -53,   165,   250,   267,   234,   236,   177,   -51,
     196,   -53,   -39,   196,   196,   196,   -69,   -69,   -69,   241,
     -69,   159,   224,   191,   -63,   -51,   -63,   221,   249,   -69,
     197,   270,   273,   163,    26,   -63,   -21,   -21,   -21,   -21,
     287,   -21,   -21,   -21,   178,   -21,   -21,   -21,   -21,   -21,
     -21,   146,   -21,   288,   291,   269,   -21,   292,   164,   169,
     170,   171,   -21,   -21,   -21,   163,   176,   294,   201,   281,
     202,   295,   276,   277,   289,   278,    26,   -51,   123,   173,
     -46,   -49,   176,   176,   -69,   -69,   -69,   174,   -69,   251,
     164,   177,   290,   -69,    26,   226,   -69,   195,   176,   -50,
     -58,   -58,   -69,   -69,   -69,   -57,   -69,   177,   177,   210,
     176,   211,   163,    85,   195,   -69,   -57,   297,   -69,   163,
     -62,    72,   196,   177,   298,   299,   -58,   -69,   -69,   -69,
      13,   -69,   205,   -57,   -64,   177,     0,   164,   206,   196,
     210,   129,   211,    98,   164,   -64,   195,   -64,     0,     0,
       0,   -61,   -19,   -19,   -19,   -19,   -64,   -19,   -19,   -19,
     176,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     103,   196,   -19,   107,   108,   110,     0,     0,   -19,   -19,
     -19,   -18,   -18,   -18,   -18,   177,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
       0,   -18,     0,     0,     0,     0,     0,   -18,   -18,   -18,
     -29,   -29,   -29,   -29,   138,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,     0,     0,     0,
     -29,   -54,   -54,   -54,     0,   -54,   -29,   -29,   -29,    -9,
      -9,    -9,    -9,   -54,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,    -9,
       0,     0,     0,     0,     0,    -9,    -9,    -9,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,   -52,   -17,   -52,     0,     0,   -17,     0,
       0,     0,     0,   -52,   -17,   -17,   -17,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,     0,     0,     0,   -16,   -55,   -55,
     -55,     0,   -55,   -16,   -16,   -16,    29,    30,    31,    32,
     -55,    33,    34,    35,     0,    36,    37,    38,    39,    40,
      41,     0,    42,     0,     0,     0,    43,   -56,   -56,   -56,
       0,   -56,   148,    44,    45,    29,    30,    31,    32,   -56,
      33,    34,    35,     0,    36,    37,    38,    39,    40,    41,
       0,    42,     0,     0,     0,    43,   -72,   -72,   -72,     0,
     -72,   148,    73,    45,   -23,   -23,   -23,   -23,   -72,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,     0,     0,     0,   -23,   -66,   230,   -66,     0,   -66,
     -23,   -23,   -23,   -20,   -20,   -20,   -20,   -66,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
       0,     0,     0,   -20,   -68,   -68,   -68,     0,   -68,   -20,
     -20,   -20,   -22,   -22,   -22,   -22,   -68,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,     0,
       0,     0,   -22,   -70,   -70,   -70,     0,   -70,   -22,   -22,
     -22,   -24,   -24,   -24,   -24,   -70,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
       0,   -24,   -71,   -71,   -71,     0,   -71,   -24,   -24,   -24,
     -25,   -25,   -25,   -25,   -71,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,     0,
     -25,   -65,   230,   -65,     0,   -65,   -25,   -25,   -25,   -26,
     -26,   -26,   -26,   -65,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,   -26,
     -67,   -67,   -67,     0,   -67,   -26,   -26,   -26,   -27,   -27,
     -27,   -27,   -67,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,     0,     0,   -27,   -72,
     -72,   -72,     0,   -72,   -27,   -27,   -27,   -33,   -33,   -33,
     -33,   -48,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,     0,   -33,   -73,   -73,
     -73,     0,   -73,   -33,   -33,   -33,   -38,   -38,   -38,   -38,
     -73,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,     0,   -38,   229,     0,   -63,
       0,   -63,   -38,   -38,   -38,   -34,   -34,   -34,   -34,   -63,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -53,   -34,   -53,     0,     0,   -34,     0,     0,     0,     0,
     -53,   -34,   -34,   -34,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   201,
     -35,   202,     0,     0,   -35,     0,     0,     0,     0,   259,
     -35,   -35,   -35,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   201,   -36,
     202,     0,     0,   -36,     0,     0,     0,     0,   -62,   -36,
     -36,   -36,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   201,   -37,   202,
       0,     0,   -37,     0,     0,     0,     0,   263,   -37,   -37,
     -37,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   201,   -28,   202,     0,
       0,   -28,     0,     0,     0,     0,   268,   -28,   -28,   -28,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   201,   -32,   202,     0,     0,
     -32,     0,     0,     0,     0,   -61,   -32,   -32,   -32,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   201,   -39,   202,     0,     0,   -39,
       0,     0,     0,     0,   -47,   -39,   -39,   -39,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,     0,     0,   -45,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,     0,     0,     0,   -30,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,     0,     0,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,    29,    30,    31,    32,     0,
      33,    34,    35,     0,    36,    37,    38,    39,    40,    41,
       0,    42,     0,     0,     0,    43,     0,     0,     0,     0,
       0,   148,   253,    45,    29,    30,    31,    32,     0,    33,
      34,    35,     0,    36,    37,    38,    39,    40,    41,     0,
      42,     0,     0,     0,    43,     0,     0,     0,     0,     0,
     148,   255,    45,    29,    30,    31,    32,     0,    33,    34,
      35,     0,    36,    37,    38,    39,    40,    41,     0,    42,
       0,     0,     0,    43,     0,     0,     0,     0,     0,   148,
     275,    45,    29,    30,    31,    32,     0,    33,    34,    35,
       0,    36,    37,    38,    39,    40,    41,     0,    42,     0,
       0,     0,    43,     0,     0,     0,     0,     0,   148,   285,
      45,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,     0,     0,
       0,   -17,     0,     0,     0,     0,     0,   -17,   -17,   -17,
      29,    30,    31,    32,     0,    33,    34,    35,     0,    36,
      37,    38,    39,    40,    41,     0,    42,     0,     0,     0,
      43,     0,     0,     0,     0,     0,   148,   286,    45,    29,
      30,    31,    32,     0,    33,    34,    35,     0,    36,    37,
      38,    39,    40,    41,     0,    42,     0,     0,     0,    43,
       0,     0,     0,     0,     0,   148,   293,    45,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,     0,     0,     0,   -16,   -69,
       0,     0,     0,     0,   -16,   -16,   -16,   -54,   -69,   -69,
     -69,     0,   -69,    84,   -55,     0,   -54,   -54,   -54,    85,
     -54,   -69,   -56,   -55,   -55,   -55,     0,   -55,   -48,   -54,
       0,   -56,   -56,   -56,     0,   -56,   -55,   -72,   -72,   -72,
       0,   -72,   -66,     0,   -56,     0,     0,   -68,     0,     0,
     -48,   -66,    99,   -66,   -64,   -66,   -68,   -68,   -68,     0,
     -68,   -70,     0,   239,   -66,   -64,   -72,   -64,     0,   -68,
     -70,   -70,   -70,   -63,   -70,   -72,   -72,   -72,     0,   -72,
     -71,     0,   239,   -70,   -63,   -65,   -63,     0,   -72,   -71,
     -71,   -71,     0,   -71,   -65,    99,   -65,     0,   -65,   -67,
       0,     0,   -71,     0,   -73,     0,     0,   -65,   -67,   -67,
     -67,   -63,   -67,   -73,   -73,   -73,     0,   -73,   -69,     0,
      98,   -67,   -63,     0,   -63,     0,   -73,   -69,   -69,   -69,
       0,   -69,   205,   -63,     0,   -69,   -69,   -69,   206,   -69,
     203,   -55,   -55,   -55,     0,   -55,   221,     0,   -69,   -56,
     -56,   -56,     0,   -56,   -55,   -72,   -72,   -72,     0,   -72,
       0,     0,   -56,   -66,   225,   -66,     0,   -66,   -48,   -68,
     -68,   -68,     0,   -68,   -54,     0,   -66,   -70,   -70,   -70,
       0,   -70,   -68,   -54,   -54,   -54,   -55,   -54,     0,     0,
     -70,   -56,     0,     0,     0,   -55,   -55,   -55,   -48,   -55,
     -56,   -56,   -56,   -66,   -56,     0,     0,   -72,   -72,   -72,
     -68,   -72,   -66,   240,   -66,   -70,   -66,     0,     0,   -68,
     -68,   -68,     0,   -68,   -70,   -70,   -70,   -72,   -70,   -72,
     -72,   -72,     0,   -72,     0,     0,   -72,   -72,   -72,     0,
     -72,     0,   -72,   -71,   -71,   -71,     0,   -71,   -65,   225,
     -65,     0,   -65,   -67,   -67,   -67,   -71,   -67,   -71,     0,
       0,   -65,     0,   -65,     0,     0,   -67,   -71,   -71,   -71,
     -67,   -71,   -65,   240,   -65,   -73,   -65,     0,     0,   -67,
     -67,   -67,     0,   -67,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,     0,   -73,   -69,   -69,   -69,     0,   -69,     0,
       0,     0,   -73,     0,     0,   226,   -69
};

static const yytype_int16 yycheck[] =
{
      24,    23,     0,    20,    28,   219,     4,   148,   149,    85,
       0,    35,     0,     4,     5,     6,     4,   231,     3,    43,
      19,     3,    30,    12,     3,    23,    14,     0,    27,    20,
       4,     5,     6,    24,    19,     3,    25,    19,    26,    34,
      19,    32,    27,    17,    18,    27,    20,     3,    27,    30,
      24,    19,    76,     0,    12,    79,    80,    81,    32,    27,
      84,     3,    32,    19,    34,    23,   207,    25,     3,    35,
       3,    27,    96,    97,    98,    99,    34,    19,    35,    45,
     294,    19,    12,     3,    19,    27,    19,    28,    29,     4,
       5,     6,    27,    23,    27,    25,    32,    85,    35,    19,
     124,    32,    17,    18,    34,    20,    32,    27,    74,    24,
      76,    35,    34,    79,    80,    81,    12,    32,    75,    76,
      32,    32,    79,    80,    81,    34,   148,   149,    35,    32,
     206,    12,   156,    99,   123,     3,   125,    32,    34,    76,
      32,    12,    79,    80,    81,   221,    12,    84,    12,   138,
     226,    19,    76,    34,   143,    79,    80,    81,   124,    27,
       4,     5,     6,    34,   188,    35,     0,    12,    34,    76,
      34,    32,    79,    80,    81,    45,    20,    12,    34,   203,
      24,   205,   139,    34,    20,   207,   210,   211,    32,    34,
     156,   157,   216,   215,   218,   217,     3,    34,    20,    34,
     224,   225,    20,    32,    74,    34,    76,   173,   174,    79,
      80,    81,    19,   237,   238,   239,   240,   215,   206,   217,
      27,    12,   188,   189,   248,   247,    20,   251,   252,    33,
     254,    35,    23,   221,    25,   201,   202,   203,   226,   205,
      12,     4,     5,     6,   210,   211,   203,    26,   205,   247,
     274,    23,    34,    25,   124,    33,    12,    20,   224,   225,
      33,    24,    34,   229,   230,    12,   203,    35,   205,    32,
      30,   237,   238,   239,   240,    33,    23,    45,    25,   203,
      21,   205,    23,    19,    25,   251,   156,   157,    33,     4,
       5,     6,    34,    34,   251,    33,   203,    33,   205,    35,
       4,     5,     6,   173,   174,    20,    74,    33,    76,    24,
      33,    79,    80,    81,   251,    33,    20,    32,   188,   189,
      33,    33,    35,     4,     5,     6,    34,   251,    32,    30,
      98,   201,   202,   203,    34,   205,    17,    18,    35,    20,
     210,   211,    20,    24,   251,    21,    22,    23,    45,    25,
      23,    32,    25,    33,   224,   225,   124,    34,    34,   229,
     230,    34,    20,    35,     4,     5,     6,   237,   238,   239,
     240,    43,    34,    45,    12,    20,    23,    74,    25,    76,
      20,   251,    79,    80,    81,    23,    33,    25,   156,   157,
      12,    33,    32,    35,    33,    20,    34,     4,     5,     6,
      97,    23,    74,    25,    76,   173,   174,    79,    80,    81,
      17,    18,    34,    20,    33,    12,    35,    24,    32,    32,
     188,   189,    34,    34,    96,    32,    23,   124,    25,     4,
       5,     6,    34,   201,   202,   203,    32,   205,    12,     4,
       5,     6,   210,   211,    33,    20,    35,    21,    22,    23,
      32,    25,   124,    12,    35,    20,   224,    32,    32,   156,
     157,   229,    12,    23,    45,    25,    33,    32,    35,   237,
     238,   239,    12,    23,    34,    25,   173,   174,    21,    35,
      23,    12,    25,   251,   156,   157,    23,    20,    25,    45,
      33,   188,   189,    74,    26,    76,    12,    34,    79,    80,
      81,   173,   174,    20,   201,   202,   203,    23,   205,    25,
      23,    34,    25,   210,   211,    20,   188,   189,    74,    34,
      76,    34,    33,    79,    80,    81,    21,    22,    23,   201,
      25,   203,    21,   205,    23,    12,    25,    32,   210,    34,
     237,   238,    33,   124,    35,    34,     4,     5,     6,     7,
      33,     9,    10,    11,   251,    13,    14,    15,    16,    17,
      18,    19,    20,    33,    33,   237,    24,    33,   124,     4,
       5,     6,    30,    31,    32,   156,   157,    32,    23,   251,
      25,    32,    17,    18,    33,    20,    35,    33,    33,    24,
      33,    33,   173,   174,    21,    22,    23,    32,    25,    26,
     156,   157,    33,    12,    35,    32,    33,   188,   189,    33,
      12,    34,    21,    22,    23,    34,    25,   173,   174,    23,
     201,    25,   203,    32,   205,    34,    12,    20,    12,   210,
      34,    26,   188,   189,    33,    33,    33,    21,    22,    23,
       4,    25,    26,    33,    12,   201,    -1,   203,    32,   205,
      23,    35,    25,    21,   210,    23,   237,    25,    -1,    -1,
      -1,    34,     4,     5,     6,     7,    34,     9,    10,    11,
     251,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      76,   237,    24,    79,    80,    81,    -1,    -1,    30,    31,
      32,     4,     5,     6,     7,   251,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    21,    22,    23,    -1,    25,    30,    31,    32,     4,
       5,     6,     7,    33,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    23,    20,    25,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    33,    30,    31,    32,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    21,    22,
      23,    -1,    25,    30,    31,    32,     4,     5,     6,     7,
      33,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    21,    22,    23,
      -1,    25,    30,    31,    32,     4,     5,     6,     7,    33,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    21,    22,    23,    -1,
      25,    30,    31,    32,     4,     5,     6,     7,    33,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    21,    22,    23,    -1,    25,
      30,    31,    32,     4,     5,     6,     7,    33,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    21,    22,    23,    -1,    25,    30,
      31,    32,     4,     5,     6,     7,    33,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    21,    22,    23,    -1,    25,    30,    31,
      32,     4,     5,     6,     7,    33,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    21,    22,    23,    -1,    25,    30,    31,    32,
       4,     5,     6,     7,    33,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    21,    22,    23,    -1,    25,    30,    31,    32,     4,
       5,     6,     7,    33,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      21,    22,    23,    -1,    25,    30,    31,    32,     4,     5,
       6,     7,    33,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    21,
      22,    23,    -1,    25,    30,    31,    32,     4,     5,     6,
       7,    33,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    21,    22,
      23,    -1,    25,    30,    31,    32,     4,     5,     6,     7,
      33,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    21,    -1,    23,
      -1,    25,    30,    31,    32,     4,     5,     6,     7,    33,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      23,    20,    25,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      33,    30,    31,    32,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    23,
      20,    25,    -1,    -1,    24,    -1,    -1,    -1,    -1,    33,
      30,    31,    32,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    23,    20,
      25,    -1,    -1,    24,    -1,    -1,    -1,    -1,    33,    30,
      31,    32,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    23,    20,    25,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    33,    30,    31,
      32,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    23,    20,    25,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    33,    30,    31,    32,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    23,    20,    25,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    33,    30,    31,    32,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    23,    20,    25,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    33,    30,    31,    32,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    12,
      -1,    -1,    -1,    -1,    30,    31,    32,    12,    21,    22,
      23,    -1,    25,    26,    12,    -1,    21,    22,    23,    32,
      25,    34,    12,    21,    22,    23,    -1,    25,    12,    34,
      -1,    21,    22,    23,    -1,    25,    34,    21,    22,    23,
      -1,    25,    12,    -1,    34,    -1,    -1,    12,    -1,    -1,
      34,    21,    22,    23,    12,    25,    21,    22,    23,    -1,
      25,    12,    -1,    21,    34,    23,    12,    25,    -1,    34,
      21,    22,    23,    12,    25,    21,    22,    23,    -1,    25,
      12,    -1,    21,    34,    23,    12,    25,    -1,    34,    21,
      22,    23,    -1,    25,    21,    22,    23,    -1,    25,    12,
      -1,    -1,    34,    -1,    12,    -1,    -1,    34,    21,    22,
      23,    12,    25,    21,    22,    23,    -1,    25,    12,    -1,
      21,    34,    23,    -1,    25,    -1,    34,    21,    22,    23,
      -1,    25,    26,    34,    -1,    21,    22,    23,    32,    25,
      26,    21,    22,    23,    -1,    25,    32,    -1,    34,    21,
      22,    23,    -1,    25,    34,    21,    22,    23,    -1,    25,
      -1,    -1,    34,    21,    22,    23,    -1,    25,    34,    21,
      22,    23,    -1,    25,    12,    -1,    34,    21,    22,    23,
      -1,    25,    34,    21,    22,    23,    12,    25,    -1,    -1,
      34,    12,    -1,    -1,    -1,    21,    22,    23,    12,    25,
      21,    22,    23,    12,    25,    -1,    -1,    21,    22,    23,
      12,    25,    21,    22,    23,    12,    25,    -1,    -1,    21,
      22,    23,    -1,    25,    21,    22,    23,    12,    25,    21,
      22,    23,    -1,    25,    -1,    -1,    21,    22,    23,    -1,
      25,    -1,    34,    21,    22,    23,    -1,    25,    21,    22,
      23,    -1,    25,    21,    22,    23,    34,    25,    12,    -1,
      -1,    34,    -1,    12,    -1,    -1,    34,    21,    22,    23,
      12,    25,    21,    22,    23,    12,    25,    -1,    -1,    21,
      22,    23,    -1,    25,    21,    22,    23,    -1,    25,    21,
      22,    23,    -1,    25,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    34,    -1,    -1,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    27,    37,    38,    39,    40,    41,    42,    45,
      20,     0,     3,    39,    32,    34,    30,    46,    43,    44,
      45,    41,    45,    47,    48,    33,    35,    41,    48,     4,
       5,     6,     7,     9,    10,    11,    13,    14,    15,    16,
      17,    18,    20,    24,    31,    32,    46,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    68,    69,    70,    71,    72,
      73,    46,    44,    31,    32,    32,    32,    61,    32,    32,
      32,    32,    32,    32,    26,    32,    20,    63,    64,    63,
      34,    34,    34,    34,    12,    34,    23,    25,    21,    22,
      63,    20,    62,    55,    61,    34,    20,    55,    55,    20,
      55,    28,    29,    67,    20,    61,    43,    33,    20,    63,
      70,    71,    72,    33,    34,    33,    33,    33,    33,    35,
      33,    33,    33,    33,    46,    63,    46,    20,     8,    34,
      33,    46,    62,    33,    46,    19,    19,    34,    30,    30,
       4,     5,     6,    17,    18,    20,    24,    32,    62,    63,
      64,    65,    66,    68,    69,    70,    71,    72,    73,     4,
       5,     6,    20,    24,    32,    64,    68,    69,    70,    71,
      72,    73,     4,     5,     6,    17,    18,    20,    24,    32,
      62,    63,    64,    65,    66,    68,    69,    70,    71,    72,
      73,    23,    25,    26,    12,    26,    32,    30,    20,    64,
      23,    25,    20,    20,    20,    47,    48,    47,    48,    32,
      32,    32,    63,    63,    21,    22,    32,    63,    63,    21,
      22,    32,    32,    20,    63,    64,    63,    23,    25,    21,
      22,    63,    70,    61,    20,    61,    43,    47,    48,    63,
      70,    26,    48,    31,    48,    31,    67,    20,    43,    33,
      71,    72,    43,    33,    71,    72,    67,    20,    33,    63,
      70,    71,    72,    33,    48,    31,    17,    18,    20,    61,
      62,    63,    64,    65,    66,    31,    31,    33,    33,    33,
      33,    33,    33,    31,    32,    32,    67,    20,    33,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    41,
      42,    43,    43,    43,    44,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    49,    49,    49,    49,    50,    51,
      51,    52,    53,    54,    54,    54,    54,    54,    54,    55,
      56,    57,    58,    59,    59,    60,    61,    61,    61,    61,
      61,    62,    63,    63,    64,    64,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     1,     1,     1,     2,
       5,     3,     1,     0,     1,     2,     4,     3,     2,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     9,     3,     1,     2,     2,     2,     2,     1,     3,
       4,     4,     4,     4,     6,     5,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     4,     4,     1,
       1,     3,     2,     3,     1,     3,     1,     3,     1,     1,
       1,     3,     1,     4
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declarationList MAIN compoundStmt  */
#line 56 "clang_syntax.y"
                                      {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2033 "clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 60 "clang_syntax.y"
                                {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2039 "clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 61 "clang_syntax.y"
                  {printf("%d", yyvsp[0]);}
#line 2045 "clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 65 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 2051 "clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 66 "clang_syntax.y"
                      {printf("%d", yyvsp[0]);}
#line 2057 "clang_syntax.tab.c"
    break;

  case 7: /* declaration: comment  */
#line 67 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2063 "clang_syntax.tab.c"
    break;

  case 8: /* comment: COMMENT  */
#line 71 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2069 "clang_syntax.tab.c"
    break;

  case 9: /* varDeclaration: simpleDeclaration ';'  */
#line 75 "clang_syntax.y"
                          {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2075 "clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleDeclaration '(' params ')' compoundStmt  */
#line 79 "clang_syntax.y"
                                                  {printf("%d %d %d %d %d", yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2081 "clang_syntax.tab.c"
    break;

  case 11: /* params: params ',' param  */
#line 83 "clang_syntax.y"
                     {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2087 "clang_syntax.tab.c"
    break;

  case 12: /* params: param  */
#line 84 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2093 "clang_syntax.tab.c"
    break;

  case 13: /* params: %empty  */
#line 85 "clang_syntax.y"
      {}
#line 2099 "clang_syntax.tab.c"
    break;

  case 14: /* param: simpleDeclaration  */
#line 89 "clang_syntax.y"
                      {printf("%d", yyvsp[0]);}
#line 2105 "clang_syntax.tab.c"
    break;

  case 15: /* simpleDeclaration: TYPE ID  */
#line 93 "clang_syntax.y"
            {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2111 "clang_syntax.tab.c"
    break;

  case 16: /* compoundStmt: '{' localDeclarations stmtList '}'  */
#line 97 "clang_syntax.y"
                                       {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2117 "clang_syntax.tab.c"
    break;

  case 17: /* compoundStmt: '{' stmtList '}'  */
#line 98 "clang_syntax.y"
                       {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2123 "clang_syntax.tab.c"
    break;

  case 18: /* localDeclarations: localDeclarations varDeclaration  */
#line 102 "clang_syntax.y"
                                     {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2129 "clang_syntax.tab.c"
    break;

  case 19: /* localDeclarations: varDeclaration  */
#line 103 "clang_syntax.y"
                     {printf("%d", yyvsp[0]);}
#line 2135 "clang_syntax.tab.c"
    break;

  case 20: /* stmtList: stmtList primitiveStmt  */
#line 107 "clang_syntax.y"
                           {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2141 "clang_syntax.tab.c"
    break;

  case 21: /* stmtList: %empty  */
#line 108 "clang_syntax.y"
      {}
#line 2147 "clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: exprStmt  */
#line 112 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2153 "clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: compoundStmt  */
#line 113 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 2159 "clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: condStmt  */
#line 114 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2165 "clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: iterStmt  */
#line 115 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2171 "clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: returnStmt  */
#line 116 "clang_syntax.y"
                 {printf("%d", yyvsp[0]);}
#line 2177 "clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: setStmt  */
#line 117 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2183 "clang_syntax.tab.c"
    break;

  case 28: /* exprStmt: expression ';'  */
#line 121 "clang_syntax.y"
                   {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2189 "clang_syntax.tab.c"
    break;

  case 29: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt  */
#line 125 "clang_syntax.y"
                                         {printf("%d %d %d", yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2195 "clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt  */
#line 126 "clang_syntax.y"
                                                                {printf("%d %d %d %d %d", yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2201 "clang_syntax.tab.c"
    break;

  case 31: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt  */
#line 130 "clang_syntax.y"
                                                                      {printf("%d %d %d %d %d", yyvsp[-8], yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2207 "clang_syntax.tab.c"
    break;

  case 32: /* returnStmt: RETURN_KW expression ';'  */
#line 134 "clang_syntax.y"
                             {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2213 "clang_syntax.tab.c"
    break;

  case 33: /* setStmt: pertOP  */
#line 138 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2219 "clang_syntax.tab.c"
    break;

  case 34: /* setStmt: typeOP ';'  */
#line 139 "clang_syntax.y"
                 {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2225 "clang_syntax.tab.c"
    break;

  case 35: /* setStmt: addOP ';'  */
#line 140 "clang_syntax.y"
                {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2231 "clang_syntax.tab.c"
    break;

  case 36: /* setStmt: remOP ';'  */
#line 141 "clang_syntax.y"
                {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2237 "clang_syntax.tab.c"
    break;

  case 37: /* setStmt: selectOP ';'  */
#line 142 "clang_syntax.y"
                   {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2243 "clang_syntax.tab.c"
    break;

  case 38: /* setStmt: forallOP  */
#line 143 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2249 "clang_syntax.tab.c"
    break;

  case 39: /* pertOP: expression IN_KW ID  */
#line 147 "clang_syntax.y"
                        {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2255 "clang_syntax.tab.c"
    break;

  case 40: /* typeOP: ISSET_KW '(' ID ')'  */
#line 151 "clang_syntax.y"
                        {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2261 "clang_syntax.tab.c"
    break;

  case 41: /* addOP: ADD_KW '(' pertOP ')'  */
#line 155 "clang_syntax.y"
                          {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2267 "clang_syntax.tab.c"
    break;

  case 42: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 159 "clang_syntax.y"
                             {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2273 "clang_syntax.tab.c"
    break;

  case 43: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 163 "clang_syntax.y"
                             {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2279 "clang_syntax.tab.c"
    break;

  case 44: /* selectOP: EXISTS_KW '(' ID ',' ID ')'  */
#line 164 "clang_syntax.y"
                                  {printf("%d %d %d %d %d %d", yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2285 "clang_syntax.tab.c"
    break;

  case 45: /* forallOP: FORALL_KW '(' pertOP ')' compoundStmt  */
#line 168 "clang_syntax.y"
                                          {printf("%d %d %d %d %d", yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2291 "clang_syntax.tab.c"
    break;

  case 46: /* expression: assignExp  */
#line 172 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2297 "clang_syntax.tab.c"
    break;

  case 47: /* expression: simpleExp  */
#line 173 "clang_syntax.y"
                {printf("%d", yyvsp[0]);}
#line 2303 "clang_syntax.tab.c"
    break;

  case 48: /* expression: constOP  */
#line 174 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2309 "clang_syntax.tab.c"
    break;

  case 49: /* expression: inOP  */
#line 175 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2315 "clang_syntax.tab.c"
    break;

  case 50: /* expression: outOP  */
#line 176 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2321 "clang_syntax.tab.c"
    break;

  case 51: /* assignExp: ID ASS_OP expression  */
#line 180 "clang_syntax.y"
                         {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2327 "clang_syntax.tab.c"
    break;

  case 52: /* simpleExp: logicalExp  */
#line 184 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2333 "clang_syntax.tab.c"
    break;

  case 53: /* simpleExp: relationalExp  */
#line 185 "clang_syntax.y"
                    {printf("%d", yyvsp[0]);}
#line 2339 "clang_syntax.tab.c"
    break;

  case 54: /* constOP: INT  */
#line 189 "clang_syntax.y"
        {printf("%d", yyvsp[0]);}
#line 2345 "clang_syntax.tab.c"
    break;

  case 55: /* constOP: FLOAT  */
#line 190 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2351 "clang_syntax.tab.c"
    break;

  case 56: /* constOP: EMPTY  */
#line 191 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2357 "clang_syntax.tab.c"
    break;

  case 57: /* inOP: IN '(' ID ')'  */
#line 195 "clang_syntax.y"
                  {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2363 "clang_syntax.tab.c"
    break;

  case 58: /* outOP: OUT '(' outConst ')'  */
#line 199 "clang_syntax.y"
                         {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2369 "clang_syntax.tab.c"
    break;

  case 59: /* outConst: STRING  */
#line 203 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2375 "clang_syntax.tab.c"
    break;

  case 60: /* outConst: CHAR  */
#line 204 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2381 "clang_syntax.tab.c"
    break;

  case 61: /* logicalExp: simpleExp BIN_LOG_OP simpleExp  */
#line 208 "clang_syntax.y"
                                   {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2387 "clang_syntax.tab.c"
    break;

  case 62: /* logicalExp: UN_LOG_OP simpleExp  */
#line 209 "clang_syntax.y"
                          {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2393 "clang_syntax.tab.c"
    break;

  case 63: /* relationalExp: simpleExp REL_OP sumExp  */
#line 213 "clang_syntax.y"
                            {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2399 "clang_syntax.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 214 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2405 "clang_syntax.tab.c"
    break;

  case 65: /* sumExp: sumExp SUM_OP mulExp  */
#line 218 "clang_syntax.y"
                         {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2411 "clang_syntax.tab.c"
    break;

  case 66: /* sumExp: mulExp  */
#line 219 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2417 "clang_syntax.tab.c"
    break;

  case 67: /* mulExp: mulExp MUL_OP factor  */
#line 223 "clang_syntax.y"
                         {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2423 "clang_syntax.tab.c"
    break;

  case 68: /* mulExp: factor  */
#line 224 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2429 "clang_syntax.tab.c"
    break;

  case 69: /* factor: ID  */
#line 228 "clang_syntax.y"
       {printf("%d", yyvsp[0]);}
#line 2435 "clang_syntax.tab.c"
    break;

  case 70: /* factor: functionCall  */
#line 229 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 2441 "clang_syntax.tab.c"
    break;

  case 71: /* factor: '(' simpleExp ')'  */
#line 230 "clang_syntax.y"
                        {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2447 "clang_syntax.tab.c"
    break;

  case 72: /* factor: constOP  */
#line 231 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2453 "clang_syntax.tab.c"
    break;

  case 73: /* functionCall: ID '(' params ')'  */
#line 235 "clang_syntax.y"
                      {printf("%d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1]);}
#line 2459 "clang_syntax.tab.c"
    break;


#line 2463 "clang_syntax.tab.c"

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
  *++yylsp = yyloc;

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
          = {yyssp, yytoken, &yylloc};
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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
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

#line 239 "clang_syntax.y"


int main(int argc, char **argv){
    line = 1;
    column = 1;
    errors = 0;
    FILE *fp = fopen(argv[1], "r");
    if(argc > 1){
        if(fp){
            yyin = fp;
            yylex();
            printf("\nLexical analysis completed with %d error(s)\n", errors);
        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    fclose(yyin);
    yylex_destroy();
    return 0;
}
