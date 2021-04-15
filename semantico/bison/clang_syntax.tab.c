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
  YYSYMBOL_76_2 = 76,                      /* $@2  */
  YYSYMBOL_callParams = 77                 /* callParams  */
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
#define YYLAST   3505

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

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
       0,   118,   118,   124,   129,   135,   138,   145,   151,   151,
     162,   170,   175,   181,   199,   217,   234,   240,   245,   248,
     254,   257,   260,   263,   266,   269,   272,   275,   278,   284,
     290,   295,   304,   314,   321,   327,   334,   342,   345,   351,
     355,   362,   368,   371,   374,   381,   388,   395,   402,   410,
     413,   416,   422,   433,   436,   439,   442,   448,   452,   456,
     463,   472,   480,   484,   488,   494,   500,   506,   511,   517,
     523,   529,   535,   541,   547,   550,   558,   564,   567,   570,
     576,   576,   589,   599,   605
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
  "sumExp", "mulExp", "factor", "functionCall", "$@2", "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-278)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    -3,    12,    48,   116,   144,   174,   -14,    66,   194,
    -278,   198,   232,    78,    74,    13,   428,   363,   108,   476,
     506,   813,  1078,  1471,   135,   150,   184,   190,   191,   270,
     295,   296,   324,   330,   142,  1380,    40,   226,   648,  1562,
    2733,  2764,  2795,  2826,  2857,  2888,  2919,  2950,     6,   230,
      14,   242,   278,    69,  2981,   337,   347,   100,  1496,  3012,
    3043,    84,   179,   323,   930,  1502,  1578,  1614,   537,    74,
      13,   648,   375,   894,   364,   471,   894,   894,   894,   530,
     388,   373,   190,    18,  1455,  1642,   380,    95,   206,   260,
    3074,   460,  3105,  3136,   254,    95,   165,   165,    40,   600,
     573,   468,   394,   421,   498,   412,  3167,   670,   541,   436,
     437,   637,   557,   571,   576,   473,   505,   601,   509,   548,
     459,  1648,   915,   471,  1691,   117,   118,   280,   937,  1706,
    1721,   839,   969,   428,   130,   563,   569,   143,   582,   589,
     186,   606,   609,  2082,   149,  3198,  3229,  3260,  1742,   915,
     156,   428,   613,   203,  3291,   610,   428,  3322,   428,   616,
     795,  1136,  1596,   623,   635,  1108,   384,   759,   648,   653,
     675,   710,  1759,   368,   403,   579,   244,  1793,  1801,  1809,
    1727,  1972,  1980,   643,   658,  1663,   462,   806,   648,   687,
     695,  1992,    29,   124,   584,  1124,  2007,  2014,  2027,   681,
     693,   698,   705,   442,   709,   735,   223,   297,    89,   697,
    1062,  1116,   742,   758,   662,   513,   862,   648,   250,   284,
     309,  1180,     2,    42,    43,   540,  1195,  1210,  1230,   761,
     768,   769,   190,   777,   781,   428,  2113,   736,  2144,  2175,
    2206,  2237,  2268,  2299,  2330,   743,  2361,  2392,   482,   788,
    3353,  3384,   471,   894,   133,  1829,   791,   990,   492,   714,
     990,   239,   239,   384,   471,   894,  2033,   800,  1014,   164,
     715,  1014,   346,   346,   462,   894,   894,   810,   819,   721,
     723,   725,   733,   894,   894,  2050,   915,   471,   894,   168,
    1272,   830,  1047,    47,   745,  1047,   594,   594,   513,   648,
     375,   894,   762,   530,   845,  3415,  2423,  2454,   844,   847,
     310,   320,   328,   387,   508,  3446,   848,   749,  1844,   915,
     471,  1913,   532,   965,  1932,  1940,   851,   764,   471,  3459,
     342,  1249,  3467,  3474,   787,   868,   894,   894,   873,   876,
     646,   854,   884,  1307,   915,   471,  1332,    50,   917,  1387,
    1416,   891,   843,   892,  2485,   859,   889,  2516,   894,   894,
    1525,   904,   908,   911,   899,   967,   971,   738,   922,   936,
     949,   933,   934,   947,   972,   997,   313,   406,  3480,   390,
     438,   754,   948,   839,   969,   839,   893,   968,  1003,  1004,
    1957,  1011,   987,  1016,  1017,  1422,   439,  2547,   419,  2578,
    2609,  2640,   544,   545,   839,   613,  2671,   970,   839,  2702
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,  -278,  1008,     0,  -278,  -278,  -278,   942,     1,
    -278,   -12,  -152,   -26,  -123,  -111,  -105,   -85,   -79,  1723,
     383,  1154,  -109,   413,   549,  1229,   -76,     8,   -67,  1352,
    1622,   -71,   -68,   717,  1473,   874,  1031,   672,   488,    -9,
     331,  -198,  -277
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    39,     6,    15,    19,    20,   159,
       8,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   189,   110,    51,    52,   190,    54,    55,    56,   105,
      58,    59,    60,   118,   192,   193,   194,   195,   196,   197,
     198,   122,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,     7,    17,     5,     7,   103,   250,    66,   239,   340,
     286,     1,    10,   -53,   142,    92,     9,   -54,    66,    12,
     240,   -80,   -80,   -80,   295,   -56,   241,    85,    66,   178,
     -80,    18,    66,   -80,   -53,    74,   -53,   -80,   -80,   -54,
     -53,   -80,   367,    21,    22,    23,   242,   -56,    -2,   -80,
     121,   271,   243,   -66,   -68,   244,   319,    99,   -67,    84,
     246,   -65,   178,   247,   -66,   -68,     1,   381,   296,   -67,
     178,    38,   -65,    66,   -66,   -68,   -66,   -68,    66,   -67,
     -55,   -67,   -65,   305,   -65,   155,    66,    66,    66,   130,
     120,   344,   -80,   -80,   -80,   -53,    -8,    13,    21,    22,
      23,   -80,   -55,    16,   -80,   143,    95,   145,   -80,   -80,
      14,    94,   -80,   227,    84,    36,    -4,   -53,    87,   238,
     -80,   285,    66,    66,    66,   154,    38,    68,   -35,   -36,
     157,   236,   237,   -50,    -4,   -66,   -80,   -80,   -80,   245,
     227,   -39,    66,   316,    -5,   -80,   -66,    66,   -80,    66,
     -35,   -36,   -80,   -80,   -47,   326,   -80,   255,   178,   178,
      94,    81,    -5,   -39,   -80,   318,    71,   -40,    21,    22,
      23,   -80,   -80,   -80,    -6,   -67,   -47,   266,   341,   178,
     -80,    72,   152,   -80,    84,    36,   -67,   -80,   -80,   -40,
     -66,   -80,    -6,    21,    22,    23,    38,   248,    -3,   -80,
     343,   -66,    28,    29,    30,    31,   290,   227,   178,    35,
      36,   368,   -66,    37,   248,    73,    -3,   -67,   -84,   371,
     -84,    38,    75,    66,    92,   -15,    66,   -14,   -67,    21,
      22,    23,    -7,   352,   -37,   -83,   382,   -83,    86,   -67,
     302,    66,   160,   161,   162,    84,    36,   363,   178,    87,
      -7,   178,   178,   178,   325,   -70,   -37,    38,   165,   166,
     239,   -54,   239,   -51,   262,   333,   -70,   204,   205,   -70,
     168,   203,   240,   125,   240,   -37,   -70,   227,   241,    92,
     241,   239,   -54,   227,   -54,   239,   227,   227,   227,   350,
     178,   -65,   124,   240,   178,   -56,    66,   240,   242,   241,
     242,    76,   -65,   241,   243,   178,   243,   244,   -38,   244,
     227,   -38,   246,   -65,   246,   247,   -56,   247,   -56,   242,
     -55,   -35,   362,   242,   -45,   243,    77,    78,   244,   243,
     -38,   -36,   244,   246,   -68,   227,   247,   246,   407,   -37,
     247,   -55,   -35,   -55,   -35,   -68,   -45,    67,    96,   180,
     181,   182,   -36,   -65,   -36,    79,   -68,   397,    67,   399,
     -37,    80,   -37,   -10,   -65,   185,   186,    67,    67,   179,
      93,   238,    67,   238,    66,    66,    66,   188,   406,   -53,
     -49,   -10,   409,   236,   237,   236,   237,   160,   161,   162,
     260,   245,   238,   245,   102,    66,   238,   106,   -38,    66,
     -53,   -39,   179,   165,   236,   237,   -14,   119,   236,   237,
     179,   123,   245,    67,   -66,   168,   245,   -46,    67,   -38,
      82,   -38,   -39,   203,   -39,   -66,    67,    67,    67,    67,
      94,    21,    22,    23,    24,   -66,    25,    26,    27,   -46,
      28,    29,    30,    31,    32,    33,    34,    35,    36,   -47,
     -40,    37,   405,   228,   132,   277,   278,   158,   109,    38,
     -16,   279,    67,    67,    67,   180,   181,   182,   -43,   134,
     -47,   -40,   -47,   -40,   160,   161,   162,   126,   -16,   203,
     228,   185,    67,   183,   199,   200,   184,    67,   201,    67,
     107,   186,   -52,   188,   187,   308,   309,   179,   179,   179,
     131,   310,   188,   -67,    65,   -62,   109,   206,    69,   -54,
      70,   160,   161,   162,   -67,    65,   209,   210,   211,   179,
     163,   199,   200,   164,   -67,    65,   177,   360,   166,    65,
     133,   167,   214,   160,   161,   162,   201,   -63,   -12,   168,
     -12,   138,   163,   -65,   217,   164,   228,   228,   179,   165,
     166,   -70,   -54,   167,   -65,   -45,   -46,   115,   116,   177,
     297,   168,   -70,    67,   -65,   -70,    67,   177,   -54,   -13,
      65,   -13,   -70,   -42,   -70,    65,   -45,   -46,   -45,   -46,
     139,    67,   -54,    65,    65,   129,   280,   -54,   179,   135,
     -68,   179,   179,   179,   179,   -68,   -45,   209,   210,   211,
      -9,   -68,   -46,   136,   261,   -11,   -68,   -11,   137,   272,
     226,   -68,   203,   214,   215,   146,   281,   228,    -9,    65,
      65,    65,   147,   228,   202,   217,   228,   228,   228,   228,
     179,   311,   249,   -64,   179,   109,    67,   226,   148,    65,
     149,   150,   156,   207,    65,   179,    65,   109,   -79,   251,
     228,   160,   161,   162,   252,   177,   177,   -79,   -79,   -79,
     163,   312,   -79,   164,   -54,   201,   253,   165,   166,   -44,
     109,   167,   202,   -76,   264,   228,   177,   201,   378,   168,
     149,   -76,   -76,   -76,   -76,   -54,   -56,   -76,    64,   265,
     -76,   -76,   -76,   289,   -76,   -76,   -76,   361,   -56,    64,
     201,   208,   -41,   109,   226,   177,   -55,   -56,   -57,    64,
     176,   109,   275,    64,    67,    67,    67,   -57,   -57,   -57,
      65,   -55,   -57,    65,   276,   203,   203,   201,   109,   -57,
     -37,   -57,   -35,   201,   -36,    67,   -37,   -38,    65,    67,
     283,   201,   -55,   176,   -38,   177,   321,   329,   177,   177,
     324,   176,   282,   -35,    64,   -36,   203,   -37,   201,    64,
     -54,   332,   160,   161,   162,   -38,   284,    64,   128,   306,
     390,   256,   149,   287,   226,   -54,   307,   346,   165,   166,
     226,   366,   257,   226,   226,   349,   395,   177,   149,   288,
     168,   177,   299,    65,   225,   354,   370,   313,   -54,   300,
     301,   202,   177,    64,    64,    64,   -57,   226,   303,   180,
     181,   182,   304,   202,   314,   -57,   -57,   -57,   267,   372,
     -57,   225,   320,    64,   -57,   185,   186,   -57,    64,   268,
      64,   328,   226,   -57,   -57,   -57,   202,   188,   -57,   176,
     176,   336,    21,    22,    23,   229,   -57,   230,   231,   232,
     337,    28,    29,    30,    31,   233,   234,    34,    35,    36,
     176,   345,    37,   202,   356,   209,   210,   211,   235,   202,
      38,    65,    65,    65,   291,   358,   384,   202,   359,   -54,
     365,   214,   215,   369,   -54,   292,   379,   -54,   225,   176,
      62,   386,    65,   217,   202,   -54,    65,   180,   181,   182,
     373,    62,   203,   -54,    64,   376,   183,    64,   377,   184,
     203,    88,   174,   185,   186,    62,   380,   187,   209,   210,
     211,   387,    64,   383,   385,   188,   400,   212,   -69,   176,
     213,   -50,   176,   323,   214,   215,   -51,   297,   216,   -69,
     -52,   -70,   -69,   -49,   331,   174,   217,   -39,   -69,   -69,
      97,   -69,   -70,   174,   391,   -70,    62,    97,   225,   -69,
     -47,    88,   -69,   -70,   225,   392,   -45,   225,   348,   127,
     -69,   176,    21,    22,    23,   176,   -69,    64,   -39,   -46,
     396,    28,   -47,   -54,    31,   262,   176,   -69,    84,    36,
     -69,   225,    37,   160,   161,   162,   223,   -69,   -40,   -39,
      38,   401,   408,   -47,   393,    62,    62,    62,   -54,   165,
     166,    11,   100,   257,   -54,   -54,   225,   180,   181,   182,
     355,   168,   -40,   223,     0,    62,     0,   -45,   -46,   394,
      62,     0,    62,   185,   186,   402,   403,   268,     0,     0,
       0,   258,   174,   -40,     0,   188,     0,    63,   -45,   -46,
     209,   210,   211,     0,     0,    64,    64,    64,    63,     0,
       0,   269,   174,     0,     0,     0,   214,   215,    63,   175,
     292,     0,    63,   -58,     0,     0,    64,     0,   217,     0,
      64,     0,   -58,   -58,   -58,     0,     0,   -58,     0,   -58,
     293,   174,     0,     0,   -58,     0,   -58,     0,   -58,   -58,
     -58,     0,   175,   -58,     0,     0,    62,     0,     0,    62,
     175,   -58,     0,    63,     0,     0,     0,     0,    63,   -76,
       0,     0,     0,     0,    62,     0,    63,   -59,   -76,   -76,
     -76,   258,     0,   -76,   322,   -70,   -59,   -59,   -59,   254,
     -76,   -59,   269,     0,   273,   330,   -70,   -58,   -59,   -70,
     -59,     0,     0,   224,     0,     0,   -58,   -58,   -58,     0,
     223,   -58,    63,    63,    63,     0,   293,     0,   -58,   347,
      50,     0,     0,   174,     0,     0,     0,   174,     0,    62,
     224,    50,    63,     0,     0,     0,     0,    63,   174,    63,
       0,   -79,   170,   223,     0,    50,     0,     0,   175,   175,
     -79,   -79,   -79,     0,     0,   -79,   -72,     0,     0,     0,
       0,     0,   -79,     0,   -79,   -72,   298,   -72,   223,   175,
     -72,   -74,     0,     0,     0,   170,     0,   -72,     0,   -72,
     -74,   -74,   -74,   170,     0,   -74,    50,     0,     0,     0,
       0,   -77,   -74,     0,   -74,    53,     0,   224,   175,     0,
     -77,   -77,   -77,     0,     0,   -77,    53,    62,    62,    62,
     -69,     0,   -77,    63,   -77,     0,    63,   171,     0,   273,
      53,   -69,     0,     0,   -69,     0,   219,     0,    62,     0,
       0,    63,    62,   -75,     0,    50,    50,    50,   175,     0,
       0,   175,   -75,   -75,   -75,     0,     0,   -75,     0,     0,
     171,     0,     0,   219,   -75,    50,   -75,     0,   171,     0,
      50,    53,    50,     0,     0,     0,     0,   224,   -82,     0,
       0,     0,   170,   224,     0,     0,   224,   -82,   -82,   -82,
     175,     0,   -82,     0,   175,     0,    63,     0,     0,   -82,
       0,   -82,   170,   -78,     0,   175,     0,     0,     0,     0,
     224,   220,   -78,   -78,   -78,     0,     0,   -78,     0,     0,
      53,    53,    53,     0,   -78,     0,   -78,     0,    57,     0,
       0,   170,     0,     0,     0,   224,     0,     0,   220,    57,
      53,     0,     0,     0,     0,    53,    50,    53,     0,    50,
      89,   -76,     0,    57,     0,     0,     0,   171,   -71,     0,
     -76,   -76,   -76,     0,    50,   -76,    82,   -71,   298,   -71,
       0,    83,   -71,   -76,    63,    63,    63,   171,     0,   -71,
       0,   -71,     0,   101,     0,     0,     0,   -73,     0,     0,
       0,   117,     0,   -81,    57,    63,   -73,   -73,   -73,    63,
     219,   -73,   -81,   -81,   -81,     0,   171,   -81,   -73,     0,
     -73,     0,     0,   170,   -81,     0,   -81,   170,     0,    50,
       0,    53,     0,     0,    53,     0,   -76,     0,   170,     0,
       0,     0,     0,   219,   140,   -76,   -76,   -76,     0,    53,
     -76,     0,   -59,    57,   144,    57,    83,     0,   -76,    61,
       0,   -59,   -59,   -59,     0,     0,   -59,     0,   219,     0,
      61,   153,     0,    57,   -59,     0,     0,   -79,    57,     0,
      57,   173,     0,   -72,    61,   220,   -79,   -79,   -79,     0,
     259,   -79,   -72,    98,   -72,     0,     0,   -72,   171,   -79,
       0,     0,   171,     0,    53,   -72,   -76,    50,    50,    50,
     270,     0,     0,   171,   173,   -76,   -76,   -76,   220,     0,
     -76,   314,   173,     0,     0,    61,   254,   -76,    50,     0,
       0,     0,    50,   -28,     0,   -28,   -28,   -28,   -28,   294,
     -28,   -28,   -28,   220,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,    57,   -28,     0,    57,     0,   -74,
       0,   -28,   -28,   -28,     0,   222,     0,     0,   -74,   -74,
     -74,     0,    57,   -74,    61,    61,    61,   -59,     0,     0,
       0,   -74,    53,    53,    53,     0,   -59,   -59,   -59,     0,
       0,   -59,   222,     0,    61,   -77,     0,     0,   -59,    61,
       0,    61,     0,    53,   -77,   -77,   -77,    53,   140,   -77,
       0,   173,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,   351,     0,   -75,     0,   117,     0,    57,     0,   -82,
     172,   173,   -75,   -75,   -75,     0,   364,   -75,   -82,   -82,
     -82,   140,     0,   -82,   -76,   -75,     0,     0,     0,     0,
       0,   -82,     0,   -76,   -76,   -76,     0,     0,   -76,     0,
     173,     0,     0,   172,   208,   191,   140,   111,   191,   191,
     191,   172,   -78,     0,     0,    61,     0,     0,    61,     0,
       0,   -78,   -78,   -78,     0,     0,   -78,   -71,     0,     0,
       0,     0,     0,    61,   -78,     0,   -71,    98,   -71,     0,
       0,   -71,   -73,     0,     0,    57,   398,    57,   -57,   -71,
       0,   -73,   -73,   -73,   221,   111,   -73,   -57,   -57,   -57,
       0,     0,   -57,   -81,   -73,     0,    57,     0,     0,   222,
      57,   169,   -81,   -81,   -81,     0,     0,   -81,     0,     0,
     -79,   221,   173,     0,     0,   -81,   173,     0,    61,   -79,
     -79,   -79,     0,     0,   -79,     0,     0,   173,   172,   172,
     172,   -79,   222,     0,   169,     0,   104,     0,   108,   112,
     113,   114,   169,     0,   -72,     0,     0,     0,   191,   191,
     172,     0,   -74,   -72,   263,   -72,     0,   222,   -72,     0,
     -77,   -74,   -74,   -74,     0,   -72,   -74,     0,     0,   -77,
     -77,   -77,     0,   -74,   -77,     0,     0,   221,   221,   172,
     -75,   -77,     0,     0,     0,   218,   108,     0,     0,   -75,
     -75,   -75,     0,     0,   -75,   -82,    61,    61,    61,     0,
       0,   -75,     0,     0,   -82,   -82,   -82,     0,     0,   -82,
       0,     0,   218,     0,   111,   191,   -82,    61,     0,   172,
       0,    61,   172,   172,   172,   172,   111,   191,     0,     0,
     191,   169,     0,   191,   191,   191,   191,   191,   191,     0,
       0,     0,     0,     0,     0,   191,   191,     0,   221,   111,
     191,   169,     0,     0,   221,     0,     0,   221,   221,   221,
     221,   172,     0,   191,   -78,   172,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   172,     0,   -78,     0,
     169,   221,   111,   -71,     0,   -78,     0,     0,     0,     0,
     111,   -73,   -71,   263,   -71,     0,     0,   -71,   191,   191,
     -73,   -73,   -73,     0,   -71,   -73,   221,   111,   -81,     0,
       0,     0,   -73,     0,     0,   108,   317,   -81,   -81,   -81,
     191,   191,   -81,   -58,     0,     0,     0,   108,   327,   -81,
       0,   -59,   -58,   -58,   -58,     0,     0,   -58,   334,   335,
     -59,   -59,   -59,   -79,     0,   -59,   338,   339,     0,   218,
     108,   342,   -79,   -79,   -79,     0,     0,   -79,   -72,     0,
       0,     0,   169,     0,   353,   -74,   169,   -72,   274,   -72,
       0,     0,   -72,     0,   -74,   -74,   -74,   169,   -77,   -74,
       0,     0,   218,   108,   -75,     0,     0,   -77,   -77,   -77,
       0,   108,   -77,   -75,   -75,   -75,     0,     0,   -75,   374,
     375,   -82,     0,     0,     0,     0,     0,   218,   108,     0,
     -82,   -82,   -82,     0,     0,   -82,     0,     0,     0,     0,
       0,   388,   389,   -30,     0,   -30,   -30,   -30,   -30,   151,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,
       0,     0,     0,   -21,   -21,   -21,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,
       0,     0,     0,     0,   -20,   -20,   -20,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,     0,    -7,     0,     0,     0,
       0,     0,    -7,    -7,    -7,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,   -29,   -29,   -29,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -16,     0,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,
       0,     0,     0,     0,     0,   -16,   -16,   -16,   -30,     0,
     -30,   -30,   -30,   -30,   404,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -48,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,   -60,     0,     0,     0,     0,     0,   -60,
     -60,   -60,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -21,     0,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,
       0,     0,   -21,   -21,   -21,    90,     0,    21,    22,    23,
      24,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,   158,    91,    38,   -19,     0,   -19,   -19,
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
       0,     0,   158,   315,    38,    -7,     0,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,     0,
       0,     0,     0,    -7,    -7,    -7,    90,     0,    21,    22,
      23,    24,     0,    25,    26,    27,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,   158,   357,    38,   -16,     0,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,
     -78,     0,     0,     0,     0,   -16,   -16,   -16,   -71,   -78,
     -78,   -78,     0,     0,   -78,   -73,     0,   -71,   274,   -71,
       0,   -81,   -71,     0,   -73,   -73,   -73,     0,     0,   -73,
     -81,   -81,   -81,     0,     0,   -81
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,    72,   158,    16,   131,   286,
     208,    18,     0,    11,   123,    41,    19,    11,    27,    33,
     131,     3,     4,     5,    22,    11,   131,    36,    37,    38,
      12,    18,    41,    15,    32,    27,    34,    19,    20,    33,
      11,    23,   319,     3,     4,     5,   131,    33,     0,    31,
      32,    22,   131,    11,    11,   131,   254,    69,    11,    19,
     131,    11,    71,   131,    22,    22,    18,   344,    25,    22,
      79,    31,    22,    82,    32,    32,    34,    34,    87,    32,
      11,    34,    32,   235,    34,   152,    95,    96,    97,    98,
      82,   289,     3,     4,     5,    11,    18,    31,     3,     4,
       5,    12,    33,    29,    15,   131,    22,   133,    19,    20,
      32,    11,    23,   122,    19,    20,     0,    33,    23,   131,
      31,    32,   131,   132,   133,   151,    31,    19,    11,    11,
     156,   131,   131,    33,    18,    11,     3,     4,     5,   131,
     149,    11,   151,   252,     0,    12,    22,   156,    15,   158,
      33,    33,    19,    20,    11,   264,    23,   166,   167,   168,
      11,    19,    18,    33,    31,    32,    31,    11,     3,     4,
       5,     3,     4,     5,     0,    11,    33,   186,   287,   188,
      12,    31,    33,    15,    19,    20,    22,    19,    20,    33,
      11,    23,    18,     3,     4,     5,    31,    11,     0,    31,
      32,    22,    12,    13,    14,    15,   215,   216,   217,    19,
      20,   320,    33,    23,    11,    31,    18,    11,    32,   328,
      34,    31,    31,   232,   250,    31,   235,    33,    22,     3,
       4,     5,     0,   300,    11,    32,   345,    34,    12,    33,
     232,   250,     3,     4,     5,    19,    20,   314,   257,    23,
      18,   260,   261,   262,   263,    11,    33,    31,    19,    20,
     383,    11,   385,    33,    20,   274,    22,    13,    14,    25,
      31,    11,   383,    19,   385,    33,    32,   286,   383,   305,
     385,   404,    32,   292,    34,   408,   295,   296,   297,   298,
     299,    11,    32,   404,   303,    11,   305,   408,   383,   404,
     385,    31,    22,   408,   383,   314,   385,   383,    11,   385,
     319,    33,   383,    33,   385,   383,    32,   385,    34,   404,
      11,    11,   314,   408,    11,   404,    31,    31,   404,   408,
      33,    11,   408,   404,    11,   344,   404,   408,   405,    11,
     408,    32,    32,    34,    34,    22,    33,    16,    25,     3,
       4,     5,    32,    11,    34,    31,    33,   383,    27,   385,
      32,    31,    34,     0,    22,    19,    20,    36,    37,    38,
      33,   383,    41,   385,   383,   384,   385,    31,   404,    11,
      33,    18,   408,   383,   383,   385,   385,     3,     4,     5,
      22,   383,   404,   385,    19,   404,   408,    33,    11,   408,
      32,    11,    71,    19,   404,   404,    33,    19,   408,   408,
      79,    31,   404,    82,    11,    31,   408,    11,    87,    32,
      26,    34,    32,    11,    34,    22,    95,    96,    97,    98,
      11,     3,     4,     5,     6,    32,     8,     9,    10,    33,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    11,
      11,    23,    33,   122,    33,    13,    14,    29,    75,    31,
       0,    19,   131,   132,   133,     3,     4,     5,    32,    32,
      32,    32,    34,    34,     3,     4,     5,    94,    18,    11,
     149,    19,   151,    12,    13,    14,    15,   156,    75,   158,
      19,    20,    33,    31,    23,    13,    14,   166,   167,   168,
      32,    19,    31,    11,    16,    32,   123,    94,    32,    11,
      34,     3,     4,     5,    22,    27,     3,     4,     5,   188,
      12,    13,    14,    15,    32,    37,    38,    19,    20,    41,
      32,    23,    19,     3,     4,     5,   123,    32,    32,    31,
      34,    32,    12,    11,    31,    15,   215,   216,   217,    19,
      20,    11,    11,    23,    22,    11,    11,    27,    28,    71,
      20,    31,    22,   232,    32,    25,   235,    79,    11,    32,
      82,    34,    32,    32,    34,    87,    32,    32,    34,    34,
      32,   250,    11,    95,    96,    97,   203,    11,   257,    32,
      11,   260,   261,   262,   263,    11,    33,     3,     4,     5,
       0,    22,    33,    32,    25,    32,    22,    34,    32,    25,
     122,    32,    11,    19,    20,    33,   203,   286,    18,   131,
     132,   133,    33,   292,    75,    31,   295,   296,   297,   298,
     299,   248,    19,    32,   303,   252,   305,   149,    32,   151,
      34,    32,    32,    94,   156,   314,   158,   264,    11,    33,
     319,     3,     4,     5,    31,   167,   168,    20,    21,    22,
      12,   248,    25,    15,    11,   252,    31,    19,    20,    32,
     287,    23,   123,    11,    31,   344,   188,   264,    32,    31,
      34,    11,    20,    21,    22,    32,    11,    25,    16,    31,
      20,    21,    22,    31,    32,    25,    34,   314,    11,    27,
     287,    31,    32,   320,   216,   217,    11,    32,    11,    37,
      38,   328,    31,    41,   383,   384,   385,    20,    21,    22,
     232,    11,    25,   235,    31,    11,    11,   314,   345,    32,
      32,    34,    11,   320,    11,   404,    11,    32,   250,   408,
      31,   328,    32,    71,    11,   257,    32,    32,   260,   261,
     262,    79,   203,    32,    82,    32,    11,    32,   345,    87,
      11,   273,     3,     4,     5,    32,    31,    95,    96,    33,
      32,    12,    34,    31,   286,    11,    33,    32,    19,    20,
     292,    32,    23,   295,   296,   297,    32,   299,    34,    31,
      31,   303,    31,   305,   122,    33,    32,   248,    11,    31,
      31,   252,   314,   131,   132,   133,    11,   319,    31,     3,
       4,     5,    31,   264,    26,    20,    21,    22,    12,    32,
      25,   149,    31,   151,    11,    19,    20,    32,   156,    23,
     158,    31,   344,    20,    21,    22,   287,    31,    25,   167,
     168,    31,     3,     4,     5,     6,    33,     8,     9,    10,
      31,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     188,    31,    23,   314,    19,     3,     4,     5,    29,   320,
      31,   383,   384,   385,    12,    31,    33,   328,    31,    11,
      32,    19,    20,    32,    11,    23,    32,    11,   216,   217,
      16,    32,   404,    31,   345,    11,   408,     3,     4,     5,
      32,    27,    11,    11,   232,    32,    12,   235,    32,    15,
      11,    37,    38,    19,    20,    41,    32,    23,     3,     4,
       5,    32,   250,    32,    32,    31,    33,    12,    11,   257,
      15,    32,   260,   261,    19,    20,    32,    20,    23,    22,
      32,    11,    25,    32,   272,    71,    31,    11,    11,    32,
      20,    34,    22,    79,    32,    25,    82,    20,   286,    22,
      11,    87,    25,    33,   292,    32,    32,   295,   296,    95,
      33,   299,     3,     4,     5,   303,    11,   305,    11,    32,
      32,    12,    11,    11,    15,    20,   314,    22,    19,    20,
      25,   319,    23,     3,     4,     5,   122,    32,    11,    32,
      31,    33,    32,    32,    32,   131,   132,   133,    11,    19,
      20,     3,    70,    23,    11,    11,   344,     3,     4,     5,
     303,    31,    11,   149,    -1,   151,    -1,    11,    11,    32,
     156,    -1,   158,    19,    20,    32,    32,    23,    -1,    -1,
      -1,   167,   168,    32,    -1,    31,    -1,    16,    32,    32,
       3,     4,     5,    -1,    -1,   383,   384,   385,    27,    -1,
      -1,   187,   188,    -1,    -1,    -1,    19,    20,    37,    38,
      23,    -1,    41,    11,    -1,    -1,   404,    -1,    31,    -1,
     408,    -1,    20,    21,    22,    -1,    -1,    25,    -1,    11,
     216,   217,    -1,    -1,    32,    -1,    34,    -1,    20,    21,
      22,    -1,    71,    25,    -1,    -1,   232,    -1,    -1,   235,
      79,    33,    -1,    82,    -1,    -1,    -1,    -1,    87,    11,
      -1,    -1,    -1,    -1,   250,    -1,    95,    11,    20,    21,
      22,   257,    -1,    25,   260,    11,    20,    21,    22,    31,
      32,    25,   268,    -1,    20,   271,    22,    11,    32,    25,
      34,    -1,    -1,   122,    -1,    -1,    20,    21,    22,    -1,
     286,    25,   131,   132,   133,    -1,   292,    -1,    32,   295,
      16,    -1,    -1,   299,    -1,    -1,    -1,   303,    -1,   305,
     149,    27,   151,    -1,    -1,    -1,    -1,   156,   314,   158,
      -1,    11,    38,   319,    -1,    41,    -1,    -1,   167,   168,
      20,    21,    22,    -1,    -1,    25,    11,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    20,    21,    22,   344,   188,
      25,    11,    -1,    -1,    -1,    71,    -1,    32,    -1,    34,
      20,    21,    22,    79,    -1,    25,    82,    -1,    -1,    -1,
      -1,    11,    32,    -1,    34,    16,    -1,   216,   217,    -1,
      20,    21,    22,    -1,    -1,    25,    27,   383,   384,   385,
      11,    -1,    32,   232,    34,    -1,   235,    38,    -1,    20,
      41,    22,    -1,    -1,    25,    -1,   122,    -1,   404,    -1,
      -1,   250,   408,    11,    -1,   131,   132,   133,   257,    -1,
      -1,   260,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      71,    -1,    -1,   149,    32,   151,    34,    -1,    79,    -1,
     156,    82,   158,    -1,    -1,    -1,    -1,   286,    11,    -1,
      -1,    -1,   168,   292,    -1,    -1,   295,    20,    21,    22,
     299,    -1,    25,    -1,   303,    -1,   305,    -1,    -1,    32,
      -1,    34,   188,    11,    -1,   314,    -1,    -1,    -1,    -1,
     319,   122,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
     131,   132,   133,    -1,    32,    -1,    34,    -1,    16,    -1,
      -1,   217,    -1,    -1,    -1,   344,    -1,    -1,   149,    27,
     151,    -1,    -1,    -1,    -1,   156,   232,   158,    -1,   235,
      38,    11,    -1,    41,    -1,    -1,    -1,   168,    11,    -1,
      20,    21,    22,    -1,   250,    25,    26,    20,    21,    22,
      -1,    31,    25,    33,   383,   384,   385,   188,    -1,    32,
      -1,    34,    -1,    71,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    79,    -1,    11,    82,   404,    20,    21,    22,   408,
     286,    25,    20,    21,    22,    -1,   217,    25,    32,    -1,
      34,    -1,    -1,   299,    32,    -1,    34,   303,    -1,   305,
      -1,   232,    -1,    -1,   235,    -1,    11,    -1,   314,    -1,
      -1,    -1,    -1,   319,   122,    20,    21,    22,    -1,   250,
      25,    -1,    11,   131,   132,   133,    31,    -1,    33,    16,
      -1,    20,    21,    22,    -1,    -1,    25,    -1,   344,    -1,
      27,   149,    -1,   151,    33,    -1,    -1,    11,   156,    -1,
     158,    38,    -1,    11,    41,   286,    20,    21,    22,    -1,
     168,    25,    20,    21,    22,    -1,    -1,    25,   299,    33,
      -1,    -1,   303,    -1,   305,    33,    11,   383,   384,   385,
     188,    -1,    -1,   314,    71,    20,    21,    22,   319,    -1,
      25,    26,    79,    -1,    -1,    82,    31,    32,   404,    -1,
      -1,    -1,   408,     1,    -1,     3,     4,     5,     6,   217,
       8,     9,    10,   344,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,   232,    23,    -1,   235,    -1,    11,
      -1,    29,    30,    31,    -1,   122,    -1,    -1,    20,    21,
      22,    -1,   250,    25,   131,   132,   133,    11,    -1,    -1,
      -1,    33,   383,   384,   385,    -1,    20,    21,    22,    -1,
      -1,    25,   149,    -1,   151,    11,    -1,    -1,    32,   156,
      -1,   158,    -1,   404,    20,    21,    22,   408,   286,    25,
      -1,   168,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,   299,    -1,    11,    -1,   303,    -1,   305,    -1,    11,
      38,   188,    20,    21,    22,    -1,   314,    25,    20,    21,
      22,   319,    -1,    25,    11,    33,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    20,    21,    22,    -1,    -1,    25,    -1,
     217,    -1,    -1,    71,    31,    73,   344,    75,    76,    77,
      78,    79,    11,    -1,    -1,   232,    -1,    -1,   235,    -1,
      -1,    20,    21,    22,    -1,    -1,    25,    11,    -1,    -1,
      -1,    -1,    -1,   250,    33,    -1,    20,    21,    22,    -1,
      -1,    25,    11,    -1,    -1,   383,   384,   385,    11,    33,
      -1,    20,    21,    22,   122,   123,    25,    20,    21,    22,
      -1,    -1,    25,    11,    33,    -1,   404,    -1,    -1,   286,
     408,    38,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      11,   149,   299,    -1,    -1,    33,   303,    -1,   305,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,   314,   166,   167,
     168,    32,   319,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    79,    -1,    11,    -1,    -1,    -1,   186,   187,
     188,    -1,    11,    20,    21,    22,    -1,   344,    25,    -1,
      11,    20,    21,    22,    -1,    32,    25,    -1,    -1,    20,
      21,    22,    -1,    32,    25,    -1,    -1,   215,   216,   217,
      11,    32,    -1,    -1,    -1,   122,   123,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    11,   383,   384,   385,    -1,
      -1,    32,    -1,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,   149,    -1,   252,   253,    32,   404,    -1,   257,
      -1,   408,   260,   261,   262,   263,   264,   265,    -1,    -1,
     268,   168,    -1,   271,   272,   273,   274,   275,   276,    -1,
      -1,    -1,    -1,    -1,    -1,   283,   284,    -1,   286,   287,
     288,   188,    -1,    -1,   292,    -1,    -1,   295,   296,   297,
     298,   299,    -1,   301,    11,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,   314,    -1,    25,    -1,
     217,   319,   320,    11,    -1,    32,    -1,    -1,    -1,    -1,
     328,    11,    20,    21,    22,    -1,    -1,    25,   336,   337,
      20,    21,    22,    -1,    32,    25,   344,   345,    11,    -1,
      -1,    -1,    32,    -1,    -1,   252,   253,    20,    21,    22,
     358,   359,    25,    11,    -1,    -1,    -1,   264,   265,    32,
      -1,    11,    20,    21,    22,    -1,    -1,    25,   275,   276,
      20,    21,    22,    11,    -1,    25,   283,   284,    -1,   286,
     287,   288,    20,    21,    22,    -1,    -1,    25,    11,    -1,
      -1,    -1,   299,    -1,   301,    11,   303,    20,    21,    22,
      -1,    -1,    25,    -1,    20,    21,    22,   314,    11,    25,
      -1,    -1,   319,   320,    11,    -1,    -1,    20,    21,    22,
      -1,   328,    25,    20,    21,    22,    -1,    -1,    25,   336,
     337,    11,    -1,    -1,    -1,    -1,    -1,   344,   345,    -1,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,   358,   359,     1,    -1,     3,     4,     5,     6,     7,
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
      -1,    11,    25,    -1,    20,    21,    22,    -1,    -1,    25,
      20,    21,    22,    -1,    -1,    25
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
      62,    32,    76,    31,    32,    19,    55,    70,    72,    73,
      74,    32,    33,    32,    32,    32,    32,    32,    32,    32,
      64,    77,    57,    48,    64,    48,    33,    33,    32,    34,
      32,     7,    33,    64,    48,    63,    32,    48,    29,    44,
       3,     4,     5,    12,    15,    19,    20,    23,    31,    54,
      56,    60,    65,    69,    70,    71,    72,    73,    74,    75,
       3,     4,     5,    12,    15,    19,    20,    23,    31,    56,
      60,    65,    69,    70,    71,    72,    73,    74,    75,    13,
      14,    58,    59,    11,    13,    14,    58,    59,    31,     3,
       4,     5,    12,    15,    19,    20,    23,    31,    54,    56,
      60,    65,    69,    70,    71,    72,    73,    74,    75,     6,
       8,     9,    10,    16,    17,    29,    39,    44,    46,    49,
      50,    51,    52,    53,    61,    62,    66,    67,    11,    19,
      47,    33,    31,    31,    31,    74,    12,    23,    70,    64,
      22,    25,    20,    21,    31,    31,    74,    12,    23,    70,
      64,    22,    25,    20,    21,    31,    31,    13,    14,    19,
      55,    58,    59,    31,    31,    32,    76,    31,    31,    31,
      74,    12,    23,    70,    64,    22,    25,    20,    21,    31,
      31,    31,    62,    31,    31,    47,    33,    33,    13,    14,
      19,    55,    58,    59,    26,    30,    57,    54,    32,    76,
      31,    32,    70,    72,    73,    74,    57,    54,    31,    32,
      70,    72,    73,    74,    54,    54,    31,    31,    54,    54,
      77,    57,    54,    32,    76,    31,    32,    70,    72,    73,
      74,    64,    63,    54,    33,    68,    19,    30,    31,    31,
      19,    55,    62,    63,    64,    32,    32,    77,    57,    32,
      32,    57,    32,    32,    54,    54,    32,    32,    32,    32,
      32,    77,    57,    32,    33,    32,    32,    32,    54,    54,
      32,    32,    32,    32,    32,    32,    32,    48,    64,    48,
      33,    33,    32,    32,     7,    33,    48,    63,    32,    48
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
      76,    75,    75,    77,    77
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
       0,     5,     3,     3,     1
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
#line 2317 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 124 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2327 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 129 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2335 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 135 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2343 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 138 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
        populateParams(symbolTable);
    }
