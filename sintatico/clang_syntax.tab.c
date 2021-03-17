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
#line 4 "clang_syntax.y"

    #include "global_vars.h"
    #include "global_methods.h"
    #include "symbol_table.h"
    // symbol symbolTable[1000];

#line 78 "clang_syntax.tab.c"

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
  YYSYMBOL_REL_OP = 24,                    /* REL_OP  */
  YYSYMBOL_ASS_OP = 25,                    /* ASS_OP  */
  YYSYMBOL_COMMENT = 26,                   /* COMMENT  */
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
  YYSYMBOL_comment = 39,                   /* comment  */
  YYSYMBOL_varDeclaration = 40,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 41,           /* funcDeclaration  */
  YYSYMBOL_params = 42,                    /* params  */
  YYSYMBOL_param = 43,                     /* param  */
  YYSYMBOL_simpleDeclaration = 44,         /* simpleDeclaration  */
  YYSYMBOL_compoundStmt = 45,              /* compoundStmt  */
  YYSYMBOL_localDeclarations = 46,         /* localDeclarations  */
  YYSYMBOL_stmtList = 47,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 48,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 49,                  /* exprStmt  */
  YYSYMBOL_condStmt = 50,                  /* condStmt  */
  YYSYMBOL_iterStmt = 51,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 52,                /* returnStmt  */
  YYSYMBOL_setStmt = 53,                   /* setStmt  */
  YYSYMBOL_pertOP = 54,                    /* pertOP  */
  YYSYMBOL_typeOP = 55,                    /* typeOP  */
  YYSYMBOL_addOP = 56,                     /* addOP  */
  YYSYMBOL_remOP = 57,                     /* remOP  */
  YYSYMBOL_selectOP = 58,                  /* selectOP  */
  YYSYMBOL_forallOP = 59,                  /* forallOP  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_assignExp = 61,                 /* assignExp  */
  YYSYMBOL_simpleExp = 62,                 /* simpleExp  */
  YYSYMBOL_constOP = 63,                   /* constOP  */
  YYSYMBOL_inOP = 64,                      /* inOP  */
  YYSYMBOL_outOP = 65,                     /* outOP  */
  YYSYMBOL_outConst = 66,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 67,             /* binLogicalExp  */
  YYSYMBOL_unLogicalExp = 68,              /* unLogicalExp  */
  YYSYMBOL_relationalExp = 69,             /* relationalExp  */
  YYSYMBOL_sumExp = 70,                    /* sumExp  */
  YYSYMBOL_mulExp = 71,                    /* mulExp  */
  YYSYMBOL_factor = 72,                    /* factor  */
  YYSYMBOL_functionCall = 73,              /* functionCall  */
  YYSYMBOL_callParams = 74,                /* callParams  */
  YYSYMBOL_errors = 75                     /* errors  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  325

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
       0,    32,    32,    33,    37,    38,    39,    43,    44,    45,
      46,    50,    51,    55,    56,    60,    61,    62,    66,    67,
      68,    72,    73,    77,    78,    82,    83,    84,    88,    89,
      90,    94,    95,    96,   100,   101,   102,   103,   104,   105,
     106,   110,   111,   115,   116,   117,   121,   122,   126,   127,
     131,   132,   133,   134,   135,   136,   137,   141,   142,   146,
     147,   151,   152,   156,   157,   161,   162,   163,   167,   168,
     172,   173,   174,   175,   176,   180,   181,   185,   186,   190,
     191,   192,   193,   197,   198,   202,   203,   207,   208,   209,
     210,   214,   215,   216,   220,   221,   222,   226,   227,   228,
     232,   233,   234,   238,   239,   240,   244,   245,   246,   247,
     248,   252,   253,   257,   258,   259,   260,   261,   264
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
  "ID", "SUM_OP", "MUL_OP", "BIN_LOG_OP", "UN_LOG_OP", "REL_OP", "ASS_OP",
  "COMMENT", "STRING", "CHAR", "'{'", "'}'", "'('", "')'", "';'", "','",
  "$accept", "program", "declarationList", "declaration", "comment",
  "varDeclaration", "funcDeclaration", "params", "param",
  "simpleDeclaration", "compoundStmt", "localDeclarations", "stmtList",
  "primitiveStmt", "exprStmt", "condStmt", "iterStmt", "returnStmt",
  "setStmt", "pertOP", "typeOP", "addOP", "remOP", "selectOP", "forallOP",
  "expression", "assignExp", "simpleExp", "constOP", "inOP", "outOP",
  "outConst", "binLogicalExp", "unLogicalExp", "relationalExp", "sumExp",
  "mulExp", "factor", "functionCall", "callParams", "errors", YY_NULLPTR
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

#define YYPACT_NINF (-166)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-119)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,     6,   -18,    88,    25,   137,   177,   262,   286,   392,
     251,    72,   325,  -166,   431,   143,    16,   435,    14,   346,
     379,   385,   405,   699,   492,   505,    14,   122,   912,    -4,
     699,  1160,   850,   540,   437,   479,   943,  1191,   850,   532,
     722,   748,     5,    13,    36,   193,    40,    43,    44,    56,
      70,    77,   727,    76,   546,   371,  1222,  1253,  1284,  1315,
    1346,  1377,  1408,  1439,    84,    89,    97,   102,  1470,   103,
     109,    71,  2041,   117,   121,   189,   204,    -2,  2119,  2049,
    2055,  2069,   786,   624,   371,    27,   411,   125,   126,   308,
     148,   411,   411,   476,   295,   180,   193,    50,   632,   208,
    2074,   172,  2345,  1501,  1532,  1563,  1594,  1625,   194,    76,
      37,    37,    37,   188,   196,   207,   214,   195,   110,   657,
    1656,   243,   270,   274,   662,   299,   318,   327,   332,   364,
    2345,   369,   373,   490,   493,   516,   612,  2088,  1687,   257,
    2131,  2074,  2093,  2074,  2107,  2074,    18,   481,    34,   387,
     393,   400,   419,   415,   418,   425,  2112,    99,   974,   429,
    1718,   412,   583,   628,   612,    34,   101,   433,  1749,   420,
      34,  1780,   635,   451,   633,   881,   459,  1005,   819,   699,
     362,  2158,  2164,  2172,  2150,   481,   371,  2178,   142,   150,
     355,   615,  2186,  2192,  2200,  2126,  2354,  2359,  2368,  2373,
    2340,   371,   371,  2382,   159,   238,   365,  2449,  2387,  2396,
    2401,   454,   753,   212,  2206,  2218,  2145,   590,   371,  2223,
     261,   267,   149,   760,  2230,  2235,  2242,   475,    50,    50,
    1036,   699,  1067,   568,  2247,  1811,  1842,   470,   478,   485,
     660,   511,   699,  1873,    50,   213,  2252,   506,   481,   290,
     290,   290,    50,   279,  2410,   517,   371,   424,   424,   424,
    2266,   281,  2271,   525,   590,   626,   626,   626,   536,   692,
     707,   699,  1904,   350,  1935,  1966,   733,  2276,   275,   701,
    2252,  2281,  2252,  2286,  2252,   779,  2415,   320,  2452,  2410,
    2424,  2410,  2429,  2410,  2300,   316,  2081,  2271,  2305,  2271,
    2312,  2271,  2317,   780,  1997,  1098,   477,   538,  2327,   541,
     542,   551,   555,   564,  2438,  2028,  2322,  2443,  1129,   295,
     592,   600,   606,   609,   617
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,   642,  -166,     3,  -166,  -166,   595,    49,
     -14,  -165,   -17,  -166,  -166,  -166,  -166,  -166,  -166,   444,
    -166,  -166,  -166,  -166,  -166,   -35,   -83,   -34,   312,   183,
     382,   345,    33,   489,   514,   423,   354,   224,    96,  -113,
       0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    28,     9,    19,    20,    29,
      56,    30,    31,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   203,    73,
      74,   129,   204,   205,   206,   207,   208,   209,   210,   135,
      82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    12,   115,     8,    24,    15,  -118,  -118,     8,   -95,
      87,    88,    33,    37,   242,   174,    22,   172,    25,   230,
     -95,   101,   110,    32,  -118,    13,    25,    35,   211,   177,
      38,   -95,  -118,    36,   173,   235,    84,  -118,   195,  -118,
      39,    40,    41,    23,    85,    89,   114,   231,    18,    10,
     113,   172,   118,   100,    10,   102,    98,   118,   118,   118,
     128,   132,    88,   179,    75,    21,   271,    86,    55,   133,
      75,    90,    -3,    -6,    91,    92,    21,   195,   188,    39,
      40,    41,   108,   169,   102,   116,   119,    93,   -11,   -11,
      -6,   119,   119,   119,   130,    98,    89,   136,    -6,    53,
     172,    94,   237,   -24,   -71,   -24,   -11,    55,    95,   100,
     141,   143,   145,   159,   -11,   269,   270,   103,   162,   220,
     238,   227,   104,   172,   220,   220,   220,    81,     1,   188,
     105,   276,   158,    81,   160,   106,   107,    -2,     1,   285,
     173,   194,   -70,   -10,   -10,     2,   232,   234,   236,    81,
     -72,   168,   247,     3,   -73,     2,   171,   164,   120,   -71,
     -95,   -10,   243,     3,   248,   236,   239,   121,   255,   -10,
     236,   -95,   -92,   265,   -24,   -77,   -24,    -5,    -5,    32,
     188,   256,   226,   -92,   263,   246,   102,   226,   226,   226,
     310,   -77,   194,   134,   180,    -5,   181,   182,   183,   131,
     -77,   254,   102,    -5,   137,    81,    81,    81,    81,    50,
      51,   109,   184,   138,   272,   -92,   185,   262,   102,   -94,
     146,    96,   -77,   -79,   186,   274,   -92,   148,   136,   136,
     -94,    32,   -79,   -79,   -79,   -94,   -79,   -92,   309,   311,
     147,   -94,    38,   194,   136,    36,   -94,   -76,   246,   280,
     282,   284,   136,   163,   304,    80,   254,   289,   291,   293,
     -92,    80,    -9,    -9,   262,   297,   299,   301,   -91,   193,
     -92,    38,   -77,   314,    36,   149,    75,    80,   -92,   -91,
      -9,   194,    16,   264,    17,   128,    -7,    -7,    -9,   -92,
     -91,   180,   -94,   181,   182,   183,   196,   -91,   197,   198,
     199,   -94,   150,   -94,    -7,    75,   151,    75,   -91,   233,
     225,   -94,    -7,   226,   200,   225,   225,   225,   201,   130,
     193,   186,   126,   127,   134,   134,   202,   -91,   -82,   -82,
     -82,   153,   -82,    80,    80,    80,   144,    75,   -91,    81,
     134,   -74,   -91,    72,   194,   194,   194,   194,   134,    72,
     -87,   196,   -91,   197,   198,   199,   -23,   187,   -23,   -88,
     226,   226,   226,   226,   -89,    72,   306,   307,    81,   308,
      81,   193,   196,   201,   197,   198,   199,   -95,    26,   249,
      27,   202,  -118,  -118,  -118,    79,  -118,   -95,   -95,   257,
     200,    79,    -8,    -8,   201,  -118,   154,   -95,   219,   192,
      81,   155,   202,   219,   219,   219,   -75,    79,   187,   193,
      -8,   -19,   212,   -19,   213,   214,   215,   -21,    -8,   -21,
     -59,    72,    72,    72,    72,   196,   -61,   197,   198,   199,
     216,    -4,    -4,   -63,   217,   -13,   -13,   -20,   161,   -20,
     224,   225,   218,   200,   167,   224,   224,   224,   -65,    -4,
     192,   -85,   170,   -13,    78,   202,   312,    -4,   -83,   187,
      78,   -13,   166,    79,    79,   142,   -66,    80,   191,   -18,
     240,   -18,   193,   193,   193,   283,    78,   212,   241,   213,
     214,   215,   180,   292,   181,   182,   183,  -118,   225,   225,
     225,   300,   -16,   -16,   268,   124,    80,   187,    80,   217,
     233,   192,  -118,   273,   185,   -27,   -27,   218,   319,   223,
     -16,   -22,   186,   -22,   223,   223,   223,   -76,   -16,   191,
      76,   229,  -114,   -27,  -114,  -116,    76,  -116,    80,   219,
     117,   -27,    78,   140,   189,   122,   123,   125,   277,   192,
     -15,   -15,    99,   -79,   -23,    77,   -26,   -26,   156,   286,
     157,    77,   -79,   -79,   -79,    72,   -79,   294,   -15,   190,
     187,   187,   187,   187,   -26,   -79,   -15,    77,   -57,   320,
     191,   224,   -26,   -75,   -70,   221,   219,   219,   219,   219,
     221,   221,   221,   -71,    72,   189,    72,   -72,  -106,  -106,
    -106,   260,  -106,   213,   214,   215,   -73,    79,   139,   244,
     222,  -106,   192,   192,   281,   222,   222,   222,   191,   216,
     190,   322,   290,   217,   229,  -113,    72,  -113,   224,   224,
     298,   218,    34,    77,   -25,   -25,    79,   260,    79,   213,
     214,   215,   323,  -118,  -118,   250,   189,   -98,   324,   -98,
     223,   -85,   -25,  -106,  -112,   216,  -112,    14,   -98,   -83,
     -25,  -118,  -106,  -106,  -106,   313,  -106,   218,    79,  -118,
    -115,   190,  -115,    97,   321,  -106,    78,  -118,   -78,  -118,
       0,   191,   279,  -106,   245,     0,     0,   -82,   -82,   -82,
     288,   -82,  -106,  -106,  -106,     0,  -106,   223,   296,   -58,
     253,     0,   -23,   228,   -23,    78,   152,    78,     0,   190,
     175,     0,   -32,   -32,   -32,   -32,   261,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   176,   -32,     0,
       0,   250,   -32,   -97,   302,   -97,   157,    78,   -32,   -32,
     -32,   222,    76,   -80,   -97,     0,     0,   278,  -106,   303,
       0,   157,   -80,   -80,   -80,   287,   -80,  -106,  -106,  -106,
       0,  -106,    96,   295,     0,   -80,     0,    77,    97,   -81,
    -106,    76,   190,    76,  -118,   316,     0,   157,   -81,   -81,
     -81,   -98,   -81,  -118,  -118,  -118,     0,  -118,   222,     0,
     266,   -81,   -98,     0,   -98,  -118,    77,   -27,    77,   -27,
     -27,   -27,   -27,    76,   -27,   -27,   -27,   -78,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -82,   -82,   -82,   -27,
     -82,   317,  -111,   157,  -111,   -27,   -27,   -27,    77,   -60,
    -118,     0,  -118,  -118,  -118,  -118,     0,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,     0,  -118,  -118,
    -118,  -118,  -118,  -118,     0,     0,     0,     0,  -118,  -118,
    -118,   -14,  -118,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
       0,     0,     0,   -14,     0,     0,     0,     0,     0,   -14,
     -14,   -14,  -118,   -24,  -118,  -118,  -118,  -118,     0,  -118,
    -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,     0,     0,     0,  -118,     0,     0,     0,     0,     0,
    -118,  -118,  -118,   -29,  -118,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -28,     0,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -43,     0,   -43,   -43,   -43,
     -43,   165,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,     0,     0,     0,   -43,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -13,     0,   -13,   -13,
     -13,   -13,     0,   -13,   -13,   -13,     0,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,     0,     0,     0,   -13,     0,
       0,     0,     0,     0,   -13,   -13,   -13,  -118,     0,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,     0,  -118,  -118,
    -118,  -118,  -118,  -118,     0,  -118,     0,     0,     0,  -118,
       0,     0,     0,     0,     0,  -118,  -118,  -118,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,     0,     0,     0,
     -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,     0,
       0,   -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
       0,     0,   -25,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   178,     0,    39,    40,    41,    42,     0,    43,    44,
      45,     0,    46,    47,    48,    49,    50,    51,     0,    52,
       0,     0,     0,    53,     0,     0,     0,     0,     0,   179,
      54,    55,   178,     0,    39,    40,    41,    42,     0,    43,
      44,    45,     0,    46,    47,    48,    49,    50,    51,     0,
      52,     0,     0,     0,    53,     0,     0,     0,     0,     0,
     179,    83,    55,   -35,     0,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,     0,     0,     0,   -35,     0,     0,     0,     0,
       0,   -35,   -35,   -35,   -31,     0,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,     0,     0,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -34,     0,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,     0,     0,     0,   -34,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -36,     0,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,     0,   -36,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -37,     0,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,     0,     0,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -38,     0,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,     0,
     -38,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -39,
       0,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,     0,
       0,   -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -50,     0,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,     0,
       0,     0,   -50,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -55,     0,   -55,   -55,   -55,   -55,     0,   -55,   -55,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,
       0,     0,     0,   -55,     0,     0,     0,     0,     0,   -55,
     -55,   -55,   -51,     0,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,
     -51,     0,     0,     0,   -51,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -52,     0,   -52,   -52,   -52,   -52,     0,
     -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,
       0,   -52,     0,     0,     0,   -52,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -53,     0,   -53,   -53,   -53,   -53,
       0,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,     0,   -53,     0,     0,     0,   -53,     0,     0,     0,
       0,     0,   -53,   -53,   -53,   -54,     0,   -54,   -54,   -54,
     -54,     0,   -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,     0,   -54,     0,     0,     0,   -54,     0,     0,
       0,     0,     0,   -54,   -54,   -54,   -41,     0,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,     0,     0,     0,   -41,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -48,     0,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,     0,     0,     0,   -48,
       0,     0,     0,     0,     0,   -48,   -48,   -48,   -57,     0,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -57,     0,     0,     0,
     -57,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -68,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,     0,     0,
       0,   -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -44,     0,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,
       0,     0,   -44,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -46,     0,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,     0,     0,   -46,     0,     0,     0,     0,     0,   -46,
     -46,   -46,  -118,     0,  -118,  -118,  -118,  -118,     0,  -118,
    -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,     0,
    -118,     0,     0,     0,  -118,     0,     0,     0,     0,     0,
    -118,  -118,  -118,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,     0,     0,     0,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   178,     0,    39,    40,    41,    42,
       0,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,     0,    52,     0,     0,     0,    53,     0,     0,     0,
       0,     0,   179,   275,    55,   178,     0,    39,    40,    41,
      42,     0,    43,    44,    45,     0,    46,    47,    48,    49,
      50,    51,     0,    52,     0,     0,     0,    53,     0,     0,
       0,     0,     0,   179,   305,    55,   178,     0,    39,    40,
      41,    42,     0,    43,    44,    45,     0,    46,    47,    48,
      49,    50,    51,     0,    52,     0,     0,     0,    53,     0,
       0,     0,     0,     0,   179,   315,    55,   -26,     0,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   178,     0,
      39,    40,    41,    42,     0,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,     0,    52,     0,     0,     0,
      53,     0,     0,     0,     0,     0,   179,   318,    55,   -25,
       0,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,
       0,   -25,  -109,     0,     0,     0,     0,   -25,   -25,   -25,
    -101,  -109,  -109,  -109,     0,  -109,  -104,     0,     0,  -101,
     112,  -101,     0,  -101,  -109,  -104,  -104,  -104,     0,  -104,
    -107,     0,  -101,     0,     0,   -82,     0,     0,  -104,  -107,
    -107,  -107,   -97,  -107,   -82,   -82,   -82,     0,   -82,  -108,
       0,   266,  -107,   -97,  -100,   -97,     0,   -82,  -108,  -108,
    -108,     0,  -108,  -100,   112,  -100,     0,  -100,  -103,     0,
       0,  -108,     0,  -111,     0,     0,  -100,  -103,  -103,  -103,
     -98,  -103,  -111,  -111,  -111,     0,  -111,  -118,     0,   111,
    -103,   -98,   -97,   -98,     0,  -111,  -118,  -118,  -118,     0,
    -118,   111,   -98,   -97,     0,   -97,  -106,     0,     0,  -118,
       0,     0,     0,     0,   -97,  -106,  -106,  -106,     0,  -106,
    -106,  -106,  -106,     0,  -106,    96,   228,     0,   -79,   -79,
     -79,   244,   -79,  -106,   -80,   -80,   -80,     0,   -80,     0,
       0,   -79,   -81,   -81,   -81,     0,   -81,   -80,  -109,  -109,
    -109,     0,  -109,     0,     0,   -81,  -101,   251,  -101,     0,
    -101,  -109,  -104,  -104,  -104,     0,  -104,   -80,     0,  -101,
    -107,  -107,  -107,     0,  -107,  -104,   -80,   -80,   -80,   -81,
     -80,     0,     0,  -107,  -109,     0,     0,     0,   -81,   -81,
     -81,  -101,   -81,  -109,  -109,  -109,  -104,  -109,     0,     0,
    -101,   267,  -101,  -107,  -101,  -104,  -104,  -104,     0,  -104,
       0,     0,  -107,  -107,  -107,     0,  -107,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,     0,   -82,  -118,     0,     0,
     -78,     0,   -82,     0,     0,   -82,  -118,  -118,  -118,     0,
    -118,   -82,   -82,   -82,     0,   -82,  -108,  -108,  -108,     0,
    -108,  -100,   251,  -100,     0,  -100,  -103,  -103,  -103,  -108,
    -103,  -108,     0,     0,  -100,     0,  -100,     0,     0,  -103,
    -108,  -108,  -108,  -103,  -108,  -100,   267,  -100,  -111,  -100,
       0,     0,  -103,  -103,  -103,     0,  -103,  -111,  -111,  -111,
       0,  -111,  -111,  -111,  -111,     0,  -111,  -106,  -106,  -106,
       0,  -106,   273,     0,     0,  -111,     0,     0,   252,  -106,
    -106,  -106,  -106,     0,  -106,   -82,   -82,   -82,     0,   -82,
       0,   252,  -106,     0,  -118,  -118,  -118,   -78,  -118,   -79,
     -79,   -79,     0,   -79,     0,     0,  -118,     0,   -80,   -80,
     -80,   -79,   -80,   -81,   -81,   -81,     0,   -81,     0,     0,
     -80,     0,  -109,  -109,  -109,   -81,  -109,  -101,   259,  -101,
       0,  -101,     0,     0,  -109,     0,  -104,  -104,  -104,  -101,
    -104,  -107,  -107,  -107,     0,  -107,     0,     0,  -104,     0,
     -82,   -82,   -82,  -107,   -82,  -108,  -108,  -108,     0,  -108,
       0,     0,   -82,     0,  -100,   259,  -100,  -108,  -100,  -103,
    -103,  -103,     0,  -103,     0,     0,  -100,     0,   -82,   -82,
     -82,  -103,   -82,  -111,  -111,  -111,     0,  -111,     0,   258,
     -74,   -98,   258,   -98,   -97,  -111,   -97,     0,     0,     0,
       0,   -98,     0,     0,   -97
};

static const yytype_int16 yycheck[] =
{
       0,    19,    85,     0,    18,     5,     0,     1,     5,    11,
      45,    45,    26,    30,   179,     1,    16,     1,    18,     1,
      22,    55,    24,    23,    18,     0,    26,    27,     1,    33,
      30,    33,    26,    30,    18,     1,    31,    31,     1,    33,
       3,     4,     5,    29,    31,    45,    19,    29,    32,     0,
      84,     1,    86,    53,     5,    55,    19,    91,    92,    93,
      94,    96,    96,    29,    31,    16,   231,    31,    31,    19,
      37,    31,     0,     1,    31,    31,    27,     1,    45,     3,
       4,     5,    11,   166,    84,    85,    86,    31,     0,     1,
      18,    91,    92,    93,    94,    19,    96,    97,    26,    23,
       1,    31,     1,    31,    33,    33,    18,    31,    31,   109,
     110,   111,   112,   147,    26,   228,   229,    33,    19,    86,
      19,    11,    33,     1,    91,    92,    93,    31,     1,    96,
      33,   244,   146,    37,   148,    33,    33,     0,     1,   252,
      18,    45,    33,     0,     1,    18,   146,   147,   148,    53,
      33,   165,   186,    26,    33,    18,   170,   157,    33,    33,
      11,    18,   179,    26,    22,   165,   166,    19,   202,    26,
     170,    22,    22,    24,    31,    33,    33,     0,     1,   179,
     147,    22,    86,    33,   218,   185,   186,    91,    92,    93,
     273,    32,    96,    97,     1,    18,     3,     4,     5,    19,
      11,   201,   202,    26,    32,   109,   110,   111,   112,    16,
      17,    22,    19,    19,   231,    11,    23,   217,   218,    11,
      32,    25,    33,    11,    31,   242,    22,    32,   228,   229,
      22,   231,    20,    21,    22,    22,    24,    33,   273,   273,
      33,    33,   242,   147,   244,   242,    33,    33,   248,   249,
     250,   251,   252,   157,   271,    31,   256,   257,   258,   259,
      22,    37,     0,     1,   264,   265,   266,   267,    11,    45,
      32,   271,    11,   273,   271,    32,   243,    53,    11,    22,
      18,   185,    31,    22,    33,   319,     0,     1,    26,    22,
      33,     1,    11,     3,     4,     5,     1,    22,     3,     4,
       5,    22,    32,    22,    18,   272,    32,   274,    33,    19,
      86,    32,    26,   217,    19,    91,    92,    93,    23,   319,
      96,    31,    27,    28,   228,   229,    31,    11,    20,    21,
      22,    32,    24,   109,   110,   111,   112,   304,    22,   243,
     244,    33,    22,    31,   248,   249,   250,   251,   252,    37,
      32,     1,    32,     3,     4,     5,    31,    45,    33,    32,
     264,   265,   266,   267,    32,    53,    16,    17,   272,    19,
     274,   147,     1,    23,     3,     4,     5,    22,    32,    24,
      34,    31,    20,    21,    22,    31,    24,    22,    33,    24,
      19,    37,     0,     1,    23,    33,    32,    32,    86,    45,
     304,    32,    31,    91,    92,    93,    33,    53,    96,   185,
      18,    32,     1,    34,     3,     4,     5,    32,    26,    34,
      33,   109,   110,   111,   112,     1,    33,     3,     4,     5,
      19,     0,     1,    33,    23,     0,     1,    32,    19,    34,
      86,   217,    31,    19,    32,    91,    92,    93,    33,    18,
      96,    33,    32,    18,    31,    31,   273,    26,    33,   147,
      37,    26,    33,   109,   110,   111,    33,   243,    45,    32,
      19,    34,   248,   249,   250,   251,    53,     1,    19,     3,
       4,     5,     1,   259,     3,     4,     5,    33,   264,   265,
     266,   267,     0,     1,    19,    19,   272,   185,   274,    23,
      19,   147,    32,    25,    23,     0,     1,    31,    31,    86,
      18,    32,    31,    34,    91,    92,    93,    32,    26,    96,
      31,    31,    32,    18,    34,    32,    37,    34,   304,   217,
      86,    26,   109,   110,    45,    91,    92,    93,    32,   185,
       0,     1,    53,    11,    33,    31,     0,     1,    32,    32,
      34,    37,    20,    21,    22,   243,    24,    32,    18,    45,
     248,   249,   250,   251,    18,    33,    26,    53,    32,    31,
     147,   217,    26,    32,    32,    86,   264,   265,   266,   267,
      91,    92,    93,    32,   272,    96,   274,    32,    20,    21,
      22,     1,    24,     3,     4,     5,    32,   243,   109,    31,
      86,    33,   248,   249,   250,    91,    92,    93,   185,    19,
      96,    19,   258,    23,    31,    32,   304,    34,   264,   265,
     266,    31,    27,   109,     0,     1,   272,     1,   274,     3,
       4,     5,    32,     0,     1,    20,   147,    22,    32,    24,
     217,    32,    18,    11,    32,    19,    34,     5,    33,    32,
      26,    18,    20,    21,    22,   273,    24,    31,   304,    26,
      32,   147,    34,    31,   319,    33,   243,    32,    11,    34,
      -1,   248,   249,    11,   185,    -1,    -1,    20,    21,    22,
     257,    24,    20,    21,    22,    -1,    24,   264,   265,    32,
     201,    -1,    32,    31,    34,   272,    34,   274,    -1,   185,
       1,    -1,     3,     4,     5,     6,   217,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    20,    23,    22,    32,    24,    34,   304,    29,    30,
      31,   217,   243,    11,    33,    -1,    -1,   248,    11,    32,
      -1,    34,    20,    21,    22,   256,    24,    20,    21,    22,
      -1,    24,    25,   264,    -1,    33,    -1,   243,    31,    11,
      33,   272,   248,   274,    11,    32,    -1,    34,    20,    21,
      22,    11,    24,    20,    21,    22,    -1,    24,   264,    -1,
      20,    33,    22,    -1,    24,    32,   272,     1,   274,     3,
       4,     5,     6,   304,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    32,    32,    34,    34,    29,    30,    31,   304,    33,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    33,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    33,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    33,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    11,    -1,    -1,    -1,    -1,    29,    30,    31,
      11,    20,    21,    22,    -1,    24,    11,    -1,    -1,    20,
      21,    22,    -1,    24,    33,    20,    21,    22,    -1,    24,
      11,    -1,    33,    -1,    -1,    11,    -1,    -1,    33,    20,
      21,    22,    11,    24,    20,    21,    22,    -1,    24,    11,
      -1,    20,    33,    22,    11,    24,    -1,    33,    20,    21,
      22,    -1,    24,    20,    21,    22,    -1,    24,    11,    -1,
      -1,    33,    -1,    11,    -1,    -1,    33,    20,    21,    22,
      11,    24,    20,    21,    22,    -1,    24,    11,    -1,    20,
      33,    22,    11,    24,    -1,    33,    20,    21,    22,    -1,
      24,    20,    33,    22,    -1,    24,    11,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    33,    20,    21,    22,    -1,    24,
      20,    21,    22,    -1,    24,    25,    31,    -1,    20,    21,
      22,    31,    24,    33,    20,    21,    22,    -1,    24,    -1,
      -1,    33,    20,    21,    22,    -1,    24,    33,    20,    21,
      22,    -1,    24,    -1,    -1,    33,    20,    21,    22,    -1,
      24,    33,    20,    21,    22,    -1,    24,    11,    -1,    33,
      20,    21,    22,    -1,    24,    33,    20,    21,    22,    11,
      24,    -1,    -1,    33,    11,    -1,    -1,    -1,    20,    21,
      22,    11,    24,    20,    21,    22,    11,    24,    -1,    -1,
      20,    21,    22,    11,    24,    20,    21,    22,    -1,    24,
      -1,    -1,    20,    21,    22,    -1,    24,    20,    21,    22,
      -1,    24,    20,    21,    22,    -1,    24,    11,    -1,    -1,
      33,    -1,    11,    -1,    -1,    33,    20,    21,    22,    -1,
      24,    20,    21,    22,    -1,    24,    20,    21,    22,    -1,
      24,    20,    21,    22,    -1,    24,    20,    21,    22,    33,
      24,    11,    -1,    -1,    33,    -1,    11,    -1,    -1,    33,
      20,    21,    22,    11,    24,    20,    21,    22,    11,    24,
      -1,    -1,    20,    21,    22,    -1,    24,    20,    21,    22,
      -1,    24,    20,    21,    22,    -1,    24,    20,    21,    22,
      -1,    24,    25,    -1,    -1,    33,    -1,    -1,    31,    32,
      20,    21,    22,    -1,    24,    20,    21,    22,    -1,    24,
      -1,    31,    32,    -1,    20,    21,    22,    32,    24,    20,
      21,    22,    -1,    24,    -1,    -1,    32,    -1,    20,    21,
      22,    32,    24,    20,    21,    22,    -1,    24,    -1,    -1,
      32,    -1,    20,    21,    22,    32,    24,    20,    21,    22,
      -1,    24,    -1,    -1,    32,    -1,    20,    21,    22,    32,
      24,    20,    21,    22,    -1,    24,    -1,    -1,    32,    -1,
      20,    21,    22,    32,    24,    20,    21,    22,    -1,    24,
      -1,    -1,    32,    -1,    20,    21,    22,    32,    24,    20,
      21,    22,    -1,    24,    -1,    -1,    32,    -1,    20,    21,
      22,    32,    24,    20,    21,    22,    -1,    24,    -1,    20,
      32,    22,    20,    24,    22,    32,    24,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    18,    26,    36,    37,    38,    39,    40,    41,
      44,    75,    19,     0,    38,    75,    31,    33,    32,    42,
      43,    44,    75,    29,    45,    75,    32,    34,    40,    44,
      46,    47,    75,    45,    43,    75,    40,    47,    75,     3,
       4,     5,     6,     8,     9,    10,    12,    13,    14,    15,
      16,    17,    19,    23,    30,    31,    45,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    68,    69,    70,    71,
      72,    73,    75,    30,    31,    31,    31,    60,    62,    75,
      31,    31,    31,    31,    31,    31,    25,    31,    19,    68,
      75,    62,    75,    33,    33,    33,    33,    33,    11,    22,
      24,    20,    21,    62,    19,    61,    75,    54,    62,    75,
      33,    19,    54,    54,    19,    54,    27,    28,    62,    66,
      75,    19,    60,    19,    73,    74,    75,    32,    19,    68,
      70,    75,    71,    75,    72,    75,    32,    33,    32,    32,
      32,    32,    34,    32,    32,    32,    32,    34,    45,    62,
      45,    19,    19,    73,    75,     7,    33,    32,    45,    61,
      32,    45,     1,    18,     1,     1,    18,    33,     1,    29,
       1,     3,     4,     5,    19,    23,    31,    63,    67,    68,
      69,    70,    71,    72,    73,     1,     1,     3,     4,     5,
      19,    23,    31,    63,    67,    68,    69,    70,    71,    72,
      73,     1,     1,     3,     4,     5,    19,    23,    31,    63,
      67,    68,    69,    70,    71,    72,    73,    11,    31,    31,
       1,    29,    75,    19,    75,     1,    75,     1,    19,    75,
      19,    19,    46,    47,    31,    68,    75,    62,    22,    24,
      20,    21,    31,    68,    75,    62,    22,    24,    20,    21,
       1,    68,    75,    62,    22,    24,    20,    21,    19,    74,
      74,    46,    47,    25,    47,    30,    74,    32,    68,    70,
      75,    71,    75,    72,    75,    74,    32,    68,    70,    75,
      71,    75,    72,    75,    32,    68,    70,    75,    71,    75,
      72,    75,    32,    32,    47,    30,    16,    17,    19,    60,
      61,    62,    64,    65,    75,    30,    32,    32,    30,    31,
      31,    66,    19,    32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    38,    38,    38,
      38,    39,    39,    40,    40,    41,    41,    41,    42,    42,
      42,    43,    43,    44,    44,    45,    45,    45,    46,    46,
      46,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    49,    49,    50,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     5,     4,     1,     3,     1,
       1,     1,     1,     2,     1,     4,     3,     1,     2,     1,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     1,     9,     1,     3,     1,
       1,     2,     2,     2,     2,     1,     1,     3,     1,     4,
       1,     4,     1,     4,     1,     4,     6,     1,     5,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     1,     1,     3,     1,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     4,     1,     3,     1,     3,     1,     1,     1
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
#line 32 "clang_syntax.y"
                    {}
#line 2053 "clang_syntax.tab.c"
    break;

  case 3: /* program: errors  */
