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
    extern int line;
    extern int column;
    extern int errors;
    extern int context;
    extern FILE *yyin;

#line 115 "bison/clang_syntax.tab.c"

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
  YYSYMBOL_params = 42,                    /* params  */
  YYSYMBOL_param = 43,                     /* param  */
  YYSYMBOL_simpleVDeclaration = 44,        /* simpleVDeclaration  */
  YYSYMBOL_simpleFDeclaration = 45,        /* simpleFDeclaration  */
  YYSYMBOL_compoundStmt = 46,              /* compoundStmt  */
  YYSYMBOL_stmtList = 47,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 48,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 49,                  /* exprStmt  */
  YYSYMBOL_condStmt = 50,                  /* condStmt  */
  YYSYMBOL_iterStmt = 51,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 52,                /* returnStmt  */
  YYSYMBOL_setStmt = 53,                   /* setStmt  */
  YYSYMBOL_pertOP = 54,                    /* pertOP  */
  YYSYMBOL_setReturner = 55,               /* setReturner  */
  YYSYMBOL_typeOP = 56,                    /* typeOP  */
  YYSYMBOL_setParams = 57,                 /* setParams  */
  YYSYMBOL_addOP = 58,                     /* addOP  */
  YYSYMBOL_remOP = 59,                     /* remOP  */
  YYSYMBOL_selectOP = 60,                  /* selectOP  */
  YYSYMBOL_forallOP = 61,                  /* forallOP  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_assignExp = 63,                 /* assignExp  */
  YYSYMBOL_simpleExp = 64,                 /* simpleExp  */
  YYSYMBOL_constOP = 65,                   /* constOP  */
  YYSYMBOL_inOP = 66,                      /* inOP  */
  YYSYMBOL_outOP = 67,                     /* outOP  */
  YYSYMBOL_outConst = 68,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 69,             /* binLogicalExp  */
  YYSYMBOL_unLogicalExp = 70,              /* unLogicalExp  */
  YYSYMBOL_relationalExp = 71,             /* relationalExp  */
  YYSYMBOL_sumExp = 72,                    /* sumExp  */
  YYSYMBOL_mulExp = 73,                    /* mulExp  */
  YYSYMBOL_factor = 74,                    /* factor  */
  YYSYMBOL_functionCall = 75,              /* functionCall  */
  YYSYMBOL_callParams = 76                 /* callParams  */
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
#define YYLAST   3519

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
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
       0,   114,   114,   120,   125,   131,   134,   140,   146,   146,
     157,   165,   170,   176,   194,   212,   229,   235,   240,   243,
     249,   252,   255,   258,   261,   264,   267,   270,   273,   279,
     285,   290,   299,   309,   316,   322,   327,   335,   338,   344,
     348,   355,   359,   362,   365,   372,   379,   386,   393,   401,
     404,   407,   413,   421,   424,   427,   430,   436,   440,   444,
     451,   458,   466,   470,   474,   480,   486,   492,   497,   503,
     509,   515,   521,   527,   533,   536,   544,   548,   551,   554,
     560,   565,   572,   577
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
  "funcDeclaration", "$@1", "params", "param", "simpleVDeclaration",
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