#line 2352 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 145 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2360 "bison/clang_syntax.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 151 "bison/clang_syntax.y"
                           {
        context++;
        pushScopeStack(&scope, context);
    }
#line 2369 "bison/clang_syntax.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration '(' $@1 params ')' compoundStmt  */
#line 155 "bison/clang_syntax.y"
                            {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-5].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
        popScopeStack(&scope);
    }
#line 2381 "bison/clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 162 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2391 "bison/clang_syntax.tab.c"
    break;

  case 11: /* params: params ',' param  */
#line 170 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2401 "bison/clang_syntax.tab.c"
    break;

  case 12: /* params: param  */
#line 175 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2409 "bison/clang_syntax.tab.c"
    break;

  case 13: /* param: TYPE ID  */
#line 181 "bison/clang_syntax.y"
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
#line 2429 "bison/clang_syntax.tab.c"
    break;

  case 14: /* simpleVDeclaration: TYPE ID  */
#line 199 "bison/clang_syntax.y"
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
#line 2449 "bison/clang_syntax.tab.c"
    break;

  case 15: /* simpleFDeclaration: TYPE ID  */
#line 217 "bison/clang_syntax.y"
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
#line 2469 "bison/clang_syntax.tab.c"
    break;

  case 16: /* compoundStmt: '{' stmtList '}'  */
