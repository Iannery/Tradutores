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

    #include "symbol_table.h"
    #include "stack.h"
    #include "tree.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* a);
    extern int line;
    extern int column;
    extern int errors;
    extern FILE *yyin;

#line 87 "bison/clang_syntax.tab.c"

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
  YYSYMBOL_params = 41,                    /* params  */
  YYSYMBOL_param = 42,                     /* param  */
  YYSYMBOL_simpleVDeclaration = 43,        /* simpleVDeclaration  */
  YYSYMBOL_simpleFDeclaration = 44,        /* simpleFDeclaration  */
  YYSYMBOL_compoundStmt = 45,              /* compoundStmt  */
  YYSYMBOL_stmtList = 46,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 47,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 48,                  /* exprStmt  */
  YYSYMBOL_condStmt = 49,                  /* condStmt  */
  YYSYMBOL_iterStmt = 50,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 51,                /* returnStmt  */
  YYSYMBOL_setStmt = 52,                   /* setStmt  */
  YYSYMBOL_pertOP = 53,                    /* pertOP  */
  YYSYMBOL_setReturner = 54,               /* setReturner  */
  YYSYMBOL_typeOP = 55,                    /* typeOP  */
  YYSYMBOL_setParams = 56,                 /* setParams  */
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
  YYSYMBOL_binLogicalExp = 68,             /* binLogicalExp  */
  YYSYMBOL_unLogicalExp = 69,              /* unLogicalExp  */
  YYSYMBOL_relationalExp = 70,             /* relationalExp  */
  YYSYMBOL_sumExp = 71,                    /* sumExp  */
  YYSYMBOL_mulExp = 72,                    /* mulExp  */
  YYSYMBOL_factor = 73,                    /* factor  */
  YYSYMBOL_functionCall = 74,              /* functionCall  */
  YYSYMBOL_callParams = 75                 /* callParams  */
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
#define YYLAST   3471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  406

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
       0,    86,    86,    92,    97,   103,   106,   112,   118,   124,
     132,   137,   143,   149,   165,   180,   186,   191,   194,   200,
     203,   206,   209,   212,   215,   218,   221,   224,   230,   236,
     241,   250,   260,   267,   273,   278,   286,   289,   295,   299,
     306,   310,   313,   316,   323,   330,   337,   344,   352,   355,
     358,   364,   372,   375,   378,   381,   387,   391,   395,   402,
     409,   417,   421,   425,   431,   437,   443,   448,   454,   460,
     466,   472,   478,   484,   487,   495,   499,   502,   505,   511,
     516,   523,   528
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
  "funcDeclaration", "params", "param", "simpleVDeclaration",
  "simpleFDeclaration", "compoundStmt", "stmtList", "primitiveStmt",
  "exprStmt", "condStmt", "iterStmt", "returnStmt", "setStmt", "pertOP",
  "setReturner", "typeOP", "setParams", "addOP", "remOP", "selectOP",
  "forallOP", "expression", "assignExp", "simpleExp", "constOP", "inOP",
  "outOP", "outConst", "binLogicalExp", "unLogicalExp", "relationalExp",
  "sumExp", "mulExp", "factor", "functionCall", "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    -2,    63,   167,   174,   268,   388,    53,    84,   -15,
    -212,   417,   536,   277,   124,   118,   108,   145,   327,   412,
     641,   548,   118,   165,  1218,  1251,  1272,   151,   186,   190,
     408,   201,   228,   231,   275,   281,   306,   946,    65,   581,
     224,  2650,  2681,  2712,  2743,  2774,  2805,  2836,  2867,  2898,
      43,   320,    48,   325,   361,    92,  2929,   369,   370,   100,
    1290,  2960,  2991,    49,    80,   330,    23,  1311,  1326,  1345,
     578,   487,   224,   341,   454,   374,   448,   454,   454,   454,
     712,   399,   408,    21,  1190,  1444,   403,   326,   340,    18,
    3022,   634,  3053,  3084,   652,   326,   184,   184,    65,   162,
     419,   447,   179,   382,  3115,  1689,   387,   409,   449,  1110,
     415,   464,   550,   457,   473,   599,   476,   480,   495,  1494,
      46,   648,   448,  1550,   133,   173,   461,   892,  1565,  1582,
    1528,   483,   641,   198,   514,   530,   280,   534,   546,  1621,
     519,   520,  1429,   283,  3146,  3177,  3208,    66,   288,   641,
     561,  3239,   523,   641,  3270,   571,   641,   569,  1384,  1811,
    1819,   574,   593,  1776,   132,   772,   224,   651,   663,   687,
    1853,   322,   367,   680,  1002,  1869,  1884,  1933,   830,  1399,
    1598,   609,   617,  2050,   522,   826,   224,   604,   683,  1789,
      -1,    88,    36,  1128,  1834,  2063,  3407,   666,   675,   682,
     690,   479,   607,   800,   698,   703,   748,   572,   863,   224,
      95,   159,   226,   877,    17,   128,    94,   983,   970,   989,
    1026,  1153,   717,   729,   292,   357,    89,  1178,   733,   743,
     752,   408,   755,   758,   641,  1657,   711,  1749,  2092,  2123,
    2154,  2185,  2216,  2247,   738,  2278,  2309,   778,   776,  3301,
    3332,   448,   454,   149,  1951,   786,   673,   584,   709,   673,
     230,   230,   132,   448,   454,  3415,   797,   887,   127,   714,
     887,   839,   839,   522,   454,   454,   448,   454,   193,  1041,
     806,   930,   208,   740,   930,   939,   939,   572,   809,   834,
     756,   767,   782,   783,   454,   454,  3422,   689,   838,   840,
     308,   363,   398,   444,   224,   341,   454,   814,   712,   855,
    3363,  2340,  2371,   793,  3394,   848,   807,  1966,   713,   448,
    1989,   696,  1018,  2009,  2031,   852,   816,   448,  3428,   164,
    1236,  3434,  3440,   822,   853,   857,   876,  1073,   722,   448,
    1088,   276,  1174,  1143,  1149,   454,   454,   889,   913,  3446,
     454,   454,   920,   860,   928,  2402,   890,   895,  2433,  1672,
     900,   904,   905,   964,   965,   974,  2037,   906,   884,   929,
     914,   915,   924,   498,   524,  1168,   937,  1001,  1017,   431,
     432,  1033,  1045,  1528,   483,  1528,   951,   954,  1058,   977,
     587,  1069,  1070,   588,   603,  2464,   518,  2495,  2526,  2557,
    1528,   561,  2588,   961,  1528,  2619
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,   959,     1,  -212,  -212,   978,     0,  -212,
     -13,  -149,   -35,  -119,  -116,  -111,  -103,   -93,  1741,   -56,
    1104,  -117,   360,   362,  1245,   -68,    25,   -67,  1343,  1662,
     -65,   -57,   699,  1482,   833,   996,   670,   477,    -8,   284,
    -211
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    41,     6,    16,    17,   157,     8,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     187,   108,    53,    54,   188,    56,    57,    58,   103,    60,
      61,    62,   116,   190,   191,   192,   193,   194,   195,   196,
     121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     5,    21,     7,     5,   141,   101,   249,    92,    70,
     -52,   238,    68,    18,   239,   297,   -14,     9,   -13,   240,
     107,   270,    68,    18,   201,   202,   203,   241,   -52,   221,
      85,    68,   176,   204,   -69,    68,   205,   242,   125,   284,
     206,   207,   318,    97,   208,   -69,     1,   -67,   -69,   -52,
     123,   -52,   209,   119,   -53,    75,   -69,   227,   -67,   -55,
     -52,   271,   243,    10,   176,   245,   107,   338,    24,    25,
      26,    95,   176,   246,    68,   219,   -53,   227,   -82,    68,
     -82,   -55,   -52,   152,    84,   310,    12,    68,    68,    68,
     129,   -65,   201,   202,   203,   142,    40,   144,   -81,   -65,
     -81,   204,   -65,   -54,   205,   -67,   -53,   118,   206,   207,
     -65,    94,   208,   -65,   151,    13,   -67,   237,   154,   285,
     209,   296,    68,    68,    68,   -54,   -67,   -53,   -67,   -53,
     236,   235,   219,   -49,   315,   158,   159,   160,   -66,   -65,
      22,    68,    23,    19,   -34,    68,   325,    20,    68,   -66,
     -65,   163,   201,   202,   203,   244,   254,   176,   176,   335,
     -65,   204,   -65,   166,   205,   291,   -34,    -2,   206,   207,
     -55,   301,   208,   221,    -4,   -64,   265,   -11,   176,   -11,
     209,   317,    72,    14,   -35,     1,   -64,    24,    25,    26,
     -53,   -55,    -4,   -55,   130,   107,   201,   202,   203,   279,
     219,   176,   367,    84,    38,   204,   -35,   107,   205,   -38,
     370,   132,   206,   207,    92,    40,   208,    73,   219,   -66,
     107,    74,   376,    68,   209,   337,    68,   158,   159,   160,
     -66,   -38,    76,   158,   159,   160,   161,   -54,   353,   162,
     -66,    68,   -66,   163,   164,   219,   362,   165,   176,   163,
     164,   176,   176,   176,   324,   166,   307,   360,   -54,    77,
     -54,   166,    78,   107,   238,   332,   238,   239,    -5,   239,
     219,   107,   240,   219,   240,    92,   219,   219,   219,   344,
     241,   238,   241,   107,   239,   238,    -5,   -64,   239,   240,
     242,   -46,   242,   240,    94,    14,   176,   241,   -64,   -39,
     176,   241,    68,   -36,    69,   176,    79,   242,   -64,    15,
     -64,   242,    80,   -46,    69,   243,   150,   243,   245,   -34,
     245,   -39,    69,    69,   177,   -36,   246,    69,   246,    24,
      25,    26,   243,   -52,   403,   245,   243,    81,   361,   245,
     -34,   -67,   -34,   246,   259,    84,    38,   246,   395,    87,
     397,   -66,   -67,   -50,   -52,    96,   177,    40,   -36,   -12,
     100,   -12,   -66,   -67,   177,   402,    69,   220,   -37,   405,
     237,    69,   237,   -66,   -35,    68,    68,    68,   -65,    69,
      69,    69,    69,   236,   235,   236,   235,   237,    -6,   -65,
     -37,   237,    68,   221,   -37,   -35,    68,   -35,   -53,   -65,
     236,   235,    93,   -48,   236,   235,    -6,   104,   244,   -36,
     244,    24,    25,    26,    69,    69,    69,    -3,   117,   -41,
      31,    32,    33,    34,   220,   244,   -53,    37,    38,   244,
     -36,    39,   -36,    69,   122,    -3,   199,    69,   200,    40,
      69,   -42,   -44,   -45,   -13,    82,   -13,   134,   177,   177,
     177,   158,   159,   160,   224,   -37,   225,   178,   179,   180,
     181,   197,   198,   182,   -44,   -45,   181,   105,   184,   182,
     177,   185,   -64,   183,   184,   -53,   -37,   185,   -37,   186,
     131,   133,   199,   -64,   200,   186,    24,    25,    26,   -61,
     -56,   220,   220,   177,   -64,    31,   135,    67,    34,   -56,
     -56,   -56,    84,    38,   -56,   -62,    39,    67,   137,   -38,
     220,   -56,   138,   -56,    40,    69,    67,   175,    69,   -10,
      67,   -10,   201,   202,   203,   178,   179,   180,   -51,    94,
     -38,   204,   -38,    69,   205,   -46,    -7,   220,   206,   207,
     177,   183,   208,   177,   177,   177,   177,   -44,    -9,   175,
     209,   401,   148,   186,    -7,   153,   -46,   175,   -46,    67,
     218,   -53,   220,   -45,    67,   220,    -9,   145,   220,   220,
     220,   220,    67,    67,   128,   201,   202,   203,    -8,   146,
     247,   292,   136,   293,    24,    25,    26,   302,   177,   303,
     248,   206,   177,    86,    69,   -66,    -8,   177,   -39,   -44,
      84,    38,   250,   209,    87,   251,   -66,    67,    67,    67,
     221,   199,    40,   200,   -45,   -55,   -66,   218,   -57,   -39,
     -44,   -39,   -44,   199,   252,   200,    67,   -57,   -57,   -57,
      67,   -63,   -57,    67,   -15,   -45,   199,   -45,   200,   -57,
     263,   -57,   175,   175,    24,    25,    26,    27,   264,    28,
      29,    30,   -15,    31,    32,    33,    34,    35,    36,   155,
      37,    38,   -53,   175,    39,   222,   223,    69,    69,    69,
     156,   124,    40,   199,   -55,   200,   158,   159,   160,   199,
     139,   200,   140,   -53,    69,   218,   175,   199,    69,   200,
      66,   -67,   163,   164,   -54,   -55,   256,   274,   -54,   199,
      66,   200,   -67,   218,   166,   260,   275,   -64,    67,    66,
     174,    67,   -67,    66,   -36,   158,   159,   160,   -64,   -54,
     221,   349,   -37,   140,   161,   221,    67,   162,   -64,   276,
     218,   163,   164,   175,   277,   165,   175,   175,   323,   113,
     114,   320,   174,   166,   311,   366,   328,   140,   294,   331,
     174,   221,    66,   217,   375,   218,   140,    66,   218,   -75,
     295,   218,   218,   343,   304,    66,   127,   -34,   -75,   -75,
     -75,   312,   340,   -75,   305,   158,   159,   160,   -35,   278,
     -75,   175,   -75,   306,   255,   175,   308,    67,   -34,   309,
     175,   163,   164,   -36,   -37,   256,   158,   159,   160,   -35,
      66,    66,    66,   166,   313,   161,   197,   198,   162,   -13,
     217,   -58,   359,   164,   -36,   -37,   165,   319,   -53,    66,
     -58,   -58,   -58,    66,   166,   -58,    66,   -53,   327,   178,
     179,   180,   -58,   -53,   -58,   174,   174,   339,   266,   365,
     345,   -56,   178,   179,   180,   183,   184,   355,   369,   267,
     -56,   -56,   -56,    64,   371,   -56,   174,   186,   183,   184,
      67,    67,    67,    64,   -53,   346,   201,   202,   203,   350,
     186,   351,    88,   172,   357,   280,    64,    67,   217,   174,
     364,    67,   206,   207,   368,   372,   281,   -53,   -78,   373,
     178,   179,   180,   384,   209,   -38,   217,   -78,   -78,   -78,
     -53,    66,   -78,   -68,    66,   172,   183,   184,   374,   -78,
     267,   -78,    97,   172,   -68,    64,   215,   -68,   186,    66,
      88,   379,   386,   217,   -53,   -68,   174,   387,   126,   174,
     322,   221,   -50,   201,   202,   203,   -51,   -48,   388,   -53,
     -46,   330,   201,   202,   203,   380,   389,   -44,   217,   206,
     207,   217,   383,   281,   217,   342,   -45,   -75,   206,   207,
     385,   209,    11,    64,    64,    64,   -75,   -75,   -75,   390,
     209,   -75,    82,   215,   174,   221,   -38,    83,   174,   -75,
      66,   -71,    64,   174,   398,   -46,    64,   399,   -39,    64,
     -71,   287,   -71,   404,   -69,   -71,   -49,   -38,   257,   172,
     -73,    71,   -71,   286,   -71,   -69,   -46,   356,   -69,   -73,
     -73,   -73,   -53,   -69,   -73,   -69,    65,   -69,   268,   172,
       0,   -73,   261,   -73,   -69,     0,    65,   -69,   -53,   -68,
       0,     0,     0,   391,   -69,    65,   173,   -76,   261,    65,
     -68,   282,   172,   -68,   -53,     0,   -76,   -76,   -76,   392,
     -68,   -76,   -74,    66,    66,    66,   -53,     0,   -76,   215,
     -76,   -74,   -74,   -74,    64,   393,   -74,    64,   173,   -39,
      66,     0,     0,   -74,    66,   -74,   173,   394,    65,   216,
     -44,   -45,    64,    65,   -80,     0,   215,     0,     0,   257,
     -39,    65,   321,   -80,   -80,   -80,     0,     0,   -80,   -77,
     268,   -44,   -45,   329,     0,   -80,     0,   -80,   -77,   -77,
     -77,   215,     0,   -77,   282,     0,     0,   341,     0,     0,
     -77,   -78,   -77,     0,    52,     0,    65,    65,    65,     0,
     -78,   -78,   -78,     0,    52,   -78,   216,   172,     0,   -69,
       0,   172,   -43,    64,   168,    65,   172,    52,   272,    65,
     -69,     0,    65,   -69,   -70,     0,     0,     0,     0,     0,
     -72,   173,   173,   -70,   287,   -70,   288,   289,   -70,   -72,
     -72,   -72,   290,     0,   -72,   -70,   168,   -70,     0,   -79,
       0,   -72,   173,   -72,   168,   -68,    52,   211,   -79,   -79,
     -79,   298,   299,   -79,   286,     0,   -68,   300,     0,   -68,
     -79,   -75,   -79,     0,   216,   173,   -68,     0,   -68,     0,
     -75,   -75,   -75,     0,     0,   -75,    64,    64,    64,     0,
       0,    83,   216,   -75,     0,     0,     0,    65,     0,   -56,
      65,     0,     0,    64,    52,    52,    52,    64,   -56,   -56,
     -56,     0,     0,   -56,   211,    65,     0,   -68,     0,   216,
       0,   -56,   173,    52,     0,   173,   272,    52,   -68,     0,
      52,   -68,   -57,     0,     0,    55,     0,     0,     0,     0,
     168,   -57,   -57,   -57,   216,    55,   -57,   216,     0,     0,
     216,     0,     0,   -58,   -57,   169,     0,     0,    55,     0,
     168,     0,   -58,   -58,   -58,     0,     0,   -58,     0,     0,
     173,   -78,     0,     0,   173,   -58,    65,     0,     0,   173,
     -78,   -78,   -78,   168,     0,   -78,     0,   169,     0,     0,
       0,     0,   -71,   -78,     0,   169,     0,    55,   212,     0,
     211,   -71,    98,   -71,     0,    52,   -71,   -73,    52,     0,
       0,     0,     0,     0,   -71,     0,   -73,   -73,   -73,     0,
       0,   -73,     0,    52,     0,     0,   -76,   211,     0,   -73,
       0,     0,     0,    59,     0,   -76,   -76,   -76,     0,     0,
     -76,     0,     0,    59,     0,    55,    55,    55,   -76,    65,
      65,    65,   211,    89,     0,   212,    59,     0,     0,     0,
       0,     0,     0,     0,    55,   -56,    65,     0,    55,     0,
      65,    55,     0,     0,   -56,   -56,   -56,     0,   168,   -56,
     -57,   169,   168,     0,    52,    99,   -56,   168,     0,   -57,
     -57,   -57,     0,   115,   -57,    59,   120,     0,     0,     0,
     -29,   169,   -29,   -29,   -29,   -29,   149,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,     0,   169,   -74,     0,     0,   -29,   -29,
     -29,     0,     0,     0,   -74,   -74,   -74,     0,     0,   -74,
       0,   212,     0,    59,   143,    59,    55,   -74,     0,    55,
       0,     0,     0,   147,     0,     0,     0,    52,    52,    52,
       0,     0,    59,     0,    55,     0,    59,     0,   212,    59,
       0,     0,    63,     0,    52,   -80,     0,     0,    52,   258,
       0,     0,    63,     0,   -80,   -80,   -80,     0,     0,   -80,
       0,     0,   171,   212,     0,    63,     0,   -80,     0,   269,
       0,    24,    25,    26,   228,     0,   229,   230,   231,     0,
      31,    32,    33,    34,   232,   233,   155,    37,    38,   169,
       0,    39,   283,   169,   171,    55,     0,   234,   169,    40,
       0,   -77,   171,     0,    63,   214,     0,     0,     0,   120,
     -77,   -77,   -77,     0,    59,   -77,   -70,    59,     0,     0,
       0,     0,     0,   -77,     0,   -70,    98,   -70,     0,     0,
     -70,     0,    59,   -72,     0,     0,   120,     0,   -70,     0,
       0,     0,   -72,   -72,   -72,     0,     0,   -72,     0,   -58,
       0,     0,    63,    63,    63,   -72,     0,     0,   -58,   -58,
     -58,   120,   214,   -58,     0,     0,     0,     0,    55,    55,
      55,    63,   -79,     0,     0,    63,     0,     0,    63,     0,
       0,   -79,   -79,   -79,     0,    55,   -79,   352,   171,    55,
       0,   115,     0,    59,   -79,     0,   363,     0,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   171,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,     0,     0,   -75,     0,     0,   -27,   -27,   -27,     0,
       0,   171,   -75,   -75,   -75,     0,     0,   -75,   313,     0,
     -75,     0,   170,   253,   -75,     0,     0,     0,   214,   -75,
     -75,   -75,     0,    63,   -75,     0,    63,     0,     0,     0,
     226,   -40,     0,     0,     0,     0,    59,   396,    59,     0,
       0,    63,     0,     0,   170,   214,   189,     0,   109,   189,
     189,   189,   170,    59,     0,   213,     0,    59,     0,     0,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     214,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,   -20,     0,     0,     0,     0,     0,   -20,   -20,
     -20,   167,     0,     0,   109,     0,   171,   -75,     0,     0,
     171,     0,    63,     0,     0,   171,   -75,   -75,   -75,     0,
     -78,   -75,   213,     0,     0,     0,     0,   253,   -75,   -78,
     -78,   -78,     0,   167,   -78,   102,     0,   106,   110,   111,
     112,   167,   -57,     0,   210,     0,   170,   170,   170,     0,
     -58,   -57,   -57,   -57,     0,     0,   -57,     0,     0,   -58,
     -58,   -58,     0,   -57,   -58,   -71,   189,   189,   170,     0,
       0,   -58,     0,     0,   -71,   273,   -71,     0,     0,   -71,
       0,     0,     0,   106,   -78,    63,    63,    63,     0,   213,
     213,   170,     0,   -78,   -78,   -78,     0,     0,   -78,     0,
     -71,   210,    63,     0,     0,   -78,    63,     0,   213,   -71,
     262,   -71,     0,     0,   -71,   -73,     0,     0,     0,     0,
       0,   -71,     0,     0,   -73,   -73,   -73,   167,     0,   -73,
       0,     0,     0,   109,   189,   213,   -73,     0,   170,     0,
       0,   170,   170,   170,   170,   109,   189,   167,     0,   189,
       0,     0,   189,   189,   189,   189,   189,   189,   109,   189,
     213,     0,     0,   213,   -76,     0,   213,   213,   213,   213,
     167,     0,     0,   -76,   -76,   -76,   189,   189,   -76,     0,
       0,     0,   -74,     0,     0,   -76,   170,   210,   189,     0,
     170,   -74,   -74,   -74,     0,   170,   -74,   -80,     0,     0,
       0,   109,     0,   -74,     0,     0,   -80,   -80,   -80,   109,
       0,   -80,   106,   316,   210,     0,     0,     0,   -80,     0,
     -77,   109,     0,     0,   106,   326,     0,   189,   189,   -77,
     -77,   -77,   189,   189,   -77,   333,   334,   106,   336,   210,
     -70,   -77,     0,     0,     0,     0,     0,     0,     0,   -70,
     262,   -70,     0,     0,   -70,   347,   348,     0,     0,     0,
       0,   -70,   -72,     0,     0,   167,     0,   354,   -79,   167,
       0,   -72,   -72,   -72,   167,     0,   -72,   -79,   -79,   -79,
     106,   -75,   -79,   -72,     0,     0,     0,     0,   106,   -79,
     -75,   -75,   -75,     0,   -73,   -75,     0,     0,     0,     0,
     106,   226,     0,   -73,   -73,   -73,   377,   378,   -73,     0,
       0,   381,   382,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,     0,   -19,     0,     0,     0,     0,
       0,   -19,   -19,   -19,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,
       0,     0,   -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,     0,
       0,     0,     0,   -22,   -22,   -22,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,     0,     0,     0,     0,   -26,   -26,
     -26,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,    -7,     0,     0,     0,     0,     0,    -7,
      -7,    -7,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,     0,     0,   -15,     0,     0,     0,
       0,     0,   -15,   -15,   -15,   -29,     0,   -29,   -29,   -29,
     -29,   400,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,   -29,   -29,   -29,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,     0,
       0,     0,     0,     0,   -47,   -47,   -47,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,   -60,
       0,     0,     0,     0,     0,   -60,   -60,   -60,   -59,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
     -59,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -27,     0,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -20,     0,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,   -20,     0,     0,     0,     0,     0,
     -20,   -20,   -20,    90,     0,    24,    25,    26,    27,     0,
      28,    29,    30,     0,    31,    32,    33,    34,    35,    36,
     155,    37,    38,     0,     0,    39,     0,     0,     0,     0,
       0,   156,    91,    40,   -18,     0,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,   -18,     0,     0,     0,
       0,     0,   -18,   -18,   -18,   -19,     0,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,     0,     0,   -19,     0,     0,
       0,     0,     0,   -19,   -19,   -19,   -21,     0,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,
       0,     0,     0,     0,   -21,   -21,   -21,   -22,     0,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -23,     0,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,   -24,
       0,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -25,     0,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -26,     0,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -17,     0,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,     0,     0,     0,     0,
       0,   -17,   -17,   -17,   -16,     0,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,     0,     0,   -16,     0,     0,     0,
       0,     0,   -16,   -16,   -16,   -28,     0,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -32,     0,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -47,     0,   -47,
     -47,   -47,   -47,     0,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -60,     0,
     -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
     -60,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -59,
       0,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   -59,     0,     0,     0,     0,     0,   -59,   -59,   -59,
     -30,     0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -31,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,    90,     0,    24,    25,    26,    27,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,   155,
      37,    38,     0,     0,    39,     0,     0,     0,     0,     0,
     156,   314,    40,    -7,     0,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,     0,     0,     0,
       0,    -7,    -7,    -7,    90,     0,    24,    25,    26,    27,
       0,    28,    29,    30,     0,    31,    32,    33,    34,    35,
      36,   155,    37,    38,     0,     0,    39,     0,     0,     0,
       0,     0,   156,   358,    40,   -15,     0,   -15,   -15,   -15,
     -15,     0,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,     0,     0,   -15,   -76,     0,
       0,     0,     0,   -15,   -15,   -15,   -74,   -76,   -76,   -76,
       0,     0,   -76,   -80,     0,   -74,   -74,   -74,     0,   -77,
     -74,     0,   -80,   -80,   -80,   -70,     0,   -80,   -77,   -77,
     -77,   -72,     0,   -77,   -70,   273,   -70,   -79,     0,   -70,
     -72,   -72,   -72,     0,     0,   -72,   -79,   -79,   -79,     0,
       0,   -79
};

