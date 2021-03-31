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
#define YYLAST   3213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  382

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
     132,   137,   143,   149,   163,   176,   182,   187,   190,   196,
     199,   202,   205,   208,   211,   214,   217,   220,   226,   232,
     237,   246,   256,   263,   269,   273,   281,   284,   290,   297,
     304,   311,   318,   326,   329,   332,   338,   346,   349,   352,
     355,   361,   365,   369,   376,   383,   391,   395,   399,   405,
     411,   417,   422,   428,   434,   440,   446,   452,   458,   461,
     469,   473,   476,   479,   485,   490,   497,   502
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

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    27,    50,   120,   231,   303,   346,   -18,    25,   253,
    -142,   383,   395,    63,    61,    64,   258,   467,   657,   719,
     823,   443,    64,    82,   692,  1302,  1327,    74,    75,   119,
     589,   147,   155,   156,   175,   195,   227,  1274,    16,    55,
     661,  2219,  2250,  2281,  2312,  2343,  2374,  2405,  2436,  2467,
      15,   290,    19,   338,   357,    31,  2498,   361,   366,    44,
    1343,  2529,  2560,    40,   314,   621,   676,  1361,  1407,  1455,
     458,   902,   661,   409,   740,   381,   426,   740,   740,   740,
      13,   435,   589,   136,  1281,  1488,   578,    11,  2591,   468,
    2622,  2653,   425,    55,   388,   388,    16,    38,   423,   440,
     126,   466,  2684,   449,   142,   190,   245,   453,   459,   265,
     460,   478,   457,  1494,   102,   935,  1562,    79,    86,   596,
    1114,  1585,  3005,  2992,   777,   823,   114,   485,   486,   124,
     492,   496,  3011,   900,   417,   138,  2715,  2746,  2777,   171,
     823,   481,  2808,   502,   823,  2839,   516,   823,   539,   650,
     790,  3026,   484,   518,  1425,    34,    98,   661,   321,   430,
     506,  3032,   341,   354,   708,  1134,  3045,  3051,  3064,  1555,
    1601,  3127,   534,   542,  1205,   111,   365,   661,   573,   588,
    3134,    85,   132,   693,  1253,  3140,  3146,  3152,   754,   874,
     921,   583,   616,   950,   548,   452,   661,   187,   239,   295,
     983,    60,    77,   168,   599,   989,  1036,  1052,   555,   619,
     626,   180,   183,   806,   631,   632,   636,   589,   655,   659,
     823,  1534,   597,  1628,  1659,  1692,  1723,  1754,  1785,  1816,
     683,  1847,  1878,   698,   701,  2870,  2901,   716,   740,   157,
    3070,   431,   532,    98,   447,   447,    34,   731,   740,   192,
    3158,   159,   612,   365,   493,   493,   111,   735,   740,   527,
    1058,   141,   617,   452,   517,   517,   548,   727,   736,   637,
     751,   758,   759,   740,   740,   756,   763,   296,   328,   355,
     368,   661,   409,   740,   785,    13,   795,  2932,  1909,  1940,
     622,  2963,   818,   761,  3083,   946,  3089,   688,  1419,  3102,
    3108,   819,   766,  3164,   954,  3170,   272,  1314,  3176,  3182,
     824,   767,  1096,   984,  1164,   207,   663,  1212,  1237,   740,
     740,   784,   798,   740,   740,   802,   829,   836,  1971,   833,
     842,  2002,   786,   849,  1011,   856,   865,   866,   875,   884,
     837,   838,   846,  3121,   906,   910,  3188,   371,   471,  1245,
     852,   868,   203,   235,   878,   924,  2992,   777,  2992,   892,
     893,   740,   740,   928,   933,   482,   522,  2033,   304,  2064,
    2095,  2126,   934,   953,  2992,   481,   908,   917,  2157,   918,
    2992,  2188
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   951,     1,  -142,  -142,   939,     0,  -142,
     -13,  -141,   -36,   -99,   -92,   -89,   -78,   -69,  1072,   -82,
    1141,   -81,   -80,  1210,   -40,   -25,   -65,   850,   332,   -39,
     -32,   678,  1330,   221,   919,   781,   628,   -11,   483,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    41,     6,    16,    17,   148,     8,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,   110,    63,    64,    65,    66,    67,    68,    69,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     5,    21,     7,     5,    75,   235,    90,    99,    70,
     118,   211,   212,    18,     1,    12,   149,   150,   151,    24,
      25,    26,   208,    18,   224,   152,   -48,    85,   153,   167,
     -50,   225,   154,   155,   226,    84,   156,   149,   150,   151,
     107,   108,   -49,   116,   157,   227,     9,    40,   -48,   208,
      10,   -47,   -50,   154,   228,    92,    13,   112,    24,    25,
      26,   167,    93,   186,   -49,   157,   186,   186,   186,   167,
     123,   -47,   206,   -47,    84,    38,   143,   -44,    39,   287,
      19,    14,   263,   229,   231,   122,    40,   134,   -60,   136,
     -34,   232,   -47,    20,   -47,    15,   -47,   -35,   230,   -60,
      14,   149,   150,   151,   142,    72,    73,   253,   145,   -60,
     223,   -60,   -34,   213,   169,   170,   171,   154,   155,   -35,
      -2,   156,   206,   222,   221,   -38,   270,   271,   272,   157,
     174,   278,   279,   280,   -77,   -41,   -77,   -48,     1,   188,
     189,   190,   177,   -60,   240,   167,   167,   -38,   191,    92,
      74,   192,   -61,   -48,   -60,   193,   194,   -41,   125,   195,
     188,   189,   190,   -61,   250,   186,   167,   196,   113,   191,
     -61,   141,   192,   -61,   127,   -61,   193,   194,    76,   -62,
     195,   -61,   213,   260,   206,   167,    77,    78,   196,   294,
     -62,   -36,   284,   264,   -37,   188,   189,   190,   -48,    90,
     -62,   -48,   -62,   -76,   191,   -76,    79,   192,   335,   336,
     337,   193,   194,   -36,   -39,   195,   -37,   326,   -59,   -48,
     295,   -48,   128,   196,   303,   339,    80,   186,   206,   -59,
     304,    -4,   167,   167,   167,   300,   -39,   186,   206,   -59,
     313,   -59,   186,   186,   186,   309,   -40,   186,   206,    -4,
     -50,    90,   206,   206,   206,   318,   -48,   224,    81,   224,
      86,   163,   186,   186,   225,   338,   225,   226,   -40,   226,
     167,   -50,   186,   -50,   167,   224,   208,   129,   227,   167,
     227,   224,   225,   -59,   -14,   226,   -13,   228,   225,   228,
      22,   226,    23,   163,   -59,   182,   227,   -58,   182,   182,
     182,   163,   227,    -5,   202,   228,   -49,   -34,   186,   186,
     379,   228,   186,   186,   119,    92,   229,   231,   229,   231,
     367,    -5,   369,   -45,   232,   -60,   232,   -49,   -34,   -49,
     -34,   230,   -48,   230,   229,   231,   -60,   375,   378,   -35,
     229,   231,   232,   223,   381,   223,    -6,   -60,   232,   230,
     186,   186,   -47,   -48,   202,   230,   222,   221,   222,   221,
     -35,   223,   -35,   243,    -6,   -60,   -36,   223,   169,   170,
     171,   -36,   161,   -47,   222,   221,   -60,   241,   163,   -37,
     222,   221,   -38,    -3,   174,   175,   -60,   -36,   176,   -36,
     -37,    24,    25,    26,    91,    -7,   177,   251,   163,   -43,
     -37,    -3,   -37,   -38,   161,   -38,   180,    84,    38,   180,
     180,   180,   161,    -7,   102,   200,   261,   163,   -29,    40,
     -29,   -29,   -29,   -29,   140,   -29,   -29,   -29,    98,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   209,   210,
     -29,   -50,   -61,    -9,   117,   103,   -29,   -29,   -29,    82,
     149,   150,   151,   -61,   111,   188,   189,   190,    -8,   182,
     202,    -9,   -50,   -61,   297,   200,   154,   155,   -15,   182,
     202,   193,   194,   124,   306,   195,    -8,   208,   157,   182,
     202,   126,   -41,   196,   315,   -56,   -15,   161,   161,   161,
     -46,   -57,   130,   -39,   182,   182,   169,   170,   171,   -11,
     233,   -11,   163,   -41,   182,   -41,   163,   180,   180,   161,
     131,   163,   174,   175,   -39,   237,   -39,   -49,   -39,   -40,
     188,   189,   190,   168,   177,   137,   200,   200,   161,   138,
     188,   189,   190,   -40,   144,   234,   193,   194,   -49,   191,
     182,   182,   192,   208,   182,   182,   193,   194,   196,   238,
     195,   188,   189,   190,   -40,   168,   -40,   187,   196,   312,
     187,   187,   187,   168,   296,   247,   207,   193,   267,   268,
     180,   200,   236,   248,   269,   161,   161,   161,   161,   196,
     180,   200,   182,   182,   -50,   180,   180,   180,   180,   -61,
     180,   200,    24,    25,    26,   200,   200,   200,   200,   -49,
     -61,    31,    32,    33,    34,   180,   180,   -59,    37,    38,
     -64,   -61,    39,   161,   257,   180,   207,   161,   -59,   265,
      40,   -64,   161,   208,   -64,   149,   150,   151,   208,   -59,
     288,   -64,   -62,   -64,   152,   332,   333,   153,   168,   168,
     168,   334,   155,   -62,   305,   156,    94,   258,   -34,   314,
     273,   180,   180,   157,   -62,   180,   180,   274,   187,   187,
     168,   -51,   281,   282,   149,   150,   151,   283,   166,   -34,
     -51,   -51,   -51,   152,   -63,   -51,   153,   207,   207,   168,
     154,   155,   -51,   265,   156,   -63,   285,   -64,   -63,   -12,
     286,   -12,   157,   180,   180,   -63,    95,   -63,   -64,   -59,
     166,   -64,   185,   -51,   -62,   185,   185,   185,   166,   -64,
     -59,   205,   -51,   -51,   -51,   -62,   289,   -51,   254,   -62,
     -59,   187,   207,   121,   290,   -51,   168,   168,   168,   168,
     -62,   187,   207,   244,   -13,   292,   187,   187,   187,   187,
     -62,   187,   207,   169,   170,   171,   207,   207,   207,   207,
     301,   -13,   172,   -13,   310,   173,   187,   187,   319,   174,
     175,   205,   -35,   176,   168,   -51,   187,   320,   168,   -36,
     -37,   177,   -48,   168,   -51,   -51,   -51,   -48,   -48,   -51,
      24,    25,    26,   -35,   166,   166,   -51,   323,   -51,    31,
     -36,   -37,    34,   342,   324,   -48,    84,    38,   345,   348,
      39,   -52,   187,   187,   185,   166,   187,   187,    40,   -48,
     -52,   -52,   -52,   208,   330,   -52,   352,   361,   328,   275,
     276,   165,   -52,   205,   166,   277,    24,    25,    26,    27,
     353,    28,    29,    30,   356,    31,    32,    33,    34,    35,
      36,   146,    37,    38,   187,   187,    39,   -48,   208,   -38,
     341,   344,   147,   165,    40,   184,   347,   -41,   184,   184,
     184,   165,   357,   -48,   204,   359,   185,   205,   358,   -44,
     -38,   166,   166,   299,   360,   120,   185,   205,   -41,   -48,
     362,   185,   185,   308,   363,   -52,   185,   205,   -45,   -48,
      87,   205,   205,   317,   -52,   -52,   -52,   -36,   -37,   -52,
     364,   185,   185,   188,   189,   190,   -52,   -46,   -52,   166,
     365,   185,   191,   166,   204,   192,   -43,   -38,   166,   193,
     194,   -41,    97,   195,   101,   370,   371,   101,   101,   101,
     109,   196,   -53,   114,   -10,   -48,   -10,   165,   165,   -39,
     -39,   -53,   -53,   -53,   -40,   -48,   -53,   185,   185,   -40,
     380,   185,   185,   -53,    11,   -53,   366,   184,   165,   164,
     -39,   -70,    71,   329,   -48,   -40,   376,   132,     0,   133,
     -70,   -70,   -70,     0,   135,   -70,   204,   165,   343,     0,
     133,   259,   -70,   139,   -70,   377,   346,     0,   133,   185,
     185,   164,     0,   183,   -73,     0,   183,   183,   183,   164,
     -66,     0,   203,   -73,   -73,   -73,     0,   242,   -73,   -66,
     266,   -66,     0,     0,   -66,   -73,   349,   -73,   133,   184,
     204,   -66,   -70,   -66,   165,   298,     0,   252,     0,   184,
     204,   -70,   -70,   -70,   184,   307,   -70,   290,     0,   184,
     204,     0,   239,   -70,   204,   316,   262,   -68,     0,     0,
       0,     0,   203,     0,   184,   184,   -68,   -68,   -68,     0,
       0,   -68,   165,   -71,   184,     0,   165,     0,   -68,   -69,
     -68,   165,   -71,   -71,   -71,   164,   164,   -71,   -69,   -69,
     -69,     0,     0,   -69,   -71,     0,   -71,     0,   101,   114,
     -69,     0,   -69,     0,     0,   183,   164,     0,   101,   114,
     184,   184,     0,     0,   184,   184,     0,   -75,   101,   114,
       0,     0,   158,     0,   203,   164,   -75,   -75,   -75,     0,
       0,   -75,     0,   101,   101,   -63,     0,     0,   -75,     0,
     -75,   325,     0,   101,    95,   109,   -63,     0,     0,   -63,
     340,     0,   184,   184,   158,   -64,   100,   -63,     0,   104,
     105,   106,   158,     0,   245,   197,   -64,   183,   203,   -64,
       0,     0,   164,     0,     0,     0,   -64,   183,   203,   101,
     101,     0,   183,   101,   101,   -72,     0,   183,   203,     0,
       0,   159,   203,     0,   -72,   -72,   -72,     0,     0,   -72,
       0,     0,   183,   183,     0,     0,   -72,     0,   -72,     0,
     164,     0,   183,     0,   164,   197,     0,   368,     0,   164,
       0,   101,   101,   159,     0,   178,   -70,     0,   178,   178,
     178,   159,     0,   -65,   198,   -70,   -70,   -70,     0,   158,
     -70,     0,   -65,   266,   -65,     0,   249,   -65,   183,   183,
       0,     0,   183,   183,   -65,     0,   -65,     0,   -67,   158,
     160,     0,     0,     0,     0,     0,   -74,   -67,   -67,   -67,
       0,     0,   -67,     0,   -64,   -74,   -74,   -74,   158,   -67,
     -74,   -67,     0,   255,   198,   -64,     0,   -74,   -64,   -74,
     183,   183,   160,     0,   179,   -70,     0,   179,   179,   179,
     160,     0,   -70,   199,   -70,   -70,   -70,     0,   159,   -70,
      82,   -70,   -70,   -70,     0,    83,   -70,   -70,     0,     0,
     293,   197,    83,   -52,   -70,     0,     0,     0,   159,     0,
     302,   197,   -52,   -52,   -52,   -63,     0,   -52,     0,     0,
     311,   197,     0,     0,   255,   -52,   -63,   159,   -53,   -63,
       0,     0,     0,   199,     0,   321,   322,   -53,   -53,   -53,
       0,     0,   -53,   158,   -73,   327,     0,   158,     0,     0,
     -53,     0,   158,   -73,   -73,   -73,     0,   160,   -73,     0,
     162,     0,   -66,     0,     0,     0,   -73,     0,     0,   178,
     198,   -66,    96,   -66,     0,     0,   -66,   160,     0,   178,
     198,   350,   351,     0,   -66,   354,   355,     0,     0,   178,
     198,     0,   162,     0,   181,     0,   160,   181,   181,   181,
     162,     0,     0,   201,   178,   178,     0,     0,   -68,     0,
       0,     0,   159,     0,   178,     0,   159,   -68,   -68,   -68,
     -63,   159,   -68,   372,   373,     0,   -70,     0,     0,   245,
     -68,   -63,     0,     0,   -63,   -70,   -70,   -70,   179,   199,
     -70,   -63,     0,     0,     0,     0,   239,   -70,   179,   199,
     178,   178,     0,   201,   178,   178,   -71,     0,   179,   199,
       0,     0,     0,     0,     0,   -71,   -71,   -71,     0,     0,
     -71,     0,     0,   179,   179,     0,     0,   162,   -71,     0,
       0,   160,     0,   179,     0,   160,     0,     0,     0,   -69,
     160,     0,   178,   178,     0,   -75,     0,   162,   -69,   -69,
     -69,     0,     0,   -69,   -75,   -75,   -75,     0,     0,   -75,
       0,   -69,     0,     0,     0,     0,   162,   -75,     0,   179,
     179,     0,     0,   179,   179,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -51,     0,   181,   201,
       0,   179,   179,   -72,     0,   -51,   -51,   -51,   181,   201,
     -51,     0,   -72,   -72,   -72,     0,     0,   -72,   181,   201,
       0,     0,     0,     0,     0,   -72,   -65,     0,     0,     0,
       0,     0,     0,   181,   181,   -65,    96,   -65,     0,     0,
     -65,   162,   -52,   181,     0,   162,     0,     0,   -65,     0,
     162,   -52,   -52,   -52,     0,     0,   -52,     0,     0,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   181,
     181,   -20,     0,   181,   181,     0,     0,   -20,   -20,   -20,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,     0,   -19,     0,     0,     0,     0,     0,   -19,   -19,
     -19,   181,   181,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,     0,
       0,   -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,     0,     0,     0,
       0,     0,   -22,   -22,   -22,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,
       0,     0,     0,     0,   -24,   -24,   -24,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
     -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,     0,     0,     0,     0,    -7,    -7,
      -7,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,   -28,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,   -15,     0,     0,     0,     0,
       0,   -15,   -15,   -15,   -29,     0,   -29,   -29,   -29,   -29,
     374,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -55,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,   -55,     0,
       0,     0,     0,     0,   -55,   -55,   -55,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,   -54,
       0,     0,     0,     0,     0,   -54,   -54,   -54,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -27,     0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -20,     0,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,     0,     0,     0,     0,     0,   -20,
     -20,   -20,    88,     0,    24,    25,    26,    27,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,   146,
      37,    38,     0,     0,    39,     0,     0,     0,     0,     0,
     147,    89,    40,   -18,     0,   -18,   -18,   -18,   -18,     0,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,     0,     0,   -18,     0,     0,     0,     0,
       0,   -18,   -18,   -18,   -19,     0,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,     0,     0,   -19,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -21,     0,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,
       0,     0,     0,   -21,   -21,   -21,   -22,     0,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,
       0,     0,     0,     0,   -22,   -22,   -22,   -23,     0,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
       0,     0,     0,     0,     0,   -23,   -23,   -23,   -24,     0,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -33,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -25,     0,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   -26,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -17,     0,   -17,   -17,   -17,   -17,     0,   -17,
     -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,     0,     0,   -17,     0,     0,     0,     0,     0,
     -17,   -17,   -17,   -16,     0,   -16,   -16,   -16,   -16,     0,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,     0,     0,   -16,     0,     0,     0,     0,
       0,   -16,   -16,   -16,   -28,     0,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -32,     0,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -42,     0,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -55,     0,   -55,
     -55,   -55,   -55,     0,   -55,   -55,   -55,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,   -55,
       0,     0,     0,     0,     0,   -55,   -55,   -55,   -54,     0,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
     -54,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -31,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,    88,     0,    24,    25,    26,    27,     0,    28,    29,
      30,     0,    31,    32,    33,    34,    35,    36,   146,    37,
      38,     0,     0,    39,     0,     0,     0,     0,     0,   147,
     291,    40,    -7,     0,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,    -7,     0,     0,     0,     0,     0,
      -7,    -7,    -7,    88,     0,    24,    25,    26,    27,     0,
      28,    29,    30,     0,    31,    32,    33,    34,    35,    36,
     146,    37,    38,     0,     0,    39,     0,     0,     0,     0,
       0,   147,   331,    40,   -15,     0,   -15,   -15,   -15,   -15,
       0,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,     0,     0,   -15,     0,     0,     0,
       0,     0,   -15,   -15,   -15,    24,    25,    26,   214,     0,
     215,   216,   217,     0,    31,    32,    33,    34,   218,   219,
     146,    37,    38,     0,     0,    39,   -67,     0,     0,     0,
       0,   220,   -74,    40,     0,   -67,   -67,   -67,     0,     0,
     -67,   -74,   -74,   -74,     0,     0,   -74,   -53,   -67,     0,
       0,     0,     0,   -73,   -74,     0,   -53,   -53,   -53,     0,
       0,   -53,   -73,   -73,   -73,     0,   -66,   -73,   -53,     0,
       0,     0,   -68,     0,   -73,   -66,   246,   -66,     0,     0,
     -66,   -68,   -68,   -68,     0,   -71,   -68,   -66,     0,     0,
       0,   -69,     0,   -68,   -71,   -71,   -71,     0,     0,   -71,
     -69,   -69,   -69,     0,   -75,   -69,   -71,     0,     0,     0,
     -72,     0,   -69,   -75,   -75,   -75,     0,     0,   -75,   -72,
     -72,   -72,     0,   -65,   -72,   -75,     0,     0,     0,   -67,
       0,   -72,   -65,   246,   -65,     0,     0,   -65,   -67,   -67,
     -67,     0,   -74,   -67,   -65,     0,     0,     0,   -53,     0,
     -67,   -74,   -74,   -74,     0,   -73,   -74,   -53,   -53,   -53,
       0,   -66,   -53,   -74,   -73,   -73,   -73,   -68,     0,   -73,
     -66,   256,   -66,   -71,     0,   -66,   -68,   -68,   -68,   -69,
       0,   -68,   -71,   -71,   -71,   -75,     0,   -71,   -69,   -69,
     -69,   -72,     0,   -69,   -75,   -75,   -75,   -65,     0,   -75,
     -72,   -72,   -72,   -67,     0,   -72,   -65,   256,   -65,   -74,
       0,   -65,   -67,   -67,   -67,     0,     0,   -67,   -74,   -74,
     -74,     0,     0,   -74
};