#line 234 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2477 "bison/clang_syntax.tab.c"
    break;

  case 17: /* stmtList: stmtList primitiveStmt  */
#line 240 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2487 "bison/clang_syntax.tab.c"
    break;

  case 18: /* stmtList: stmtList error  */
#line 245 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 2495 "bison/clang_syntax.tab.c"
    break;

  case 19: /* stmtList: primitiveStmt  */
#line 248 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2503 "bison/clang_syntax.tab.c"
    break;

  case 20: /* primitiveStmt: exprStmt  */
#line 254 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2511 "bison/clang_syntax.tab.c"
    break;

  case 21: /* primitiveStmt: compoundStmt  */
#line 257 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2519 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: condStmt  */
#line 260 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2527 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: iterStmt  */
#line 263 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2535 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: returnStmt  */
#line 266 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2543 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: setStmt  */
#line 269 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2551 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: inOP  */
#line 272 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2559 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: outOP  */
#line 275 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2567 "bison/clang_syntax.tab.c"
    break;

  case 28: /* primitiveStmt: varDeclaration  */
#line 278 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2575 "bison/clang_syntax.tab.c"
    break;

  case 29: /* exprStmt: expression ';'  */
#line 284 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2583 "bison/clang_syntax.tab.c"
    break;

  case 30: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 290 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2593 "bison/clang_syntax.tab.c"
    break;

  case 31: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 295 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2604 "bison/clang_syntax.tab.c"
    break;

  case 32: /* iterStmt: FOR_KW '(' assignExp ';' simpleExp ';' assignExp ')' primitiveStmt  */