#line 33 "clang_syntax.y"
             {}
#line 2059 "clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declarationList declaration  */
#line 37 "clang_syntax.y"
                                {}
#line 2065 "clang_syntax.tab.c"
    break;

  case 5: /* declarationList: declaration  */
#line 38 "clang_syntax.y"
                  {}
#line 2071 "clang_syntax.tab.c"
    break;

  case 6: /* declarationList: errors  */
#line 39 "clang_syntax.y"
             {}
#line 2077 "clang_syntax.tab.c"
    break;

  case 7: /* declaration: varDeclaration  */
#line 43 "clang_syntax.y"
                   {}
#line 2083 "clang_syntax.tab.c"
    break;

  case 8: /* declaration: funcDeclaration  */
#line 44 "clang_syntax.y"
                      {}
#line 2089 "clang_syntax.tab.c"
    break;

  case 9: /* declaration: comment  */
#line 45 "clang_syntax.y"
              {}
#line 2095 "clang_syntax.tab.c"
    break;

  case 10: /* declaration: errors  */
#line 46 "clang_syntax.y"
             {}
#line 2101 "clang_syntax.tab.c"
    break;

  case 11: /* comment: COMMENT  */
#line 50 "clang_syntax.y"
            {}
#line 2107 "clang_syntax.tab.c"
    break;

  case 12: /* comment: errors  */
