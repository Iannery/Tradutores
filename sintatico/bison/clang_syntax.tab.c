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
    extern int context;
    extern FILE *yyin;

#line 88 "bison/clang_syntax.tab.c"

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
  YYSYMBOL_callParams = 74                 /* callParams  */
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
#define YYLAST   2614

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  332

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
       0,    87,    87,    95,   100,   107,   111,   118,   125,   131,
     139,   144,   151,   158,   171,   183,   205,   210,   217,   221,
     225,   229,   233,   237,   241,   245,   249,   256,   263,   268,
     277,   287,   294,   301,   306,   314,   318,   325,   332,   339,
     346,   353,   361,   365,   369,   376,   384,   388,   392,   396,
     403,   407,   411,   418,   425,   433,   437,   441,   448,   454,
     461,   466,   473,   479,   486,   492,   499,   505,   509,   517,
     521,   525,   529,   536,   541,   548,   553
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
  "setReturner", "typeOP", "addOP", "remOP", "selectOP", "forallOP",
  "expression", "assignExp", "simpleExp", "constOP", "inOP", "outOP",
  "outConst", "binLogicalExp", "unLogicalExp", "relationalExp", "sumExp",
  "mulExp", "factor", "functionCall", "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      97,    99,   120,    86,   150,   160,   244,   143,   130,    -7,
    -136,   246,   257,   471,   190,   203,    55,    87,   370,   474,
    2481,   280,   203,   231,    77,   418,   562,   221,   230,   253,
     357,   292,   301,   334,   351,   360,   401,   372,    65,   263,
     637,  1843,  1872,  1901,  1930,  1959,  1988,  2017,  2046,  2075,
      18,   400,    19,   409,   416,    38,  2104,   419,   424,    46,
     662,   460,   494,    21,    84,   252,   604,   730,   737,   842,
     303,   508,   637,   488,   714,   513,   503,   714,   714,   714,
     144,   575,   357,    16,   284,   863,   112,    51,   389,  2133,
    2162,   498,  2191,  2220,   263,   179,   179,    65,   175,   538,
     555,   201,   585,  2249,   581,   247,   286,   305,   590,   596,
     324,   599,   615,   629,   906,     6,   545,   951,    47,    80,
     147,   628,   958,  1000,  2510,   823,  2481,    89,   633,   636,
     133,   641,   652,  1020,   714,   123,   154,  2278,    44,  2481,
     617,  2307,   659,  2481,  2336,   705,  2481,   663,  1035,  1069,
    1087,   696,   697,   786,   323,   495,   637,   325,   395,   415,
    1119,     5,   194,   297,   883,  1143,  1165,  1207,  1354,  2523,
    2529,   708,   711,  1246,   540,   516,   637,   725,   753,  2535,
      11,   140,   594,   724,  2541,  2547,  2553,   754,   747,   738,
     745,   159,   206,   791,   748,   760,   769,   357,  2481,   405,
     751,   461,  1379,  1408,  1437,  1466,  1495,  1524,   752,   768,
     776,   787,   779,  2365,  2394,   797,   714,    41,  1215,   341,
     426,   495,   250,   250,   323,   803,   714,    62,  2559,   277,
     477,   516,   441,   441,   540,   792,   802,   493,   505,   530,
     542,   714,   714,   805,   810,   833,   834,   837,   840,   637,
     488,   714,   819,  2423,  1553,  1582,  1611,  1640,   482,  2452,
     825,   543,  1238,   572,  1280,   342,  1091,  1300,  1322,   828,
     544,  2565,   800,  2571,   356,   767,  2577,  2583,   714,   714,
     546,   549,   714,   714,   559,   822,   569,  1669,  1698,   835,
     838,   677,   836,   841,   850,   854,   855,   600,   601,   603,
    1335,   859,   878,  2589,   619,   635,   212,   226,   660,   668,
    2510,   823,  2510,   714,   714,   669,   675,   879,   886,  1727,
     232,  1756,   682,   693,  2510,   617,   870,   874,  1785,   875,
    2510,  1814
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,   862,     1,  -136,  -136,   887,     0,  -136,
     -10,  -135,   -34,  -122,  -109,  -106,   -99,   -90,   930,   -85,
    1004,   -81,   -77,  1048,   -83,   -23,   -65,   821,   376,   -82,
     -74,  -136,  1122,   307,   716,   703,   598,   117,   489,   128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    41,     6,    16,    17,   147,     8,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,   111,    63,    64,    65,    66,    67,    68,    69,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     5,   202,     7,     5,    21,   119,    75,   100,    89,
     191,   213,    70,    18,   192,   203,   -46,   193,   204,   168,
     169,   170,   -46,    18,   -14,   205,   -13,   221,   171,   -47,
     -49,   172,   -46,   231,   206,   173,   174,   -46,   -76,   175,
     -76,   207,   209,    94,   168,   169,   170,   176,   114,   -48,
     210,   -47,   -49,   171,   -46,   193,   172,    91,   -33,   113,
     173,   174,   188,   253,   175,   168,   169,   170,    24,    25,
      26,   -48,   176,   262,   171,   142,   -75,   172,   -75,   -43,
     -33,   173,   174,   117,    84,   175,    -2,    22,   -50,    23,
     135,   -34,   137,   176,   271,   -59,    40,   -50,   -50,   -50,
     -37,   208,   -50,   238,     1,   141,   -59,   239,   246,   144,
     -50,   240,   247,   -34,   201,     1,   248,   -59,     9,   -11,
      10,   -11,   -37,   -60,   200,   199,   -28,   -28,   -28,   -28,
     139,   -28,   -28,   -28,   -60,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -40,   -60,   -28,   148,   149,   150,
      -4,   -59,   -28,   -28,   -28,    85,   151,   166,   -58,   152,
      -5,    13,   -59,   153,   154,    91,   -40,   155,    -4,   -58,
     -35,   108,   109,   292,   252,   156,    12,   293,    -5,    89,
     -58,   294,    24,    25,    26,   285,   188,   140,   202,   166,
     202,   185,   -35,   296,   185,   185,   185,   166,    84,    38,
     185,   203,   202,   203,   204,   -59,   204,   124,   202,    19,
      40,   205,   -47,   205,   123,   203,   -59,   -36,   204,    89,
     206,   203,   206,   -38,   204,   205,   -59,   207,   209,   207,
     209,   205,    20,   126,   206,   295,   210,   -39,   210,   -36,
     206,   207,   209,    91,    -6,   -38,    -3,   207,   209,    14,
     210,   185,    72,   148,   149,   150,   210,    -7,   -47,   -39,
     329,    73,    -6,   -61,    -3,   325,    24,    25,    26,   153,
     154,   218,   166,   166,   -61,    -7,   319,    95,   321,   128,
      -9,   156,    84,    38,    74,   -61,    39,   208,   -60,   208,
     328,   228,   185,   166,    40,   -69,   331,   -47,    -9,   -60,
     201,   208,   201,    -8,   -69,   -69,   -69,   208,   -61,   -69,
     200,   199,   200,   199,   201,    83,   -47,   -69,   129,   -61,
     201,    -8,   222,    76,   200,   199,   148,   149,   150,   -61,
     200,   199,    77,   185,   185,   188,   -47,   130,   166,   166,
     166,   268,   153,   185,   185,   263,    86,   162,   185,   185,
     185,   277,   -60,   -58,   156,   272,   -57,   -47,   185,   185,
      24,    25,    26,   -60,   -58,    78,   166,   -58,   185,    31,
      32,    33,    34,   -60,   -58,   166,    37,    38,   -58,   162,
      39,   181,    79,   -69,   181,   181,   181,   162,    40,   -15,
     181,    80,   -69,   -69,   -69,   185,   185,   -69,    82,   185,
     185,   120,   -12,    83,   -12,   -69,   -49,   -15,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   160,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -48,   -49,   -26,   -51,
     185,   185,    81,   -44,   -26,   -26,   -26,   188,   -51,   -51,
     -51,   181,   -35,   -51,   168,   169,   170,   -48,   160,   -36,
     179,   -51,    90,   179,   179,   179,   160,   -42,   264,   179,
     173,   174,   219,   162,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   176,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   229,   162,   -19,   148,   149,   150,   188,    14,
     -19,   -19,   -19,    92,   151,   289,   290,   152,   148,   149,
     150,   291,   154,    15,   -33,   155,   -13,    99,   -13,   273,
     179,   189,   190,   156,   153,   154,   -34,   118,   155,   168,
     169,   170,   104,   181,   181,   -33,   156,    93,   265,   167,
     160,   160,   160,   181,   181,   173,   174,   -34,   274,   175,
     -10,   -35,   -10,   168,   169,   170,   103,   176,   181,   181,
     179,   179,   160,   -36,   -47,   -47,   162,   -47,   181,   173,
     -47,   167,   -35,   186,    82,   162,   186,   186,   186,   167,
     188,   176,   186,   -52,   -36,   299,   302,   133,   306,   134,
     -47,   307,   -52,   -52,   -52,   181,   181,   -52,   125,   181,
     181,   310,   179,   179,   112,   -52,   188,   160,   160,   160,
     160,   312,   179,   179,   300,   -61,   134,   179,   179,   179,
     179,   188,   -37,   127,   -40,   -63,   -61,   179,   179,   232,
     181,   181,   -55,   186,    96,   160,   -63,   179,   -56,   -63,
     -47,   131,   -43,   -37,   160,   -40,   211,   -63,   165,   -62,
     148,   149,   150,   167,   167,   167,   -47,   132,    96,   151,
     -62,   315,   152,   -62,   179,   179,   153,   154,   179,   179,
     155,   -62,   -45,   186,   186,   167,   -38,   316,   156,   -39,
     165,   -47,   184,   -72,   -54,   184,   184,   184,   165,   -47,
     -38,   184,   -72,   -72,   -72,   -53,   -39,   -72,   -69,   179,
     179,   143,   317,   -47,   122,   -72,   214,   -69,   -69,   -69,
     318,   -38,   -69,   258,   -47,   186,   186,   -39,   217,   -69,
     167,   167,   167,   167,   326,   186,   186,   168,   169,   170,
     186,   186,   186,   186,   212,   327,   171,   215,   216,   172,
     186,   186,   184,   173,   174,   -63,   -49,   175,   167,   225,
     186,   -65,   226,   164,   233,   176,   -63,   167,   -67,   -63,
     -65,    97,   -65,   165,   165,   -65,   163,   -67,   -67,   -67,
     235,   236,   -67,   -65,   -48,   -47,   237,   186,   186,   241,
     -67,   186,   186,   184,   165,   164,   242,   183,   -62,   249,
     183,   183,   183,   164,   254,   255,   183,   233,   163,   -62,
     182,   250,   -62,   182,   182,   182,   163,   -69,   121,   182,
     251,   256,   186,   186,   243,   244,   -69,   -69,   -69,   257,
     245,   -69,   -13,   258,   184,   184,   260,   217,   -69,   165,
     165,   267,   269,   278,   184,   184,    24,    25,    26,   184,
     184,   276,   303,   279,   134,    31,   282,   183,    34,   184,
     184,   283,    84,    38,   -33,   -34,    39,   165,   -35,   184,
     182,   -36,   287,   -70,    40,   311,   165,   298,   164,   164,
     301,    87,   -70,   -70,   -70,    11,   313,   -70,   -44,   314,
     -37,   163,   163,   -35,   -68,   -70,   184,   184,   183,   164,
     184,   184,   -36,   -68,   -68,   -68,   -45,   -42,   -68,   -40,
     -38,   182,   163,    98,   -63,   102,   -68,   -39,   102,   102,
     102,   110,   -38,   223,   115,   -63,   -39,   330,   -63,     0,
      71,   184,   184,     0,     0,   -63,     0,   -74,     0,   183,
     183,     0,     0,     0,   164,   266,   -74,   -74,   -74,   183,
     183,   -74,   182,   182,   183,   275,     0,   163,     0,   -74,
       0,     0,   182,   182,   183,   183,   136,   182,     0,     0,
       0,     0,   164,     0,   183,   138,     0,   182,   182,     0,
       0,   164,   -71,     0,     0,   163,     0,   182,     0,   -64,
     157,   -71,   -71,   -71,   163,     0,   -71,   220,   -64,    97,
     -64,   183,   183,   -64,   -71,   183,   183,     0,     0,     0,
       0,   -64,     0,     0,   182,   182,     0,   230,   182,   182,
       0,     0,   157,     0,   101,     0,     0,   105,   106,   107,
     157,   -66,     0,   187,     0,     0,   183,   183,     0,     0,
     -66,   -66,   -66,     0,     0,   -66,     0,     0,     0,   182,
     182,   -73,     0,   -66,     0,     0,     0,   102,   115,     0,
     -73,   -73,   -73,     0,   158,   -73,   -50,   102,   115,     0,
       0,     0,     0,   -73,     0,   -50,   -50,   -50,     0,     0,
     -50,     0,   102,   102,   187,     0,     0,   -50,     0,     0,
     284,     0,   102,     0,     0,     0,   158,     0,   177,   297,
     -51,   177,   177,   177,   158,     0,   157,   177,   159,   -51,
     -51,   -51,     0,     0,   -51,     0,     0,     0,   -52,   102,
     102,   -51,   -62,   102,   102,     0,   157,   -52,   -52,   -52,
       0,   223,   -52,   -62,     0,     0,   -62,     0,     0,   -52,
     159,     0,   178,   -62,     0,   178,   178,   178,   159,     0,
     -72,   178,   320,     0,   102,   102,     0,     0,   177,   -72,
     -72,   -72,     0,     0,   -72,     0,   261,   187,     0,     0,
       0,   -72,     0,     0,   -65,     0,   270,   187,     0,     0,
     158,     0,   161,   -65,   224,   -65,     0,     0,   -65,     0,
       0,   280,   281,     0,     0,   -65,   -67,     0,     0,   157,
     158,   286,   178,     0,     0,   -67,   -67,   -67,   157,     0,
     -67,     0,     0,     0,   161,     0,   180,   -67,     0,   180,
     180,   180,   161,     0,   159,   180,     0,     0,   304,   305,
       0,     0,   308,   309,     0,     0,     0,     0,   -70,     0,
     177,   177,     0,     0,   159,     0,   -68,   -70,   -70,   -70,
     177,   177,   -70,     0,     0,   -68,   -68,   -68,     0,   -70,
     -68,     0,     0,   322,   323,   177,   177,   -68,     0,   -74,
       0,     0,     0,   158,     0,   177,   180,   -69,   -74,   -74,
     -74,     0,   158,   -74,   178,   178,   -69,   -69,   -69,     0,
     -74,   -69,     0,     0,   178,   178,     0,   227,   161,     0,
       0,     0,   177,   177,     0,     0,   177,   177,     0,   178,
     178,   -71,     0,     0,     0,     0,     0,   159,   161,   178,
     -71,   -71,   -71,     0,     0,   -71,   159,     0,     0,     0,
       0,   -64,   -71,     0,     0,     0,     0,   177,   177,     0,
     -64,   224,   -64,     0,     0,   -64,   178,   178,     0,     0,
     178,   178,   -64,   -66,     0,     0,     0,     0,   180,   180,
       0,     0,   -66,   -66,   -66,     0,   -73,   -66,   180,   180,
       0,     0,     0,     0,   -66,   -73,   -73,   -73,     0,     0,
     -73,   178,   178,   180,   180,   -50,     0,   -73,     0,     0,
       0,   161,     0,   180,   -50,   -50,   -50,     0,     0,   -50,
     161,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     180,   180,   -18,     0,   180,   180,     0,     0,   -18,   -18,
     -18,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,     0,     0,     0,   180,   180,   -20,   -20,   -20,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,     0,    -7,     0,     0,     0,
       0,     0,    -7,    -7,    -7,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,   -15,     0,     0,     0,     0,     0,   -15,   -15,   -15,
     -28,   -28,   -28,   -28,   324,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
       0,     0,     0,     0,     0,   -41,   -41,   -41,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,
       0,     0,     0,     0,   -29,   -29,   -29,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,     0,   -19,     0,     0,     0,     0,
       0,   -19,   -19,   -19,    24,    25,    26,    27,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,   145,
      37,    38,     0,     0,    39,     0,     0,     0,     0,     0,
     146,    88,    40,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,   -17,     0,     0,     0,     0,     0,   -17,
     -17,   -17,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
       0,     0,   -18,     0,     0,     0,     0,     0,   -18,   -18,
     -18,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,     0,     0,     0,     0,     0,   -20,   -20,   -20,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,     0,     0,   -16,     0,     0,     0,
       0,     0,   -16,   -16,   -16,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
       0,     0,     0,     0,     0,   -30,   -30,   -30,    24,    25,
      26,    27,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,   145,    37,    38,     0,     0,    39,     0,
       0,     0,     0,     0,   146,   259,    40,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,     0,
       0,     0,     0,    -7,    -7,    -7,    24,    25,    26,    27,
       0,    28,    29,    30,     0,    31,    32,    33,    34,    35,
      36,   145,    37,    38,     0,     0,    39,     0,     0,     0,
       0,     0,   146,   288,    40,   -15,   -15,   -15,   -15,     0,
     -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,   -15,     0,     0,     0,     0,
       0,   -15,   -15,   -15,    24,    25,    26,    27,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,   145,
      37,    38,     0,     0,    39,     0,     0,     0,     0,     0,
     146,     0,    40,    24,    25,    26,   194,     0,   195,   196,
     197,     0,    31,    32,    33,    34,    35,    36,   145,    37,
      38,     0,     0,    39,   -51,     0,     0,     0,     0,   198,
     -52,    40,     0,   -51,   -51,   -51,   -72,     0,   -51,   -52,
     -52,   -52,   -65,     0,   -52,   -72,   -72,   -72,   -67,     0,
     -72,   -65,   234,   -65,   -70,     0,   -65,   -67,   -67,   -67,
     -68,     0,   -67,   -70,   -70,   -70,   -74,     0,   -70,   -68,
     -68,   -68,   -71,     0,   -68,   -74,   -74,   -74,   -64,     0,
     -74,   -71,   -71,   -71,   -66,     0,   -71,   -64,   234,   -64,
     -73,     0,   -64,   -66,   -66,   -66,     0,     0,   -66,   -73,
     -73,   -73,     0,     0,   -73
};