#line 304 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2616 "bison/clang_syntax.tab.c"
    break;

  case 33: /* returnStmt: RETURN_KW expression ';'  */
#line 314 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2625 "bison/clang_syntax.tab.c"
    break;

  case 34: /* setStmt: forallOP  */
#line 321 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2633 "bison/clang_syntax.tab.c"
    break;

  case 35: /* pertOP: simpleExp IN_KW ID  */
#line 327 "bison/clang_syntax.y"
                      {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 2645 "bison/clang_syntax.tab.c"
    break;

  case 36: /* pertOP: simpleExp IN_KW setReturner  */
#line 334 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2655 "bison/clang_syntax.tab.c"
    break;

  case 37: /* setReturner: addOP  */
#line 342 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2663 "bison/clang_syntax.tab.c"
    break;

  case 38: /* setReturner: remOP  */
#line 345 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2671 "bison/clang_syntax.tab.c"
    break;

  case 39: /* typeOP: ISSET_KW '(' setParams ')'  */
#line 351 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2680 "bison/clang_syntax.tab.c"
    break;

  case 40: /* typeOP: UN_LOG_OP ISSET_KW '(' setParams ')'  */
#line 355 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2689 "bison/clang_syntax.tab.c"
    break;

  case 41: /* setParams: ID  */
#line 362 "bison/clang_syntax.y"
       {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("is_set parameter");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 2700 "bison/clang_syntax.tab.c"
    break;

  case 42: /* setParams: pertOP  */
#line 368 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2708 "bison/clang_syntax.tab.c"
    break;

  case 43: /* setParams: setReturner  */
#line 371 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2716 "bison/clang_syntax.tab.c"
    break;

  case 44: /* setParams: constOP  */
#line 374 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2724 "bison/clang_syntax.tab.c"
    break;

  case 45: /* addOP: ADD_KW '(' pertOP ')'  */
#line 381 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2733 "bison/clang_syntax.tab.c"
    break;

  case 46: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 388 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2742 "bison/clang_syntax.tab.c"
    break;

  case 47: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 395 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2751 "bison/clang_syntax.tab.c"
    break;

  case 48: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 402 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2761 "bison/clang_syntax.tab.c"
    break;

  case 49: /* expression: assignExp  */
#line 410 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2769 "bison/clang_syntax.tab.c"
    break;

  case 50: /* expression: simpleExp  */
#line 413 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2777 "bison/clang_syntax.tab.c"
    break;

  case 51: /* expression: setReturner  */
#line 416 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2785 "bison/clang_syntax.tab.c"
    break;

  case 52: /* assignExp: ID ASS_OP expression  */
#line 422 "bison/clang_syntax.y"
                         {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("assignment operator");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[0].node);
        typeHandler((yyval.node));
    }
#line 2798 "bison/clang_syntax.tab.c"
    break;

  case 53: /* simpleExp: binLogicalExp  */
#line 433 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2806 "bison/clang_syntax.tab.c"
    break;

  case 54: /* simpleExp: pertOP  */
#line 436 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2814 "bison/clang_syntax.tab.c"
    break;

  case 55: /* simpleExp: selectOP  */
#line 439 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2822 "bison/clang_syntax.tab.c"
    break;

  case 56: /* simpleExp: typeOP  */
#line 442 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2830 "bison/clang_syntax.tab.c"
    break;

  case 57: /* constOP: INT  */
#line 448 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST"BMAG" int"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "int");
    }