static const yytype_int16 yycheck[] =
{
       0,     0,    15,     3,     3,   122,    73,   156,    43,    22,
      11,   130,    20,    13,   130,   226,    31,    19,    33,   130,
      76,    22,    30,    23,     3,     4,     5,   130,    11,    11,
      38,    39,    40,    12,    11,    43,    15,   130,    94,    22,
      19,    20,   253,    20,    23,    22,    18,    11,    25,    32,
      32,    34,    31,    32,    11,    30,    33,    11,    22,    11,
      11,    25,   130,     0,    72,   130,   122,   278,     3,     4,
       5,    22,    80,   130,    82,    83,    33,    11,    32,    87,
      34,    33,    33,   150,    19,   234,    33,    95,    96,    97,
      98,    11,     3,     4,     5,   130,    31,   132,    32,    11,
      34,    12,    22,    11,    15,    11,    11,    82,    19,    20,
      22,    11,    23,    33,   149,    31,    22,   130,   153,    25,
      31,    32,   130,   131,   132,    33,    32,    32,    34,    34,
     130,   130,   140,    33,   251,     3,     4,     5,    11,    11,
      32,   149,    34,    19,    11,   153,   263,    29,   156,    22,
      22,    19,     3,     4,     5,   130,   164,   165,   166,   276,
      32,    12,    34,    31,    15,   221,    33,     0,    19,    20,
      11,   227,    23,    11,     0,    11,   184,    32,   186,    34,
      31,    32,    31,    18,    11,    18,    22,     3,     4,     5,
      11,    32,    18,    34,    32,   251,     3,     4,     5,   207,
     208,   209,   319,    19,    20,    12,    33,   263,    15,    11,
     327,    32,    19,    20,   249,    31,    23,    31,   226,    11,
     276,    31,   339,   231,    31,    32,   234,     3,     4,     5,
      22,    33,    31,     3,     4,     5,    12,    11,   305,    15,
      32,   249,    34,    19,    20,   253,   313,    23,   256,    19,
      20,   259,   260,   261,   262,    31,   231,   313,    32,    31,
      34,    31,    31,   319,   383,   273,   385,   383,     0,   385,
     278,   327,   383,   281,   385,   310,   284,   285,   286,   287,
     383,   400,   385,   339,   400,   404,    18,    11,   404,   400,
     383,    11,   385,   404,    11,    18,   304,   400,    22,    11,
     308,   404,   310,    11,    20,   313,    31,   400,    32,    32,
      34,   404,    31,    33,    30,   383,    33,   385,   383,    11,
     385,    33,    38,    39,    40,    33,   383,    43,   385,     3,
       4,     5,   400,    11,   401,   400,   404,    31,   313,   404,
      32,    11,    34,   400,    22,    19,    20,   404,   383,    23,
     385,    11,    22,    33,    32,    25,    72,    31,    33,    32,
      19,    34,    22,    33,    80,   400,    82,    83,    11,   404,
     383,    87,   385,    33,    11,   383,   384,   385,    11,    95,
      96,    97,    98,   383,   383,   385,   385,   400,     0,    22,
      33,   404,   400,    11,    33,    32,   404,    34,    11,    32,
     400,   400,    33,    33,   404,   404,    18,    33,   383,    11,
     385,     3,     4,     5,   130,   131,   132,     0,    19,    32,
      12,    13,    14,    15,   140,   400,    11,    19,    20,   404,
      32,    23,    34,   149,    31,    18,    76,   153,    76,    31,
     156,    32,    11,    11,    32,    26,    34,    32,   164,   165,
     166,     3,     4,     5,    94,    11,    94,     3,     4,     5,
      12,    13,    14,    15,    33,    33,    12,    19,    20,    15,
     186,    23,    11,    19,    20,    11,    32,    23,    34,    31,
      33,    32,   122,    22,   122,    31,     3,     4,     5,    32,
      11,   207,   208,   209,    33,    12,    32,    20,    15,    20,
      21,    22,    19,    20,    25,    32,    23,    30,    32,    11,
     226,    32,    32,    34,    31,   231,    39,    40,   234,    32,
      43,    34,     3,     4,     5,     3,     4,     5,    33,    11,
      32,    12,    34,   249,    15,    11,     0,   253,    19,    20,
     256,    19,    23,   259,   260,   261,   262,    33,     0,    72,
      31,    33,    32,    31,    18,    32,    32,    80,    34,    82,
      83,    11,   278,    33,    87,   281,    18,    33,   284,   285,
     286,   287,    95,    96,    97,     3,     4,     5,     0,    33,
      19,   221,    32,   221,     3,     4,     5,   227,   304,   227,
      19,    19,   308,    12,   310,    11,    18,   313,    11,    11,
      19,    20,    33,    31,    23,    31,    22,   130,   131,   132,
      11,   251,    31,   251,    11,    11,    32,   140,    11,    32,
      32,    34,    34,   263,    31,   263,   149,    20,    21,    22,
     153,    32,    25,   156,     0,    32,   276,    34,   276,    32,
      31,    34,   165,   166,     3,     4,     5,     6,    31,     8,
       9,    10,    18,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    11,   186,    23,    13,    14,   383,   384,   385,
      29,    19,    31,   313,    11,   313,     3,     4,     5,   319,
      32,   319,    34,    32,   400,   208,   209,   327,   404,   327,
      20,    11,    19,    20,    11,    32,    23,    31,    11,   339,
      30,   339,    22,   226,    31,    25,    31,    11,   231,    39,
      40,   234,    32,    43,    32,     3,     4,     5,    22,    32,
      11,    32,    32,    34,    12,    11,   249,    15,    32,    31,
     253,    19,    20,   256,    31,    23,   259,   260,   261,    27,
      28,    32,    72,    31,    33,    32,    32,    34,    31,   272,
      80,    11,    82,    83,    32,   278,    34,    87,   281,    11,
      31,   284,   285,   286,    31,    95,    96,    11,    20,    21,
      22,    33,    32,    25,    31,     3,     4,     5,    11,    31,
      32,   304,    34,    31,    12,   308,    31,   310,    32,    31,
     313,    19,    20,    11,    11,    23,     3,     4,     5,    32,
     130,   131,   132,    31,    26,    12,    13,    14,    15,    33,
     140,    11,    19,    20,    32,    32,    23,    31,    11,   149,
      20,    21,    22,   153,    31,    25,   156,    11,    31,     3,
       4,     5,    32,    11,    34,   165,   166,    31,    12,    32,
      31,    11,     3,     4,     5,    19,    20,    33,    32,    23,
      20,    21,    22,    20,    32,    25,   186,    31,    19,    20,
     383,   384,   385,    30,    11,    31,     3,     4,     5,    31,
      31,    31,    39,    40,    19,    12,    43,   400,   208,   209,
      32,   404,    19,    20,    32,    32,    23,    11,    11,    32,
       3,     4,     5,    33,    31,    11,   226,    20,    21,    22,
      11,   231,    25,    11,   234,    72,    19,    20,    32,    32,
      23,    34,    20,    80,    22,    82,    83,    25,    31,   249,
      87,    32,    32,   253,    11,    33,   256,    32,    95,   259,
     260,    11,    32,     3,     4,     5,    32,    32,    32,    11,
      11,   271,     3,     4,     5,    32,    32,    32,   278,    19,
      20,   281,    32,    23,   284,   285,    32,    11,    19,    20,
      32,    31,     3,   130,   131,   132,    20,    21,    22,    32,
      31,    25,    26,   140,   304,    11,    11,    31,   308,    33,
     310,    11,   149,   313,    33,    11,   153,    33,    11,   156,
      20,    21,    22,    32,    11,    25,    32,    32,   165,   166,
      11,    23,    32,    20,    34,    22,    32,   308,    25,    20,
      21,    22,    11,    11,    25,    32,    20,    34,   185,   186,
      -1,    32,    20,    34,    22,    -1,    30,    25,    11,    11,
      -1,    -1,    -1,    32,    32,    39,    40,    11,    20,    43,
      22,   208,   209,    25,    11,    -1,    20,    21,    22,    32,
      32,    25,    11,   383,   384,   385,    11,    -1,    32,   226,
      34,    20,    21,    22,   231,    32,    25,   234,    72,    11,
     400,    -1,    -1,    32,   404,    34,    80,    32,    82,    83,
      11,    11,   249,    87,    11,    -1,   253,    -1,    -1,   256,
      32,    95,   259,    20,    21,    22,    -1,    -1,    25,    11,
     267,    32,    32,   270,    -1,    32,    -1,    34,    20,    21,
      22,   278,    -1,    25,   281,    -1,    -1,   284,    -1,    -1,
      32,    11,    34,    -1,    20,    -1,   130,   131,   132,    -1,
      20,    21,    22,    -1,    30,    25,   140,   304,    -1,    11,
      -1,   308,    32,   310,    40,   149,   313,    43,    20,   153,
      22,    -1,   156,    25,    11,    -1,    -1,    -1,    -1,    -1,
      11,   165,   166,    20,    21,    22,    13,    14,    25,    20,
      21,    22,    19,    -1,    25,    32,    72,    34,    -1,    11,
      -1,    32,   186,    34,    80,    11,    82,    83,    20,    21,
      22,    13,    14,    25,    20,    -1,    22,    19,    -1,    25,
      32,    11,    34,    -1,   208,   209,    32,    -1,    34,    -1,
      20,    21,    22,    -1,    -1,    25,   383,   384,   385,    -1,
      -1,    31,   226,    33,    -1,    -1,    -1,   231,    -1,    11,
     234,    -1,    -1,   400,   130,   131,   132,   404,    20,    21,
      22,    -1,    -1,    25,   140,   249,    -1,    11,    -1,   253,
      -1,    33,   256,   149,    -1,   259,    20,   153,    22,    -1,
     156,    25,    11,    -1,    -1,    20,    -1,    -1,    -1,    -1,
     166,    20,    21,    22,   278,    30,    25,   281,    -1,    -1,
     284,    -1,    -1,    11,    33,    40,    -1,    -1,    43,    -1,
     186,    -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
     304,    11,    -1,    -1,   308,    33,   310,    -1,    -1,   313,
      20,    21,    22,   209,    -1,    25,    -1,    72,    -1,    -1,
      -1,    -1,    11,    33,    -1,    80,    -1,    82,    83,    -1,
     226,    20,    21,    22,    -1,   231,    25,    11,   234,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    20,    21,    22,    -1,
      -1,    25,    -1,   249,    -1,    -1,    11,   253,    -1,    33,
      -1,    -1,    -1,    20,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    30,    -1,   130,   131,   132,    33,   383,
     384,   385,   278,    40,    -1,   140,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,    11,   400,    -1,   153,    -1,
     404,   156,    -1,    -1,    20,    21,    22,    -1,   304,    25,
      11,   166,   308,    -1,   310,    72,    32,   313,    -1,    20,
      21,    22,    -1,    80,    25,    82,    83,    -1,    -1,    -1,
       1,   186,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,   209,    11,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,   226,    -1,   130,   131,   132,   231,    33,    -1,   234,
      -1,    -1,    -1,   140,    -1,    -1,    -1,   383,   384,   385,
      -1,    -1,   149,    -1,   249,    -1,   153,    -1,   253,   156,
      -1,    -1,    20,    -1,   400,    11,    -1,    -1,   404,   166,
      -1,    -1,    30,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    40,   278,    -1,    43,    -1,    33,    -1,   186,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   304,
      -1,    23,   209,   308,    72,   310,    -1,    29,   313,    31,
      -1,    11,    80,    -1,    82,    83,    -1,    -1,    -1,   226,
      20,    21,    22,    -1,   231,    25,    11,   234,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,   249,    11,    -1,    -1,   253,    -1,    33,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    25,    -1,    11,
      -1,    -1,   130,   131,   132,    33,    -1,    -1,    20,    21,
      22,   278,   140,    25,    -1,    -1,    -1,    -1,   383,   384,
     385,   149,    11,    -1,    -1,   153,    -1,    -1,   156,    -1,
      -1,    20,    21,    22,    -1,   400,    25,   304,   166,   404,
      -1,   308,    -1,   310,    33,    -1,   313,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,   186,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    11,    -1,    -1,    29,    30,    31,    -1,
      -1,   209,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      11,    -1,    40,    31,    32,    -1,    -1,    -1,   226,    20,
      21,    22,    -1,   231,    25,    -1,   234,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,   383,   384,   385,    -1,
      -1,   249,    -1,    -1,    72,   253,    74,    -1,    76,    77,
      78,    79,    80,   400,    -1,    83,    -1,   404,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
     278,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    40,    -1,    -1,   122,    -1,   304,    11,    -1,    -1,
     308,    -1,   310,    -1,    -1,   313,    20,    21,    22,    -1,
      11,    25,   140,    -1,    -1,    -1,    -1,    31,    32,    20,
      21,    22,    -1,    72,    25,    74,    -1,    76,    77,    78,
      79,    80,    11,    -1,    83,    -1,   164,   165,   166,    -1,
      11,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    20,
      21,    22,    -1,    32,    25,    11,   184,   185,   186,    -1,
      -1,    32,    -1,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,   122,    11,   383,   384,   385,    -1,   207,
     208,   209,    -1,    20,    21,    22,    -1,    -1,    25,    -1,
      11,   140,   400,    -1,    -1,    32,   404,    -1,   226,    20,
      21,    22,    -1,    -1,    25,    11,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    20,    21,    22,   166,    -1,    25,
      -1,    -1,    -1,   251,   252,   253,    32,    -1,   256,    -1,
      -1,   259,   260,   261,   262,   263,   264,   186,    -1,   267,
      -1,    -1,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    -1,    -1,   281,    11,    -1,   284,   285,   286,   287,
     209,    -1,    -1,    20,    21,    22,   294,   295,    25,    -1,
      -1,    -1,    11,    -1,    -1,    32,   304,   226,   306,    -1,
     308,    20,    21,    22,    -1,   313,    25,    11,    -1,    -1,
      -1,   319,    -1,    32,    -1,    -1,    20,    21,    22,   327,
      -1,    25,   251,   252,   253,    -1,    -1,    -1,    32,    -1,
      11,   339,    -1,    -1,   263,   264,    -1,   345,   346,    20,
      21,    22,   350,   351,    25,   274,   275,   276,   277,   278,
      11,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,   294,   295,    -1,    -1,    -1,
      -1,    32,    11,    -1,    -1,   304,    -1,   306,    11,   308,
      -1,    20,    21,    22,   313,    -1,    25,    20,    21,    22,
     319,    11,    25,    32,    -1,    -1,    -1,    -1,   327,    32,
      20,    21,    22,    -1,    11,    25,    -1,    -1,    -1,    -1,
     339,    31,    -1,    20,    21,    22,   345,   346,    25,    -1,
      -1,   350,   351,     1,    -1,     3,     4,     5,     6,     7,
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
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
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
      16,    17,    18,    19,    20,    -1,    -1,    23,    11,    -1,
      -1,    -1,    -1,    29,    30,    31,    11,    20,    21,    22,
      -1,    -1,    25,    11,    -1,    20,    21,    22,    -1,    11,
      25,    -1,    20,    21,    22,    11,    -1,    25,    20,    21,
      22,    11,    -1,    25,    20,    21,    22,    11,    -1,    25,
      20,    21,    22,    -1,    -1,    25,    20,    21,    22,    -1,
      -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    36,    37,    38,    39,    40,    43,    44,    19,
       0,    38,    33,    31,    18,    32,    41,    42,    43,    19,
      29,    45,    32,    34,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    14,    15,    16,    17,    19,    20,    23,
      31,    39,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    68,    69,    70,    71,    72,    73,    74,
      45,    42,    31,    31,    31,    61,    31,    31,    31,    31,
      31,    31,    26,    31,    19,    73,    12,    23,    69,    63,
       1,    30,    47,    33,    11,    22,    25,    20,    21,    63,
      19,    62,    53,    63,    33,    19,    53,    54,    56,    64,
      53,    53,    53,    27,    28,    63,    67,    19,    61,    32,
      63,    75,    31,    32,    19,    54,    69,    71,    72,    73,
      32,    33,    32,    32,    32,    32,    32,    32,    32,    32,
      34,    56,    47,    63,    47,    33,    33,    63,    32,     7,
      33,    47,    62,    32,    47,    18,    29,    43,     3,     4,
       5,    12,    15,    19,    20,    23,    31,    53,    55,    59,
      64,    68,    69,    70,    71,    72,    73,    74,     3,     4,
       5,    12,    15,    19,    20,    23,    31,    55,    59,    64,
      68,    69,    70,    71,    72,    73,    74,    13,    14,    57,
      58,     3,     4,     5,    12,    15,    19,    20,    23,    31,
      53,    55,    59,    64,    68,    69,    70,    71,    72,    73,
      74,    11,    13,    14,    57,    58,    31,    11,     6,     8,
       9,    10,    16,    17,    29,    39,    43,    45,    48,    49,
      50,    51,    52,    60,    61,    65,    66,    19,    19,    46,
      33,    31,    31,    31,    73,    12,    23,    69,    63,    22,
      25,    20,    21,    31,    31,    73,    12,    23,    69,    63,
      22,    25,    20,    21,    31,    31,    31,    31,    31,    73,
      12,    23,    69,    63,    22,    25,    20,    21,    13,    14,
      19,    54,    57,    58,    31,    31,    32,    75,    13,    14,
      19,    54,    57,    58,    31,    31,    31,    61,    31,    31,
      46,    33,    33,    26,    30,    56,    53,    32,    75,    31,
      32,    69,    71,    72,    73,    56,    53,    31,    32,    69,
      71,    72,    73,    53,    53,    56,    53,    32,    75,    31,
      32,    69,    71,    72,    73,    31,    31,    53,    53,    32,
      31,    31,    63,    62,    53,    33,    67,    19,    30,    19,
      54,    61,    62,    63,    32,    32,    32,    56,    32,    32,
      56,    32,    32,    32,    32,    32,    56,    53,    53,    32,
      32,    53,    53,    32,    33,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    47,    63,    47,    33,    33,
       7,    33,    47,    62,    32,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    44,    45,    46,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    49,
      49,    50,    51,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    56,    57,    58,    59,    60,    61,    61,
      61,    62,    63,    63,    63,    63,    64,    64,    64,    65,
      66,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    74,
      74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     5,     4,
       3,     1,     1,     2,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     9,     3,     1,     3,     3,     1,     1,     4,     5,
       1,     1,     1,     1,     4,     4,     4,     5,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     1,     1,     1,     3,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     2,     1,     1,     3,     1,     4,
       3,     3,     1
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
#line 86 "bison/clang_syntax.y"
                    {
        tree = (yyval.node);
    }
#line 2277 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 92 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2287 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 97 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2295 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 103 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2303 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 106 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2311 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 112 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2319 "bison/clang_syntax.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFDeclaration '(' params ')' compoundStmt  */
#line 118 "bison/clang_syntax.y"
                                                   {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2330 "bison/clang_syntax.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 124 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2340 "bison/clang_syntax.tab.c"
    break;

  case 10: /* params: params ',' param  */
#line 132 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2350 "bison/clang_syntax.tab.c"
    break;

  case 11: /* params: param  */
#line 137 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2358 "bison/clang_syntax.tab.c"
    break;

  case 12: /* param: simpleVDeclaration  */
#line 143 "bison/clang_syntax.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2366 "bison/clang_syntax.tab.c"
    break;

  case 13: /* simpleVDeclaration: TYPE ID  */
#line 149 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, (yyvsp[-1].token).t_title);
        (yyval.node) = createNode(strcat(auxstr," variable ID"));
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    0,
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2384 "bison/clang_syntax.tab.c"
    break;

  case 14: /* simpleFDeclaration: TYPE ID  */
#line 165 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, (yyvsp[-1].token).t_title);
        (yyval.node) = createNode(strcat(auxstr," function ID"));
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    1, 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2402 "bison/clang_syntax.tab.c"
    break;

  case 15: /* compoundStmt: '{' stmtList '}'  */
#line 180 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2410 "bison/clang_syntax.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 186 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2420 "bison/clang_syntax.tab.c"
    break;

  case 17: /* stmtList: stmtList error  */
#line 191 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 2428 "bison/clang_syntax.tab.c"
    break;

  case 18: /* stmtList: primitiveStmt  */
#line 194 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2436 "bison/clang_syntax.tab.c"
    break;

  case 19: /* primitiveStmt: exprStmt  */
#line 200 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2444 "bison/clang_syntax.tab.c"
    break;

  case 20: /* primitiveStmt: compoundStmt  */
#line 203 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2452 "bison/clang_syntax.tab.c"
    break;

  case 21: /* primitiveStmt: condStmt  */
#line 206 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2460 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: iterStmt  */
#line 209 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2468 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: returnStmt  */
#line 212 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2476 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: setStmt  */
#line 215 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2484 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: inOP  */
#line 218 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2492 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: outOP  */
#line 221 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2500 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: varDeclaration  */
#line 224 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2508 "bison/clang_syntax.tab.c"
    break;

  case 28: /* exprStmt: expression ';'  */
#line 230 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2516 "bison/clang_syntax.tab.c"
    break;

  case 29: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 236 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2526 "bison/clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 241 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2537 "bison/clang_syntax.tab.c"
    break;

  case 31: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt  */
#line 250 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2549 "bison/clang_syntax.tab.c"
    break;

  case 32: /* returnStmt: RETURN_KW expression ';'  */
#line 260 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2558 "bison/clang_syntax.tab.c"
    break;

  case 33: /* setStmt: forallOP  */
#line 267 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2566 "bison/clang_syntax.tab.c"
    break;

  case 34: /* pertOP: simpleExp IN_KW ID  */
#line 273 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2576 "bison/clang_syntax.tab.c"
    break;

  case 35: /* pertOP: simpleExp IN_KW setReturner  */
#line 278 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2586 "bison/clang_syntax.tab.c"
    break;

  case 36: /* setReturner: addOP  */
#line 286 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2594 "bison/clang_syntax.tab.c"
    break;

  case 37: /* setReturner: remOP  */
#line 289 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2602 "bison/clang_syntax.tab.c"
    break;

  case 38: /* typeOP: ISSET_KW '(' setParams ')'  */
#line 295 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2611 "bison/clang_syntax.tab.c"
    break;

  case 39: /* typeOP: UN_LOG_OP ISSET_KW '(' setParams ')'  */
#line 299 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2620 "bison/clang_syntax.tab.c"
    break;

  case 40: /* setParams: ID  */
#line 306 "bison/clang_syntax.y"
       {
        (yyval.node) = createNode("is_set parameter");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2629 "bison/clang_syntax.tab.c"
    break;

  case 41: /* setParams: pertOP  */
#line 310 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2637 "bison/clang_syntax.tab.c"
    break;

  case 42: /* setParams: setReturner  */
#line 313 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2645 "bison/clang_syntax.tab.c"
    break;

  case 43: /* setParams: constOP  */
#line 316 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2653 "bison/clang_syntax.tab.c"
    break;

  case 44: /* addOP: ADD_KW '(' pertOP ')'  */
#line 323 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2662 "bison/clang_syntax.tab.c"
    break;

  case 45: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 330 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2671 "bison/clang_syntax.tab.c"
    break;

  case 46: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 337 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2680 "bison/clang_syntax.tab.c"
    break;

  case 47: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 344 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2690 "bison/clang_syntax.tab.c"
    break;

  case 48: /* expression: assignExp  */
#line 352 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2698 "bison/clang_syntax.tab.c"
    break;

  case 49: /* expression: simpleExp  */
#line 355 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2706 "bison/clang_syntax.tab.c"
    break;

  case 50: /* expression: setReturner  */
#line 358 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2714 "bison/clang_syntax.tab.c"
    break;

  case 51: /* assignExp: ID ASS_OP expression  */
#line 364 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("assignment opertator");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2724 "bison/clang_syntax.tab.c"
    break;

  case 52: /* simpleExp: binLogicalExp  */
#line 372 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2732 "bison/clang_syntax.tab.c"
    break;

  case 53: /* simpleExp: pertOP  */
#line 375 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2740 "bison/clang_syntax.tab.c"
    break;

  case 54: /* simpleExp: selectOP  */
#line 378 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2748 "bison/clang_syntax.tab.c"
    break;

  case 55: /* simpleExp: typeOP  */
#line 381 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2756 "bison/clang_syntax.tab.c"
    break;

  case 56: /* constOP: INT  */
#line 387 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST INT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2765 "bison/clang_syntax.tab.c"
    break;

  case 57: /* constOP: FLOAT  */
#line 391 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST FLOAT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2774 "bison/clang_syntax.tab.c"
    break;

  case 58: /* constOP: EMPTY  */
#line 395 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST EMPTY");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2783 "bison/clang_syntax.tab.c"
    break;

  case 59: /* inOP: IN '(' ID ')' ';'  */
#line 402 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 2792 "bison/clang_syntax.tab.c"
    break;

  case 60: /* outOP: OUT '(' outConst ')' ';'  */
#line 409 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = createSymbol((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2802 "bison/clang_syntax.tab.c"
    break;

  case 61: /* outConst: STRING  */
#line 417 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2811 "bison/clang_syntax.tab.c"
    break;

  case 62: /* outConst: CHAR  */
#line 421 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2820 "bison/clang_syntax.tab.c"
    break;

  case 63: /* outConst: simpleExp  */
#line 425 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2828 "bison/clang_syntax.tab.c"
    break;

  case 64: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 431 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2839 "bison/clang_syntax.tab.c"
    break;

  case 65: /* binLogicalExp: unLogicalExp  */
#line 437 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2847 "bison/clang_syntax.tab.c"
    break;

  case 66: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 443 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2857 "bison/clang_syntax.tab.c"
    break;

  case 67: /* unLogicalExp: relationalExp  */
#line 448 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2865 "bison/clang_syntax.tab.c"
    break;

  case 68: /* relationalExp: relationalExp REL_OP sumExp  */
#line 454 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2876 "bison/clang_syntax.tab.c"
    break;

  case 69: /* relationalExp: sumExp  */
#line 460 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2884 "bison/clang_syntax.tab.c"
    break;

  case 70: /* sumExp: sumExp SUM_OP mulExp  */
#line 466 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2895 "bison/clang_syntax.tab.c"
    break;

  case 71: /* sumExp: mulExp  */
#line 472 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2903 "bison/clang_syntax.tab.c"
    break;

  case 72: /* mulExp: mulExp MUL_OP factor  */
#line 478 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("*/÷ operation");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2914 "bison/clang_syntax.tab.c"
    break;

  case 73: /* mulExp: factor  */
#line 484 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2922 "bison/clang_syntax.tab.c"
    break;

  case 74: /* mulExp: SUM_OP factor  */
#line 487 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("signed factor");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2932 "bison/clang_syntax.tab.c"
    break;

  case 75: /* factor: ID  */
#line 495 "bison/clang_syntax.y"
       {
        (yyval.node) = createNode("ID");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2941 "bison/clang_syntax.tab.c"
    break;

  case 76: /* factor: functionCall  */
#line 499 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2949 "bison/clang_syntax.tab.c"
    break;

  case 77: /* factor: '(' simpleExp ')'  */
#line 502 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2957 "bison/clang_syntax.tab.c"
    break;

  case 78: /* factor: constOP  */
#line 505 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2965 "bison/clang_syntax.tab.c"
    break;

  case 79: /* functionCall: ID '(' callParams ')'  */
#line 511 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = createSymbol((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2975 "bison/clang_syntax.tab.c"
    break;

  case 80: /* functionCall: ID '(' ')'  */
#line 516 "bison/clang_syntax.y"
                 {
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 2984 "bison/clang_syntax.tab.c"
    break;

  case 81: /* callParams: callParams ',' simpleExp  */
#line 523 "bison/clang_syntax.y"
                            {
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2994 "bison/clang_syntax.tab.c"
    break;

  case 82: /* callParams: simpleExp  */
#line 528 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3002 "bison/clang_syntax.tab.c"
    break;


#line 3006 "bison/clang_syntax.tab.c"

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

#line 533 "bison/clang_syntax.y"

extern void yyerror(const char* a) {
    printf(BRED"[%d:%d] ", line, column);
    printf("SYNTAX ERROR - ");
    printf("%s\n"reset, a);
    errors++;
}


int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    initScopeStack(&scope);
    pushScopeStack(&scope, 0);
    if(argc > 1){
        if(fp){
            yyin = fp;
            yyparse();
            printf("\nAnalysis completed with %d error(s)\n", errors);

        }
        else{
            printf("Input File Path does not exist.\n");
        }
    }
    else{
        printf("No Input Files.\n");
    }
    fclose(yyin);
    if(!errors){
        printf("Correct program.\n");
        printTree(tree, 0);
    }
    else{
        printf(BRED"The Abstract Syntax Tree will not be shown if there are errors.\n");
        printf(reset);
    }
    printTable(symbolTable);
        

    freeTree();
    // freeNode(tree);
    yylex_destroy();
    return 0;
}