static const yytype_int16 yycheck[] =
{
       0,     0,   124,     3,     3,    15,    91,    30,    73,    43,
      91,   146,    22,    13,    91,   124,    11,    11,   124,     3,
       4,     5,    11,    23,    31,   124,    33,    22,    12,    11,
      11,    15,    11,    22,   124,    19,    20,    32,    32,    23,
      34,   124,   124,    22,     3,     4,     5,    31,    32,    11,
     124,    33,    33,    12,    33,    11,    15,    11,    11,    82,
      19,    20,    11,   198,    23,     3,     4,     5,     3,     4,
       5,    33,    31,    32,    12,   140,    32,    15,    34,    33,
      33,    19,    20,    32,    19,    23,     0,    32,    11,    34,
     124,    11,   126,    31,    32,    11,    31,    20,    21,    22,
      11,   124,    25,   188,    18,   139,    22,   188,   193,   143,
      33,   188,   193,    33,   124,    18,   193,    33,    19,    32,
       0,    34,    33,    11,   124,   124,     3,     4,     5,     6,
       7,     8,     9,    10,    22,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    11,    33,    23,     3,     4,     5,
       0,    11,    29,    30,    31,    38,    12,    40,    11,    15,
       0,    31,    22,    19,    20,    11,    33,    23,    18,    22,
      11,    27,    28,   258,   197,    31,    33,   258,    18,   213,
      33,   258,     3,     4,     5,   250,    11,    33,   310,    72,
     312,    74,    33,   258,    77,    78,    79,    80,    19,    20,
      83,   310,   324,   312,   310,    11,   312,    32,   330,    19,
      31,   310,    11,   312,    97,   324,    22,    11,   324,   253,
     310,   330,   312,    11,   330,   324,    32,   310,   310,   312,
     312,   330,    29,    32,   324,   258,   310,    11,   312,    33,
     330,   324,   324,    11,     0,    33,     0,   330,   330,    18,
     324,   134,    31,     3,     4,     5,   330,     0,    11,    33,
     325,    31,    18,    11,    18,    33,     3,     4,     5,    19,
      20,   154,   155,   156,    22,    18,   310,    25,   312,    32,
       0,    31,    19,    20,    31,    33,    23,   310,    11,   312,
     324,   174,   175,   176,    31,    11,   330,    11,    18,    22,
     310,   324,   312,     0,    20,    21,    22,   330,    11,    25,
     310,   310,   312,   312,   324,    31,    11,    33,    32,    22,
     330,    18,    25,    31,   324,   324,     3,     4,     5,    32,
     330,   330,    31,   216,   217,    11,    11,    32,   221,   222,
     223,   224,    19,   226,   227,   217,    39,    40,   231,   232,
     233,   234,    11,    11,    31,   227,    32,    32,   241,   242,
       3,     4,     5,    22,    22,    31,   249,    11,   251,    12,
      13,    14,    15,    32,    32,   258,    19,    20,    22,    72,
      23,    74,    31,    11,    77,    78,    79,    80,    31,     0,
      83,    31,    20,    21,    22,   278,   279,    25,    26,   282,
     283,    94,    32,    31,    34,    33,    11,    18,     3,     4,
       5,     6,     7,     8,     9,    10,    40,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    11,    32,    23,    11,
     313,   314,    31,    33,    29,    30,    31,    11,    20,    21,
      22,   134,    33,    25,     3,     4,     5,    32,    72,    33,
      74,    33,    33,    77,    78,    79,    80,    33,    32,    83,
      19,    20,   155,   156,     3,     4,     5,     6,     7,     8,
       9,    10,    31,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   175,   176,    23,     3,     4,     5,    11,    18,
      29,    30,    31,    33,    12,    13,    14,    15,     3,     4,
       5,    19,    20,    32,    11,    23,    32,    19,    34,    32,
     134,    13,    14,    31,    19,    20,    11,    19,    23,     3,
       4,     5,    19,   216,   217,    32,    31,    33,   221,    40,
     154,   155,   156,   226,   227,    19,    20,    32,   231,    23,
      32,    11,    34,     3,     4,     5,    33,    31,   241,   242,
     174,   175,   176,    11,    11,    11,   249,    11,   251,    19,
      11,    72,    32,    74,    26,   258,    77,    78,    79,    80,
      11,    31,    83,    11,    32,    32,    32,    32,    32,    34,
      11,    32,    20,    21,    22,   278,   279,    25,    33,   282,
     283,    32,   216,   217,    19,    33,    11,   221,   222,   223,
     224,    32,   226,   227,    32,    11,    34,   231,   232,   233,
     234,    11,    11,    32,    11,    11,    22,   241,   242,    25,
     313,   314,    32,   134,    20,   249,    22,   251,    32,    25,
      11,    32,    32,    32,   258,    32,    19,    33,    40,    11,
       3,     4,     5,   154,   155,   156,    11,    32,    20,    12,
      22,    32,    15,    25,   278,   279,    19,    20,   282,   283,
      23,    33,    33,   174,   175,   176,    33,    32,    31,    33,
      72,    11,    74,    11,    33,    77,    78,    79,    80,    11,
      11,    83,    20,    21,    22,    33,    11,    25,    11,   313,
     314,    32,    32,    11,    96,    33,    33,    20,    21,    22,
      32,    32,    25,    26,    11,   216,   217,    32,    31,    32,
     221,   222,   223,   224,    32,   226,   227,     3,     4,     5,
     231,   232,   233,   234,    19,    32,    12,    31,    31,    15,
     241,   242,   134,    19,    20,    11,    11,    23,   249,    31,
     251,    11,    31,    40,    20,    31,    22,   258,    11,    25,
      20,    21,    22,   155,   156,    25,    40,    20,    21,    22,
      13,    14,    25,    33,    11,    11,    19,   278,   279,    31,
      33,   282,   283,   175,   176,    72,    31,    74,    11,    31,
      77,    78,    79,    80,    33,    33,    83,    20,    72,    22,
      74,    31,    25,    77,    78,    79,    80,    11,    95,    83,
      31,    33,   313,   314,    13,    14,    20,    21,    22,    33,
      19,    25,    33,    26,   216,   217,    19,    31,    32,   221,
     222,   223,    19,    31,   226,   227,     3,     4,     5,   231,
     232,   233,    32,    31,    34,    12,    31,   134,    15,   241,
     242,    31,    19,    20,    11,    11,    23,   249,    11,   251,
     134,    11,    33,    11,    31,    33,   258,    32,   155,   156,
      32,    40,    20,    21,    22,     3,    31,    25,    32,    31,
      11,   155,   156,    32,    11,    33,   278,   279,   175,   176,
     282,   283,    32,    20,    21,    22,    32,    32,    25,    11,
      11,   175,   176,    72,    11,    74,    33,    11,    77,    78,
      79,    80,    32,    20,    83,    22,    32,    32,    25,    -1,
      23,   313,   314,    -1,    -1,    32,    -1,    11,    -1,   216,
     217,    -1,    -1,    -1,   221,   222,    20,    21,    22,   226,
     227,    25,   216,   217,   231,   232,    -1,   221,    -1,    33,
      -1,    -1,   226,   227,   241,   242,   125,   231,    -1,    -1,
      -1,    -1,   249,    -1,   251,   134,    -1,   241,   242,    -1,
      -1,   258,    11,    -1,    -1,   249,    -1,   251,    -1,    11,
      40,    20,    21,    22,   258,    -1,    25,   156,    20,    21,
      22,   278,   279,    25,    33,   282,   283,    -1,    -1,    -1,
      -1,    33,    -1,    -1,   278,   279,    -1,   176,   282,   283,
      -1,    -1,    72,    -1,    74,    -1,    -1,    77,    78,    79,
      80,    11,    -1,    83,    -1,    -1,   313,   314,    -1,    -1,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,   313,
     314,    11,    -1,    33,    -1,    -1,    -1,   216,   217,    -1,
      20,    21,    22,    -1,    40,    25,    11,   226,   227,    -1,
      -1,    -1,    -1,    33,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,   241,   242,   134,    -1,    -1,    32,    -1,    -1,
     249,    -1,   251,    -1,    -1,    -1,    72,    -1,    74,   258,
      11,    77,    78,    79,    80,    -1,   156,    83,    40,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    11,   278,
     279,    32,    11,   282,   283,    -1,   176,    20,    21,    22,
      -1,    20,    25,    22,    -1,    -1,    25,    -1,    -1,    32,
      72,    -1,    74,    32,    -1,    77,    78,    79,    80,    -1,
      11,    83,   311,    -1,   313,   314,    -1,    -1,   134,    20,
      21,    22,    -1,    -1,    25,    -1,   216,   217,    -1,    -1,
      -1,    32,    -1,    -1,    11,    -1,   226,   227,    -1,    -1,
     156,    -1,    40,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,   241,   242,    -1,    -1,    32,    11,    -1,    -1,   249,
     176,   251,   134,    -1,    -1,    20,    21,    22,   258,    -1,
      25,    -1,    -1,    -1,    72,    -1,    74,    32,    -1,    77,
      78,    79,    80,    -1,   156,    83,    -1,    -1,   278,   279,
      -1,    -1,   282,   283,    -1,    -1,    -1,    -1,    11,    -1,
     216,   217,    -1,    -1,   176,    -1,    11,    20,    21,    22,
     226,   227,    25,    -1,    -1,    20,    21,    22,    -1,    32,
      25,    -1,    -1,   313,   314,   241,   242,    32,    -1,    11,
      -1,    -1,    -1,   249,    -1,   251,   134,    11,    20,    21,
      22,    -1,   258,    25,   216,   217,    20,    21,    22,    -1,
      32,    25,    -1,    -1,   226,   227,    -1,    31,   156,    -1,
      -1,    -1,   278,   279,    -1,    -1,   282,   283,    -1,   241,
     242,    11,    -1,    -1,    -1,    -1,    -1,   249,   176,   251,
      20,    21,    22,    -1,    -1,    25,   258,    -1,    -1,    -1,
      -1,    11,    32,    -1,    -1,    -1,    -1,   313,   314,    -1,
      20,    21,    22,    -1,    -1,    25,   278,   279,    -1,    -1,
     282,   283,    32,    11,    -1,    -1,    -1,    -1,   216,   217,
      -1,    -1,    20,    21,    22,    -1,    11,    25,   226,   227,
      -1,    -1,    -1,    -1,    32,    20,    21,    22,    -1,    -1,
      25,   313,   314,   241,   242,    11,    -1,    32,    -1,    -1,
      -1,   249,    -1,   251,    20,    21,    22,    -1,    -1,    25,
     258,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     278,   279,    23,    -1,   282,   283,    -1,    -1,    29,    30,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,   313,   314,    29,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    11,    -1,    -1,    -1,    -1,    29,
      11,    31,    -1,    20,    21,    22,    11,    -1,    25,    20,
      21,    22,    11,    -1,    25,    20,    21,    22,    11,    -1,
      25,    20,    21,    22,    11,    -1,    25,    20,    21,    22,
      11,    -1,    25,    20,    21,    22,    11,    -1,    25,    20,
      21,    22,    11,    -1,    25,    20,    21,    22,    11,    -1,
      25,    20,    21,    22,    11,    -1,    25,    20,    21,    22,
      11,    -1,    25,    20,    21,    22,    -1,    -1,    25,    20,
      21,    22,    -1,    -1,    25
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
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    67,    68,    69,    70,    71,    72,    73,
      45,    42,    31,    31,    31,    60,    31,    31,    31,    31,
      31,    31,    26,    31,    19,    72,    68,    62,    30,    47,
      33,    11,    33,    33,    22,    25,    20,    21,    62,    19,
      61,    53,    62,    33,    19,    53,    53,    53,    27,    28,
      62,    66,    19,    60,    32,    62,    74,    32,    19,    54,
      68,    70,    71,    72,    32,    33,    32,    32,    32,    32,
      32,    32,    32,    32,    34,    47,    62,    47,    62,     7,
      33,    47,    61,    32,    47,    18,    29,    43,     3,     4,
       5,    12,    15,    19,    20,    23,    31,    53,    55,    58,
      63,    67,    68,    69,    70,    71,    72,    73,     3,     4,
       5,    12,    15,    19,    20,    23,    31,    55,    58,    63,
      67,    68,    69,    70,    71,    72,    73,    53,    11,    13,
      14,    56,    57,    11,     6,     8,     9,    10,    29,    39,
      43,    45,    48,    49,    50,    51,    52,    59,    60,    64,
      65,    19,    19,    46,    33,    31,    31,    31,    72,    68,
      62,    22,    25,    20,    21,    31,    31,    31,    72,    68,
      62,    22,    25,    20,    21,    13,    14,    19,    54,    56,
      57,    31,    31,    13,    14,    19,    54,    56,    57,    31,
      31,    31,    60,    46,    33,    33,    33,    33,    26,    30,
      19,    53,    32,    74,    32,    68,    70,    71,    72,    19,
      53,    32,    74,    32,    68,    70,    71,    72,    31,    31,
      53,    53,    31,    31,    62,    61,    53,    33,    30,    13,
      14,    19,    54,    56,    57,    60,    61,    62,    32,    32,
      32,    32,    32,    32,    53,    53,    32,    32,    53,    53,
      32,    33,    32,    31,    31,    32,    32,    32,    32,    47,
      62,    47,    53,    53,     7,    33,    32,    32,    47,    61,
      32,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    44,    45,    46,    46,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    48,    49,    49,
      50,    51,    52,    53,    53,    54,    54,    55,    56,    57,
      58,    59,    60,    60,    60,    61,    62,    62,    62,    62,
      63,    63,    63,    64,    65,    66,    66,    66,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    72,
      72,    72,    72,    73,    73,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     5,     4,
       3,     1,     1,     2,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     5,     7,
       9,     3,     1,     3,     3,     1,     1,     4,     4,     4,
       4,     5,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     1,     1,     3,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       1,     3,     1,     4,     3,     3,     1
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
#line 87 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("program");
        (yyval.node)->node1 = (yyvsp[0].node);
        tree = (yyval.node);
    }