#define YYPACT_NINF (-218)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    -8,    33,   245,   357,   507,   612,    12,    22,    -5,
    -218,   647,   658,   -10,    31,    55,   842,   678,   109,    84,
     224,   571,  1083,  1425,    54,   120,   125,   126,   134,   137,
     150,   162,   165,   174,   187,  1328,   158,   633,   582,  2692,
    2723,  2754,  2785,  2816,  2847,  2878,  2909,  2940,     8,   188,
      66,   198,   211,    76,  2971,   217,   248,   104,  1440,  3002,
    3033,    86,   189,   250,   659,  1455,  1485,  1491,   465,    31,
      55,   582,   238,   686,   263,   414,   686,   686,   686,    51,
     304,   296,   126,    20,  1064,  1524,   311,   438,   387,   181,
    3064,   721,  3095,  3126,    -1,   438,   343,   343,   158,   769,
     583,   276,   341,   335,   293,   371,  3157,  1679,   300,   370,
     374,  1789,   427,   453,   521,   384,   404,   522,   407,   408,
     418,  1581,    10,   699,   414,  1607,   136,   193,   504,  1271,
    1636,  1643,   960,   707,   842,   218,   419,   423,   226,   435,
     445,  1663,   810,   450,  1375,   258,  3188,  3219,  3250,    16,
     281,   842,   469,  3281,   461,   842,  3312,   842,   494,  1821,
    1843,  1859,   474,   505,  1756,   229,   763,   582,   549,   584,
     588,  1876,    36,   144,   675,  1340,  1922,  1952,  1960,   815,
    1517,  2061,   537,   538,  1017,   376,   880,   582,   562,   568,
    2067,    90,   142,   977,  1145,  2074,  3449,  3457,   567,   631,
     622,   634,   589,   895,  1002,   632,   646,   163,   472,   919,
     582,    35,    70,    73,  1024,   102,   490,   489,  1132,  1058,
    1104,  1119,   779,   654,   682,   308,   339,    91,   991,   701,
     716,   726,   126,   727,   749,   842,  1739,   762,  2103,  2134,
    2165,  2196,  2227,  2258,  2289,   774,  2320,  2351,   786,  3343,
    3374,   414,   686,   167,  1987,   754,   467,   517,   592,   467,
     443,   443,   229,   414,   686,  3464,   765,   785,   347,   597,
     785,   668,   668,   376,   686,   686,   414,   686,   204,  1165,
     792,   989,   518,   623,   989,   731,   731,   472,   793,   796,
     635,   697,   705,   712,   686,   686,  3470,   709,   800,   822,
     141,   180,   206,   230,   582,   238,   686,   833,    51,   853,
    3405,  2382,  2413,   543,  3436,   843,   713,  2000,   847,   414,
    2013,   611,  1585,  2029,  2042,   850,   729,   414,  3476,   399,
    1233,  3482,  3488,   744,   752,   876,   759,  1187,   862,   414,
    1218,   617,  1191,  1245,  1267,   686,   686,   770,   788,  3494,
     686,   686,   789,   877,   806,  2444,   882,   886,  2475,  1557,
     889,   893,   900,   807,   831,   838,  2048,   908,   930,   933,
     913,   917,   920,   288,   327,  1295,   921,   856,   857,   354,
     392,   858,   863,   960,   707,   960,   923,   924,   887,   943,
     421,   896,   902,   462,   470,  2506,   402,  2537,  2568,  2599,
     960,   469,  2630,   928,   960,  2661
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
    -218,  -218,  -218,   964,     0,  -218,  -218,  -218,   901,     1,
    -218,   -12,  -152,   -34,  -118,  -115,   -95,   -83,   -73,  1752,
     232,  1190,  -109,   355,   356,  1287,   -70,    11,   -66,  1399,
    1651,   -67,   -40,   674,  1488,   864,  1027,   677,   493,    -7,
     257,  -217
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    39,     6,    15,    19,    20,   158,
       8,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   188,   110,    51,    52,   189,    54,    55,    56,   105,
      58,    59,    60,   118,   191,   192,   193,   194,   195,   196,
     197,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,     7,    17,     5,     7,   249,   103,    92,    -8,    66,
     297,     9,   223,   224,   239,   143,     1,   240,   126,   -54,
      66,   228,    14,   202,   203,   204,   -15,   228,   -14,    85,
      66,   177,   205,    10,    66,   206,   318,   241,    74,   207,
     208,   -54,   -83,   209,   -83,    12,   -54,   -53,   -82,   242,
     -82,   210,   121,    13,   159,   160,   161,    99,   259,   243,
      16,   338,   244,   162,   177,   246,   163,   -54,   -53,   -54,
     164,   165,   177,    18,   166,    66,   220,   -56,   115,   116,
      66,   -56,   167,   310,   -55,    71,   154,   -55,    66,    66,
      66,   131,   247,   120,   202,   203,   204,   -53,   144,   -56,
     146,   -53,   -56,   205,   -56,   -55,   206,   -55,    95,   -55,
     207,   208,   270,   -53,   209,    94,    69,   153,    70,   -53,
     238,   156,   210,   296,   284,    66,    66,    66,    68,    21,
      22,    23,   236,   237,   -53,   220,   -53,   -50,    28,    29,
      30,    31,   315,   245,    66,    35,    36,   -35,    66,    37,
      66,    72,   -35,   -66,   325,   -66,    73,    38,   254,   177,
     177,    21,    22,    23,   -66,    75,   -66,   335,    76,   -35,
     202,   203,   204,   -35,   -76,   -35,   -66,    84,   265,   205,
     177,    77,   206,   -76,   -76,   -76,   207,   208,   -76,    38,
     209,   -36,   222,    78,   278,   -76,    79,   -76,   210,   317,
     -66,   279,   220,   177,   -36,    80,    81,   202,   203,   204,
     367,   -66,   -36,   125,   -36,    92,   205,   -37,   370,   206,
     220,   -51,   -66,   207,   208,    66,   -36,   209,    66,   -39,
     376,   -37,   159,   160,   161,   210,   337,   -47,   -37,   353,
     -37,   -38,    66,   307,   -38,    -2,   220,   362,   164,   177,
      93,   -39,   177,   177,   177,   324,   -12,   102,   -12,   -47,
     167,   -68,   -38,     1,   -38,   239,   332,   239,   240,    94,
     240,   220,   -68,    67,   220,    96,    92,   220,   220,   220,
     344,   -49,   239,   -68,    67,   240,   239,   222,   241,   240,
     241,   152,   -40,    67,    67,   178,   106,   177,    67,   -39,
     242,   177,   242,    66,   -54,   241,   177,   109,   132,   241,
     243,   -54,   243,   244,   -40,   244,   246,   242,   246,   -37,
     -39,   242,   -39,   119,   361,   134,   127,   243,   178,   -14,
     244,   243,   -42,   246,   244,   403,   178,   246,   -47,    67,
     221,   -37,   124,   247,    67,   247,    21,    22,    23,   395,
     -38,   397,    67,    67,    67,    67,   109,    -4,   -67,   -47,
     247,   -47,    84,    36,   247,   -45,   402,    82,   133,   -67,
     405,   238,   -38,   238,    38,    -4,    66,    66,    66,   179,
     180,   181,   222,   236,   237,   236,   237,   -45,   238,    67,
      67,    67,   238,    66,   245,   184,   245,    66,   -67,   221,
     236,   237,   -43,   -46,   236,   237,   135,   187,    67,   -67,
     -65,   245,    67,    94,    67,   245,   -62,   159,   160,   161,
     -67,   -65,   178,   178,   178,   -46,   182,   198,   199,   183,
     200,   201,   -40,   107,   185,   401,   -63,   186,   -54,   139,
     140,    21,    22,    23,   178,   187,   159,   160,   161,   225,
     226,   -52,   -45,   -40,   291,   -40,   -46,    84,    36,   136,
     301,    87,   164,   165,   -54,   221,   221,   178,   147,    38,
     159,   160,   161,   -45,   167,   202,   203,   204,   148,   200,
     201,   -46,   150,   109,   221,   137,   164,   165,   248,    67,
     256,   207,    67,   155,   -45,   109,   -45,   -13,   167,   -13,
     -68,   -66,   -46,   210,   -46,   251,    67,    -5,   109,    65,
     221,   -68,   -66,   178,   285,   -65,   178,   178,   178,   178,
      65,   -68,   -66,   -68,   -66,    -5,   -65,   250,   -67,   -67,
      65,   176,   -54,   222,    65,   221,   252,   -65,   221,   -67,
     -67,   221,   221,   221,   221,   360,   159,   160,   161,   -67,
     -67,   109,   -67,   138,   -64,   162,   198,   199,   163,   109,
     -54,   178,   359,   165,   176,   178,   166,    67,   263,   264,
     178,   109,   176,   -56,   167,    65,   219,   292,   293,   -55,
      65,   -54,   -57,   302,   303,   159,   160,   161,    65,    65,
     130,   -57,   -57,   -57,   162,   -56,   -57,   163,   274,   -55,
     -57,   164,   165,   222,   -57,   166,   200,   201,   222,   -57,
     -57,   -57,    -6,   167,   -57,   -11,   -56,   -11,   200,   201,
     -55,   -57,   -65,   -57,   320,    65,    65,    65,   -65,   328,
      -6,   200,   201,   -65,   222,   219,    21,    22,    23,   -65,
      67,    67,    67,   -65,    65,    86,   -35,    -3,    65,   -65,
      65,   -65,    84,    36,   -37,   340,    87,    67,    -7,   176,
     176,    67,   275,   276,    38,    -3,   -38,   -35,   200,   201,
     -70,   179,   180,   181,   200,   201,    -7,   277,   -10,    97,
     176,   -70,   200,   201,   -70,   294,   -68,   184,   185,   179,
     180,   181,   -70,    64,   200,   201,   -10,   -68,   182,   187,
     260,   183,   219,   176,    64,   184,   185,   -68,   -36,   186,
      21,    22,    23,   295,    64,   175,   -37,   187,    64,    28,
     219,   -16,    31,   -38,   -54,    65,    84,    36,    65,   -36,
      37,   141,   304,   142,   202,   203,   204,   -37,    38,   -16,
     -54,   349,    65,   142,   -38,   365,   219,   305,   175,   176,
     207,   208,   176,   176,   323,   -54,   175,   306,   308,    64,
     218,   369,   210,   -54,    64,   331,   159,   160,   161,    -9,
     -54,   219,    64,   129,   219,   255,   371,   219,   219,   343,
     309,   -54,   164,   165,   372,   319,   256,    -9,   179,   180,
     181,   374,   288,   289,   167,   311,   327,   176,   290,   -54,
     222,   176,   379,    65,   184,   185,   176,   312,   267,    64,
      64,    64,   313,   202,   203,   204,   187,   -54,   222,   218,
     380,   383,   205,   339,   345,   206,   -57,   346,    64,   207,
     208,   350,    64,   209,    64,   -57,   -57,   -57,   385,   -50,
     -57,   210,   -39,   175,   175,    21,    22,    23,    24,   -47,
      25,    26,    27,   351,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   -39,   175,    37,   355,   -54,   -54,   -54,
     -47,   157,   357,    38,   -54,   364,    65,    65,    65,   366,
      62,   142,   368,   179,   180,   181,   218,   175,   391,   392,
     393,    62,   266,    65,   375,   394,   142,    65,   -40,   184,
     185,    88,   173,   267,   218,    62,   -58,   -45,   373,    64,
     384,   187,    64,   -46,   386,   -58,   -58,   -58,   387,   -40,
     -58,   -51,   202,   203,   204,   -52,    64,   -58,   -45,   -58,
     218,   280,   -49,   175,   -46,   173,   175,   322,   207,   208,
     388,   -39,   281,   173,   -47,   389,    62,   216,   330,   -45,
     210,    88,   -46,   390,   -40,   218,   398,   399,   218,   128,
     404,   218,   342,    21,    22,    23,   229,    11,   230,   231,
     232,   100,    28,    29,    30,    31,   233,   234,    34,    35,
      36,   175,   356,    37,     0,   175,     0,    64,   -68,   235,
     175,    38,   202,   203,   204,     0,    62,    62,    62,   -68,
       0,     0,   271,     0,   298,   299,   216,     0,   207,   208,
     300,     0,   281,   -59,     0,    62,     0,     0,     0,    62,
     210,    62,   -59,   -59,   -59,     0,     0,   -59,   -76,     0,
     257,   173,     0,     0,   -59,   -79,   -59,   -76,   -76,   -76,
       0,     0,   -76,    63,   -79,   -79,   -79,     0,   227,   -79,
     268,   173,     0,     0,    63,     0,   -79,     0,   -79,     0,
      64,    64,    64,     0,    63,   174,     0,     0,    63,   -72,
       0,     0,     0,   282,   173,   -76,     0,    64,   -72,   287,
     -72,    64,     0,   -72,   -76,   -76,   -76,     0,     0,   -76,
     -72,   216,   -72,     0,   -58,    83,    62,   -76,   174,    62,
       0,     0,     0,   -58,   -58,   -58,   174,     0,   -58,    63,
     217,     0,     0,    62,    63,   -74,   -58,   216,     0,     0,
     257,     0,    63,   321,   -74,   -74,   -74,     0,     0,   -74,
     -77,   268,     0,     0,   329,     0,   -74,     0,   -74,   -77,
     -77,   -77,   216,   -70,   -77,   282,     0,     0,   341,     0,
       0,   -77,   286,   -77,   -70,     0,   -70,   -70,     0,    63,
      63,    63,     0,     0,   -70,   272,   -70,   -70,   173,   217,
     -70,     0,   173,     0,    62,     0,   -75,   173,    63,     0,
       0,     0,    63,     0,    63,   -75,   -75,   -75,     0,     0,
     -75,     0,     0,   174,   174,     0,     0,   -75,   -81,   -75,
       0,     0,   -69,     0,     0,     0,    50,   -81,   -81,   -81,
       0,   286,   -81,   -69,   174,     0,   -69,    50,     0,   -81,
       0,   -81,     0,   -69,     0,   -69,     0,     0,   169,   -78,
       0,    50,     0,     0,     0,     0,   217,   174,   -78,   -78,
     -78,     0,     0,   -78,   -69,     0,     0,    62,    62,    62,
     -78,     0,   -78,   272,   217,   -69,   -71,     0,   -69,    63,
       0,   169,    63,     0,    62,   -71,   287,   -71,    62,   169,
     -71,     0,    50,   212,     0,     0,    63,   -71,   -73,   -71,
     217,     0,   -69,   174,     0,     0,   174,   -73,   -73,   -73,
       0,    97,   -73,   -69,     0,     0,   -69,     0,     0,   -73,
       0,   -73,     0,    53,   -69,   217,   -80,     0,   217,     0,
       0,   217,     0,     0,    53,   -80,   -80,   -80,     0,     0,
     -80,     0,    50,    50,    50,   170,     0,   -80,    53,   -80,
       0,   174,   212,     0,     0,   174,     0,    63,     0,   -76,
     174,    50,     0,     0,     0,    50,     0,    50,   -76,   -76,
     -76,   -70,     0,   -76,    82,     0,     0,   169,   170,    83,
     261,   -76,   -70,     0,     0,   -70,   170,     0,     0,    53,
     213,     0,   -70,     0,     0,     0,   -30,   169,   -30,   -30,
     -30,   -30,   151,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
     169,     0,     0,     0,   -30,   -30,   -30,     0,     0,     0,
      63,    63,    63,     0,     0,    57,     0,   212,     0,    53,
      53,    53,    50,     0,     0,    50,    57,    63,     0,   213,
       0,    63,     0,     0,     0,     0,   -59,    89,    53,    50,
      57,     0,    53,   212,    53,   -59,   -59,   -59,     0,     0,
     -59,   -79,     0,     0,   170,     0,     0,     0,   -59,     0,
     -79,   -79,   -79,     0,     0,   -79,   -72,     0,   212,     0,
     101,     0,     0,   -79,   170,   -72,    98,   -72,   117,     0,
     -72,    57,   122,     0,     0,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,   169,     0,   -74,   170,   169,     0,
      50,     0,   -77,   169,    61,   -74,   -74,   -74,     0,     0,
     -74,   -77,   -77,   -77,   213,    61,   -77,     0,   -74,    53,
       0,     0,    53,     0,   -77,     0,   172,     0,   -58,    61,
       0,    57,   145,    57,     0,   -75,    53,   -58,   -58,   -58,
     213,   149,   -58,     0,   -75,   -75,   -75,     0,     0,   -75,
      57,     0,     0,     0,    57,     0,    57,   -75,     0,   172,
       0,     0,     0,     0,     0,   213,   258,   172,   -76,     0,
      61,   215,     0,    50,    50,    50,     0,   -76,   -76,   -76,
       0,     0,   -76,   313,     0,     0,   269,     0,   253,   -76,
      50,   170,   -81,     0,    50,   170,   -69,    53,     0,     0,
     170,   -81,   -81,   -81,     0,   261,   -81,   -69,     0,   283,
     -69,     0,     0,     0,   -81,     0,     0,   -69,   -78,     0,
      61,    61,    61,     0,     0,     0,   122,   -78,   -78,   -78,
     215,    57,   -78,     0,    57,     0,     0,     0,     0,    61,
     -78,     0,     0,    61,     0,    61,     0,   -71,    57,     0,
       0,     0,   122,     0,   -73,   172,   -71,    98,   -71,     0,
       0,   -71,     0,   -73,   -73,   -73,     0,     0,   -73,   -71,
      53,    53,    53,     0,   -80,   172,   -73,   122,     0,     0,
       0,     0,     0,   -80,   -80,   -80,     0,    53,   -80,   171,
     -76,    53,     0,     0,     0,     0,   -80,     0,   172,   -76,
     -76,   -76,     0,   352,   -76,     0,     0,   117,     0,    57,
     227,   -41,   363,     0,     0,   215,     0,     0,     0,     0,
      61,     0,   171,    61,   190,     0,   111,   190,   190,   190,
     171,     0,     0,     0,   214,     0,     0,    61,     0,     0,
     -28,   215,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,     0,     0,   215,   -76,   -28,   -28,
     -28,     0,     0,     0,     0,   111,   -76,   -76,   -76,     0,
       0,   -76,    57,   396,    57,     0,     0,   253,   -76,     0,
     168,     0,   172,   214,     0,     0,   172,     0,    61,    57,
     -79,   172,     0,    57,     0,     0,     0,     0,     0,   -79,
     -79,   -79,     0,     0,   -79,     0,   171,   171,   171,     0,
       0,   -44,     0,   168,     0,   104,     0,   108,   112,   113,
     114,   168,   -57,     0,     0,   211,   190,   190,   171,     0,
       0,   -57,   -57,   -57,     0,     0,   -57,     0,     0,     0,
       0,     0,     0,   -57,   -58,     0,     0,     0,     0,   214,
     214,   171,     0,   -58,   -58,   -58,     0,     0,   -58,     0,
     -59,    61,    61,    61,     0,   -58,   108,     0,   214,   -59,
     -59,   -59,     0,     0,   -59,     0,     0,   -79,    61,     0,
       0,   -59,    61,     0,   211,     0,   -79,   -79,   -79,     0,
       0,   -79,   111,   190,   214,     0,     0,   171,   -79,     0,
     171,   171,   171,   171,   111,   190,     0,     0,   190,   168,
       0,   190,   190,   190,   190,   190,   190,   111,   190,   214,
       0,     0,   214,   -72,     0,   214,   214,   214,   214,   168,
       0,     0,   -72,   262,   -72,   190,   190,   -72,     0,     0,
       0,     0,     0,     0,   -72,   171,     0,   190,     0,   171,
       0,     0,   168,   -74,   171,     0,     0,     0,     0,     0,
     111,   -77,   -74,   -74,   -74,     0,     0,   -74,   111,   211,
     -77,   -77,   -77,     0,   -74,   -77,     0,     0,     0,     0,
     111,     0,   -77,     0,     0,     0,   190,   190,   -75,     0,
       0,   190,   190,   108,   316,   211,     0,   -75,   -75,   -75,
       0,   -81,   -75,     0,     0,   108,   326,     0,     0,   -75,
     -81,   -81,   -81,     0,   -78,   -81,   333,   334,   108,   336,
     211,     0,   -81,   -78,   -78,   -78,     0,     0,   -78,     0,
     -71,     0,     0,     0,     0,   -78,   347,   348,     0,   -71,
     262,   -71,     0,   -73,   -71,     0,   168,     0,   354,   -80,
     168,   -71,   -73,   -73,   -73,   168,     0,   -73,   -80,   -80,
     -80,   108,   -59,   -80,   -73,     0,     0,     0,   -79,   108,
     -80,   -59,   -59,   -59,     0,   -72,   -59,   -79,   -79,   -79,
       0,   108,   -79,     0,   -72,   273,   -72,   377,   378,   -72,
       0,     0,   381,   382,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,
       0,     0,   -21,   -21,   -21,   -20,     0,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,     0,
       0,     0,     0,   -20,   -20,   -20,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,
       0,     0,     0,     0,   -22,   -22,   -22,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
       0,     0,     0,     0,     0,   -23,   -23,   -23,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,     0,     0,     0,     0,   -34,   -34,
     -34,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,     0,     0,     0,
       0,    -7,    -7,    -7,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,     0,
       0,     0,     0,     0,   -16,   -16,   -16,   -30,     0,   -30,
     -30,   -30,   -30,   400,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
     -48,     0,     0,     0,     0,     0,   -48,   -48,   -48,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   -61,     0,     0,     0,     0,     0,   -61,   -61,   -61,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,   -60,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -28,     0,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -21,     0,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,
       0,     0,   -21,   -21,   -21,    90,     0,    21,    22,    23,
      24,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,   157,    91,    38,   -19,     0,   -19,   -19,
     -19,   -19,     0,   -19,   -19,   -19,     0,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,     0,
       0,     0,     0,     0,   -19,   -19,   -19,   -20,     0,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -22,     0,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,     0,     0,     0,     0,   -22,   -22,   -22,   -23,
       0,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -24,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -25,     0,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -34,     0,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -26,     0,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -18,     0,   -18,   -18,   -18,
     -18,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,     0,     0,
       0,     0,     0,   -18,   -18,   -18,   -17,     0,   -17,   -17,
     -17,   -17,     0,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,     0,
       0,     0,     0,     0,   -17,   -17,   -17,   -29,     0,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -33,     0,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -48,
       0,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -48,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -61,     0,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -60,     0,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,   -60,     0,     0,     0,     0,     0,   -60,
     -60,   -60,   -31,     0,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,    90,     0,    21,    22,    23,    24,
       0,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,   157,   314,    38,    -7,     0,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,     0,
       0,     0,     0,    -7,    -7,    -7,    90,     0,    21,    22,
      23,    24,     0,    25,    26,    27,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,   157,   358,    38,   -16,     0,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,
     -74,     0,     0,     0,     0,   -16,   -16,   -16,   -77,   -74,
     -74,   -74,     0,     0,   -74,   -75,     0,   -77,   -77,   -77,
       0,   -81,   -77,     0,   -75,   -75,   -75,   -78,     0,   -75,
     -81,   -81,   -81,   -71,     0,   -81,   -78,   -78,   -78,   -73,
       0,   -78,   -71,   273,   -71,   -80,     0,   -71,   -73,   -73,
     -73,     0,     0,   -73,   -80,   -80,   -80,     0,     0,   -80
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,   157,    72,    41,    18,    16,
     227,    19,    13,    14,   132,   124,    18,   132,    19,    11,
      27,    11,    32,     3,     4,     5,    31,    11,    33,    36,
      37,    38,    12,     0,    41,    15,   253,   132,    27,    19,
      20,    33,    32,    23,    34,    33,    11,    11,    32,   132,
      34,    31,    32,    31,     3,     4,     5,    69,    22,   132,
      29,   278,   132,    12,    71,   132,    15,    32,    32,    34,
      19,    20,    79,    18,    23,    82,    83,    11,    27,    28,
      87,    11,    31,   235,    11,    31,   152,    11,    95,    96,
      97,    98,   132,    82,     3,     4,     5,    11,   132,    33,
     134,    11,    32,    12,    34,    32,    15,    34,    22,    33,
      19,    20,    22,    11,    23,    11,    32,   151,    34,    33,
     132,   155,    31,    32,    22,   132,   133,   134,    19,     3,
       4,     5,   132,   132,    32,   142,    34,    33,    12,    13,
      14,    15,   251,   132,   151,    19,    20,    11,   155,    23,
     157,    31,    11,    11,   263,    11,    31,    31,   165,   166,
     167,     3,     4,     5,    22,    31,    22,   276,    31,    33,
       3,     4,     5,    32,    11,    34,    32,    19,   185,    12,
     187,    31,    15,    20,    21,    22,    19,    20,    25,    31,
      23,    11,    11,    31,    31,    32,    31,    34,    31,    32,
      11,   208,   209,   210,    11,    31,    19,     3,     4,     5,
     319,    22,    32,    32,    34,   249,    12,    11,   327,    15,
     227,    33,    33,    19,    20,   232,    33,    23,   235,    11,
     339,    33,     3,     4,     5,    31,    32,    11,    32,   305,
      34,    11,   249,   232,    33,     0,   253,   313,    19,   256,
      33,    33,   259,   260,   261,   262,    32,    19,    34,    33,
      31,    11,    32,    18,    34,   383,   273,   385,   383,    11,
     385,   278,    22,    16,   281,    25,   310,   284,   285,   286,
     287,    33,   400,    33,    27,   400,   404,    11,   383,   404,
     385,    33,    11,    36,    37,    38,    33,   304,    41,    11,
     383,   308,   385,   310,    11,   400,   313,    75,    32,   404,
     383,    11,   385,   383,    33,   385,   383,   400,   385,    11,
      32,   404,    34,    19,   313,    32,    94,   400,    71,    33,
     400,   404,    32,   400,   404,   401,    79,   404,    11,    82,
      83,    33,    31,   383,    87,   385,     3,     4,     5,   383,
      11,   385,    95,    96,    97,    98,   124,     0,    11,    32,
     400,    34,    19,    20,   404,    11,   400,    26,    33,    22,
     404,   383,    33,   385,    31,    18,   383,   384,   385,     3,
       4,     5,    11,   383,   383,   385,   385,    33,   400,   132,
     133,   134,   404,   400,   383,    19,   385,   404,    11,   142,
     400,   400,    32,    11,   404,   404,    32,    31,   151,    22,
      11,   400,   155,    11,   157,   404,    32,     3,     4,     5,
      33,    22,   165,   166,   167,    33,    12,    13,    14,    15,
      75,    75,    11,    19,    20,    33,    32,    23,    11,    32,
      32,     3,     4,     5,   187,    31,     3,     4,     5,    94,
      94,    33,    33,    32,   222,    34,    33,    19,    20,    32,
     228,    23,    19,    20,    11,   208,   209,   210,    33,    31,
       3,     4,     5,    11,    31,     3,     4,     5,    33,   124,
     124,    11,    32,   251,   227,    32,    19,    20,    19,   232,
      23,    19,   235,    32,    32,   263,    34,    32,    31,    34,
      11,    11,    32,    31,    34,    31,   249,     0,   276,    16,
     253,    22,    22,   256,    25,    11,   259,   260,   261,   262,
      27,    32,    32,    34,    34,    18,    22,    33,    11,    11,
      37,    38,    11,    11,    41,   278,    31,    33,   281,    22,
      22,   284,   285,   286,   287,   313,     3,     4,     5,    32,
      32,   319,    34,    32,    32,    12,    13,    14,    15,   327,
      11,   304,    19,    20,    71,   308,    23,   310,    31,    31,
     313,   339,    79,    11,    31,    82,    83,   222,   222,    11,
      87,    32,    11,   228,   228,     3,     4,     5,    95,    96,
      97,    20,    21,    22,    12,    11,    25,    15,    31,    11,
      11,    19,    20,    11,    33,    23,   251,   251,    11,    20,
      21,    22,     0,    31,    25,    32,    32,    34,   263,   263,
      32,    32,    11,    34,    32,   132,   133,   134,    11,    32,
      18,   276,   276,    22,    11,   142,     3,     4,     5,    22,
     383,   384,   385,    32,   151,    12,    11,     0,   155,    32,
     157,    34,    19,    20,    32,    32,    23,   400,     0,   166,
     167,   404,    31,    31,    31,    18,    32,    32,   313,   313,
      11,     3,     4,     5,   319,   319,    18,    31,     0,    20,
     187,    22,   327,   327,    25,    31,    11,    19,    20,     3,
       4,     5,    33,    16,   339,   339,    18,    22,    12,    31,
      25,    15,   209,   210,    27,    19,    20,    32,    11,    23,
       3,     4,     5,    31,    37,    38,    11,    31,    41,    12,
     227,     0,    15,    11,    11,   232,    19,    20,   235,    32,
      23,    32,    31,    34,     3,     4,     5,    32,    31,    18,
      11,    32,   249,    34,    32,    32,   253,    31,    71,   256,
      19,    20,   259,   260,   261,    11,    79,    31,    31,    82,
      83,    32,    31,    11,    87,   272,     3,     4,     5,     0,
      11,   278,    95,    96,   281,    12,    32,   284,   285,   286,
      31,    11,    19,    20,    32,    31,    23,    18,     3,     4,
       5,    32,    13,    14,    31,    33,    31,   304,    19,    11,
      11,   308,    32,   310,    19,    20,   313,    33,    23,   132,
     133,   134,    26,     3,     4,     5,    31,    11,    11,   142,
      32,    32,    12,    31,    31,    15,    11,    31,   151,    19,
      20,    31,   155,    23,   157,    20,    21,    22,    32,    32,
      25,    31,    11,   166,   167,     3,     4,     5,     6,    11,
       8,     9,    10,    31,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    32,   187,    23,    33,    11,    11,    11,
      32,    29,    19,    31,    11,    32,   383,   384,   385,    32,
      16,    34,    32,     3,     4,     5,   209,   210,    32,    32,
      32,    27,    12,   400,    32,    32,    34,   404,    11,    19,
      20,    37,    38,    23,   227,    41,    11,    11,    32,   232,
      33,    31,   235,    11,    32,    20,    21,    22,    32,    32,
      25,    32,     3,     4,     5,    32,   249,    32,    32,    34,
     253,    12,    32,   256,    32,    71,   259,   260,    19,    20,
      32,    11,    23,    79,    11,    32,    82,    83,   271,    32,
      31,    87,    32,    32,    11,   278,    33,    33,   281,    95,
      32,   284,   285,     3,     4,     5,     6,     3,     8,     9,
      10,    70,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   304,   308,    23,    -1,   308,    -1,   310,    11,    29,
     313,    31,     3,     4,     5,    -1,   132,   133,   134,    22,
      -1,    -1,    25,    -1,    13,    14,   142,    -1,    19,    20,
      19,    -1,    23,    11,    -1,   151,    -1,    -1,    -1,   155,
      31,   157,    20,    21,    22,    -1,    -1,    25,    11,    -1,
     166,   167,    -1,    -1,    32,    11,    34,    20,    21,    22,
      -1,    -1,    25,    16,    20,    21,    22,    -1,    31,    25,
     186,   187,    -1,    -1,    27,    -1,    32,    -1,    34,    -1,
     383,   384,   385,    -1,    37,    38,    -1,    -1,    41,    11,
      -1,    -1,    -1,   209,   210,    11,    -1,   400,    20,    21,
      22,   404,    -1,    25,    20,    21,    22,    -1,    -1,    25,
      32,   227,    34,    -1,    11,    31,   232,    33,    71,   235,
      -1,    -1,    -1,    20,    21,    22,    79,    -1,    25,    82,
      83,    -1,    -1,   249,    87,    11,    33,   253,    -1,    -1,
     256,    -1,    95,   259,    20,    21,    22,    -1,    -1,    25,
      11,   267,    -1,    -1,   270,    -1,    32,    -1,    34,    20,
      21,    22,   278,    11,    25,   281,    -1,    -1,   284,    -1,
      -1,    32,    20,    34,    22,    -1,    11,    25,    -1,   132,
     133,   134,    -1,    -1,    32,    20,    34,    22,   304,   142,
      25,    -1,   308,    -1,   310,    -1,    11,   313,   151,    -1,
      -1,    -1,   155,    -1,   157,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,   166,   167,    -1,    -1,    32,    11,    34,
      -1,    -1,    11,    -1,    -1,    -1,    16,    20,    21,    22,
      -1,    20,    25,    22,   187,    -1,    25,    27,    -1,    32,
      -1,    34,    -1,    32,    -1,    34,    -1,    -1,    38,    11,
      -1,    41,    -1,    -1,    -1,    -1,   209,   210,    20,    21,
      22,    -1,    -1,    25,    11,    -1,    -1,   383,   384,   385,
      32,    -1,    34,    20,   227,    22,    11,    -1,    25,   232,
      -1,    71,   235,    -1,   400,    20,    21,    22,   404,    79,
      25,    -1,    82,    83,    -1,    -1,   249,    32,    11,    34,
     253,    -1,    11,   256,    -1,    -1,   259,    20,    21,    22,
      -1,    20,    25,    22,    -1,    -1,    25,    -1,    -1,    32,
      -1,    34,    -1,    16,    33,   278,    11,    -1,   281,    -1,
      -1,   284,    -1,    -1,    27,    20,    21,    22,    -1,    -1,
      25,    -1,   132,   133,   134,    38,    -1,    32,    41,    34,
      -1,   304,   142,    -1,    -1,   308,    -1,   310,    -1,    11,
     313,   151,    -1,    -1,    -1,   155,    -1,   157,    20,    21,
      22,    11,    -1,    25,    26,    -1,    -1,   167,    71,    31,
      20,    33,    22,    -1,    -1,    25,    79,    -1,    -1,    82,
      83,    -1,    32,    -1,    -1,    -1,     1,   187,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
     210,    -1,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,
     383,   384,   385,    -1,    -1,    16,    -1,   227,    -1,   132,
     133,   134,   232,    -1,    -1,   235,    27,   400,    -1,   142,
      -1,   404,    -1,    -1,    -1,    -1,    11,    38,   151,   249,
      41,    -1,   155,   253,   157,    20,    21,    22,    -1,    -1,
      25,    11,    -1,    -1,   167,    -1,    -1,    -1,    33,    -1,
      20,    21,    22,    -1,    -1,    25,    11,    -1,   278,    -1,
      71,    -1,    -1,    33,   187,    20,    21,    22,    79,    -1,
      25,    82,    83,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    11,   210,   308,    -1,
     310,    -1,    11,   313,    16,    20,    21,    22,    -1,    -1,
      25,    20,    21,    22,   227,    27,    25,    -1,    33,   232,
      -1,    -1,   235,    -1,    33,    -1,    38,    -1,    11,    41,
      -1,   132,   133,   134,    -1,    11,   249,    20,    21,    22,
     253,   142,    25,    -1,    20,    21,    22,    -1,    -1,    25,
     151,    -1,    -1,    -1,   155,    -1,   157,    33,    -1,    71,
      -1,    -1,    -1,    -1,    -1,   278,   167,    79,    11,    -1,
      82,    83,    -1,   383,   384,   385,    -1,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,   187,    -1,    31,    32,
     400,   304,    11,    -1,   404,   308,    11,   310,    -1,    -1,
     313,    20,    21,    22,    -1,    20,    25,    22,    -1,   210,
      25,    -1,    -1,    -1,    33,    -1,    -1,    32,    11,    -1,
     132,   133,   134,    -1,    -1,    -1,   227,    20,    21,    22,
     142,   232,    25,    -1,   235,    -1,    -1,    -1,    -1,   151,
      33,    -1,    -1,   155,    -1,   157,    -1,    11,   249,    -1,
      -1,    -1,   253,    -1,    11,   167,    20,    21,    22,    -1,
      -1,    25,    -1,    20,    21,    22,    -1,    -1,    25,    33,
     383,   384,   385,    -1,    11,   187,    33,   278,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,   400,    25,    38,
      11,   404,    -1,    -1,    -1,    -1,    33,    -1,   210,    20,
      21,    22,    -1,   304,    25,    -1,    -1,   308,    -1,   310,
      31,    32,   313,    -1,    -1,   227,    -1,    -1,    -1,    -1,
     232,    -1,    71,   235,    73,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    83,    -1,    -1,   249,    -1,    -1,
       1,   253,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,   278,    11,    29,    30,
      31,    -1,    -1,    -1,    -1,   124,    20,    21,    22,    -1,
      -1,    25,   383,   384,   385,    -1,    -1,    31,    32,    -1,
      38,    -1,   304,   142,    -1,    -1,   308,    -1,   310,   400,
      11,   313,    -1,   404,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    -1,   165,   166,   167,    -1,
      -1,    32,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    79,    11,    -1,    -1,    83,   185,   186,   187,    -1,
      -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    11,    -1,    -1,    -1,    -1,   208,
     209,   210,    -1,    20,    21,    22,    -1,    -1,    25,    -1,
      11,   383,   384,   385,    -1,    32,   124,    -1,   227,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    11,   400,    -1,
      -1,    32,   404,    -1,   142,    -1,    20,    21,    22,    -1,
      -1,    25,   251,   252,   253,    -1,    -1,   256,    32,    -1,
     259,   260,   261,   262,   263,   264,    -1,    -1,   267,   167,
      -1,   270,   271,   272,   273,   274,   275,   276,   277,   278,
      -1,    -1,   281,    11,    -1,   284,   285,   286,   287,   187,
      -1,    -1,    20,    21,    22,   294,   295,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,   304,    -1,   306,    -1,   308,
      -1,    -1,   210,    11,   313,    -1,    -1,    -1,    -1,    -1,
     319,    11,    20,    21,    22,    -1,    -1,    25,   327,   227,
      20,    21,    22,    -1,    32,    25,    -1,    -1,    -1,    -1,
     339,    -1,    32,    -1,    -1,    -1,   345,   346,    11,    -1,
      -1,   350,   351,   251,   252,   253,    -1,    20,    21,    22,
      -1,    11,    25,    -1,    -1,   263,   264,    -1,    -1,    32,
      20,    21,    22,    -1,    11,    25,   274,   275,   276,   277,
     278,    -1,    32,    20,    21,    22,    -1,    -1,    25,    -1,
      11,    -1,    -1,    -1,    -1,    32,   294,   295,    -1,    20,
      21,    22,    -1,    11,    25,    -1,   304,    -1,   306,    11,
     308,    32,    20,    21,    22,   313,    -1,    25,    20,    21,
      22,   319,    11,    25,    32,    -1,    -1,    -1,    11,   327,
      32,    20,    21,    22,    -1,    11,    25,    20,    21,    22,
      -1,   339,    25,    -1,    20,    21,    22,   345,   346,    25,
      -1,    -1,   350,   351,     1,    -1,     3,     4,     5,     6,
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
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
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
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      11,    -1,    -1,    -1,    -1,    29,    30,    31,    11,    20,
      21,    22,    -1,    -1,    25,    11,    -1,    20,    21,    22,
      -1,    11,    25,    -1,    20,    21,    22,    11,    -1,    25,
      20,    21,    22,    11,    -1,    25,    20,    21,    22,    11,
      -1,    25,    20,    21,    22,    11,    -1,    25,    20,    21,
      22,    -1,    -1,    25,    20,    21,    22,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    36,    37,    38,    39,    40,    44,    45,    19,
       0,    38,    33,    31,    32,    41,    29,    46,    18,    42,
      43,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    23,    31,    39,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    69,    70,    71,    72,    73,    74,    75,    19,    32,
      34,    31,    31,    31,    62,    31,    31,    31,    31,    31,
      31,    19,    26,    31,    19,    74,    12,    23,    70,    64,
       1,    30,    48,    33,    11,    22,    25,    20,    21,    46,
      43,    64,    19,    63,    54,    64,    33,    19,    54,    55,
      57,    65,    54,    54,    54,    27,    28,    64,    68,    19,
      62,    32,    64,    76,    31,    32,    19,    55,    70,    72,
      73,    74,    32,    33,    32,    32,    32,    32,    32,    32,
      32,    32,    34,    57,    48,    64,    48,    33,    33,    64,
      32,     7,    33,    48,    63,    32,    48,    29,    44,     3,
       4,     5,    12,    15,    19,    20,    23,    31,    54,    56,
      60,    65,    69,    70,    71,    72,    73,    74,    75,     3,
       4,     5,    12,    15,    19,    20,    23,    31,    56,    60,
      65,    69,    70,    71,    72,    73,    74,    75,    13,    14,
      58,    59,     3,     4,     5,    12,    15,    19,    20,    23,
      31,    54,    56,    60,    65,    69,    70,    71,    72,    73,
      74,    75,    11,    13,    14,    58,    59,    31,    11,     6,
       8,     9,    10,    16,    17,    29,    39,    44,    46,    49,
      50,    51,    52,    53,    61,    62,    66,    67,    19,    47,
      33,    31,    31,    31,    74,    12,    23,    70,    64,    22,
      25,    20,    21,    31,    31,    74,    12,    23,    70,    64,
      22,    25,    20,    21,    31,    31,    31,    31,    31,    74,
      12,    23,    70,    64,    22,    25,    20,    21,    13,    14,
      19,    55,    58,    59,    31,    31,    32,    76,    13,    14,
      19,    55,    58,    59,    31,    31,    31,    62,    31,    31,
      47,    33,    33,    26,    30,    57,    54,    32,    76,    31,
      32,    70,    72,    73,    74,    57,    54,    31,    32,    70,
      72,    73,    74,    54,    54,    57,    54,    32,    76,    31,
      32,    70,    72,    73,    74,    31,    31,    54,    54,    32,
      31,    31,    64,    63,    54,    33,    68,    19,    30,    19,
      55,    62,    63,    64,    32,    32,    32,    57,    32,    32,
      57,    32,    32,    32,    32,    32,    57,    54,    54,    32,
      32,    54,    54,    32,    33,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    48,    64,    48,    33,    33,
       7,    33,    48,    63,    32,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    41,    40,
      40,    42,    42,    43,    44,    45,    46,    47,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      50,    50,    51,    52,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    57,    58,    59,    60,    61,    62,
      62,    62,    63,    64,    64,    64,    64,    65,    65,    65,
      66,    67,    68,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     6,
       4,     3,     1,     2,     2,     2,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       5,     7,     9,     3,     1,     3,     3,     1,     1,     4,
       5,     1,     1,     1,     1,     4,     4,     4,     5,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     1,     1,     1,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     2,     1,     1,     3,     1,
       4,     3,     3,     1
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
#line 114 "bison/clang_syntax.y"
                    {
        tree = (yyval.node);
    }