static const yytype_int16 yycheck[] =
{
       0,     0,    15,     3,     3,    30,   147,    43,    73,    22,
      92,    92,    92,    13,    18,    33,     3,     4,     5,     3,
       4,     5,    11,    23,   123,    12,    11,    38,    15,    40,
      11,   123,    19,    20,   123,    19,    23,     3,     4,     5,
      27,    28,    11,    32,    31,   123,    19,    31,    33,    11,
       0,    11,    33,    19,   123,    11,    31,    82,     3,     4,
       5,    72,    22,    74,    33,    31,    77,    78,    79,    80,
      32,    11,    83,    33,    19,    20,   141,    33,    23,   220,
      19,    18,    22,   123,   123,    96,    31,   123,    11,   125,
      11,   123,    32,    29,    34,    32,    11,    11,   123,    22,
      18,     3,     4,     5,   140,    31,    31,    22,   144,    32,
     123,    34,    33,    11,     3,     4,     5,    19,    20,    33,
       0,    23,   133,   123,   123,    11,   208,   208,   208,    31,
      19,   213,   213,   213,    32,    11,    34,    11,    18,     3,
       4,     5,    31,    11,   155,   156,   157,    33,    12,    11,
      31,    15,    11,    11,    22,    19,    20,    33,    32,    23,
       3,     4,     5,    22,   175,   176,   177,    31,    32,    12,
      11,    33,    15,    32,    32,    34,    19,    20,    31,    11,
      23,    22,    11,   194,   195,   196,    31,    31,    31,    32,
      22,    11,   217,    25,    11,     3,     4,     5,    11,   235,
      32,    11,    34,    32,    12,    34,    31,    15,   290,   290,
     290,    19,    20,    33,    11,    23,    33,   282,    11,    32,
     239,    34,    32,    31,    32,   290,    31,   238,   239,    22,
     249,     0,   243,   244,   245,   246,    33,   248,   249,    32,
     259,    34,   253,   254,   255,   256,    11,   258,   259,    18,
      11,   287,   263,   264,   265,   266,    11,   356,    31,   358,
      39,    40,   273,   274,   356,   290,   358,   356,    33,   358,
     281,    32,   283,    34,   285,   374,    11,    32,   356,   290,
     358,   380,   374,    11,    31,   374,    33,   356,   380,   358,
      32,   380,    34,    72,    22,    74,   374,    32,    77,    78,
      79,    80,   380,     0,    83,   374,    11,    11,   319,   320,
     375,   380,   323,   324,    93,    11,   356,   356,   358,   358,
     356,    18,   358,    33,   356,    11,   358,    32,    32,    34,
      34,   356,    11,   358,   374,   374,    22,    33,   374,    11,
     380,   380,   374,   356,   380,   358,     0,    33,   380,   374,
     361,   362,    11,    32,   133,   380,   356,   356,   358,   358,
      32,   374,    34,    22,    18,    11,    11,   380,     3,     4,
       5,    33,    40,    32,   374,   374,    22,   156,   157,    11,
     380,   380,    11,     0,    19,    20,    32,    32,    23,    34,
      33,     3,     4,     5,    33,     0,    31,   176,   177,    33,
      32,    18,    34,    32,    72,    34,    74,    19,    20,    77,
      78,    79,    80,    18,    33,    83,   195,   196,     1,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    19,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    13,    14,
      23,    11,    11,     0,    19,    19,    29,    30,    31,    26,
       3,     4,     5,    22,    19,     3,     4,     5,     0,   238,
     239,    18,    32,    32,   243,   133,    19,    20,     0,   248,
     249,    19,    20,    33,   253,    23,    18,    11,    31,   258,
     259,    32,    11,    31,   263,    32,    18,   155,   156,   157,
      33,    32,    32,    11,   273,   274,     3,     4,     5,    32,
      19,    34,   281,    32,   283,    34,   285,   175,   176,   177,
      32,   290,    19,    20,    32,    31,    34,    11,    33,    33,
       3,     4,     5,    40,    31,    33,   194,   195,   196,    33,
       3,     4,     5,    11,    32,    19,    19,    20,    32,    12,
     319,   320,    15,    11,   323,   324,    19,    20,    31,    31,
      23,     3,     4,     5,    32,    72,    34,    74,    31,    32,
      77,    78,    79,    80,    32,    31,    83,    19,    13,    14,
     238,   239,    33,    31,    19,   243,   244,   245,   246,    31,
     248,   249,   361,   362,    11,   253,   254,   255,   256,    11,
     258,   259,     3,     4,     5,   263,   264,   265,   266,    11,
      22,    12,    13,    14,    15,   273,   274,    11,    19,    20,
      11,    33,    23,   281,    31,   283,   133,   285,    22,    20,
      31,    22,   290,    11,    25,     3,     4,     5,    11,    33,
      33,    32,    11,    34,    12,    13,    14,    15,   155,   156,
     157,    19,    20,    22,    32,    23,    25,    31,    11,    32,
      31,   319,   320,    31,    33,   323,   324,    31,   175,   176,
     177,    11,    31,    31,     3,     4,     5,    31,    40,    32,
      20,    21,    22,    12,    11,    25,    15,   194,   195,   196,
      19,    20,    32,    20,    23,    22,    31,    11,    25,    32,
      31,    34,    31,   361,   362,    32,    20,    34,    22,    11,
      72,    25,    74,    11,    11,    77,    78,    79,    80,    33,
      22,    83,    20,    21,    22,    22,    33,    25,    25,    11,
      32,   238,   239,    95,    26,    33,   243,   244,   245,   246,
      22,   248,   249,    25,    33,    19,   253,   254,   255,   256,
      32,   258,   259,     3,     4,     5,   263,   264,   265,   266,
      19,    32,    12,    34,    19,    15,   273,   274,    31,    19,
      20,   133,    11,    23,   281,    11,   283,    31,   285,    11,
      11,    31,    11,   290,    20,    21,    22,    11,    11,    25,
       3,     4,     5,    32,   156,   157,    32,    31,    34,    12,
      32,    32,    15,    32,    31,    11,    19,    20,    32,    32,
      23,    11,   319,   320,   176,   177,   323,   324,    31,    11,
      20,    21,    22,    11,    19,    25,    32,    31,    33,    13,
      14,    40,    32,   195,   196,    19,     3,     4,     5,     6,
      32,     8,     9,    10,    32,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   361,   362,    23,    11,    11,    11,
      32,    32,    29,    72,    31,    74,    32,    11,    77,    78,
      79,    80,    33,    11,    83,    32,   238,   239,    32,    32,
      32,   243,   244,   245,    32,    94,   248,   249,    32,    11,
      31,   253,   254,   255,    32,    11,   258,   259,    32,    11,
      40,   263,   264,   265,    20,    21,    22,    32,    32,    25,
      32,   273,   274,     3,     4,     5,    32,    32,    34,   281,
      32,   283,    12,   285,   133,    15,    32,    11,   290,    19,
      20,    11,    72,    23,    74,    33,    33,    77,    78,    79,
      80,    31,    11,    83,    32,    11,    34,   156,   157,    11,
      32,    20,    21,    22,    11,    11,    25,   319,   320,    32,
      32,   323,   324,    32,     3,    34,    32,   176,   177,    40,
      32,    11,    23,   285,    11,    32,    32,    32,    -1,    34,
      20,    21,    22,    -1,   124,    25,   195,   196,    32,    -1,
      34,    31,    32,   133,    34,    32,    32,    -1,    34,   361,
     362,    72,    -1,    74,    11,    -1,    77,    78,    79,    80,
      11,    -1,    83,    20,    21,    22,    -1,   157,    25,    20,
      21,    22,    -1,    -1,    25,    32,    32,    34,    34,   238,
     239,    32,    11,    34,   243,   244,    -1,   177,    -1,   248,
     249,    20,    21,    22,   253,   254,    25,    26,    -1,   258,
     259,    -1,    31,    32,   263,   264,   196,    11,    -1,    -1,
      -1,    -1,   133,    -1,   273,   274,    20,    21,    22,    -1,
      -1,    25,   281,    11,   283,    -1,   285,    -1,    32,    11,
      34,   290,    20,    21,    22,   156,   157,    25,    20,    21,
      22,    -1,    -1,    25,    32,    -1,    34,    -1,   238,   239,
      32,    -1,    34,    -1,    -1,   176,   177,    -1,   248,   249,
     319,   320,    -1,    -1,   323,   324,    -1,    11,   258,   259,
      -1,    -1,    40,    -1,   195,   196,    20,    21,    22,    -1,
      -1,    25,    -1,   273,   274,    11,    -1,    -1,    32,    -1,
      34,   281,    -1,   283,    20,   285,    22,    -1,    -1,    25,
     290,    -1,   361,   362,    72,    11,    74,    33,    -1,    77,
      78,    79,    80,    -1,    20,    83,    22,   238,   239,    25,
      -1,    -1,   243,    -1,    -1,    -1,    32,   248,   249,   319,
     320,    -1,   253,   323,   324,    11,    -1,   258,   259,    -1,
      -1,    40,   263,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,   273,   274,    -1,    -1,    32,    -1,    34,    -1,
     281,    -1,   283,    -1,   285,   133,    -1,   357,    -1,   290,
      -1,   361,   362,    72,    -1,    74,    11,    -1,    77,    78,
      79,    80,    -1,    11,    83,    20,    21,    22,    -1,   157,
      25,    -1,    20,    21,    22,    -1,    31,    25,   319,   320,
      -1,    -1,   323,   324,    32,    -1,    34,    -1,    11,   177,
      40,    -1,    -1,    -1,    -1,    -1,    11,    20,    21,    22,
      -1,    -1,    25,    -1,    11,    20,    21,    22,   196,    32,
      25,    34,    -1,    20,   133,    22,    -1,    32,    25,    34,
     361,   362,    72,    -1,    74,    11,    -1,    77,    78,    79,
      80,    -1,    11,    83,    20,    21,    22,    -1,   157,    25,
      26,    20,    21,    22,    -1,    31,    25,    33,    -1,    -1,
     238,   239,    31,    11,    33,    -1,    -1,    -1,   177,    -1,
     248,   249,    20,    21,    22,    11,    -1,    25,    -1,    -1,
     258,   259,    -1,    -1,    20,    33,    22,   196,    11,    25,
      -1,    -1,    -1,   133,    -1,   273,   274,    20,    21,    22,
      -1,    -1,    25,   281,    11,   283,    -1,   285,    -1,    -1,
      33,    -1,   290,    20,    21,    22,    -1,   157,    25,    -1,
      40,    -1,    11,    -1,    -1,    -1,    33,    -1,    -1,   238,
     239,    20,    21,    22,    -1,    -1,    25,   177,    -1,   248,
     249,   319,   320,    -1,    33,   323,   324,    -1,    -1,   258,
     259,    -1,    72,    -1,    74,    -1,   196,    77,    78,    79,
      80,    -1,    -1,    83,   273,   274,    -1,    -1,    11,    -1,
      -1,    -1,   281,    -1,   283,    -1,   285,    20,    21,    22,
      11,   290,    25,   361,   362,    -1,    11,    -1,    -1,    20,
      33,    22,    -1,    -1,    25,    20,    21,    22,   238,   239,
      25,    32,    -1,    -1,    -1,    -1,    31,    32,   248,   249,
     319,   320,    -1,   133,   323,   324,    11,    -1,   258,   259,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,   273,   274,    -1,    -1,   157,    33,    -1,
      -1,   281,    -1,   283,    -1,   285,    -1,    -1,    -1,    11,
     290,    -1,   361,   362,    -1,    11,    -1,   177,    20,    21,
      22,    -1,    -1,    25,    20,    21,    22,    -1,    -1,    25,
      -1,    33,    -1,    -1,    -1,    -1,   196,    33,    -1,   319,
     320,    -1,    -1,   323,   324,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    11,    -1,   238,   239,
      -1,   361,   362,    11,    -1,    20,    21,    22,   248,   249,
      25,    -1,    20,    21,    22,    -1,    -1,    25,   258,   259,
      -1,    -1,    -1,    -1,    -1,    33,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   273,   274,    20,    21,    22,    -1,    -1,
      25,   281,    11,   283,    -1,   285,    -1,    -1,    33,    -1,
     290,    20,    21,    22,    -1,    -1,    25,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   319,
     320,    23,    -1,   323,   324,    -1,    -1,    29,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,   361,   362,     1,    -1,     3,     4,     5,     6,     7,
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
      -1,    -1,    29,    30,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    11,    -1,    -1,    -1,
      -1,    29,    11,    31,    -1,    20,    21,    22,    -1,    -1,
      25,    20,    21,    22,    -1,    -1,    25,    11,    33,    -1,
      -1,    -1,    -1,    11,    33,    -1,    20,    21,    22,    -1,
      -1,    25,    20,    21,    22,    -1,    11,    25,    32,    -1,
      -1,    -1,    11,    -1,    32,    20,    21,    22,    -1,    -1,
      25,    20,    21,    22,    -1,    11,    25,    32,    -1,    -1,
      -1,    11,    -1,    32,    20,    21,    22,    -1,    -1,    25,
      20,    21,    22,    -1,    11,    25,    32,    -1,    -1,    -1,
      11,    -1,    32,    20,    21,    22,    -1,    -1,    25,    20,
      21,    22,    -1,    11,    25,    32,    -1,    -1,    -1,    11,
      -1,    32,    20,    21,    22,    -1,    -1,    25,    20,    21,
      22,    -1,    11,    25,    32,    -1,    -1,    -1,    11,    -1,
      32,    20,    21,    22,    -1,    11,    25,    20,    21,    22,
      -1,    11,    25,    32,    20,    21,    22,    11,    -1,    25,
      20,    21,    22,    11,    -1,    25,    20,    21,    22,    11,
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
       0,    18,    36,    37,    38,    39,    40,    43,    44,    19,
       0,    38,    33,    31,    18,    32,    41,    42,    43,    19,
      29,    45,    32,    34,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    14,    15,    16,    17,    19,    20,    23,
      31,    39,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    67,    68,    69,    70,    71,    72,    73,
      45,    42,    31,    31,    31,    60,    31,    31,    31,    31,
      31,    31,    26,    31,    19,    72,    68,    62,     1,    30,
      47,    33,    11,    22,    25,    20,    21,    62,    19,    61,
      53,    62,    33,    19,    53,    53,    53,    27,    28,    62,
      66,    19,    60,    32,    62,    74,    32,    19,    54,    68,
      70,    71,    72,    32,    33,    32,    32,    32,    32,    32,
      32,    32,    32,    34,    47,    62,    47,    33,    33,    62,
       7,    33,    47,    61,    32,    47,    18,    29,    43,     3,
       4,     5,    12,    15,    19,    20,    23,    31,    53,    55,
      58,    63,    67,    68,    69,    70,    71,    72,    73,     3,
       4,     5,    12,    15,    19,    20,    23,    31,    55,    58,
      63,    67,    68,    69,    70,    71,    72,    73,     3,     4,
       5,    12,    15,    19,    20,    23,    31,    53,    55,    58,
      63,    67,    68,    69,    70,    71,    72,    73,    11,    13,
      14,    56,    57,    11,     6,     8,     9,    10,    16,    17,
      29,    39,    43,    45,    48,    49,    50,    51,    52,    59,
      60,    64,    65,    19,    19,    46,    33,    31,    31,    31,
      72,    68,    62,    22,    25,    20,    21,    31,    31,    31,
      72,    68,    62,    22,    25,    20,    21,    31,    31,    31,
      72,    68,    62,    22,    25,    20,    21,    13,    14,    19,
      54,    56,    57,    31,    31,    13,    14,    19,    54,    56,
      57,    31,    31,    31,    60,    31,    31,    46,    33,    33,
      26,    30,    19,    53,    32,    74,    32,    68,    70,    71,
      72,    19,    53,    32,    74,    32,    68,    70,    71,    72,
      19,    53,    32,    74,    32,    68,    70,    71,    72,    31,
      31,    53,    53,    31,    31,    62,    61,    53,    33,    66,
      19,    30,    13,    14,    19,    54,    56,    57,    60,    61,
      62,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      53,    53,    32,    32,    53,    53,    32,    33,    32,    32,
      32,    31,    31,    32,    32,    32,    32,    47,    62,    47,
      33,    33,    53,    53,     7,    33,    32,    32,    47,    61,
      32,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    44,    45,    46,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    49,
      49,    50,    51,    52,    53,    53,    54,    54,    55,    56,
      57,    58,    59,    60,    60,    60,    61,    62,    62,    62,
      62,    63,    63,    63,    64,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      72,    72,    72,    72,    73,    73,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     5,     4,
       3,     1,     1,     2,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     9,     3,     1,     3,     3,     1,     1,     4,     4,
       4,     4,     5,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     1,     1,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     1,     3,     1,     4,     3,     3,     1
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
#line 2213 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 92 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2223 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 97 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2231 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 103 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2239 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 106 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2247 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 112 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2255 "bison/clang_syntax.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFDeclaration '(' params ')' compoundStmt  */
#line 118 "bison/clang_syntax.y"
                                                   {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2266 "bison/clang_syntax.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 124 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2276 "bison/clang_syntax.tab.c"
    break;

  case 10: /* params: params ',' param  */
#line 132 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2286 "bison/clang_syntax.tab.c"
    break;

  case 11: /* params: param  */
#line 137 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2294 "bison/clang_syntax.tab.c"
    break;

  case 12: /* param: simpleVDeclaration  */
#line 143 "bison/clang_syntax.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2302 "bison/clang_syntax.tab.c"
    break;

  case 13: /* simpleVDeclaration: TYPE ID  */
#line 149 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("variable ID");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    0,
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2318 "bison/clang_syntax.tab.c"
    break;

  case 14: /* simpleFDeclaration: TYPE ID  */
#line 163 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("function ID");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    1, 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2334 "bison/clang_syntax.tab.c"
    break;

  case 15: /* compoundStmt: '{' stmtList '}'  */
#line 176 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2342 "bison/clang_syntax.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 182 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2352 "bison/clang_syntax.tab.c"
    break;

  case 17: /* stmtList: stmtList error  */
#line 187 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 2360 "bison/clang_syntax.tab.c"
    break;

  case 18: /* stmtList: primitiveStmt  */
#line 190 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2368 "bison/clang_syntax.tab.c"
    break;

  case 19: /* primitiveStmt: exprStmt  */
#line 196 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2376 "bison/clang_syntax.tab.c"
    break;

  case 20: /* primitiveStmt: compoundStmt  */
#line 199 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2384 "bison/clang_syntax.tab.c"
    break;

  case 21: /* primitiveStmt: condStmt  */
#line 202 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2392 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: iterStmt  */
#line 205 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2400 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: returnStmt  */
#line 208 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2408 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: setStmt  */
#line 211 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2416 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: inOP  */
#line 214 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2424 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: outOP  */
#line 217 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2432 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: varDeclaration  */
#line 220 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2440 "bison/clang_syntax.tab.c"
    break;

  case 28: /* exprStmt: expression ';'  */
#line 226 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2448 "bison/clang_syntax.tab.c"
    break;

  case 29: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 232 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2458 "bison/clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 237 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2469 "bison/clang_syntax.tab.c"
    break;

  case 31: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt  */
#line 246 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2481 "bison/clang_syntax.tab.c"
    break;

  case 32: /* returnStmt: RETURN_KW expression ';'  */
#line 256 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2490 "bison/clang_syntax.tab.c"
    break;

  case 33: /* setStmt: forallOP  */
#line 263 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2498 "bison/clang_syntax.tab.c"
    break;

  case 34: /* pertOP: simpleExp IN_KW ID  */
#line 269 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("in operator");
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2507 "bison/clang_syntax.tab.c"
    break;

  case 35: /* pertOP: simpleExp IN_KW setReturner  */
#line 273 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2517 "bison/clang_syntax.tab.c"
    break;

  case 36: /* setReturner: addOP  */
#line 281 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2525 "bison/clang_syntax.tab.c"
    break;

  case 37: /* setReturner: remOP  */
#line 284 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2533 "bison/clang_syntax.tab.c"
    break;

  case 38: /* typeOP: ISSET_KW '(' ID ')'  */
#line 290 "bison/clang_syntax.y"
                        {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
    }
#line 2542 "bison/clang_syntax.tab.c"
    break;

  case 39: /* addOP: ADD_KW '(' pertOP ')'  */
#line 297 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2551 "bison/clang_syntax.tab.c"
    break;

  case 40: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 304 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2560 "bison/clang_syntax.tab.c"
    break;

  case 41: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 311 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2569 "bison/clang_syntax.tab.c"
    break;

  case 42: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 318 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2579 "bison/clang_syntax.tab.c"
    break;

  case 43: /* expression: assignExp  */
#line 326 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2587 "bison/clang_syntax.tab.c"
    break;

  case 44: /* expression: simpleExp  */
#line 329 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2595 "bison/clang_syntax.tab.c"
    break;

  case 45: /* expression: setReturner  */
#line 332 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2603 "bison/clang_syntax.tab.c"
    break;

  case 46: /* assignExp: ID ASS_OP expression  */
#line 338 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("assignment opertator");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2613 "bison/clang_syntax.tab.c"
    break;

  case 47: /* simpleExp: binLogicalExp  */
#line 346 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2621 "bison/clang_syntax.tab.c"
    break;

  case 48: /* simpleExp: pertOP  */
#line 349 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2629 "bison/clang_syntax.tab.c"
    break;

  case 49: /* simpleExp: selectOP  */
#line 352 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2637 "bison/clang_syntax.tab.c"
    break;

  case 50: /* simpleExp: typeOP  */
#line 355 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2645 "bison/clang_syntax.tab.c"
    break;

  case 51: /* constOP: INT  */
#line 361 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST INT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2654 "bison/clang_syntax.tab.c"
    break;

  case 52: /* constOP: FLOAT  */
#line 365 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST FLOAT");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2663 "bison/clang_syntax.tab.c"
    break;

  case 53: /* constOP: EMPTY  */
#line 369 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST EMPTY");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2672 "bison/clang_syntax.tab.c"
    break;

  case 54: /* inOP: IN '(' ID ')' ';'  */
#line 376 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 2681 "bison/clang_syntax.tab.c"
    break;

  case 55: /* outOP: OUT '(' outConst ')' ';'  */
#line 383 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = createSymbol((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2691 "bison/clang_syntax.tab.c"
    break;

  case 56: /* outConst: STRING  */
#line 391 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2700 "bison/clang_syntax.tab.c"
    break;

  case 57: /* outConst: CHAR  */
#line 395 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2709 "bison/clang_syntax.tab.c"
    break;

  case 58: /* outConst: simpleExp  */
#line 399 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2717 "bison/clang_syntax.tab.c"
    break;

  case 59: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 405 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2728 "bison/clang_syntax.tab.c"
    break;

  case 60: /* binLogicalExp: unLogicalExp  */
#line 411 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2736 "bison/clang_syntax.tab.c"
    break;

  case 61: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 417 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2746 "bison/clang_syntax.tab.c"
    break;

  case 62: /* unLogicalExp: relationalExp  */
#line 422 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2754 "bison/clang_syntax.tab.c"
    break;

  case 63: /* relationalExp: relationalExp REL_OP sumExp  */
#line 428 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2765 "bison/clang_syntax.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 434 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2773 "bison/clang_syntax.tab.c"
    break;

  case 65: /* sumExp: sumExp SUM_OP mulExp  */
#line 440 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2784 "bison/clang_syntax.tab.c"
    break;

  case 66: /* sumExp: mulExp  */
#line 446 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2792 "bison/clang_syntax.tab.c"
    break;

  case 67: /* mulExp: mulExp MUL_OP factor  */
#line 452 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("*/÷ operation");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2803 "bison/clang_syntax.tab.c"
    break;

  case 68: /* mulExp: factor  */
#line 458 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2811 "bison/clang_syntax.tab.c"
    break;

  case 69: /* mulExp: SUM_OP factor  */
#line 461 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("signed factor");
        (yyval.node)->s_token = createSymbol((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2821 "bison/clang_syntax.tab.c"
    break;

  case 70: /* factor: ID  */
#line 469 "bison/clang_syntax.y"
       {
        (yyval.node) = createNode("ID");
        (yyval.node)->s_token = createSymbol((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2830 "bison/clang_syntax.tab.c"
    break;

  case 71: /* factor: functionCall  */
#line 473 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2838 "bison/clang_syntax.tab.c"
    break;

  case 72: /* factor: '(' simpleExp ')'  */
#line 476 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2846 "bison/clang_syntax.tab.c"
    break;

  case 73: /* factor: constOP  */
#line 479 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2854 "bison/clang_syntax.tab.c"
    break;

  case 74: /* functionCall: ID '(' callParams ')'  */
#line 485 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = createSymbol((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2864 "bison/clang_syntax.tab.c"
    break;

  case 75: /* functionCall: ID '(' ')'  */
#line 490 "bison/clang_syntax.y"
                 {
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = createSymbol((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 2873 "bison/clang_syntax.tab.c"
    break;

  case 76: /* callParams: callParams ',' simpleExp  */
#line 497 "bison/clang_syntax.y"
                            {
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2883 "bison/clang_syntax.tab.c"
    break;

  case 77: /* callParams: simpleExp  */
#line 502 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2891 "bison/clang_syntax.tab.c"
    break;


#line 2895 "bison/clang_syntax.tab.c"

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

#line 507 "bison/clang_syntax.y"

extern void yyerror(const char* a) {
    printf(BRED"[%d:%d] ", line, column);
    printf("SYNTAX ERROR - ");
    printf("%s\n"reset, a);
    errors++;
}


int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    initStack(&scope);
    pushStack(&scope, 0);
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
    freeTree(tree);
    yylex_destroy();
    return 0;
}