#line 51 "clang_syntax.y"
             {}
#line 2113 "clang_syntax.tab.c"
    break;

  case 13: /* varDeclaration: simpleDeclaration ';'  */
#line 55 "clang_syntax.y"
                          {}
#line 2119 "clang_syntax.tab.c"
    break;

  case 14: /* varDeclaration: errors  */
#line 56 "clang_syntax.y"
             {}
#line 2125 "clang_syntax.tab.c"
    break;

  case 15: /* funcDeclaration: simpleDeclaration '(' params ')' compoundStmt  */
#line 60 "clang_syntax.y"
                                                  {}
#line 2131 "clang_syntax.tab.c"
    break;

  case 16: /* funcDeclaration: simpleDeclaration '(' ')' compoundStmt  */
#line 61 "clang_syntax.y"
                                             {}
#line 2137 "clang_syntax.tab.c"
    break;

  case 17: /* funcDeclaration: errors  */
#line 62 "clang_syntax.y"
             {}
#line 2143 "clang_syntax.tab.c"
    break;

  case 18: /* params: params ',' param  */
#line 66 "clang_syntax.y"
                     {}
#line 2149 "clang_syntax.tab.c"
    break;

  case 19: /* params: param  */
#line 67 "clang_syntax.y"
            {}
#line 2155 "clang_syntax.tab.c"
    break;

  case 20: /* params: errors  */