#line 2314 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 120 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2324 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 125 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2332 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 131 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2340 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 134 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2348 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 140 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2356 "bison/clang_syntax.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 146 "bison/clang_syntax.y"
                           {
        context++;
        pushScopeStack(&scope, context);
    }
#line 2365 "bison/clang_syntax.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration '(' $@1 params ')' compoundStmt  */
#line 150 "bison/clang_syntax.y"
                            {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-5].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
        popScopeStack(&scope);
    }
#line 2377 "bison/clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 157 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2387 "bison/clang_syntax.tab.c"
    break;

  case 11: /* params: params ',' param  */
#line 165 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2397 "bison/clang_syntax.tab.c"
    break;

  case 12: /* params: param  */
#line 170 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2405 "bison/clang_syntax.tab.c"
    break;

  case 13: /* param: TYPE ID  */
#line 176 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, (yyvsp[-1].token).t_title);
        strcat(auxstr, reset);
        (yyval.node) = createNode(strcat(auxstr," parameter ID"));
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    2,
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2425 "bison/clang_syntax.tab.c"
    break;

  case 14: /* simpleVDeclaration: TYPE ID  */
#line 194 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, (yyvsp[-1].token).t_title);
        strcat(auxstr, reset);
        (yyval.node) = createNode(strcat(auxstr," variable ID"));
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    0,
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2445 "bison/clang_syntax.tab.c"
    break;

  case 15: /* simpleFDeclaration: TYPE ID  */
