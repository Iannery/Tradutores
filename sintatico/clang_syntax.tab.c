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
    symbol symbolTable[1000];
    

#line 79 "clang_syntax.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1895

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

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
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    51,    52,    56,    57,    58,    62,    66,
      70,    74,    75,    76,    80,    84,    88,    89,    93,    94,
      98,    99,   103,   104,   105,   106,   107,   108,   112,   116,
     117,   121,   125,   129,   130,   131,   132,   133,   134,   138,
     142,   146,   150,   154,   155,   159,   163,   164,   165,   166,
     170,   174,   178,   179,   180,   184,   188,   192,   193,   197,
     198,   202,   203,   207,   208,   212,   213,   217,   218,   222,
     223,   224,   225,   229
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
  "mulExp", "factor", "functionCall", YY_NULLPTR
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

#define YYPACT_NINF (-207)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     351,    -3,     9,    44,    15,    37,   102,   117,   124,   -14,
     118,  -207,   214,   -11,   254,   300,   340,   414,    63,    14,
     688,   318,   422,   719,    17,   688,   893,   748,   922,   470,
     566,   573,    34,    62,    90,    26,   171,   186,   190,   207,
     213,   239,   519,    35,   370,    56,   951,   980,  1009,  1038,
    1067,  1096,  1125,  1154,   139,   240,   249,   270,  1183,     3,
      36,    53,   591,    73,    92,   137,   162,   215,   496,   605,
     625,   640,   383,    56,   291,   152,   287,   304,   152,   152,
     312,   -16,   308,   335,   -11,   548,   212,   301,  1212,  1241,
    1270,  1299,   336,  1328,    35,    78,    78,    78,   305,   325,
     323,   328,   356,  1357,   349,   353,   374,   503,   375,   384,
     389,   390,   410,   147,   440,   645,  1386,   278,  1680,  1660,
    1668,   373,   110,   386,   358,   406,   424,   421,   425,   168,
     263,  1674,   777,   429,  1415,   446,   386,   434,   454,  1444,
     451,   386,  1473,   469,   477,   806,   688,   662,  1722,  1728,
     466,   474,  1708,   110,    56,   475,   479,  1736,   480,   486,
      52,    86,   362,   408,  1742,  1750,  1756,   723,   781,   868,
    1863,    56,    56,   897,     2,   193,    66,   648,   926,   955,
     984,   534,  1688,  1770,   490,   495,  1694,   342,    56,   525,
     538,  1775,   540,   550,   141,   142,    67,   611,  1782,  1787,
    1794,    26,   544,   152,   -11,   688,  1714,   539,   441,   542,
     688,  1502,   -16,   552,   -11,   155,   551,   110,   224,   224,
     224,   -11,   231,   564,    56,   400,   400,   400,   -16,   563,
    1700,   167,   568,   342,   407,   407,   407,   565,   569,   593,
     450,   688,  1531,   359,  1560,  1589,   578,   582,   501,  1799,
     265,   556,  1804,  1809,   514,  1013,   275,   657,  1042,  1071,
     585,   586,  1823,   331,   628,  1828,  1835,  1840,  1618,   835,
     574,   589,  1850,   596,   598,   608,   610,   622,  1647,   624,
     638,  1845,  1100,   632,   644,   864,   -16,   666,   655,   667,
     676,   677
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,   672,  -207,     1,  -207,   -74,   691,     0,
      -5,  -143,   -23,  -207,  -207,  -207,  -207,  -207,  -207,   345,
    -207,  -207,  -207,  -207,  -207,    -7,   234,   431,    32,    21,
      87,  -206,   487,   314,   420,   246,   226,   -27,    59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    23,     8,    15,    16,    17,
      46,    25,    26,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   111,    65,    66,    67,    68,    69,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,     7,    28,   210,     9,     7,   246,   143,   165,    -8,
     114,   109,   110,    21,    92,    -2,    10,    13,   179,    14,
      24,   -13,   260,   -13,   224,    24,    27,    -8,    76,   147,
     148,   149,   143,     1,   -51,    -8,    93,    -4,    29,    30,
      31,     2,   150,   151,    11,   152,   179,   -46,   199,   153,
     145,   199,   199,   199,    85,    -4,   158,   154,    43,   167,
     168,   169,   241,    -4,   -47,    73,    45,   157,   102,   -46,
     120,   102,   102,   102,   217,   170,   113,   173,   -62,   171,
     288,    29,    30,    31,   -48,   -51,   -47,   172,   -62,   -62,
     225,   234,    20,    74,   166,   165,   192,    85,   -62,   192,
     192,   192,    -7,   -49,   180,   173,   -48,   191,   -60,    45,
     191,   191,   191,   147,   148,   149,   132,    -5,   134,   -60,
      -7,    75,   159,   211,    -6,   -49,   165,   179,    -7,   206,
     240,   139,   180,   153,   200,    -5,   142,   200,   200,   200,
     248,   154,    -6,    -5,   179,   179,    24,   254,   -51,   -15,
      -6,   -15,   -51,   -60,   157,   181,   182,   183,   -50,    94,
     199,   179,   193,   233,   -60,   193,   193,   193,   184,   185,
     -51,   186,    88,   -60,   165,   187,   199,   -61,   -61,   -56,
     -50,   166,   242,   188,   -60,   157,   173,   244,   -61,   -61,
     165,   165,   165,   253,   237,   -60,   239,   179,   179,   179,
     259,   -56,    77,   173,   173,    24,   199,   199,   199,   266,
      24,    27,   166,   180,    -3,   -60,   179,    78,   268,   191,
     173,    79,   158,   -61,   192,   -60,   -62,   147,   148,   149,
     180,   180,    -3,   157,   -61,   191,   273,   -62,    80,    95,
      -3,    24,    27,   206,    81,   -61,   200,   180,   -62,   157,
     157,   157,   157,   -61,    -9,   154,   173,   173,   173,   173,
     166,   164,   200,   -61,   276,   191,   191,   191,   191,   155,
      82,   178,    -9,    89,   -55,   173,   166,   166,   166,   166,
      -9,   163,    90,   180,   180,   180,   180,   -59,   159,   -59,
     193,   177,   200,   200,   200,   200,   -55,   -59,   -59,   178,
     -59,   198,   180,    91,   198,   198,   198,   -59,   100,   189,
      99,   -59,   189,   189,   189,   181,   182,   183,   -10,   177,
     103,   197,   119,   104,   197,   197,   197,   112,   184,   185,
     277,   107,    18,   115,    19,   187,   -10,   121,    29,    30,
      31,   118,   -59,   188,   -10,   181,   182,   183,   164,   161,
     201,    40,    41,   -59,    42,   116,   122,    86,    43,   175,
     123,   230,   167,   168,   169,   187,    45,   202,   163,     1,
     -17,   140,   -12,   188,   -12,   270,   271,     2,   272,   164,
     178,   124,   171,   -16,   -62,   125,   218,   175,   -17,   195,
     172,   -40,   195,   195,   195,   -62,   -17,   178,   178,   163,
     177,   -16,   205,   167,   168,   169,   126,   128,   117,   -16,
     181,   182,   183,   198,   178,   146,   -57,   177,   177,   170,
     101,   -58,   129,   105,   106,   108,   230,   164,   219,   198,
     -64,   172,   -64,   197,   177,   155,   161,   189,   188,   -41,
     135,   -64,   130,   164,   164,   252,   -14,   163,   -14,   197,
     178,   178,   258,   207,   -11,   162,   -11,   -42,   -43,   198,
     198,   265,   137,   163,   251,   176,   156,   215,   175,   178,
     177,   257,   131,   -15,    19,   -15,    87,   274,   138,   197,
     264,   -52,   267,   141,    19,   222,   175,   -44,   208,   177,
     -52,   -52,   -52,   176,   -52,   196,   209,   212,   196,   196,
     196,   231,   175,   -52,    98,   213,   190,   -64,   -46,   190,
     190,   190,   -47,   -48,   -69,   161,    96,   195,   -64,   -49,
     -64,   228,   160,   -69,   -69,   -69,   229,   -69,   203,   -64,
     -69,   250,   174,   281,   204,    19,   -46,   127,   256,   -69,
     -69,   -69,   162,   -69,    83,   -52,   282,   263,    19,   -47,
      84,   -48,   -69,   133,   -52,   -52,   -52,   175,   -52,   -69,
     174,   -49,   194,   238,   243,   194,   194,   194,   -69,   -69,
     -69,   247,   -69,   162,   176,   -15,   219,   -53,   -63,    84,
     -63,   -69,   261,   249,   -54,   216,   -53,   -53,   -53,   -63,
     -53,   176,   176,   -54,   -54,   -54,   255,   -54,   -50,   -53,
     262,   -39,   -72,   223,   -50,   286,   -54,   196,   176,   160,
     279,   -72,   -72,   -72,   280,   -72,   -66,   283,   284,   232,
     287,   162,   -64,   196,   -72,   -66,    97,   -66,   -50,   -66,
     -46,   235,   156,   -64,   190,   -64,   -68,   162,   -66,   -63,
     -47,   174,   -48,   -56,   176,   -68,   -68,   -68,   235,   -68,
     -63,   -70,   -63,   196,   -49,   -55,   -71,   -56,   -68,   174,
     -70,   -70,   -70,   176,   -70,   -71,   -71,   -71,   226,   -71,
     -64,   -55,   -64,   -70,   275,   174,    12,   226,   -71,   -63,
     -64,   -63,   -52,   -52,   -52,   289,   -52,   290,   160,   -63,
     194,   -21,   -21,   -21,   -21,   -52,   -21,   -21,   -21,   291,
     -21,   -21,   -21,   -21,   -21,   -21,   144,   -21,   -56,   -55,
      22,   -21,     0,     0,     0,     0,     0,   -21,   -21,   -21,
       0,     0,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,
     174,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,     0,   -19,   -52,   -52,   -52,     0,   -52,   -19,   -19,
     -19,   -18,   -18,   -18,   -18,   -52,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
       0,   -18,     0,     0,     0,     0,     0,   -18,   -18,   -18,
     -29,   -29,   -29,   -29,   136,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,     0,     0,     0,
     -29,   -53,   -53,   -53,     0,   -53,   -29,   -29,   -29,    -9,
      -9,    -9,    -9,   -53,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,    -9,
       0,     0,     0,     0,     0,    -9,    -9,    -9,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,     0,     0,     0,   -17,     0,
       0,     0,     0,     0,   -17,   -17,   -17,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,     0,     0,     0,   -16,   -54,   -54,
     -54,     0,   -54,   -16,   -16,   -16,    29,    30,    31,    32,
     -54,    33,    34,    35,     0,    36,    37,    38,    39,    40,
      41,     0,    42,     0,     0,     0,    43,   -72,   -72,   -72,
       0,   -72,   146,    44,    45,    29,    30,    31,    32,   -72,
      33,    34,    35,     0,    36,    37,    38,    39,    40,    41,
       0,    42,     0,     0,     0,    43,   -66,   227,   -66,     0,
     -66,   146,    72,    45,   -23,   -23,   -23,   -23,   -66,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,     0,     0,     0,   -23,   -68,   -68,   -68,     0,   -68,
     -23,   -23,   -23,   -20,   -20,   -20,   -20,   -68,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
       0,     0,     0,   -20,   -70,   -70,   -70,     0,   -70,   -20,
     -20,   -20,   -22,   -22,   -22,   -22,   -70,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,     0,
       0,     0,   -22,   -71,   -71,   -71,     0,   -71,   -22,   -22,
     -22,   -24,   -24,   -24,   -24,   -71,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
       0,   -24,   -65,   227,   -65,     0,   -65,   -24,   -24,   -24,
     -25,   -25,   -25,   -25,   -65,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,     0,
     -25,   -67,   -67,   -67,     0,   -67,   -25,   -25,   -25,   -26,
     -26,   -26,   -26,   -67,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,   -26,
     -73,   -73,   -73,     0,   -73,   -26,   -26,   -26,   -27,   -27,
     -27,   -27,   -73,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,     0,     0,   -27,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,     0,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,     0,   -38,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,     0,     0,   -34,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,     0,     0,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,     0,     0,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
       0,     0,   -37,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,
       0,   -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,     0,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,     0,     0,     0,   -39,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -45,   -45,
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
       0,   146,   245,    45,    29,    30,    31,    32,     0,    33,
      34,    35,     0,    36,    37,    38,    39,    40,    41,     0,
      42,     0,     0,     0,    43,     0,     0,     0,     0,     0,
     146,   269,    45,    29,    30,    31,    32,     0,    33,    34,
      35,     0,    36,    37,    38,    39,    40,    41,     0,    42,
       0,     0,     0,    43,     0,     0,     0,     0,     0,   146,
     278,    45,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,     0,
       0,     0,   -17,     0,     0,     0,     0,     0,   -17,   -17,
     -17,    29,    30,    31,    32,     0,    33,    34,    35,     0,
      36,    37,    38,    39,    40,    41,     0,    42,     0,     0,
       0,    43,     0,     0,     0,     0,     0,   146,   285,    45,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,     0,     0,     0,
     -16,   -65,     0,     0,     0,     0,   -16,   -16,   -16,   -67,
     -65,    97,   -65,     0,   -65,   -73,     0,     0,   -67,   -67,
     -67,   -63,   -67,   -65,   -73,   -73,   -73,     0,   -73,   -53,
      96,   -67,   -63,     0,   -63,   -69,     0,   -73,   -53,   -53,
     -53,   -69,   -53,   -63,   -69,   -69,   -69,     0,   -69,   203,
     -69,   -69,   -69,     0,   -69,   204,     0,     0,   -69,   -69,
     -69,   204,   -69,   201,   -69,   -69,   -69,     0,   -69,   214,
       0,   -69,   -53,   -53,   -53,   214,   -53,   -69,   -54,   -54,
     -54,     0,   -54,     0,     0,   -53,   -72,   -72,   -72,     0,
     -72,   -54,   -66,   220,   -66,     0,   -66,     0,     0,   -72,
     -68,   -68,   -68,     0,   -68,   -66,   -70,   -70,   -70,     0,
     -70,   -54,     0,   -68,     0,     0,   -72,     0,     0,   -70,
     -54,   -54,   -54,   -66,   -54,   -72,   -72,   -72,   -68,   -72,
       0,     0,   -66,   236,   -66,   -70,   -66,   -68,   -68,   -68,
       0,   -68,     0,     0,   -70,   -70,   -70,     0,   -70,   -71,
     -71,   -71,     0,   -71,   -65,   220,   -65,     0,   -65,   -67,
     -67,   -67,   -71,   -67,   -71,     0,     0,   -65,     0,   -65,
       0,     0,   -67,   -71,   -71,   -71,   -67,   -71,   -65,   236,
     -65,   -73,   -65,     0,     0,   -67,   -67,   -67,     0,   -67,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,     0,   -73,
     -69,   -69,   -69,     0,   -69,   243,     0,     0,   -73,     0,
       0,   221,   -69,   -69,   -69,   -69,     0,   -69,     0,     0,
       0,     0,     0,     0,   221,   -69
};

