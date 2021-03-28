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

#line 88 "clang_syntax.tab.c"

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
  YYSYMBOL_STRING = 26,                    /* STRING  */
  YYSYMBOL_CHAR = 27,                      /* CHAR  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* ','  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_program = 35,                   /* program  */
  YYSYMBOL_declarationList = 36,           /* declarationList  */
  YYSYMBOL_declaration = 37,               /* declaration  */
  YYSYMBOL_varDeclaration = 38,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 39,           /* funcDeclaration  */
  YYSYMBOL_params = 40,                    /* params  */
  YYSYMBOL_param = 41,                     /* param  */
  YYSYMBOL_simpleVDeclaration = 42,        /* simpleVDeclaration  */
  YYSYMBOL_simpleFDeclaration = 43,        /* simpleFDeclaration  */
  YYSYMBOL_compoundStmt = 44,              /* compoundStmt  */
  YYSYMBOL_localDeclarations = 45,         /* localDeclarations  */
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
#define YYLAST   2322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
      30,    31,     2,     2,    33,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    94,    99,   106,   110,   117,   124,   130,
     138,   143,   150,   157,   170,   182,   187,   194,   199,   203,
     210,   215,   222,   226,   230,   234,   238,   242,   249,   256,
     261,   270,   280,   287,   291,   295,   302,   307,   315,   319,
     326,   333,   340,   347,   354,   362,   366,   370,   374,   381,
     389,   393,   397,   404,   408,   412,   419,   426,   434,   438,
     442,   449,   455,   462,   467,   474,   480,   487,   493,   500,
     506,   510,   518,   522,   526,   530,   537,   545,   550
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
  "STRING", "CHAR", "'{'", "'}'", "'('", "')'", "';'", "','", "$accept",
  "program", "declarationList", "declaration", "varDeclaration",
  "funcDeclaration", "params", "param", "simpleVDeclaration",
  "simpleFDeclaration", "compoundStmt", "localDeclarations", "stmtList",
  "primitiveStmt", "exprStmt", "condStmt", "iterStmt", "returnStmt",
  "setStmt", "pertOP", "setReturner", "typeOP", "addOP", "remOP",
  "selectOP", "forallOP", "expression", "assignExp", "simpleExp",
  "constOP", "inOP", "outOP", "outConst", "binLogicalExp", "unLogicalExp",
  "relationalExp", "sumExp", "mulExp", "factor", "functionCall",
  "callParams", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,   281,   282,   123,   125,
      40,    41,    59,    44
};
#endif