#line 212 "bison/clang_syntax.y"
            {
        char auxstr[100];
        strcpy(auxstr, BMAG);
        strcat(auxstr, (yyvsp[-1].token).t_title);
        strcat(auxstr, reset);
        (yyval.node) = createNode(strcat(auxstr," function ID"));
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
        insertSymbol(symbolTable, 
                    (yyvsp[0].token).t_title, 
                    (yyvsp[-1].token).t_title, 
                    1, 
                    (yyvsp[0].token).t_line, 
                    (yyvsp[0].token).t_column,
                    (yyvsp[0].token).t_context);
    }
#line 2465 "bison/clang_syntax.tab.c"
    break;

  case 16: /* compoundStmt: '{' stmtList '}'  */
#line 229 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2473 "bison/clang_syntax.tab.c"
    break;

  case 17: /* stmtList: stmtList primitiveStmt  */
#line 235 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2483 "bison/clang_syntax.tab.c"
    break;

  case 18: /* stmtList: stmtList error  */
#line 240 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 2491 "bison/clang_syntax.tab.c"
    break;

  case 19: /* stmtList: primitiveStmt  */
#line 243 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2499 "bison/clang_syntax.tab.c"
    break;

  case 20: /* primitiveStmt: exprStmt  */
#line 249 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2507 "bison/clang_syntax.tab.c"
    break;

  case 21: /* primitiveStmt: compoundStmt  */