#line 2081 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 95 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declarationList");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2091 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 100 "bison/clang_syntax.y"
                  {
        (yyval.node) = createNode("declarationList");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2100 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 107 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("declaration");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2109 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 111 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("declaration");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2118 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 118 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("varDeclaration");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2127 "bison/clang_syntax.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFDeclaration '(' params ')' compoundStmt  */
#line 125 "bison/clang_syntax.y"
                                                   {
        (yyval.node) = createNode("funcDeclaration");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2138 "bison/clang_syntax.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 131 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("funcDeclaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2148 "bison/clang_syntax.tab.c"
    break;

  case 10: /* params: params ',' param  */
#line 139 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("params");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2158 "bison/clang_syntax.tab.c"
    break;

  case 11: /* params: param  */
#line 144 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("params");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2167 "bison/clang_syntax.tab.c"
    break;

  case 12: /* param: simpleVDeclaration  */
#line 151 "bison/clang_syntax.y"
                       {
        (yyval.node) = createNode("param");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2176 "bison/clang_syntax.tab.c"
    break;

  case 13: /* simpleVDeclaration: TYPE ID  */
#line 158 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("simpleVDeclaration");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    0, 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column);
    }
#line 2191 "bison/clang_syntax.tab.c"
    break;

  case 14: /* simpleFDeclaration: TYPE ID  */
#line 171 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("simpleFDeclaration");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    1, 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column);
    }
#line 2206 "bison/clang_syntax.tab.c"
    break;

  case 15: /* compoundStmt: '{' stmtList '}'  */
#line 183 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("CompoundStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2215 "bison/clang_syntax.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 205 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("stmtList");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2225 "bison/clang_syntax.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 210 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("stmtList");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2234 "bison/clang_syntax.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 217 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2243 "bison/clang_syntax.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 221 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2252 "bison/clang_syntax.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 225 "bison/clang_syntax.y"
               {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2261 "bison/clang_syntax.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 229 "bison/clang_syntax.y"
               {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2270 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 233 "bison/clang_syntax.y"
                 {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2279 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: setStmt  */
#line 237 "bison/clang_syntax.y"
              {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2288 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: inOP ';'  */
#line 241 "bison/clang_syntax.y"
               {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2297 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: outOP ';'  */
#line 245 "bison/clang_syntax.y"
                {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2306 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 249 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2315 "bison/clang_syntax.tab.c"
    break;

  case 27: /* exprStmt: expression ';'  */
#line 256 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("exprStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2324 "bison/clang_syntax.tab.c"
    break;

  case 28: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 263 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("ifStmt");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2334 "bison/clang_syntax.tab.c"
    break;

  case 29: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 268 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("ifElseStmt");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2345 "bison/clang_syntax.tab.c"
    break;

  case 30: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt  */
#line 277 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("forStmt");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2357 "bison/clang_syntax.tab.c"
    break;

  case 31: /* returnStmt: RETURN_KW expression ';'  */
#line 287 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("returnStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2366 "bison/clang_syntax.tab.c"
    break;

  case 32: /* setStmt: forallOP  */
#line 294 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("setStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2375 "bison/clang_syntax.tab.c"
    break;

  case 33: /* pertOP: simpleExp IN_KW ID  */
#line 301 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("in");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2385 "bison/clang_syntax.tab.c"
    break;

  case 34: /* pertOP: simpleExp IN_KW setReturner  */
#line 306 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2395 "bison/clang_syntax.tab.c"
    break;

  case 35: /* setReturner: addOP  */
#line 314 "bison/clang_syntax.y"
          {
        (yyval.node) = createNode("setReturner");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2404 "bison/clang_syntax.tab.c"
    break;

  case 36: /* setReturner: remOP  */
#line 318 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("setReturner");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2413 "bison/clang_syntax.tab.c"
    break;

  case 37: /* typeOP: ISSET_KW '(' ID ')'  */
#line 325 "bison/clang_syntax.y"
                        {
        (yyval.node) = createNode("issetOP");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
    }
#line 2422 "bison/clang_syntax.tab.c"
    break;

  case 38: /* addOP: ADD_KW '(' pertOP ')'  */
#line 332 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("addOP");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2431 "bison/clang_syntax.tab.c"
    break;

  case 39: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 339 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("removeOP");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2440 "bison/clang_syntax.tab.c"
    break;

  case 40: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 346 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("selectOP");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2449 "bison/clang_syntax.tab.c"
    break;

  case 41: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 353 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forallOP");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2459 "bison/clang_syntax.tab.c"
    break;

  case 42: /* expression: assignExp  */
#line 361 "bison/clang_syntax.y"
              {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2468 "bison/clang_syntax.tab.c"
    break;

  case 43: /* expression: simpleExp  */
#line 365 "bison/clang_syntax.y"
                {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2477 "bison/clang_syntax.tab.c"
    break;

  case 44: /* expression: setReturner  */
#line 369 "bison/clang_syntax.y"
                  {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2486 "bison/clang_syntax.tab.c"
    break;

  case 45: /* assignExp: ID ASS_OP expression  */
#line 376 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("assignExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2496 "bison/clang_syntax.tab.c"
    break;

  case 46: /* simpleExp: binLogicalExp  */
#line 384 "bison/clang_syntax.y"
                  {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2505 "bison/clang_syntax.tab.c"
    break;

  case 47: /* simpleExp: pertOP  */
#line 388 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2514 "bison/clang_syntax.tab.c"
    break;

  case 48: /* simpleExp: selectOP  */
#line 392 "bison/clang_syntax.y"
               {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2523 "bison/clang_syntax.tab.c"
    break;

  case 49: /* simpleExp: typeOP  */
#line 396 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2532 "bison/clang_syntax.tab.c"
    break;

  case 50: /* constOP: INT  */
#line 403 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("INT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2541 "bison/clang_syntax.tab.c"
    break;

  case 51: /* constOP: FLOAT  */
#line 407 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("FLOAT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2550 "bison/clang_syntax.tab.c"
    break;

  case 52: /* constOP: EMPTY  */
#line 411 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("EMPTY");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2559 "bison/clang_syntax.tab.c"
    break;

  case 53: /* inOP: IN '(' ID ')'  */
#line 418 "bison/clang_syntax.y"
                  {
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
    }
#line 2568 "bison/clang_syntax.tab.c"
    break;

  case 54: /* outOP: OUT '(' outConst ')'  */
#line 425 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("OUT");
        (yyval.node)->s_token = createSymbol((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2578 "bison/clang_syntax.tab.c"
    break;

  case 55: /* outConst: STRING  */
#line 433 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("STRING");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2587 "bison/clang_syntax.tab.c"
    break;

  case 56: /* outConst: CHAR  */
#line 437 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CHAR");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2596 "bison/clang_syntax.tab.c"
    break;

  case 57: /* outConst: simpleExp  */
#line 441 "bison/clang_syntax.y"
                {
        (yyval.node) = createNode("OutConst");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2605 "bison/clang_syntax.tab.c"
    break;

  case 58: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 448 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binLogicalExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2616 "bison/clang_syntax.tab.c"
    break;

  case 59: /* binLogicalExp: unLogicalExp  */
#line 454 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("binLogicalExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2625 "bison/clang_syntax.tab.c"
    break;

  case 60: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 461 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unLogicalExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2635 "bison/clang_syntax.tab.c"
    break;

  case 61: /* unLogicalExp: relationalExp  */
#line 466 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("unLogicalExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2644 "bison/clang_syntax.tab.c"
    break;

  case 62: /* relationalExp: relationalExp REL_OP sumExp  */
#line 473 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relationalExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2655 "bison/clang_syntax.tab.c"
    break;

  case 63: /* relationalExp: sumExp  */
#line 479 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("relationalExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2664 "bison/clang_syntax.tab.c"
    break;

  case 64: /* sumExp: sumExp SUM_OP mulExp  */
#line 486 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("sumExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2675 "bison/clang_syntax.tab.c"
    break;

  case 65: /* sumExp: mulExp  */
#line 492 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("sumExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2684 "bison/clang_syntax.tab.c"
    break;

  case 66: /* mulExp: mulExp MUL_OP factor  */
#line 499 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("mulExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2695 "bison/clang_syntax.tab.c"
    break;

  case 67: /* mulExp: factor  */
#line 505 "bison/clang_syntax.y"
             {
        (yyval.node) = createNode("mulExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2704 "bison/clang_syntax.tab.c"
    break;

  case 68: /* mulExp: SUM_OP factor  */
#line 509 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("mulExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2714 "bison/clang_syntax.tab.c"
    break;

  case 69: /* factor: ID  */
#line 517 "bison/clang_syntax.y"
       {
        (yyval.node) = createNode("factor");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2723 "bison/clang_syntax.tab.c"
    break;

  case 70: /* factor: functionCall  */
#line 521 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("factor");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2732 "bison/clang_syntax.tab.c"
    break;

  case 71: /* factor: '(' simpleExp ')'  */
#line 525 "bison/clang_syntax.y"
                        {
        (yyval.node) = createNode("factor");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2741 "bison/clang_syntax.tab.c"
    break;

  case 72: /* factor: constOP  */
#line 529 "bison/clang_syntax.y"
              {
        (yyval.node) = createNode("factor");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2750 "bison/clang_syntax.tab.c"
    break;

  case 73: /* functionCall: ID '(' callParams ')'  */
#line 536 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("functionCall");
        (yyval.node)->s_token = createSymbol((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2760 "bison/clang_syntax.tab.c"
    break;

  case 74: /* functionCall: ID '(' ')'  */
#line 541 "bison/clang_syntax.y"
                 {
        (yyval.node) = createNode("functionCall");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 2769 "bison/clang_syntax.tab.c"
    break;

  case 75: /* callParams: callParams ',' simpleExp  */
#line 548 "bison/clang_syntax.y"
                            {
        (yyval.node) = createNode("callParams");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2779 "bison/clang_syntax.tab.c"
    break;

  case 76: /* callParams: simpleExp  */
#line 553 "bison/clang_syntax.y"
                {
        (yyval.node) = createNode("callParams");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2788 "bison/clang_syntax.tab.c"
    break;


#line 2792 "bison/clang_syntax.tab.c"

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

#line 559 "bison/clang_syntax.y"

extern void yyerror(const char* a) {
    printf(BRED"[%d:%d] ", line, column);
    printf("SYNTAX ERROR - ");
    printf("%s\n"reset, a);
    errors++;
}


int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    //initStack(&scope);
    //printf("%d\n", emptyStack(&scope));
    if(argc > 1){
        if(fp){
            yyin = fp;
            // yylex();
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
    }
    else{
        printf(BRED"The Abstract Syntax Tree nor the Symbol Table will not be shown if there are errors.\n");
        printf(reset);
    }
    printTable(symbolTable);
    printTree(tree, 0);
    freeTree(tree);
    yylex_destroy();
    return 0;
}