#define YYPACT_NINF (-211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    -1,    21,    13,   115,   487,   523,    39,    31,   -10,
    -211,   529,   715,    -4,    89,    86,   136,   361,   515,   597,
    1355,   825,    86,   122,   810,   913,  1020,   129,   133,   143,
     311,   146,   178,   193,   207,   241,   242,  2043,    20,   428,
     138,    76,  1383,   278,  1411,  1439,  1467,  1495,  1523,  1551,
    1579,    19,   168,   177,   201,   235,    25,  1607,   243,   268,
      42,  1171,   272,   277,   301,   363,   318,   865,  2059,  2065,
    2079,   859,   747,   138,   328,   583,   317,   329,   583,   583,
     583,    29,   343,   311,   604,   561,  2084,   396,    34,   548,
    1207,  1635,   888,  1663,  1691,  1719,  1747,    88,   428,   106,
     106,    20,    67,   351,   385,   139,   413,  1775,   394,   230,
     350,   441,   409,   410,   442,   418,   419,   427,    27,   804,
    2098,   900,    65,   119,   618,  1053,  2103,  2117,   437,   851,
     438,   456,   460,   482,   167,   483,   499,  2122,   604,  1271,
     203,  1803,    72,   438,   479,  1831,   549,   438,  1859,   565,
    1355,   557,   369,  1125,  1139,   571,   951,   141,   471,   138,
     469,   519,  2148,   170,   258,   648,   798,  2153,  2165,  2170,
     935,  2238,  2245,   585,  2233,   316,   591,   138,   620,  2250,
     153,   234,   364,   916,  2257,  2262,  2269,   647,   890,   956,
     617,   862,   340,   708,   138,   101,   199,   988,   233,   291,
     473,   744,  1036,  1050,  1077,   619,   632,   635,   206,   300,
     723,  1355,   641,   642,   278,  1887,  1243,   583,   604,  2182,
     415,   581,   471,   223,   223,   141,   583,   604,  2274,   288,
     594,   591,   348,   348,   316,   583,   604,  1101,   405,   615,
     708,   379,   379,   340,   645,   659,   630,   653,   662,   676,
     583,   583,   673,   690,   237,   274,   346,   424,   278,  1915,
     466,  1943,  1971,   677,   836,  2187,   502,  2221,  2199,  2204,
     685,   863,  2281,   568,  1000,  2286,  2293,   686,   872,  1106,
     423,   752,  1144,  1176,   583,   583,   687,   693,   583,   583,
    1999,  1299,   702,   709,  2136,   714,   736,   694,   748,   753,
    2027,   695,  2216,   735,  2298,   511,  2038,   718,   719,   307,
     376,   740,   777,  1327,    29,   770,   786,   802,   544,   589,
     761,   792,   797,   807
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,  -211,   848,     4,  -211,  -211,   778,   149,  -211,
     -12,  -139,   -37,   -25,  -211,  -211,  -211,  -211,  -211,   766,
     -88,  -211,   -82,   -81,   869,  -211,   -29,   -69,   681,   179,
     602,   603,   543,   954,   -11,   576,   564,   459,   -38,   285,
    -210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    41,     6,    16,    17,   151,     8,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,   115,    64,    65,    66,    67,    68,    69,    70,
     119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    76,   168,    21,     5,   104,    91,     5,   264,   123,
      71,   214,     1,    -2,    14,   208,   209,   271,     9,    93,
     -14,    10,   -13,    24,    25,    26,   278,    15,    87,   164,
     -51,     1,   152,   153,   154,   168,   -52,   185,   210,    85,
     185,   185,   185,   168,   155,   205,   203,    90,   156,   157,
      40,   -51,   158,    97,   117,   112,   113,   -52,   -78,   159,
     -78,    13,   164,   127,   181,   120,    93,   181,   181,   181,
     164,    12,   258,   199,   -46,   146,   -36,   -19,   205,   -19,
     -19,   -19,   -19,   210,   -19,   -19,   -19,   124,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -36,   128,   -19,
     203,   206,   207,   -77,   -19,   -77,   -19,   122,    19,    24,
      25,    26,   -51,   215,    20,    -4,   139,   247,   141,   219,
     168,   168,   255,   248,   249,    85,    38,   199,   256,   257,
     -37,   145,   -51,    -4,   -51,   148,    40,   228,   185,   168,
      14,   152,   153,   154,   152,   153,   154,   220,   164,     7,
     -51,   -37,     7,   155,   237,   203,   168,   156,   157,    73,
     156,   158,    18,    74,   -50,   229,   164,    22,   159,    23,
     130,   159,    18,    75,   259,   231,    77,   261,   -43,   185,
     203,   -50,   238,   164,   168,   168,   168,   269,   185,   203,
      93,   296,   222,   185,   185,   185,   276,   185,   203,   -43,
      94,   -50,   203,   203,   203,   283,   181,   199,    78,    95,
     -52,   266,   185,   185,    97,   181,   199,   -38,    90,   162,
     273,   290,   168,    79,   181,   199,   152,   153,   154,   280,
     -52,   295,   -52,   -38,    93,   144,    93,    80,   -38,   181,
     181,   -51,   156,   157,   -50,   -62,   185,   185,   -36,   164,
     185,   185,   162,   159,   179,   240,   -62,   179,   179,   179,
     162,   132,    90,   197,   -50,    93,   -50,   -39,   -36,   -62,
     -36,    81,    82,   181,   181,    96,   168,   181,   181,    89,
     -62,    24,    25,    26,    27,   -37,    28,    29,    30,   -62,
      31,    32,    33,    34,    35,    36,   149,    37,    38,   -63,
     -45,    39,   -62,   164,   -47,   -37,   150,   -37,    40,   -48,
     -63,   -39,   -50,   -62,    24,    25,    26,   197,   -41,   170,
     171,   172,   -62,    98,   -62,   169,    34,    35,    36,   -64,
      37,    38,   -39,   -50,    39,   174,   162,   162,   162,   -41,
     -64,    40,    99,   187,   188,   189,   177,   103,   108,   107,
     -64,   170,   171,   172,   179,   179,   162,   -38,   169,   191,
     186,   -51,   116,   186,   186,   186,   169,   174,   175,   204,
     194,   197,   197,   162,   -62,   -64,    83,   -38,   177,   -38,
     -53,   133,   187,   188,   189,   -62,   -64,   -42,   232,   -53,
     -53,   -53,   -11,   -53,   -11,   -62,   179,   197,   191,   192,
     -53,   162,   162,   162,   162,   179,   197,   -63,   -42,   194,
     179,   179,   179,   179,   179,   197,   -63,   129,   -63,   197,
     197,   197,   197,   204,   205,   131,   -63,   -63,   -63,   179,
     179,    24,    25,    26,   -61,   -39,   -63,   -63,   -63,   162,
     -58,   -59,   169,   169,   169,   -61,   -63,    85,    38,   135,
     136,    39,   -51,   205,   -61,   -39,   -61,   -39,    40,   -49,
     186,   186,   169,   179,   179,   211,   150,   179,   179,   152,
     153,   154,   134,   -60,   152,   153,   154,   204,   204,   169,
     -51,   155,   292,   293,   -64,   294,   157,    -5,   -40,   158,
     156,   157,   -41,   162,   158,   -64,   159,   241,   212,   167,
     -51,   159,   186,   204,   -64,    -5,   -64,   169,   169,   169,
     169,   186,   204,   -61,   -42,   -57,   186,   186,   186,   186,
     186,   204,   -43,    -6,   -61,   204,   204,   204,   204,    -3,
     -52,   -56,   167,   -61,   184,   186,   186,   184,   184,   184,
     167,    -6,   -43,   202,   -43,   169,   -12,    -3,   -12,   -18,
     -52,   -18,   -18,   -18,   -18,   -41,   -18,   -18,   -18,   126,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   186,
     186,   -18,   -72,   186,   186,   -41,   -18,   -41,   -18,   -61,
     147,   -72,   -72,   -72,   213,   -72,   170,   171,   172,   216,
     -61,    84,   205,   -72,   170,   171,   172,   202,   173,   169,
     -42,   217,   174,   175,   166,   205,   176,   187,   188,   189,
     174,   175,   265,   177,   176,   226,   165,   167,   167,   190,
     -42,   177,   -42,   191,   192,   272,   205,   193,   -13,   -61,
     -13,   -52,   244,   245,   194,   184,   167,   166,   246,   183,
     -61,   -36,   183,   183,   183,   166,   279,   235,   201,   165,
     -61,   182,   202,   167,   182,   182,   182,   165,   -53,   -64,
     200,   -36,   250,   125,   -37,   251,   260,   -53,   -53,   -53,
     -64,   -53,   223,   -38,   -13,   284,   184,   202,   -53,   -64,
     -53,   167,   167,   268,   -37,   184,   202,   -39,   -51,   285,
     184,   184,   275,   -38,   184,   202,   -51,   -51,   -51,   202,
     202,   282,   201,   288,   -51,   205,   -43,   -39,   301,   184,
     184,   187,   188,   189,   200,    -7,   303,   305,   309,   167,
     289,    88,   166,   166,   310,   -46,   -43,   191,   192,   -51,
     -51,   193,   314,    -7,   165,   165,   252,   253,   194,   315,
     183,   166,   254,   184,   184,   -49,   -43,   184,   184,   316,
     317,   -51,   182,   165,   102,   -66,   106,   201,   166,   106,
     106,   106,   114,   -65,   242,   118,   -66,   -45,   -66,   200,
     165,   318,   242,   167,   -65,   -66,   -65,   -66,   -10,   -47,
     -10,   183,   201,   -65,   -48,   -65,   166,   267,   -51,   321,
     183,   201,   322,   182,   200,   183,   274,   -41,   165,   183,
     201,    72,   182,   200,   201,   281,   160,   182,   319,   -66,
     140,   182,   200,   -42,   183,   183,   200,   -41,   224,   142,
     -66,   -53,   -66,   323,   166,    -9,   182,   182,   -57,   -66,
     -53,   -53,   -53,   -42,   -53,   137,   165,   138,   -56,   160,
     221,   105,   -53,    -9,   109,   110,   111,   160,   183,   183,
     195,    11,   183,   183,    24,    25,    26,   320,   230,    -8,
     182,   182,   298,   299,   182,   182,    34,   302,     0,   138,
      85,    38,     0,   -72,    39,   239,   -66,    -8,   166,     0,
       0,    40,   -72,   -72,   -72,   100,   -72,   -66,   -16,   -66,
     165,     0,   236,   -72,   304,   -72,   138,   -66,   106,   118,
     -15,   -54,     0,   306,   195,   138,   -16,   106,   118,   161,
     -54,   -54,   -54,     0,   -54,     0,   106,   118,   -15,     0,
       0,   -54,     0,   -54,   -54,   160,     0,   -66,     0,     0,
       0,   106,   106,   -54,   -54,   -54,   233,   -54,   -66,     0,
     -66,   297,   161,   160,   178,   -54,   -53,   178,   178,   178,
     161,     0,     0,   196,     0,   -53,   -53,   -53,     0,   -53,
     160,     0,   -72,     0,     0,   106,   106,   -55,     0,   106,
     106,   -72,   -72,   -72,     0,   -72,   -55,   -55,   -55,     0,
     -55,   218,   -72,   263,   195,     0,     0,   -55,     0,   -55,
       0,     0,   270,   195,   163,   114,     0,     0,     0,   -75,
       0,   277,   195,     0,     0,     0,     0,   196,   -75,   -75,
     -75,   -65,   -75,     0,     0,     0,   286,   287,     0,   -75,
     233,   -75,   -65,     0,   -65,     0,   160,   163,   161,   180,
       0,   -55,   180,   180,   180,   163,     0,     0,   198,     0,
     -55,   -55,   -55,     0,   -55,     0,   161,   -68,     0,     0,
     307,   308,   -55,     0,   311,   312,   -68,   243,   -68,     0,
     -68,   -70,     0,   161,   -65,     0,     0,   -68,     0,   -68,
     -70,   -70,   -70,   100,   -70,   -65,     0,   -65,     0,     0,
     160,   -70,     0,   -70,     0,   -65,   178,   196,   -73,     0,
       0,     0,   198,     0,     0,   178,   196,   -73,   -73,   -73,
       0,   -73,     0,     0,   178,   196,     0,     0,   -73,     0,
     -73,     0,   -71,   163,     0,     0,     0,   -74,     0,   178,
     178,   -71,   -71,   -71,     0,   -71,   -74,   -74,   -74,   161,
     -74,   163,   -71,     0,   -71,     0,   -54,   -74,     0,   -74,
       0,     0,     0,     0,     0,   -54,   -54,   -54,   163,   -54,
     -55,     0,     0,   178,   178,   -67,   -54,   178,   178,   -55,
     -55,   -55,     0,   -55,   -67,   243,   -67,     0,   -67,     0,
     -55,   180,   198,     0,     0,   -67,     0,   -67,     0,     0,
     180,   198,   -75,   161,     0,     0,     0,   -69,     0,   180,
     198,   -75,   -75,   -75,     0,   -75,   -69,   -69,   -69,     0,
     -69,     0,     0,   -75,   180,   180,     0,   -69,   -17,   -69,
     -17,   -17,   -17,   -17,   163,   -17,   -17,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,
     -17,     0,     0,     0,     0,   -17,     0,   -17,   180,   180,
       0,     0,   180,   180,    -7,     0,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,     0,    -7,     0,   163,     0,
       0,    -7,     0,    -7,   -29,   -29,   -29,   -29,   143,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,   -29,     0,     0,     0,     0,   -29,
     -29,   -29,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,
       0,     0,   -16,     0,     0,     0,     0,   -16,   -16,   -16,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,     0,
     -15,     0,     0,     0,     0,   -15,   -15,   -15,    24,    25,
      26,    27,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,   149,    37,    38,     0,     0,    39,     0,
       0,     0,     0,   150,     0,    40,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,     0,     0,     0,
       0,   -23,   -23,   -23,    24,    25,    26,    27,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,     0,
      37,    38,     0,     0,    39,     0,     0,     0,     0,   150,
      92,    40,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
       0,     0,   -21,     0,     0,     0,     0,   -21,   -21,   -21,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,     0,
     -22,     0,     0,     0,     0,   -22,   -22,   -22,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,     0,
       0,     0,     0,   -24,   -24,   -24,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,     0,     0,     0,
       0,   -25,   -25,   -25,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,   -26,     0,     0,     0,     0,   -26,
     -26,   -26,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
       0,     0,   -27,     0,     0,     0,     0,   -27,   -27,   -27,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
     -35,     0,     0,     0,     0,   -35,   -35,   -35,    24,    25,
      26,    27,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,     0,    37,    38,     0,     0,    39,     0,
       0,     0,     0,   150,   121,    40,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,     0,     0,   -20,     0,     0,     0,
       0,   -20,   -20,   -20,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,   -34,     0,     0,     0,     0,   -34,
     -34,   -34,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,     0,   -33,     0,     0,     0,     0,   -33,   -33,   -33,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,
     -28,     0,     0,     0,     0,   -28,   -28,   -28,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,     0,     0,   -32,     0,
       0,     0,     0,   -32,   -32,   -32,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,     0,     0,   -44,     0,     0,     0,
       0,   -44,   -44,   -44,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,     0,     0,   -30,     0,     0,     0,     0,   -30,
     -30,   -30,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,   -31,     0,     0,     0,     0,   -31,   -31,   -31,
      24,    25,    26,    27,     0,    28,    29,    30,     0,    31,
      32,    33,    34,    35,    36,     0,    37,    38,     0,     0,
      39,     0,     0,     0,     0,   150,   262,    40,    24,    25,
      26,    27,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,     0,    37,    38,     0,     0,    39,     0,
       0,     0,     0,   150,   291,    40,    24,    25,    26,    27,
       0,    28,    29,    30,     0,    31,    32,    33,    34,    35,
      36,     0,    37,    38,     0,     0,    39,     0,     0,     0,
       0,   150,   300,    40,   -16,   -16,   -16,   -16,     0,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,     0,     0,   -16,     0,     0,     0,     0,   -16,
     -16,   -16,    24,    25,    26,    27,     0,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    36,     0,    37,    38,
       0,     0,    39,     0,     0,     0,     0,   150,   313,    40,
     -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,   -76,
     -15,     0,     0,     0,   -72,   -15,   -15,   -15,   -76,   -76,
     -76,     0,   -76,   -72,   -72,   -72,     0,   -72,    83,   -76,
     -68,   -76,     0,    84,     0,   -72,   -70,     0,     0,   -68,
     101,   -68,     0,   -68,     0,   -70,   -70,   -70,     0,   -70,
     -73,   -68,     0,     0,     0,   -71,     0,   -70,     0,   -73,
     -73,   -73,     0,   -73,   -71,   -71,   -71,     0,   -71,   -74,
       0,   -73,     0,     0,   -67,     0,   -71,     0,   -74,   -74,
     -74,     0,   -74,   -67,   101,   -67,     0,   -67,   -69,     0,
     -74,     0,     0,   -76,     0,   -67,     0,   -69,   -69,   -69,
       0,   -69,   -76,   -76,   -76,     0,   -76,   -72,     0,   -69,
       0,     0,     0,     0,   -76,     0,   -72,   -72,   -72,   -75,
     -72,   260,     0,     0,   -68,     0,   218,   -72,   -75,   -75,
     -75,     0,   -75,   -68,   225,   -68,   -70,   -68,     0,   -75,
       0,   -73,     0,     0,   -68,   -70,   -70,   -70,     0,   -70,
     -73,   -73,   -73,   -71,   -73,     0,   -70,     0,   -74,     0,
       0,   -73,   -71,   -71,   -71,     0,   -71,   -74,   -74,   -74,
     -67,   -74,     0,   -71,     0,   -69,     0,     0,   -74,   -67,
     225,   -67,     0,   -67,   -69,   -69,   -69,   -76,   -69,     0,
     -67,     0,   -65,     0,     0,   -69,   -76,   -76,   -76,     0,
     -76,   224,     0,   -65,   -72,   -65,     0,   -76,     0,   -54,
       0,     0,   -65,   -72,   -72,   -72,   -55,   -72,   -54,   -54,
     -54,   -75,   -54,   227,     0,   -55,   -55,   -55,   -68,   -55,
     -75,   -75,   -75,   -70,   -75,     0,     0,   -68,   234,   -68,
     -73,   -68,   -70,   -70,   -70,   -71,   -70,     0,     0,   -73,
     -73,   -73,   -74,   -73,   -71,   -71,   -71,   -67,   -71,     0,
       0,   -74,   -74,   -74,   -69,   -74,   -67,   234,   -67,   -76,
     -67,     0,     0,   -69,   -69,   -69,     0,   -69,   -76,   -76,
     -76,     0,   -76
};