#line 252 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2515 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: condStmt  */
#line 255 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2523 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: iterStmt  */
#line 258 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2531 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: returnStmt  */
#line 261 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2539 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: setStmt  */
#line 264 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2547 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: inOP  */
#line 267 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2555 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: outOP  */
#line 270 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2563 "bison/clang_syntax.tab.c"
    break;

  case 28: /* primitiveStmt: varDeclaration  */
#line 273 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2571 "bison/clang_syntax.tab.c"
    break;

  case 29: /* exprStmt: expression ';'  */
#line 279 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2579 "bison/clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 285 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2589 "bison/clang_syntax.tab.c"
    break;

  case 31: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 290 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2600 "bison/clang_syntax.tab.c"
    break;

  case 32: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt  */
#line 299 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2612 "bison/clang_syntax.tab.c"
    break;

  case 33: /* returnStmt: RETURN_KW expression ';'  */
#line 309 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2621 "bison/clang_syntax.tab.c"
    break;

  case 34: /* setStmt: forallOP  */
#line 316 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2629 "bison/clang_syntax.tab.c"
    break;

  case 35: /* pertOP: simpleExp IN_KW ID  */
#line 322 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2639 "bison/clang_syntax.tab.c"
    break;

  case 36: /* pertOP: simpleExp IN_KW setReturner  */