#line 2839 "bison/clang_syntax.tab.c"
    break;

  case 58: /* constOP: FLOAT  */
#line 452 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" float"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "float");
    }
#line 2848 "bison/clang_syntax.tab.c"
    break;

  case 59: /* constOP: EMPTY  */
#line 456 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" EMPTY"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "set");
    }
#line 2857 "bison/clang_syntax.tab.c"
    break;

  case 60: /* inOP: IN '(' ID ')' ';'  */
#line 463 "bison/clang_syntax.y"
                      {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, NULL);
    }
#line 2868 "bison/clang_syntax.tab.c"
    break;

  case 61: /* outOP: OUT '(' outConst ')' ';'  */
#line 472 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 2878 "bison/clang_syntax.tab.c"
    break;

  case 62: /* outConst: STRING  */
#line 480 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
    }
#line 2887 "bison/clang_syntax.tab.c"
    break;

  case 63: /* outConst: CHAR  */
#line 484 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
    }
#line 2896 "bison/clang_syntax.tab.c"
    break;

  case 64: /* outConst: simpleExp  */
#line 488 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2904 "bison/clang_syntax.tab.c"
    break;

  case 65: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 494 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2915 "bison/clang_syntax.tab.c"
    break;

  case 66: /* binLogicalExp: unLogicalExp  */