static const yytype_int16 yycheck[] =
{
      38,    30,    40,    15,     0,    74,    43,     3,   218,    97,
      22,   150,    18,     0,    18,    97,    97,   227,    19,    44,
      30,     0,    32,     3,     4,     5,   236,    31,    39,    40,
      11,    18,     3,     4,     5,    73,    11,    75,    11,    19,
      78,    79,    80,    81,    15,    11,    84,    43,    19,    20,
      30,    32,    23,    11,    83,    26,    27,    32,    31,    30,
      33,    30,    73,   101,    75,    31,    91,    78,    79,    80,
      81,    32,   211,    84,    32,   144,    11,     1,    11,     3,
       4,     5,     6,    11,     8,     9,    10,    98,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    32,    31,    23,
     138,    13,    14,    31,    28,    33,    30,    19,    19,     3,
       4,     5,    11,   150,    28,     0,   128,   205,   130,   157,
     158,   159,   210,   205,   205,    19,    20,   138,   210,   210,
      11,   143,    31,    18,    33,   147,    30,   175,   176,   177,
      18,     3,     4,     5,     3,     4,     5,   158,   159,     0,
      11,    32,     3,    15,   192,   193,   194,    19,    20,    30,
      19,    23,    13,    30,    11,   176,   177,    31,    30,    33,
      31,    30,    23,    30,   211,    22,    30,   214,    11,   217,
     218,    11,   193,   194,   222,   223,   224,   225,   226,   227,
     215,   260,    22,   231,   232,   233,   234,   235,   236,    32,
      32,    31,   240,   241,   242,   243,   217,   218,    30,    32,
      11,   222,   250,   251,    11,   226,   227,    11,   214,    40,
     231,   258,   260,    30,   235,   236,     3,     4,     5,   240,
      31,   260,    33,    32,   259,    32,   261,    30,    32,   250,
     251,    11,    19,    20,    11,    11,   284,   285,    11,   260,
     288,   289,    73,    30,    75,    22,    22,    78,    79,    80,
      81,    31,   258,    84,    31,   290,    33,    32,    31,    11,
      33,    30,    30,   284,   285,    32,   314,   288,   289,     1,
      22,     3,     4,     5,     6,    11,     8,     9,    10,    31,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    11,
      32,    23,    11,   314,    32,    31,    28,    33,    30,    32,
      22,    11,    11,    22,     3,     4,     5,   138,    11,     3,
       4,     5,    31,    22,    33,    40,    15,    16,    17,    11,
      19,    20,    32,    32,    23,    19,   157,   158,   159,    32,
      22,    30,    24,     3,     4,     5,    30,    19,    19,    32,
      32,     3,     4,     5,   175,   176,   177,    11,    73,    19,
      75,    11,    19,    78,    79,    80,    81,    19,    20,    84,
      30,   192,   193,   194,    11,    11,    25,    31,    30,    33,
      11,    31,     3,     4,     5,    22,    22,    11,    24,    20,
      21,    22,    31,    24,    33,    32,   217,   218,    19,    20,
      31,   222,   223,   224,   225,   226,   227,    11,    32,    30,
     231,   232,   233,   234,   235,   236,    11,    32,    22,   240,
     241,   242,   243,   138,    11,    31,    11,    22,    32,   250,
     251,     3,     4,     5,    11,    11,    31,    22,    33,   260,
      31,    31,   157,   158,   159,    22,    31,    19,    20,    31,
      31,    23,    11,    11,    31,    31,    33,    33,    30,    32,
     175,   176,   177,   284,   285,    28,    28,   288,   289,     3,
       4,     5,    31,    31,     3,     4,     5,   192,   193,   194,
      11,    15,    16,    17,    11,    19,    20,     0,    32,    23,
      19,    20,    32,   314,    23,    22,    30,    24,    19,    40,
      31,    30,   217,   218,    31,    18,    33,   222,   223,   224,
     225,   226,   227,    11,    32,    32,   231,   232,   233,   234,
     235,   236,    11,     0,    22,   240,   241,   242,   243,     0,
      11,    32,    73,    31,    75,   250,   251,    78,    79,    80,
      81,    18,    31,    84,    33,   260,    31,    18,    33,     1,
      31,     3,     4,     5,     6,    11,     8,     9,    10,   100,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   284,
     285,    23,    11,   288,   289,    31,    28,    33,    30,    11,
      31,    20,    21,    22,    19,    24,     3,     4,     5,    32,
      22,    30,    11,    32,     3,     4,     5,   138,    15,   314,
      11,    30,    19,    20,    40,    11,    23,     3,     4,     5,
      19,    20,    31,    30,    23,    30,    40,   158,   159,    15,
      31,    30,    33,    19,    20,    31,    11,    23,    31,    11,
      33,    11,    13,    14,    30,   176,   177,    73,    19,    75,
      22,    11,    78,    79,    80,    81,    31,    30,    84,    73,
      32,    75,   193,   194,    78,    79,    80,    81,    11,    11,
      84,    31,    30,    99,    11,    30,    25,    20,    21,    22,
      22,    24,    24,    11,    32,    30,   217,   218,    31,    31,
      33,   222,   223,   224,    31,   226,   227,    11,    11,    30,
     231,   232,   233,    31,   235,   236,    11,    11,    11,   240,
     241,   242,   138,    30,    11,    11,    11,    31,    31,   250,
     251,     3,     4,     5,   138,     0,    31,    31,    31,   260,
      30,    40,   158,   159,    31,    31,    31,    19,    20,    11,
      11,    23,    30,    18,   158,   159,    13,    14,    30,    30,
     176,   177,    19,   284,   285,    31,    11,   288,   289,    31,
      31,    11,   176,   177,    73,    11,    75,   193,   194,    78,
      79,    80,    81,    11,    20,    84,    22,    31,    24,   193,
     194,    31,    20,   314,    22,    31,    24,    33,    31,    31,
      33,   217,   218,    31,    31,    33,   222,   223,    11,    19,
     226,   227,    31,   217,   218,   231,   232,    11,   222,   235,
     236,    23,   226,   227,   240,   241,    40,   231,    31,    11,
     129,   235,   236,    11,   250,   251,   240,    31,    20,   138,
      22,    11,    24,    31,   260,     0,   250,   251,    31,    31,
      20,    21,    22,    31,    24,    31,   260,    33,    31,    73,
     159,    75,    32,    18,    78,    79,    80,    81,   284,   285,
      84,     3,   288,   289,     3,     4,     5,   314,   177,     0,
     284,   285,   260,   260,   288,   289,    15,    31,    -1,    33,
      19,    20,    -1,    11,    23,   194,    11,    18,   314,    -1,
      -1,    30,    20,    21,    22,    20,    24,    22,     0,    24,
     314,    -1,    30,    31,    31,    33,    33,    32,   217,   218,
       0,    11,    -1,    31,   138,    33,    18,   226,   227,    40,
      20,    21,    22,    -1,    24,    -1,   235,   236,    18,    -1,
      -1,    31,    -1,    33,    11,   159,    -1,    11,    -1,    -1,
      -1,   250,   251,    20,    21,    22,    20,    24,    22,    -1,
      24,   260,    73,   177,    75,    32,    11,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    20,    21,    22,    -1,    24,
     194,    -1,    11,    -1,    -1,   284,   285,    11,    -1,   288,
     289,    20,    21,    22,    -1,    24,    20,    21,    22,    -1,
      24,    30,    31,   217,   218,    -1,    -1,    31,    -1,    33,
      -1,    -1,   226,   227,    40,   314,    -1,    -1,    -1,    11,
      -1,   235,   236,    -1,    -1,    -1,    -1,   138,    20,    21,
      22,    11,    24,    -1,    -1,    -1,   250,   251,    -1,    31,
      20,    33,    22,    -1,    24,    -1,   260,    73,   159,    75,
      -1,    11,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      20,    21,    22,    -1,    24,    -1,   177,    11,    -1,    -1,
     284,   285,    32,    -1,   288,   289,    20,    21,    22,    -1,
      24,    11,    -1,   194,    11,    -1,    -1,    31,    -1,    33,
      20,    21,    22,    20,    24,    22,    -1,    24,    -1,    -1,
     314,    31,    -1,    33,    -1,    32,   217,   218,    11,    -1,
      -1,    -1,   138,    -1,    -1,   226,   227,    20,    21,    22,
      -1,    24,    -1,    -1,   235,   236,    -1,    -1,    31,    -1,
      33,    -1,    11,   159,    -1,    -1,    -1,    11,    -1,   250,
     251,    20,    21,    22,    -1,    24,    20,    21,    22,   260,
      24,   177,    31,    -1,    33,    -1,    11,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,   194,    24,
      11,    -1,    -1,   284,   285,    11,    31,   288,   289,    20,
      21,    22,    -1,    24,    20,    21,    22,    -1,    24,    -1,
      31,   217,   218,    -1,    -1,    31,    -1,    33,    -1,    -1,
     226,   227,    11,   314,    -1,    -1,    -1,    11,    -1,   235,
     236,    20,    21,    22,    -1,    24,    20,    21,    22,    -1,
      24,    -1,    -1,    32,   250,   251,    -1,    31,     1,    33,
       3,     4,     5,     6,   260,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,   284,   285,
      -1,    -1,   288,   289,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,   314,    -1,
      -1,    28,    -1,    30,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    11,
      23,    -1,    -1,    -1,    11,    28,    29,    30,    20,    21,
      22,    -1,    24,    20,    21,    22,    -1,    24,    25,    31,
      11,    33,    -1,    30,    -1,    32,    11,    -1,    -1,    20,
      21,    22,    -1,    24,    -1,    20,    21,    22,    -1,    24,
      11,    32,    -1,    -1,    -1,    11,    -1,    32,    -1,    20,
      21,    22,    -1,    24,    20,    21,    22,    -1,    24,    11,
      -1,    32,    -1,    -1,    11,    -1,    32,    -1,    20,    21,
      22,    -1,    24,    20,    21,    22,    -1,    24,    11,    -1,
      32,    -1,    -1,    11,    -1,    32,    -1,    20,    21,    22,
      -1,    24,    20,    21,    22,    -1,    24,    11,    -1,    32,
      -1,    -1,    -1,    -1,    32,    -1,    20,    21,    22,    11,
      24,    25,    -1,    -1,    11,    -1,    30,    31,    20,    21,
      22,    -1,    24,    20,    21,    22,    11,    24,    -1,    31,
      -1,    11,    -1,    -1,    31,    20,    21,    22,    -1,    24,
      20,    21,    22,    11,    24,    -1,    31,    -1,    11,    -1,
      -1,    31,    20,    21,    22,    -1,    24,    20,    21,    22,
      11,    24,    -1,    31,    -1,    11,    -1,    -1,    31,    20,
      21,    22,    -1,    24,    20,    21,    22,    11,    24,    -1,
      31,    -1,    11,    -1,    -1,    31,    20,    21,    22,    -1,
      24,    20,    -1,    22,    11,    24,    -1,    31,    -1,    11,
      -1,    -1,    31,    20,    21,    22,    11,    24,    20,    21,
      22,    11,    24,    30,    -1,    20,    21,    22,    11,    24,
      20,    21,    22,    11,    24,    -1,    -1,    20,    21,    22,
      11,    24,    20,    21,    22,    11,    24,    -1,    -1,    20,
      21,    22,    11,    24,    20,    21,    22,    11,    24,    -1,
      -1,    20,    21,    22,    11,    24,    20,    21,    22,    11,
      24,    -1,    -1,    20,    21,    22,    -1,    24,    20,    21,
      22,    -1,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    35,    36,    37,    38,    39,    42,    43,    19,
       0,    37,    32,    30,    18,    31,    40,    41,    42,    19,
      28,    44,    31,    33,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    14,    15,    16,    17,    19,    20,    23,
      30,    38,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    67,    68,    69,    70,    71,    72,
      73,    44,    41,    30,    30,    30,    60,    30,    30,    30,
      30,    30,    30,    25,    30,    19,    72,    68,    62,     1,
      38,    46,    29,    47,    32,    32,    32,    11,    22,    24,
      20,    21,    62,    19,    61,    53,    62,    32,    19,    53,
      53,    53,    26,    27,    62,    66,    19,    60,    62,    74,
      31,    29,    19,    54,    68,    70,    71,    72,    31,    32,
      31,    31,    31,    31,    31,    31,    31,    31,    33,    44,
      62,    44,    62,     7,    32,    44,    61,    31,    44,    18,
      28,    42,     3,     4,     5,    15,    19,    20,    23,    30,
      53,    58,    63,    67,    68,    69,    70,    71,    72,    73,
       3,     4,     5,    15,    19,    20,    23,    30,    58,    63,
      67,    68,    69,    70,    71,    72,    73,     3,     4,     5,
      15,    19,    20,    23,    30,    53,    58,    63,    67,    68,
      69,    70,    71,    72,    73,    11,    13,    14,    56,    57,
      11,    28,    19,    19,    45,    46,    32,    30,    30,    72,
      68,    62,    22,    24,    20,    21,    30,    30,    72,    68,
      62,    22,    24,    20,    21,    30,    30,    72,    68,    62,
      22,    24,    20,    21,    13,    14,    19,    54,    56,    57,
      30,    30,    13,    14,    19,    54,    56,    57,    45,    46,
      25,    46,    29,    53,    74,    31,    68,    70,    71,    72,
      53,    74,    31,    68,    70,    71,    72,    53,    74,    31,
      68,    70,    71,    72,    30,    30,    53,    53,    30,    30,
      46,    29,    16,    17,    19,    60,    61,    62,    64,    65,
      29,    31,    31,    31,    31,    31,    31,    53,    53,    31,
      31,    53,    53,    29,    30,    30,    31,    31,    31,    31,
      66,    19,    31,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    39,    39,
      40,    40,    41,    42,    43,    44,    44,    45,    45,    45,
      46,    46,    47,    47,    47,    47,    47,    47,    48,    49,
      49,    50,    51,    52,    52,    52,    53,    53,    54,    54,
      55,    56,    57,    58,    59,    60,    60,    60,    60,    61,
      62,    62,    62,    63,    63,    63,    64,    65,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    71,    72,    72,    72,    72,    73,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     5,     4,
       3,     1,     1,     2,     2,     4,     3,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     9,     3,     2,     2,     1,     3,     3,     1,     1,
       4,     4,     4,     4,     5,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       1,     3,     1,     2,     1,     3,     1,     3,     1,     3,
       1,     2,     1,     1,     3,     1,     4,     3,     1
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
#line 86 "clang_syntax.y"
                    {
        (yyval.node) = createNode("program");
        (yyval.node)->node1 = (yyvsp[0].node);
        tree = (yyval.node);
    }
#line 2023 "clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 94 "clang_syntax.y"
                                {
        (yyval.node) = createNode("declarationList");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2033 "clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 99 "clang_syntax.y"
                  {
        (yyval.node) = createNode("declarationList");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2042 "clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 106 "clang_syntax.y"
                   {
        (yyval.node) = createNode("declaration");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2051 "clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 110 "clang_syntax.y"
                      {
        (yyval.node) = createNode("declaration");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2060 "clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 117 "clang_syntax.y"
                           {
        (yyval.node) = createNode("varDeclaration");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2069 "clang_syntax.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFDeclaration '(' params ')' compoundStmt  */
#line 124 "clang_syntax.y"
                                                   {
        (yyval.node) = createNode("funcDeclaration");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2080 "clang_syntax.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 130 "clang_syntax.y"
                                              {
        (yyval.node) = createNode("funcDeclaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2090 "clang_syntax.tab.c"
    break;

  case 10: /* params: params ',' param  */
#line 138 "clang_syntax.y"
                     {
        (yyval.node) = createNode("params");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2100 "clang_syntax.tab.c"
    break;

  case 11: /* params: param  */
#line 143 "clang_syntax.y"
            {
        (yyval.node) = createNode("params");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2109 "clang_syntax.tab.c"
    break;

  case 12: /* param: simpleVDeclaration  */
#line 150 "clang_syntax.y"
                       {
        (yyval.node) = createNode("param");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2118 "clang_syntax.tab.c"
    break;

  case 13: /* simpleVDeclaration: TYPE ID  */
#line 157 "clang_syntax.y"
            {
        (yyval.node) = createNode("simpleVDeclaration");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    "Variable", 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column);
    }
#line 2133 "clang_syntax.tab.c"
    break;

  case 14: /* simpleFDeclaration: TYPE ID  */
#line 170 "clang_syntax.y"
            {
        (yyval.node) = createNode("simpleFDeclaration");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    "Function", 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column);
    }
#line 2148 "clang_syntax.tab.c"
    break;

  case 15: /* compoundStmt: '{' localDeclarations stmtList '}'  */
#line 182 "clang_syntax.y"
                                       {
        (yyval.node) = createNode("CompoundStmt");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[-1].node);
    }
#line 2158 "clang_syntax.tab.c"
    break;

  case 16: /* compoundStmt: '{' stmtList '}'  */
#line 187 "clang_syntax.y"
                       {
        (yyval.node) = createNode("CompoundStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2167 "clang_syntax.tab.c"
    break;

  case 17: /* localDeclarations: localDeclarations varDeclaration  */
#line 194 "clang_syntax.y"
                                     {
        (yyval.node) = createNode("localDeclarations");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2177 "clang_syntax.tab.c"
    break;

  case 18: /* localDeclarations: localDeclarations error  */
#line 199 "clang_syntax.y"
                              {
        (yyval.node) = createNode("localDeclarations");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2186 "clang_syntax.tab.c"
    break;

  case 19: /* localDeclarations: varDeclaration  */
#line 203 "clang_syntax.y"
                     {
        (yyval.node) = createNode("localDeclarations");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2195 "clang_syntax.tab.c"
    break;

  case 20: /* stmtList: stmtList primitiveStmt  */
#line 210 "clang_syntax.y"
                           {
        (yyval.node) = createNode("stmtList");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2205 "clang_syntax.tab.c"
    break;

  case 21: /* stmtList: primitiveStmt  */
#line 215 "clang_syntax.y"
                    {
        (yyval.node) = createNode("stmtList");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2214 "clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: exprStmt  */
#line 222 "clang_syntax.y"
             {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2223 "clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: compoundStmt  */
#line 226 "clang_syntax.y"
                   {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2232 "clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: condStmt  */
#line 230 "clang_syntax.y"
               {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2241 "clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: iterStmt  */
#line 234 "clang_syntax.y"
               {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2250 "clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: returnStmt  */
#line 238 "clang_syntax.y"
                 {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2259 "clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: setStmt  */
#line 242 "clang_syntax.y"
              {
        (yyval.node) = createNode("PrimitiveStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2268 "clang_syntax.tab.c"
    break;

  case 28: /* exprStmt: expression ';'  */
#line 249 "clang_syntax.y"
                   {
        (yyval.node) = createNode("exprStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2277 "clang_syntax.tab.c"
    break;

  case 29: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt  */
#line 256 "clang_syntax.y"
                                         {
        (yyval.node) = createNode("ifStmt");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2287 "clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' compoundStmt ELSE_KW compoundStmt  */
#line 261 "clang_syntax.y"
                                                                {
        (yyval.node) = createNode("ifElseStmt");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2298 "clang_syntax.tab.c"
    break;

  case 31: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' compoundStmt  */
#line 270 "clang_syntax.y"
                                                                      {
        (yyval.node) = createNode("forStmt");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2310 "clang_syntax.tab.c"
    break;

  case 32: /* returnStmt: RETURN_KW expression ';'  */
#line 280 "clang_syntax.y"
                             {
        (yyval.node) = createNode("returnStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2319 "clang_syntax.tab.c"
    break;

  case 33: /* setStmt: typeOP ';'  */
#line 287 "clang_syntax.y"
               {
        (yyval.node) = createNode("setStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2328 "clang_syntax.tab.c"
    break;

  case 34: /* setStmt: setReturner ';'  */
#line 291 "clang_syntax.y"
                      {
        (yyval.node) = createNode("setStmt");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2337 "clang_syntax.tab.c"
    break;

  case 35: /* setStmt: forallOP  */
#line 295 "clang_syntax.y"
               {
        (yyval.node) = createNode("setStmt");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2346 "clang_syntax.tab.c"
    break;

  case 36: /* pertOP: simpleExp IN_KW ID  */
#line 302 "clang_syntax.y"
                       {
        (yyval.node) = createNode("inOP");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2356 "clang_syntax.tab.c"
    break;

  case 37: /* pertOP: simpleExp IN_KW setReturner  */
#line 307 "clang_syntax.y"
                                  {
        (yyval.node) = createNode("inOP");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2366 "clang_syntax.tab.c"
    break;

  case 38: /* setReturner: addOP  */
#line 315 "clang_syntax.y"
          {
        (yyval.node) = createNode("setReturner");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2375 "clang_syntax.tab.c"
    break;

  case 39: /* setReturner: remOP  */
#line 319 "clang_syntax.y"
            {
        (yyval.node) = createNode("setReturner");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2384 "clang_syntax.tab.c"
    break;

  case 40: /* typeOP: ISSET_KW '(' ID ')'  */
#line 326 "clang_syntax.y"
                        {
        (yyval.node) = createNode("issetOP");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
    }
#line 2393 "clang_syntax.tab.c"
    break;

  case 41: /* addOP: ADD_KW '(' pertOP ')'  */
#line 333 "clang_syntax.y"
                          {
        (yyval.node) = createNode("addOP");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2402 "clang_syntax.tab.c"
    break;

  case 42: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 340 "clang_syntax.y"
                             {
        (yyval.node) = createNode("removeOP");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2411 "clang_syntax.tab.c"
    break;

  case 43: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 347 "clang_syntax.y"
                             {
        (yyval.node) = createNode("selectOP");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2420 "clang_syntax.tab.c"
    break;

  case 44: /* forallOP: FORALL_KW '(' pertOP ')' compoundStmt  */
#line 354 "clang_syntax.y"
                                          {
        (yyval.node) = createNode("forallOP");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2430 "clang_syntax.tab.c"
    break;

  case 45: /* expression: assignExp  */
#line 362 "clang_syntax.y"
              {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2439 "clang_syntax.tab.c"
    break;

  case 46: /* expression: simpleExp  */
#line 366 "clang_syntax.y"
                {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2448 "clang_syntax.tab.c"
    break;

  case 47: /* expression: inOP  */
#line 370 "clang_syntax.y"
           {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2457 "clang_syntax.tab.c"
    break;

  case 48: /* expression: outOP  */
#line 374 "clang_syntax.y"
            {
        (yyval.node) = createNode("expression");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2466 "clang_syntax.tab.c"
    break;

  case 49: /* assignExp: ID ASS_OP expression  */
#line 381 "clang_syntax.y"
                         {
        (yyval.node) = createNode("assignExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2476 "clang_syntax.tab.c"
    break;

  case 50: /* simpleExp: binLogicalExp  */
#line 389 "clang_syntax.y"
                  {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2485 "clang_syntax.tab.c"
    break;

  case 51: /* simpleExp: pertOP  */
#line 393 "clang_syntax.y"
             {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2494 "clang_syntax.tab.c"
    break;

  case 52: /* simpleExp: selectOP  */
#line 397 "clang_syntax.y"
               {
        (yyval.node) = createNode("simpleExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2503 "clang_syntax.tab.c"
    break;

  case 53: /* constOP: INT  */
#line 404 "clang_syntax.y"
        {
        (yyval.node) = createNode("INT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2512 "clang_syntax.tab.c"
    break;

  case 54: /* constOP: FLOAT  */
#line 408 "clang_syntax.y"
            {
        (yyval.node) = createNode("FLOAT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2521 "clang_syntax.tab.c"
    break;

  case 55: /* constOP: EMPTY  */
#line 412 "clang_syntax.y"
            {
        (yyval.node) = createNode("EMPTY");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2530 "clang_syntax.tab.c"
    break;

  case 56: /* inOP: IN '(' ID ')'  */
#line 419 "clang_syntax.y"
                  {
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
    }
#line 2539 "clang_syntax.tab.c"
    break;

  case 57: /* outOP: OUT '(' outConst ')'  */
#line 426 "clang_syntax.y"
                         {
        (yyval.node) = createNode("OUT");
        (yyval.node)->s_token = createSymbol((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2549 "clang_syntax.tab.c"
    break;

  case 58: /* outConst: STRING  */
#line 434 "clang_syntax.y"
           {
        (yyval.node) = createNode("STRING");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2558 "clang_syntax.tab.c"
    break;

  case 59: /* outConst: CHAR  */
#line 438 "clang_syntax.y"
           {
        (yyval.node) = createNode("CHAR");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2567 "clang_syntax.tab.c"
    break;

  case 60: /* outConst: simpleExp  */
#line 442 "clang_syntax.y"
                {
        (yyval.node) = createNode("OutConst");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2576 "clang_syntax.tab.c"
    break;

  case 61: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 449 "clang_syntax.y"
                                          {
        (yyval.node) = createNode("binLogicalExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2587 "clang_syntax.tab.c"
    break;

  case 62: /* binLogicalExp: unLogicalExp  */
#line 455 "clang_syntax.y"
                   {
        (yyval.node) = createNode("binLogicalExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2596 "clang_syntax.tab.c"
    break;

  case 63: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 462 "clang_syntax.y"
                           {
        (yyval.node) = createNode("unLogicalExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2606 "clang_syntax.tab.c"
    break;

  case 64: /* unLogicalExp: relationalExp  */
#line 467 "clang_syntax.y"
                    {
        (yyval.node) = createNode("unLogicalExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2615 "clang_syntax.tab.c"
    break;

  case 65: /* relationalExp: relationalExp REL_OP sumExp  */
#line 474 "clang_syntax.y"
                                {
        (yyval.node) = createNode("relationalExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2626 "clang_syntax.tab.c"
    break;

  case 66: /* relationalExp: sumExp  */
#line 480 "clang_syntax.y"
             {
        (yyval.node) = createNode("relationalExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2635 "clang_syntax.tab.c"
    break;

  case 67: /* sumExp: sumExp SUM_OP mulExp  */
#line 487 "clang_syntax.y"
                         {
        (yyval.node) = createNode("sumExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2646 "clang_syntax.tab.c"
    break;

  case 68: /* sumExp: mulExp  */
#line 493 "clang_syntax.y"
             {
        (yyval.node) = createNode("sumExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2655 "clang_syntax.tab.c"
    break;

  case 69: /* mulExp: mulExp MUL_OP factor  */
#line 500 "clang_syntax.y"
                         {
        (yyval.node) = createNode("mulExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2666 "clang_syntax.tab.c"
    break;

  case 70: /* mulExp: factor  */
#line 506 "clang_syntax.y"
             {
        (yyval.node) = createNode("mulExp");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2675 "clang_syntax.tab.c"
    break;

  case 71: /* mulExp: SUM_OP factor  */
#line 510 "clang_syntax.y"
                    {
        (yyval.node) = createNode("mulExp");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2685 "clang_syntax.tab.c"
    break;

  case 72: /* factor: ID  */
#line 518 "clang_syntax.y"
       {
        (yyval.node) = createNode("factor");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2694 "clang_syntax.tab.c"
    break;

  case 73: /* factor: functionCall  */
#line 522 "clang_syntax.y"
                   {
        (yyval.node) = createNode("factor");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2703 "clang_syntax.tab.c"
    break;

  case 74: /* factor: '(' simpleExp ')'  */
#line 526 "clang_syntax.y"
                        {
        (yyval.node) = createNode("factor");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2712 "clang_syntax.tab.c"
    break;

  case 75: /* factor: constOP  */
#line 530 "clang_syntax.y"
              {
        (yyval.node) = createNode("factor");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2721 "clang_syntax.tab.c"
    break;

  case 76: /* functionCall: ID '(' callParams ')'  */
#line 537 "clang_syntax.y"
                          {
        (yyval.node) = createNode("functionCall");
        (yyval.node)->s_token = createSymbol((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2731 "clang_syntax.tab.c"
    break;

  case 77: /* callParams: callParams ',' simpleExp  */
#line 545 "clang_syntax.y"
                            {
        (yyval.node) = createNode("callParams");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2741 "clang_syntax.tab.c"
    break;

  case 78: /* callParams: simpleExp  */
#line 550 "clang_syntax.y"
                {
        (yyval.node) = createNode("callParams");
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2750 "clang_syntax.tab.c"
    break;


#line 2754 "clang_syntax.tab.c"

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

#line 556 "clang_syntax.y"

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
        printTable(symbolTable);
        printTree(tree, 0);
    }
    else{
        printf(BRED"The Abstract Syntax Tree nor the Symbol Table will not be shown if there are errors.\n");
        printf(reset);
    }
    freeTree(tree);
    yylex_destroy();
    return 0;
}