#line 327 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2649 "bison/clang_syntax.tab.c"
    break;

  case 37: /* setReturner: addOP  */
#line 335 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2657 "bison/clang_syntax.tab.c"
    break;

  case 38: /* setReturner: remOP  */
#line 338 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2665 "bison/clang_syntax.tab.c"
    break;

  case 39: /* typeOP: ISSET_KW '(' setParams ')'  */
#line 344 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2674 "bison/clang_syntax.tab.c"
    break;

  case 40: /* typeOP: UN_LOG_OP ISSET_KW '(' setParams ')'  */
#line 348 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2683 "bison/clang_syntax.tab.c"
    break;

  case 41: /* setParams: ID  */
#line 355 "bison/clang_syntax.y"
       {
        (yyval.node) = createNode("is_set parameter");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2692 "bison/clang_syntax.tab.c"
    break;

  case 42: /* setParams: pertOP  */
#line 359 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2700 "bison/clang_syntax.tab.c"
    break;

  case 43: /* setParams: setReturner  */
#line 362 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2708 "bison/clang_syntax.tab.c"
    break;

  case 44: /* setParams: constOP  */
#line 365 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2716 "bison/clang_syntax.tab.c"
    break;

  case 45: /* addOP: ADD_KW '(' pertOP ')'  */
#line 372 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2725 "bison/clang_syntax.tab.c"
    break;

  case 46: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 379 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2734 "bison/clang_syntax.tab.c"
    break;

  case 47: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 386 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2743 "bison/clang_syntax.tab.c"
    break;

  case 48: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 393 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2753 "bison/clang_syntax.tab.c"
    break;

  case 49: /* expression: assignExp  */
#line 401 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2761 "bison/clang_syntax.tab.c"
    break;

  case 50: /* expression: simpleExp  */
#line 404 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2769 "bison/clang_syntax.tab.c"
    break;

  case 51: /* expression: setReturner  */
#line 407 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2777 "bison/clang_syntax.tab.c"
    break;

  case 52: /* assignExp: ID ASS_OP expression  */
#line 413 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("assignment opertator");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2787 "bison/clang_syntax.tab.c"
    break;

  case 53: /* simpleExp: binLogicalExp  */
#line 421 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2795 "bison/clang_syntax.tab.c"
    break;

  case 54: /* simpleExp: pertOP  */
#line 424 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2803 "bison/clang_syntax.tab.c"
    break;

  case 55: /* simpleExp: selectOP  */
#line 427 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2811 "bison/clang_syntax.tab.c"
    break;

  case 56: /* simpleExp: typeOP  */
#line 430 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2819 "bison/clang_syntax.tab.c"
    break;

  case 57: /* constOP: INT  */
#line 436 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST"BMAG" int"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2828 "bison/clang_syntax.tab.c"
    break;

  case 58: /* constOP: FLOAT  */
#line 440 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" float"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2837 "bison/clang_syntax.tab.c"
    break;

  case 59: /* constOP: EMPTY  */
#line 444 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" EMPTY"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2846 "bison/clang_syntax.tab.c"
    break;

  case 60: /* inOP: IN '(' ID ')' ';'  */
#line 451 "bison/clang_syntax.y"
                      {
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 2855 "bison/clang_syntax.tab.c"
    break;

  case 61: /* outOP: OUT '(' outConst ')' ';'  */
#line 458 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2865 "bison/clang_syntax.tab.c"
    break;

  case 62: /* outConst: STRING  */
#line 466 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2874 "bison/clang_syntax.tab.c"
    break;

  case 63: /* outConst: CHAR  */
#line 470 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 2883 "bison/clang_syntax.tab.c"
    break;

  case 64: /* outConst: simpleExp  */
#line 474 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2891 "bison/clang_syntax.tab.c"
    break;

  case 65: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 480 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        (yyval.node)->s_token = emulateToken((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2902 "bison/clang_syntax.tab.c"
    break;

  case 66: /* binLogicalExp: unLogicalExp  */
#line 486 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2910 "bison/clang_syntax.tab.c"
    break;

  case 67: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 492 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        (yyval.node)->s_token = emulateToken((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2920 "bison/clang_syntax.tab.c"
    break;

  case 68: /* unLogicalExp: relationalExp  */
#line 497 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2928 "bison/clang_syntax.tab.c"
    break;

  case 69: /* relationalExp: relationalExp REL_OP sumExp  */
#line 503 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        (yyval.node)->s_token = emulateToken((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2939 "bison/clang_syntax.tab.c"
    break;

  case 70: /* relationalExp: sumExp  */
#line 509 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2947 "bison/clang_syntax.tab.c"
    break;

  case 71: /* sumExp: sumExp SUM_OP mulExp  */
#line 515 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        (yyval.node)->s_token = emulateToken((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2958 "bison/clang_syntax.tab.c"
    break;

  case 72: /* sumExp: mulExp  */
#line 521 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2966 "bison/clang_syntax.tab.c"
    break;

  case 73: /* mulExp: mulExp MUL_OP factor  */
#line 527 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("*/÷ operation");
        (yyval.node)->s_token = emulateToken((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2977 "bison/clang_syntax.tab.c"
    break;

  case 74: /* mulExp: factor  */
#line 533 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2985 "bison/clang_syntax.tab.c"
    break;

  case 75: /* mulExp: SUM_OP factor  */
#line 536 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("signed factor");
        (yyval.node)->s_token = emulateToken((yyvsp[-1].token).t_title, (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2995 "bison/clang_syntax.tab.c"
    break;

  case 76: /* factor: ID  */
#line 544 "bison/clang_syntax.y"
       {
        (yyval.node) = createNode("ID");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column);
    }
#line 3004 "bison/clang_syntax.tab.c"
    break;

  case 77: /* factor: functionCall  */
#line 548 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3012 "bison/clang_syntax.tab.c"
    break;

  case 78: /* factor: '(' simpleExp ')'  */
#line 551 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3020 "bison/clang_syntax.tab.c"
    break;

  case 79: /* factor: constOP  */
#line 554 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3028 "bison/clang_syntax.tab.c"
    break;

  case 80: /* functionCall: ID '(' callParams ')'  */
#line 560 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column);
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 3038 "bison/clang_syntax.tab.c"
    break;

  case 81: /* functionCall: ID '(' ')'  */
#line 565 "bison/clang_syntax.y"
                 {
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 3047 "bison/clang_syntax.tab.c"
    break;

  case 82: /* callParams: callParams ',' simpleExp  */
#line 572 "bison/clang_syntax.y"
                            {
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3057 "bison/clang_syntax.tab.c"
    break;

  case 83: /* callParams: simpleExp  */
#line 577 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3065 "bison/clang_syntax.tab.c"
    break;


#line 3069 "bison/clang_syntax.tab.c"

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

#line 582 "bison/clang_syntax.y"

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
    checkParams(symbolTable);
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
    yylex_destroy();
    return 0;
}