#line 68 "clang_syntax.y"
             {}
#line 2161 "clang_syntax.tab.c"
    break;

  case 21: /* param: simpleDeclaration  */
#line 72 "clang_syntax.y"
                      {}
#line 2167 "clang_syntax.tab.c"
    break;

  case 22: /* param: errors  */
#line 73 "clang_syntax.y"
             {}
#line 2173 "clang_syntax.tab.c"
    break;

  case 23: /* simpleDeclaration: TYPE ID  */
#line 77 "clang_syntax.y"
            {}
#line 2179 "clang_syntax.tab.c"
    break;

  case 24: /* simpleDeclaration: errors  */
#line 78 "clang_syntax.y"
             {}
#line 2185 "clang_syntax.tab.c"
    break;

  case 25: /* compoundStmt: '{' localDeclarations stmtList '}'  */
#line 82 "clang_syntax.y"
                                       {}
#line 2191 "clang_syntax.tab.c"
    break;

  case 26: /* compoundStmt: '{' stmtList '}'  */
#line 83 "clang_syntax.y"
                       {}
#line 2197 "clang_syntax.tab.c"
    break;

  case 27: /* compoundStmt: errors  */
#line 84 "clang_syntax.y"
             {}
#line 2203 "clang_syntax.tab.c"
    break;

  case 28: /* localDeclarations: localDeclarations varDeclaration  */