static const yytype_int16 yycheck[] =
{
       0,     0,    25,   146,     4,     4,   212,    18,    35,     0,
      84,    27,    28,    18,    11,     0,    19,    31,    45,    33,
      20,    32,   228,    34,    22,    25,    25,    18,    35,     3,
       4,     5,    18,    18,    32,    26,    33,     0,     3,     4,
       5,    26,    16,    17,     0,    19,    73,    11,    75,    23,
      33,    78,    79,    80,    19,    18,    35,    31,    23,     3,
       4,     5,   205,    26,    11,    31,    31,    35,    75,    33,
      97,    78,    79,    80,    22,    19,    83,    45,    11,    23,
     286,     3,     4,     5,    11,    33,    33,    31,    22,    22,
      24,    24,    29,    31,    35,   122,    75,    19,    32,    78,
      79,    80,     0,    11,    45,    73,    33,    75,    22,    31,
      78,    79,    80,     3,     4,     5,   121,     0,   123,    33,
      18,    31,    35,   146,     0,    33,   153,   154,    26,    19,
     204,   136,    73,    23,    75,    18,   141,    78,    79,    80,
     214,    31,    18,    26,   171,   172,   146,   221,    11,    31,
      26,    33,    11,    11,   122,     3,     4,     5,    11,    22,
     187,   188,    75,    22,    22,    78,    79,    80,    16,    17,
      33,    19,    33,    11,   201,    23,   203,    22,    11,    11,
      33,   122,   205,    31,    22,   153,   154,   210,    33,    22,
     217,   218,   219,   220,   201,    33,   203,   224,   225,   226,
     227,    33,    31,   171,   172,   205,   233,   234,   235,   236,
     210,   210,   153,   154,     0,    22,   243,    31,   241,   187,
     188,    31,   201,    11,   203,    32,    11,     3,     4,     5,
     171,   172,    18,   201,    22,   203,   243,    22,    31,    24,
      26,   241,   241,    19,    31,    33,   187,   188,    33,   217,
     218,   219,   220,    22,     0,    31,   224,   225,   226,   227,
     201,    35,   203,    32,   243,   233,   234,   235,   236,    35,
      31,    45,    18,    33,    11,   243,   217,   218,   219,   220,
      26,    35,    33,   224,   225,   226,   227,    22,   201,    11,
     203,    45,   233,   234,   235,   236,    33,    22,    33,    73,
      22,    75,   243,    33,    78,    79,    80,    32,    74,    75,
      19,    33,    78,    79,    80,     3,     4,     5,     0,    73,
      33,    75,    96,    19,    78,    79,    80,    19,    16,    17,
     243,    19,    32,    32,    34,    23,    18,    32,     3,     4,
       5,    95,    11,    31,    26,     3,     4,     5,   122,    35,
      25,    16,    17,    22,    19,    19,    33,    43,    23,    45,
      32,    19,     3,     4,     5,    23,    31,    11,   122,    18,
       0,   137,    32,    31,    34,    16,    17,    26,    19,   153,
     154,    32,    23,     0,    22,    32,    24,    73,    18,    75,
      31,    33,    78,    79,    80,    33,    26,   171,   172,   153,
     154,    18,    29,     3,     4,     5,    32,    32,    94,    26,
       3,     4,     5,   187,   188,    29,    32,   171,   172,    19,
      75,    32,    32,    78,    79,    80,    19,   201,    20,   203,
      22,    31,    24,   187,   188,   201,   122,   203,    31,    33,
      19,    33,    32,   217,   218,   219,    32,   201,    34,   203,
     224,   225,   226,    19,    32,    35,    34,    33,    33,   233,
     234,   235,    33,   217,   218,    45,    35,   153,   154,   243,
     224,   225,    32,    32,    34,    34,    45,   243,    32,   233,
     234,    11,    32,    32,    34,   171,   172,    33,    19,   243,
      20,    21,    22,    73,    24,    75,    19,    31,    78,    79,
      80,   187,   188,    33,    73,    31,    75,    11,    33,    78,
      79,    80,    33,    33,    11,   201,    20,   203,    22,    33,
      24,    31,    35,    20,    21,    22,    31,    24,    25,    33,
      11,   217,    45,    32,    31,    34,    11,    34,   224,    20,
      21,    22,   122,    24,    25,    11,    32,   233,    34,    11,
      31,    11,    33,   122,    20,    21,    22,   243,    24,    11,
      73,    11,    75,    19,    25,    78,    79,    80,    20,    21,
      22,    19,    24,   153,   154,    33,    20,    11,    22,    31,
      24,    33,    19,    32,    11,   154,    20,    21,    22,    33,
      24,   171,   172,    20,    21,    22,    32,    24,    33,    33,
      32,    32,    11,   172,    11,    31,    33,   187,   188,   122,
      32,    20,    21,    22,    32,    24,    11,    32,    32,   188,
      31,   201,    11,   203,    33,    20,    21,    22,    32,    24,
      32,    20,   201,    22,   203,    24,    11,   217,    33,    11,
      32,   154,    32,    11,   224,    20,    21,    22,    20,    24,
      22,    11,    24,   233,    32,    11,    11,    33,    33,   172,
      20,    21,    22,   243,    24,    20,    21,    22,    20,    24,
      22,    33,    24,    33,   243,   188,     4,    20,    33,    22,
      32,    24,    20,    21,    22,    19,    24,    32,   201,    32,
     203,     3,     4,     5,     6,    33,     8,     9,    10,    32,
      12,    13,    14,    15,    16,    17,    18,    19,    32,    32,
      19,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
     243,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    20,    21,    22,    -1,    24,    29,    30,
      31,     3,     4,     5,     6,    32,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    20,    21,    22,    -1,    24,    29,    30,    31,     3,
       4,     5,     6,    32,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    20,    21,
      22,    -1,    24,    29,    30,    31,     3,     4,     5,     6,
      32,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    20,    21,    22,
      -1,    24,    29,    30,    31,     3,     4,     5,     6,    32,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    20,    21,    22,    -1,
      24,    29,    30,    31,     3,     4,     5,     6,    32,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    20,    21,    22,    -1,    24,
      29,    30,    31,     3,     4,     5,     6,    32,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    20,    21,    22,    -1,    24,    29,
      30,    31,     3,     4,     5,     6,    32,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    20,    21,    22,    -1,    24,    29,    30,
      31,     3,     4,     5,     6,    32,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    20,    21,    22,    -1,    24,    29,    30,    31,
       3,     4,     5,     6,    32,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    20,    21,    22,    -1,    24,    29,    30,    31,     3,
       4,     5,     6,    32,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,
      20,    21,    22,    -1,    24,    29,    30,    31,     3,     4,
       5,     6,    32,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    11,    -1,    -1,    -1,    -1,    29,    30,    31,    11,
      20,    21,    22,    -1,    24,    11,    -1,    -1,    20,    21,
      22,    11,    24,    33,    20,    21,    22,    -1,    24,    11,
      20,    33,    22,    -1,    24,    11,    -1,    33,    20,    21,
      22,    11,    24,    33,    20,    21,    22,    -1,    24,    25,
      20,    21,    22,    -1,    24,    31,    -1,    -1,    20,    21,
      22,    31,    24,    25,    20,    21,    22,    -1,    24,    31,
      -1,    33,    20,    21,    22,    31,    24,    33,    20,    21,
      22,    -1,    24,    -1,    -1,    33,    20,    21,    22,    -1,
      24,    33,    20,    21,    22,    -1,    24,    -1,    -1,    33,
      20,    21,    22,    -1,    24,    33,    20,    21,    22,    -1,
      24,    11,    -1,    33,    -1,    -1,    11,    -1,    -1,    33,
      20,    21,    22,    11,    24,    20,    21,    22,    11,    24,
      -1,    -1,    20,    21,    22,    11,    24,    20,    21,    22,
      -1,    24,    -1,    -1,    20,    21,    22,    -1,    24,    20,
      21,    22,    -1,    24,    20,    21,    22,    -1,    24,    20,
      21,    22,    33,    24,    11,    -1,    -1,    33,    -1,    11,
      -1,    -1,    33,    20,    21,    22,    11,    24,    20,    21,
      22,    11,    24,    -1,    -1,    20,    21,    22,    -1,    24,
      20,    21,    22,    -1,    24,    20,    21,    22,    -1,    24,
      20,    21,    22,    -1,    24,    25,    -1,    -1,    33,    -1,
      -1,    31,    32,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    26,    36,    37,    38,    39,    40,    41,    44,
      19,     0,    38,    31,    33,    42,    43,    44,    32,    34,
      29,    45,    43,    40,    44,    46,    47,    40,    47,     3,
       4,     5,     6,     8,     9,    10,    12,    13,    14,    15,
      16,    17,    19,    23,    30,    31,    45,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    68,    69,    70,    71,
      72,    73,    30,    31,    31,    31,    60,    31,    31,    31,
      31,    31,    31,    25,    31,    19,    68,    62,    33,    33,
      33,    33,    11,    33,    22,    24,    20,    21,    62,    19,
      61,    54,    60,    33,    19,    54,    54,    19,    54,    27,
      28,    66,    19,    60,    42,    32,    19,    68,    70,    71,
      72,    32,    33,    32,    32,    32,    32,    34,    32,    32,
      32,    32,    45,    62,    45,    19,     7,    33,    32,    45,
      61,    32,    45,    18,    18,    33,    29,     3,     4,     5,
      16,    17,    19,    23,    31,    61,    62,    63,    64,    65,
      67,    68,    69,    70,    71,    72,    73,     3,     4,     5,
      19,    23,    31,    63,    67,    68,    69,    70,    71,    72,
      73,     3,     4,     5,    16,    17,    19,    23,    31,    61,
      62,    63,    64,    65,    67,    68,    69,    70,    71,    72,
      73,    25,    11,    25,    31,    29,    19,    19,    19,    19,
      46,    47,    31,    31,    31,    68,    62,    22,    24,    20,
      21,    31,    68,    62,    22,    24,    20,    21,    31,    31,
      19,    68,    62,    22,    24,    20,    21,    60,    19,    60,
      42,    46,    47,    25,    47,    30,    66,    19,    42,    32,
      68,    70,    71,    72,    42,    32,    68,    70,    71,    72,
      66,    19,    32,    68,    70,    71,    72,    32,    47,    30,
      16,    17,    19,    60,    61,    62,    64,    65,    30,    32,
      32,    32,    32,    32,    32,    30,    31,    31,    66,    19,
      32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    39,    40,
      41,    42,    42,    42,    43,    44,    45,    45,    46,    46,
      47,    47,    48,    48,    48,    48,    48,    48,    49,    50,
      50,    51,    52,    53,    53,    53,    53,    53,    53,    54,
      55,    56,    57,    58,    58,    59,    60,    60,    60,    60,
      61,    62,    63,    63,    63,    64,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       5,     3,     1,     0,     1,     2,     4,     3,     2,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     9,     3,     1,     2,     2,     2,     2,     1,     3,
       4,     4,     4,     4,     6,     5,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     4,     4,     1,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     1,
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
#line 47 "clang_syntax.y"
                    {printf("%d", yyvsp[0]);}
#line 1911 "clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 51 "clang_syntax.y"
                                {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 1917 "clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 52 "clang_syntax.y"
                  {printf("%d", yyvsp[0]);}
#line 1923 "clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 56 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 1929 "clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 57 "clang_syntax.y"
                      {printf("%d", yyvsp[0]);}
#line 1935 "clang_syntax.tab.c"
    break;

  case 7: /* declaration: comment  */
#line 58 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 1941 "clang_syntax.tab.c"
    break;

  case 8: /* comment: COMMENT  */
#line 62 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 1947 "clang_syntax.tab.c"
    break;

  case 9: /* varDeclaration: simpleDeclaration ';'  */
#line 66 "clang_syntax.y"
                          {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 1953 "clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleDeclaration '(' params ')' compoundStmt  */
#line 70 "clang_syntax.y"
                                                  {printf("%d %d %d %d %d", yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 1959 "clang_syntax.tab.c"
    break;

  case 11: /* params: params ',' param  */
#line 74 "clang_syntax.y"
                     {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 1965 "clang_syntax.tab.c"
    break;

  case 12: /* params: param  */
#line 75 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 1971 "clang_syntax.tab.c"
    break;

  case 13: /* params: %empty  */
#line 76 "clang_syntax.y"
      {}
#line 1977 "clang_syntax.tab.c"
    break;

  case 14: /* param: simpleDeclaration  */
#line 80 "clang_syntax.y"
                      {printf("%d", yyvsp[0]);}
#line 1983 "clang_syntax.tab.c"
    break;

  case 15: /* simpleDeclaration: TYPE ID  */
#line 84 "clang_syntax.y"
            {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 1989 "clang_syntax.tab.c"
    break;

  case 16: /* compoundStmt: '{' localDeclarations stmtList '}'  */
#line 88 "clang_syntax.y"
                                       {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 1995 "clang_syntax.tab.c"
    break;

  case 17: /* compoundStmt: '{' stmtList '}'  */
#line 89 "clang_syntax.y"
                       {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2001 "clang_syntax.tab.c"
    break;

  case 18: /* localDeclarations: localDeclarations varDeclaration  */
#line 93 "clang_syntax.y"
                                     {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2007 "clang_syntax.tab.c"
    break;

  case 19: /* localDeclarations: varDeclaration  */
#line 94 "clang_syntax.y"
                     {printf("%d", yyvsp[0]);}
#line 2013 "clang_syntax.tab.c"
    break;

  case 20: /* stmtList: stmtList primitiveStmt  */
#line 98 "clang_syntax.y"
                           {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2019 "clang_syntax.tab.c"
    break;

  case 21: /* stmtList: %empty  */
#line 99 "clang_syntax.y"
      {}
#line 2025 "clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: exprStmt  */
#line 103 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2031 "clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: compoundStmt  */
#line 104 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 2037 "clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: condStmt  */
#line 105 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2043 "clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: iterStmt  */
#line 106 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2049 "clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: returnStmt  */
#line 107 "clang_syntax.y"
                 {printf("%d", yyvsp[0]);}
#line 2055 "clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: setStmt  */
#line 108 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2061 "clang_syntax.tab.c"
    break;

  case 28: /* exprStmt: expression ';'  */
#line 112 "clang_syntax.y"
                   {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2067 "clang_syntax.tab.c"
    break;

  case 29: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt  */
#line 116 "clang_syntax.y"
                                         {printf("%d %d %d", yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2073 "clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt  */
#line 117 "clang_syntax.y"
                                                                {printf("%d %d %d %d %d", yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2079 "clang_syntax.tab.c"
    break;

  case 31: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt  */
#line 121 "clang_syntax.y"
                                                                      {printf("%d %d %d %d %d", yyvsp[-8], yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2085 "clang_syntax.tab.c"
    break;

  case 32: /* returnStmt: RETURN_KW expression ';'  */
#line 125 "clang_syntax.y"
                             {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2091 "clang_syntax.tab.c"
    break;

  case 33: /* setStmt: pertOP  */
#line 129 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2097 "clang_syntax.tab.c"
    break;

  case 34: /* setStmt: typeOP ';'  */
#line 130 "clang_syntax.y"
                 {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2103 "clang_syntax.tab.c"
    break;

  case 35: /* setStmt: addOP ';'  */
#line 131 "clang_syntax.y"
                {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2109 "clang_syntax.tab.c"
    break;

  case 36: /* setStmt: remOP ';'  */
#line 132 "clang_syntax.y"
                {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2115 "clang_syntax.tab.c"
    break;

  case 37: /* setStmt: selectOP ';'  */
#line 133 "clang_syntax.y"
                   {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2121 "clang_syntax.tab.c"
    break;

  case 38: /* setStmt: forallOP  */
#line 134 "clang_syntax.y"
               {printf("%d", yyvsp[0]);}
#line 2127 "clang_syntax.tab.c"
    break;

  case 39: /* pertOP: expression IN_KW ID  */
#line 138 "clang_syntax.y"
                        {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2133 "clang_syntax.tab.c"
    break;

  case 40: /* typeOP: ISSET_KW '(' ID ')'  */
#line 142 "clang_syntax.y"
                        {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2139 "clang_syntax.tab.c"
    break;

  case 41: /* addOP: ADD_KW '(' pertOP ')'  */
#line 146 "clang_syntax.y"
                          {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2145 "clang_syntax.tab.c"
    break;

  case 42: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 150 "clang_syntax.y"
                             {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2151 "clang_syntax.tab.c"
    break;

  case 43: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 154 "clang_syntax.y"
                             {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2157 "clang_syntax.tab.c"
    break;

  case 44: /* selectOP: EXISTS_KW '(' ID ',' ID ')'  */
#line 155 "clang_syntax.y"
                                  {printf("%d %d %d %d %d %d", yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2163 "clang_syntax.tab.c"
    break;

  case 45: /* forallOP: FORALL_KW '(' pertOP ')' compoundStmt  */
#line 159 "clang_syntax.y"
                                          {printf("%d %d %d %d %d", yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2169 "clang_syntax.tab.c"
    break;

  case 46: /* expression: assignExp  */
#line 163 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2175 "clang_syntax.tab.c"
    break;

  case 47: /* expression: simpleExp  */
#line 164 "clang_syntax.y"
                {printf("%d", yyvsp[0]);}
#line 2181 "clang_syntax.tab.c"
    break;

  case 48: /* expression: inOP  */
#line 165 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2187 "clang_syntax.tab.c"
    break;

  case 49: /* expression: outOP  */
#line 166 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2193 "clang_syntax.tab.c"
    break;

  case 50: /* assignExp: ID ASS_OP expression  */
#line 170 "clang_syntax.y"
                         {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2199 "clang_syntax.tab.c"
    break;

  case 51: /* simpleExp: binLogicalExp  */
#line 174 "clang_syntax.y"
                  {printf("%d", yyvsp[0]);}
#line 2205 "clang_syntax.tab.c"
    break;

  case 52: /* constOP: INT  */
#line 178 "clang_syntax.y"
        {printf("%d", yyvsp[0]);}
#line 2211 "clang_syntax.tab.c"
    break;

  case 53: /* constOP: FLOAT  */
#line 179 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2217 "clang_syntax.tab.c"
    break;

  case 54: /* constOP: EMPTY  */
#line 180 "clang_syntax.y"
            {printf("%d", yyvsp[0]);}
#line 2223 "clang_syntax.tab.c"
    break;

  case 55: /* inOP: IN '(' ID ')'  */
#line 184 "clang_syntax.y"
                  {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2229 "clang_syntax.tab.c"
    break;

  case 56: /* outOP: OUT '(' outConst ')'  */
#line 188 "clang_syntax.y"
                         {printf("%d %d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2235 "clang_syntax.tab.c"
    break;

  case 57: /* outConst: STRING  */
#line 192 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2241 "clang_syntax.tab.c"
    break;

  case 58: /* outConst: CHAR  */
#line 193 "clang_syntax.y"
           {printf("%d", yyvsp[0]);}
#line 2247 "clang_syntax.tab.c"
    break;

  case 59: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 197 "clang_syntax.y"
                                          {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2253 "clang_syntax.tab.c"
    break;

  case 60: /* binLogicalExp: unLogicalExp  */
#line 198 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 2259 "clang_syntax.tab.c"
    break;

  case 61: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 202 "clang_syntax.y"
                           {printf("%d %d", yyvsp[-1], yyvsp[0]);}
#line 2265 "clang_syntax.tab.c"
    break;

  case 62: /* unLogicalExp: relationalExp  */
#line 203 "clang_syntax.y"
                    {printf("%d", yyvsp[0]);}
#line 2271 "clang_syntax.tab.c"
    break;

  case 63: /* relationalExp: relationalExp REL_OP sumExp  */
#line 207 "clang_syntax.y"
                                {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2277 "clang_syntax.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 208 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2283 "clang_syntax.tab.c"
    break;

  case 65: /* sumExp: sumExp SUM_OP mulExp  */
#line 212 "clang_syntax.y"
                         {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2289 "clang_syntax.tab.c"
    break;

  case 66: /* sumExp: mulExp  */
#line 213 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2295 "clang_syntax.tab.c"
    break;

  case 67: /* mulExp: mulExp MUL_OP factor  */
#line 217 "clang_syntax.y"
                         {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2301 "clang_syntax.tab.c"
    break;

  case 68: /* mulExp: factor  */
#line 218 "clang_syntax.y"
             {printf("%d", yyvsp[0]);}
#line 2307 "clang_syntax.tab.c"
    break;

  case 69: /* factor: ID  */
#line 222 "clang_syntax.y"
       {printf("%d", yyvsp[0]);}
#line 2313 "clang_syntax.tab.c"
    break;

  case 70: /* factor: functionCall  */
#line 223 "clang_syntax.y"
                   {printf("%d", yyvsp[0]);}
#line 2319 "clang_syntax.tab.c"
    break;

  case 71: /* factor: '(' simpleExp ')'  */
#line 224 "clang_syntax.y"
                        {printf("%d %d %d", yyvsp[-2], yyvsp[-1], yyvsp[0]);}
#line 2325 "clang_syntax.tab.c"
    break;

  case 72: /* factor: constOP  */
#line 225 "clang_syntax.y"
              {printf("%d", yyvsp[0]);}
#line 2331 "clang_syntax.tab.c"
    break;

  case 73: /* functionCall: ID '(' params ')'  */
#line 229 "clang_syntax.y"
                      {printf("%d %d %d", yyvsp[-3], yyvsp[-2], yyvsp[-1]);}
#line 2337 "clang_syntax.tab.c"
    break;


#line 2341 "clang_syntax.tab.c"

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

#line 233 "clang_syntax.y"




int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    symbolTable[0].s_line = 1;
    fillTable(symbolTable);
    printf("%d\n", symbolTable[0].s_line);
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