#line 500 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2923 "bison/clang_syntax.tab.c"
    break;

  case 67: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 506 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 2933 "bison/clang_syntax.tab.c"
    break;

  case 68: /* unLogicalExp: relationalExp  */
#line 511 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2941 "bison/clang_syntax.tab.c"
    break;

  case 69: /* relationalExp: relationalExp REL_OP sumExp  */
#line 517 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2952 "bison/clang_syntax.tab.c"
    break;

  case 70: /* relationalExp: sumExp  */
#line 523 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2960 "bison/clang_syntax.tab.c"
    break;

  case 71: /* sumExp: sumExp SUM_OP mulExp  */
#line 529 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2971 "bison/clang_syntax.tab.c"
    break;

  case 72: /* sumExp: mulExp  */
#line 535 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2979 "bison/clang_syntax.tab.c"
    break;

  case 73: /* mulExp: mulExp MUL_OP factor  */
#line 541 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("*/÷ operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2990 "bison/clang_syntax.tab.c"
    break;

  case 74: /* mulExp: factor  */
#line 547 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2998 "bison/clang_syntax.tab.c"
    break;

  case 75: /* mulExp: SUM_OP factor  */
#line 550 "bison/clang_syntax.y"
                    {
        (yyval.node) = createNode("signed factor");
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 3008 "bison/clang_syntax.tab.c"
    break;

  case 76: /* factor: ID  */
#line 558 "bison/clang_syntax.y"
       {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("ID");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 3019 "bison/clang_syntax.tab.c"
    break;

  case 77: /* factor: functionCall  */
#line 564 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3027 "bison/clang_syntax.tab.c"
    break;

  case 78: /* factor: '(' simpleExp ')'  */
#line 567 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3035 "bison/clang_syntax.tab.c"
    break;

  case 79: /* factor: constOP  */
#line 570 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3043 "bison/clang_syntax.tab.c"
    break;

  case 80: /* $@2: %empty  */
#line 576 "bison/clang_syntax.y"
           {
        qtdParams = 0;
    }
#line 3051 "bison/clang_syntax.tab.c"
    break;

  case 81: /* functionCall: ID '(' $@2 callParams ')'  */
#line 579 "bison/clang_syntax.y"
                   {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[-1].node);
        qtdHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column);

        // typeHandler($$);
    }
#line 3066 "bison/clang_syntax.tab.c"
    break;

  case 82: /* functionCall: ID '(' ')'  */
#line 589 "bison/clang_syntax.y"
                 {
        qtdParams = 0;
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
    }
#line 3078 "bison/clang_syntax.tab.c"
    break;

  case 83: /* callParams: callParams ',' simpleExp  */
#line 599 "bison/clang_syntax.y"
                            {
        qtdParams++;
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3089 "bison/clang_syntax.tab.c"
    break;

  case 84: /* callParams: simpleExp  */
#line 605 "bison/clang_syntax.y"
                {
        qtdParams++;
        (yyval.node) = (yyvsp[0].node);
    }
#line 3098 "bison/clang_syntax.tab.c"
    break;


#line 3102 "bison/clang_syntax.tab.c"

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

#line 611 "bison/clang_syntax.y"

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