#line 88 "clang_syntax.y"
                                     {}
#line 2209 "clang_syntax.tab.c"
    break;

  case 29: /* localDeclarations: varDeclaration  */
#line 89 "clang_syntax.y"
                     {}
#line 2215 "clang_syntax.tab.c"
    break;

  case 30: /* localDeclarations: errors  */
#line 90 "clang_syntax.y"
             {}
#line 2221 "clang_syntax.tab.c"
    break;

  case 31: /* stmtList: stmtList primitiveStmt  */
#line 94 "clang_syntax.y"
                           {}
#line 2227 "clang_syntax.tab.c"
    break;

  case 32: /* stmtList: %empty  */
#line 95 "clang_syntax.y"
      {}
#line 2233 "clang_syntax.tab.c"
    break;

  case 33: /* stmtList: errors  */
#line 96 "clang_syntax.y"
             {}
#line 2239 "clang_syntax.tab.c"
    break;

  case 34: /* primitiveStmt: exprStmt  */
#line 100 "clang_syntax.y"
             {}
#line 2245 "clang_syntax.tab.c"
    break;

  case 35: /* primitiveStmt: compoundStmt  */
#line 101 "clang_syntax.y"
                   {}
#line 2251 "clang_syntax.tab.c"
    break;

  case 36: /* primitiveStmt: condStmt  */
#line 102 "clang_syntax.y"
               {}
#line 2257 "clang_syntax.tab.c"
    break;

  case 37: /* primitiveStmt: iterStmt  */
#line 103 "clang_syntax.y"
               {}
#line 2263 "clang_syntax.tab.c"
    break;

  case 38: /* primitiveStmt: returnStmt  */
#line 104 "clang_syntax.y"
                 {}
#line 2269 "clang_syntax.tab.c"
    break;

  case 39: /* primitiveStmt: setStmt  */
#line 105 "clang_syntax.y"
              {}
#line 2275 "clang_syntax.tab.c"
    break;

  case 40: /* primitiveStmt: errors  */
#line 106 "clang_syntax.y"
             {}
#line 2281 "clang_syntax.tab.c"
    break;

  case 41: /* exprStmt: expression ';'  */
#line 110 "clang_syntax.y"
                   {}
#line 2287 "clang_syntax.tab.c"
    break;

  case 42: /* exprStmt: errors  */
#line 111 "clang_syntax.y"
             {}
#line 2293 "clang_syntax.tab.c"
    break;

  case 43: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt  */
#line 115 "clang_syntax.y"
                                         {}
#line 2299 "clang_syntax.tab.c"
    break;

  case 44: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt  */
#line 116 "clang_syntax.y"
                                                                {}
#line 2305 "clang_syntax.tab.c"
    break;

  case 45: /* condStmt: errors  */
#line 117 "clang_syntax.y"
             {}
#line 2311 "clang_syntax.tab.c"
    break;

  case 46: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt  */
#line 121 "clang_syntax.y"
                                                                      {}
#line 2317 "clang_syntax.tab.c"
    break;

  case 47: /* iterStmt: errors  */
#line 122 "clang_syntax.y"
             {}
#line 2323 "clang_syntax.tab.c"
    break;

  case 48: /* returnStmt: RETURN_KW expression ';'  */
#line 126 "clang_syntax.y"
                             {}
#line 2329 "clang_syntax.tab.c"
    break;

  case 49: /* returnStmt: errors  */
#line 127 "clang_syntax.y"
             {}
#line 2335 "clang_syntax.tab.c"
    break;

  case 50: /* setStmt: pertOP  */
#line 131 "clang_syntax.y"
           {}
#line 2341 "clang_syntax.tab.c"
    break;

  case 51: /* setStmt: typeOP ';'  */
#line 132 "clang_syntax.y"
                 {}
#line 2347 "clang_syntax.tab.c"
    break;

  case 52: /* setStmt: addOP ';'  */
#line 133 "clang_syntax.y"
                {}
#line 2353 "clang_syntax.tab.c"
    break;

  case 53: /* setStmt: remOP ';'  */
#line 134 "clang_syntax.y"
                {}
#line 2359 "clang_syntax.tab.c"
    break;

  case 54: /* setStmt: selectOP ';'  */
#line 135 "clang_syntax.y"
                   {}
#line 2365 "clang_syntax.tab.c"
    break;

  case 55: /* setStmt: forallOP  */
#line 136 "clang_syntax.y"
               {}
#line 2371 "clang_syntax.tab.c"
    break;

  case 56: /* setStmt: errors  */
#line 137 "clang_syntax.y"
             {}
#line 2377 "clang_syntax.tab.c"
    break;

  case 57: /* pertOP: simpleExp IN_KW ID  */
#line 141 "clang_syntax.y"
                       {}
#line 2383 "clang_syntax.tab.c"
    break;

  case 58: /* pertOP: errors  */
#line 142 "clang_syntax.y"
             {}
#line 2389 "clang_syntax.tab.c"
    break;

  case 59: /* typeOP: ISSET_KW '(' ID ')'  */
#line 146 "clang_syntax.y"
                        {}
#line 2395 "clang_syntax.tab.c"
    break;

  case 60: /* typeOP: errors  */
#line 147 "clang_syntax.y"
             {}
#line 2401 "clang_syntax.tab.c"
    break;

  case 61: /* addOP: ADD_KW '(' pertOP ')'  */
#line 151 "clang_syntax.y"
                          {}
#line 2407 "clang_syntax.tab.c"
    break;

  case 62: /* addOP: errors  */
#line 152 "clang_syntax.y"
             {}
#line 2413 "clang_syntax.tab.c"
    break;

  case 63: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 156 "clang_syntax.y"
                             {}
#line 2419 "clang_syntax.tab.c"
    break;

  case 64: /* remOP: errors  */
#line 157 "clang_syntax.y"
             {}
#line 2425 "clang_syntax.tab.c"
    break;

  case 65: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 161 "clang_syntax.y"
                             {}
#line 2431 "clang_syntax.tab.c"
    break;

  case 66: /* selectOP: EXISTS_KW '(' ID ',' ID ')'  */
#line 162 "clang_syntax.y"
                                  {}
#line 2437 "clang_syntax.tab.c"
    break;

  case 67: /* selectOP: errors  */
#line 163 "clang_syntax.y"
             {}
#line 2443 "clang_syntax.tab.c"
    break;

  case 68: /* forallOP: FORALL_KW '(' pertOP ')' compoundStmt  */
#line 167 "clang_syntax.y"
                                          {}
#line 2449 "clang_syntax.tab.c"
    break;

  case 69: /* forallOP: errors  */
#line 168 "clang_syntax.y"
             {}
#line 2455 "clang_syntax.tab.c"
    break;

  case 70: /* expression: assignExp  */
#line 172 "clang_syntax.y"
              {}
#line 2461 "clang_syntax.tab.c"
    break;

  case 71: /* expression: simpleExp  */
#line 173 "clang_syntax.y"
                {}
#line 2467 "clang_syntax.tab.c"
    break;

  case 72: /* expression: inOP  */
#line 174 "clang_syntax.y"
           {}
#line 2473 "clang_syntax.tab.c"
    break;

  case 73: /* expression: outOP  */
#line 175 "clang_syntax.y"
            {}
#line 2479 "clang_syntax.tab.c"
    break;

  case 74: /* expression: errors  */
#line 176 "clang_syntax.y"
             {}
#line 2485 "clang_syntax.tab.c"
    break;

  case 75: /* assignExp: ID ASS_OP expression  */
#line 180 "clang_syntax.y"
                         {}
#line 2491 "clang_syntax.tab.c"
    break;

  case 76: /* assignExp: errors  */
#line 181 "clang_syntax.y"
             {}
#line 2497 "clang_syntax.tab.c"
    break;

  case 77: /* simpleExp: binLogicalExp  */
#line 185 "clang_syntax.y"
                  {}
#line 2503 "clang_syntax.tab.c"
    break;

  case 78: /* simpleExp: errors  */
#line 186 "clang_syntax.y"
             {}
#line 2509 "clang_syntax.tab.c"
    break;

  case 79: /* constOP: INT  */
#line 190 "clang_syntax.y"
        {}
#line 2515 "clang_syntax.tab.c"
    break;

  case 80: /* constOP: FLOAT  */
#line 191 "clang_syntax.y"
            {}
#line 2521 "clang_syntax.tab.c"
    break;

  case 81: /* constOP: EMPTY  */
#line 192 "clang_syntax.y"
            {}
#line 2527 "clang_syntax.tab.c"
    break;

  case 82: /* constOP: errors  */
#line 193 "clang_syntax.y"
             {}
#line 2533 "clang_syntax.tab.c"
    break;

  case 83: /* inOP: IN '(' ID ')'  */
#line 197 "clang_syntax.y"
                  {}
#line 2539 "clang_syntax.tab.c"
    break;

  case 84: /* inOP: errors  */
#line 198 "clang_syntax.y"
             {}
#line 2545 "clang_syntax.tab.c"
    break;

  case 85: /* outOP: OUT '(' outConst ')'  */
#line 202 "clang_syntax.y"
                         {}
#line 2551 "clang_syntax.tab.c"
    break;

  case 86: /* outOP: errors  */
#line 203 "clang_syntax.y"
             {}
#line 2557 "clang_syntax.tab.c"
    break;

  case 87: /* outConst: STRING  */
#line 207 "clang_syntax.y"
           {}
#line 2563 "clang_syntax.tab.c"
    break;

  case 88: /* outConst: CHAR  */
#line 208 "clang_syntax.y"
           {}
#line 2569 "clang_syntax.tab.c"
    break;

  case 89: /* outConst: simpleExp  */
#line 209 "clang_syntax.y"
                {}
#line 2575 "clang_syntax.tab.c"
    break;

  case 90: /* outConst: errors  */
#line 210 "clang_syntax.y"
             {}
#line 2581 "clang_syntax.tab.c"
    break;

  case 91: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 214 "clang_syntax.y"
                                          {}
#line 2587 "clang_syntax.tab.c"
    break;

  case 92: /* binLogicalExp: unLogicalExp  */
#line 215 "clang_syntax.y"
                   {}
#line 2593 "clang_syntax.tab.c"
    break;

  case 93: /* binLogicalExp: errors  */
#line 216 "clang_syntax.y"
             {}
#line 2599 "clang_syntax.tab.c"
    break;

  case 94: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 220 "clang_syntax.y"
                           {}
#line 2605 "clang_syntax.tab.c"
    break;

  case 95: /* unLogicalExp: relationalExp  */
#line 221 "clang_syntax.y"
                    {}
#line 2611 "clang_syntax.tab.c"
    break;

  case 96: /* unLogicalExp: errors  */
#line 222 "clang_syntax.y"
             {}
#line 2617 "clang_syntax.tab.c"
    break;

  case 97: /* relationalExp: relationalExp REL_OP sumExp  */
#line 226 "clang_syntax.y"
                                {}
#line 2623 "clang_syntax.tab.c"
    break;

  case 98: /* relationalExp: sumExp  */
#line 227 "clang_syntax.y"
             {}
#line 2629 "clang_syntax.tab.c"
    break;

  case 99: /* relationalExp: errors  */
#line 228 "clang_syntax.y"
             {}
#line 2635 "clang_syntax.tab.c"
    break;

  case 100: /* sumExp: sumExp SUM_OP mulExp  */
#line 232 "clang_syntax.y"
                         {}
#line 2641 "clang_syntax.tab.c"
    break;

  case 101: /* sumExp: mulExp  */
#line 233 "clang_syntax.y"
             {}
#line 2647 "clang_syntax.tab.c"
    break;

  case 102: /* sumExp: errors  */
#line 234 "clang_syntax.y"
             {}
#line 2653 "clang_syntax.tab.c"
    break;

  case 103: /* mulExp: mulExp MUL_OP factor  */
#line 238 "clang_syntax.y"
                         {}
#line 2659 "clang_syntax.tab.c"
    break;

  case 104: /* mulExp: factor  */
#line 239 "clang_syntax.y"
             {}
#line 2665 "clang_syntax.tab.c"
    break;

  case 105: /* mulExp: errors  */
#line 240 "clang_syntax.y"
             {}
#line 2671 "clang_syntax.tab.c"
    break;

  case 106: /* factor: ID  */
#line 244 "clang_syntax.y"
       {}
#line 2677 "clang_syntax.tab.c"
    break;

  case 107: /* factor: functionCall  */
#line 245 "clang_syntax.y"
                   {}
#line 2683 "clang_syntax.tab.c"
    break;

  case 108: /* factor: '(' simpleExp ')'  */
#line 246 "clang_syntax.y"
                        {}
#line 2689 "clang_syntax.tab.c"
    break;

  case 109: /* factor: constOP  */
#line 247 "clang_syntax.y"
              {}
#line 2695 "clang_syntax.tab.c"
    break;

  case 110: /* factor: errors  */
#line 248 "clang_syntax.y"
             {}
#line 2701 "clang_syntax.tab.c"
    break;

  case 111: /* functionCall: ID '(' callParams ')'  */
#line 252 "clang_syntax.y"
                          {}
#line 2707 "clang_syntax.tab.c"
    break;

  case 112: /* functionCall: errors  */
#line 253 "clang_syntax.y"
             {}
#line 2713 "clang_syntax.tab.c"
    break;

  case 113: /* callParams: callParams ',' ID  */
#line 257 "clang_syntax.y"
                      {}
#line 2719 "clang_syntax.tab.c"
    break;

  case 114: /* callParams: ID  */
#line 258 "clang_syntax.y"
         {}
#line 2725 "clang_syntax.tab.c"
    break;

  case 115: /* callParams: callParams ',' functionCall  */
#line 259 "clang_syntax.y"
                                  {}
#line 2731 "clang_syntax.tab.c"
    break;

  case 116: /* callParams: functionCall  */
#line 260 "clang_syntax.y"
                   {}
#line 2737 "clang_syntax.tab.c"
    break;

  case 117: /* callParams: errors  */
#line 261 "clang_syntax.y"
             {}
#line 2743 "clang_syntax.tab.c"
    break;

  case 118: /* errors: error  */
#line 264 "clang_syntax.y"
         {yyerror(yymsg);}
#line 2749 "clang_syntax.tab.c"
    break;


#line 2753 "clang_syntax.tab.c"

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

#line 267 "clang_syntax.y"




int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    //fillTable(symbolTable);
    if(argc > 1){
        if(fp){
            yyin = fp;
            // yylex();
            yyparse();
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
