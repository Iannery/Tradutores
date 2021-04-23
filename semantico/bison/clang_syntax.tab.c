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
  YYSYMBOL_iterAssign = 53,                /* iterAssign  */
  YYSYMBOL_iterExp = 54,                   /* iterExp  */
  YYSYMBOL_returnStmt = 55,                /* returnStmt  */
  YYSYMBOL_setStmt = 56,                   /* setStmt  */
  YYSYMBOL_pertOP = 57,                    /* pertOP  */
  YYSYMBOL_setReturner = 58,               /* setReturner  */
  YYSYMBOL_typeOP = 59,                    /* typeOP  */
  YYSYMBOL_setParams = 60,                 /* setParams  */
  YYSYMBOL_addOP = 61,                     /* addOP  */
  YYSYMBOL_remOP = 62,                     /* remOP  */
  YYSYMBOL_selectOP = 63,                  /* selectOP  */
  YYSYMBOL_forallOP = 64,                  /* forallOP  */
  YYSYMBOL_expression = 65,                /* expression  */
  YYSYMBOL_assignExp = 66,                 /* assignExp  */
  YYSYMBOL_simpleExp = 67,                 /* simpleExp  */
  YYSYMBOL_constOP = 68,                   /* constOP  */
  YYSYMBOL_inOP = 69,                      /* inOP  */
  YYSYMBOL_outOP = 70,                     /* outOP  */
  YYSYMBOL_outConst = 71,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 72,             /* binLogicalExp  */
  YYSYMBOL_unLogicalExp = 73,              /* unLogicalExp  */
  YYSYMBOL_relationalExp = 74,             /* relationalExp  */
  YYSYMBOL_sumExp = 75,                    /* sumExp  */
  YYSYMBOL_mulExp = 76,                    /* mulExp  */
  YYSYMBOL_signedFactor = 77,              /* signedFactor  */
  YYSYMBOL_factor = 78,                    /* factor  */
  YYSYMBOL_functionCall = 79,              /* functionCall  */
  YYSYMBOL_80_3 = 80,                      /* $@3  */
  YYSYMBOL_callParams = 81                 /* callParams  */
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
#define YYLAST   4040

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

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
       0,   121,   121,   127,   132,   138,   141,   147,   153,   157,
     153,   166,   171,   178,   183,   189,   207,   225,   242,   248,
     253,   256,   262,   265,   268,   271,   274,   277,   280,   283,
     286,   289,   295,   301,   306,   315,   324,   326,   330,   332,
     336,   343,   349,   356,   364,   367,   373,   380,   386,   389,
     392,   399,   406,   413,   420,   428,   431,   434,   440,   451,
     454,   461,   465,   469,   476,   485,   493,   497,   501,   507,
     513,   519,   524,   530,   536,   542,   548,   554,   560,   566,
     569,   580,   586,   589,   592,   595,   598,   604,   604,   617,
     628,   634
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
  "exprStmt", "condStmt", "iterStmt", "iterAssign", "iterExp",
  "returnStmt", "setStmt", "pertOP", "setReturner", "typeOP", "setParams",
  "addOP", "remOP", "selectOP", "forallOP", "expression", "assignExp",
  "simpleExp", "constOP", "inOP", "outOP", "outConst", "binLogicalExp",
  "unLogicalExp", "relationalExp", "sumExp", "mulExp", "signedFactor",
  "factor", "functionCall", "$@3", "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,     7,   117,    31,   306,   322,   350,    74,    34,    41,
    -300,   364,   380,    59,    96,   137,  3814,   454,   141,    48,
     396,   549,   760,   827,   156,   181,   188,   573,   191,   238,
     261,   285,   297,   326,  1517,    32,   838,  3901,   463,   868,
    2917,  2948,  2979,  3010,  3041,  3072,  3103,  3134,  3165,  3196,
      65,   196,   920,   213,   263,   987,  3227,   337,   346,    82,
    1616,  3258,  3289,    68,    97,    17,   437,  1637,  1657,  1738,
    1777,   473,   386,   137,   868,   461,   899,   404,   678,   899,
     899,   899,   709,   347,   573,   139,  1549,  1797,   124,   129,
    3320,   597,  3351,  3382,   689,   838,    32,    32,    32,   438,
     638,   234,   478,   475,   482,   250,   468,  3413,  1723,   314,
     479,   513,   873,   370,   375,   399,   532,   535,   400,   543,
     551,   567,  1820,   998,  1840,   215,   216,   134,   789,  1861,
    1892,   639,  3930,    66,  3901,  1907,   577,   593,  1922,   596,
     605,    22,   745,   483,   612,   220,  3444,  3475,  3506,  1938,
     998,  3901,   184,    72,  3537,   623,  3901,  3568,   630,   642,
    3599,  1141,  1212,  1301,   643,   649,  2008,   771,   868,   868,
     401,  1461,  1564,  1855,   163,   277,   540,   949,  2038,  2063,
    2076,  2092,  1085,  1405,  1533,   658,   680,  1372,   931,   899,
     868,  1964,  2204,  3943,     8,    23,   708,   810,  3949,  3955,
    3961,  3967,   696,   704,   637,   673,   759,   710,   714,   262,
     265,  3901,   161,    89,   203,   603,   718,   719,   157,  1028,
     998,   868,   107,   622,  1031,  1050,    62,   102,   172,   222,
    1079,  1147,  1179,  1197,   725,   726,   729,   573,   733,   753,
    3901,  1706,  1995,   705,   756,  2235,  2266,  2297,  2328,  2359,
    2390,  2421,   768,  2452,  2483,   849,   694,   780,  3630,   520,
    3661,   678,   899,   446,  2100,   333,   436,   868,   771,   771,
     771,   678,   899,  3973,   241,   441,   899,   931,   931,   931,
     899,   899,   761,   782,   453,   498,   507,   508,   899,   899,
    3979,   998,   678,   899,   656,  1231,   164,   509,   998,  1028,
    1028,  1028,   868,   461,   899,   784,   709,   804,  3692,  2514,
     598,  2545,   793,   808,   115,   179,   223,   280,   739,   811,
     137,   832,   510,  2115,   998,  2134,   424,  1109,  2147,  2160,
     833,   526,  3985,   395,   890,  3991,  3997,   552,   557,   899,
     899,   579,   580,   802,   846,   587,  1239,   998,  1307,   198,
     327,  1339,  1357,   588,   826,   602,  2576,   850,   853,  2607,
     841,   137,   899,   899,  1956,   860,   864,   865,   635,  3843,
    3723,   812,  2166,  2182,   905,  4003,  4009,   877,   881,   654,
     674,   282,   294,  4015,  1390,  1467,   950,  3930,    66,  3930,
     848,   867,  3872,  2638,   958,   693,   699,  3754,   386,  2188,
     707,   723,  1500,  2669,   883,  2700,  2731,  2762,  2793,   386,
     289,   340,   888,  3930,   184,   891,  3785,  2824,   892,  2855,
    3930,  2886
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,  -300,   876,     0,     1,  -243,    73,  -299,   859,
       5,     6,   -12,   -30,   -29,  -112,  -109,  -103,  -140,   545,
    -100,   -57,  1776,   -56,   527,  -244,   -54,   -53,   687,   -44,
     -16,   -60,   -21,   847,    -4,    40,   632,  1872,   360,  1617,
    1485,  1326,   255,  1007,  1167,  -199,  -281
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    40,    41,    15,    99,    19,    20,
     158,   159,    42,    43,    44,    45,    46,    47,   103,   144,
      48,    49,    50,    51,    52,   111,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   119,    63,    64,    65,
      66,    67,    68,    69,    70,   123,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,     6,    17,     5,     6,     7,     8,   160,     7,     8,
     343,    77,   155,   291,    92,   104,   320,   321,    89,   -59,
     246,   371,   110,   247,   204,   205,     9,   330,   -72,   248,
     276,    -2,   249,   255,   -70,    21,    22,    23,   126,   -72,
     209,   210,    96,   374,    28,   -70,     1,    31,   344,     1,
     -72,    86,    35,   101,   -91,   106,   -91,   106,   106,   106,
     106,   118,   394,    39,   324,    13,   386,   361,   121,    21,
      22,    23,   -17,   -59,   -16,   250,   -60,    -8,    28,   -59,
      72,    31,    73,   255,   298,    86,    35,   131,   251,    36,
      95,    14,   257,    94,   -59,   347,   -59,    39,   -60,   -39,
     -61,   -59,   141,   143,   -90,   146,   -90,    12,   -70,   -61,
     -61,   -61,   145,   -70,   -61,   -56,   252,    10,   -60,   -70,
     245,   -61,   154,   -61,   -70,    16,   -42,   157,   253,   153,
     -70,    92,   241,   242,   -70,   -71,   -70,   243,   244,   -60,
     206,   -60,   -87,   -87,   -87,   -69,   -71,   -42,   266,   -42,
     285,   -87,   286,   287,   -87,    18,   -69,   -71,   -87,   -87,
      71,   124,   -87,   354,   -87,   -87,   -87,   -69,   -81,   275,
     -87,   122,   254,   -87,   -59,   -71,   -87,   -81,   -81,   -81,
     -87,   -87,   -81,   -72,   -87,   267,   -71,    74,   294,   -81,
     -43,   -81,   -87,   290,   -72,   -59,   -71,   299,   -71,   315,
     297,   316,   317,   256,   -72,   110,   -72,   204,   205,   -69,
     308,   -43,    75,   -43,   -62,   110,   -37,   204,   205,    76,
     -69,   305,    78,   -62,   -62,   -62,   -42,   -43,   -62,   -57,
     -69,    94,   -69,   -74,   -44,   -62,   110,   -62,   204,   205,
     106,   106,   300,   104,   -74,   206,   -44,   -74,   -42,   -43,
     106,   106,   -71,   -38,   -74,   -44,   -74,   -44,   367,   106,
     106,   -60,   365,   -71,   204,   205,   132,   106,   106,    79,
     141,   106,   106,   -44,   418,   246,   -45,   246,   247,    92,
     247,   353,   134,   106,   248,   118,   248,   249,   -70,   249,
      87,   -45,    80,   -51,   179,   -44,   -45,   368,   -45,   -70,
     -51,   246,   366,   141,   247,   -52,    -4,   370,   246,   -70,
     248,   247,   -45,   249,   -45,   -51,    81,   248,   106,   106,
     249,   -51,    -5,   -51,    -4,   -60,   141,   -52,    82,   179,
     250,   199,   250,   199,   199,   199,   199,   179,   -73,   160,
      -5,   106,   106,   251,   -71,   251,   -48,   300,   393,   -73,
      -6,   -52,   -73,   130,   257,   -71,   250,    83,   403,   -73,
     405,   -73,   308,   250,    -3,   -71,   120,   145,    -6,   251,
      93,   252,   -52,   252,   -52,   245,   251,   245,   231,   -55,
      -7,   -60,    -3,   253,   417,   253,   -60,   241,   242,   241,
     242,   421,   243,   244,   243,   244,    88,   252,    -7,   175,
     416,   245,   136,   419,   252,   231,   -69,   137,   245,   253,
     -60,   206,   -60,   241,   242,    -9,   253,   -69,   243,   244,
     241,   242,   264,   179,   179,   243,   244,   254,   -14,   254,
     -14,   138,   -68,   -60,   175,   -69,   195,   107,   195,   195,
     195,   195,   175,   273,   199,   179,   -69,   206,   -74,   -87,
     -87,   -87,   206,   254,   -11,   127,   -69,    97,   -87,   -74,
     254,   -87,   -74,   -12,   -42,   -87,   -87,   211,   325,   -87,
     -74,   412,   -11,   332,   295,   231,   179,   -87,   323,   206,
     102,   -12,   415,   227,   -33,   -42,   -33,   -33,   -33,   -33,
     151,   -33,   -33,   -33,   -37,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,    84,   -15,   -33,   -15,   133,   -43,
     227,   -49,   -33,   -33,   -33,   -36,   199,   199,   -44,   -45,
     206,   -60,   179,   179,   179,   329,   199,   199,   265,   175,
     -43,   199,   199,   199,   336,   199,   199,   -60,    -8,   -44,
     -45,   348,   373,   199,   199,   135,   231,   199,   199,   274,
     175,   -72,   319,   231,   231,   231,   352,   179,   376,   199,
     -61,   179,   -72,   -60,   -66,   268,   171,   -67,   -60,   -61,
     -61,   -61,   -72,   179,   -61,   139,    21,    22,    23,   231,
     296,   175,   -61,   140,   377,    28,    29,    30,    31,   378,
     -60,   -60,    34,    35,   199,   199,    36,   -18,   -60,   206,
     -58,   171,   231,   191,    39,   191,   191,   191,   191,   171,
     -51,   381,   382,   -60,   -63,   -18,    -8,   199,   199,   385,
     387,   195,   195,   -63,   -63,   -63,   -52,   326,   -63,   147,
     360,   195,   195,   -86,   389,   -63,   333,   -63,   148,   -10,
     195,   195,   -86,   -86,   -86,   152,   206,   -86,   195,   195,
     223,   227,   195,   195,   -86,   156,   -86,   -10,   349,   -87,
     -87,   -87,   175,   258,   195,   -60,   175,   -56,   -87,   -44,
     -13,   -87,   -13,   259,   261,   -87,   -87,   223,   175,   -87,
     262,   161,   162,   163,   227,   -60,   400,   -87,   346,   271,
     185,   202,   203,   186,   171,   171,   171,   108,   188,   195,
     195,   189,   207,   208,   -60,   -45,   401,   227,   125,   190,
     -60,   272,   161,   162,   163,   191,   191,   171,   -51,   -72,
     318,   164,   195,   195,   165,   410,   172,   280,   166,   167,
     -72,   411,   168,   277,   -52,   281,   116,   117,   309,   -51,
     169,   288,   161,   162,   163,   289,   223,   223,   171,   292,
     293,   164,   202,   203,   165,   -52,   302,   303,   364,   167,
     304,   172,   168,   192,   306,   192,   192,   192,   192,   172,
     169,   -62,   282,   283,   161,   162,   163,   149,   284,   150,
     -62,   -62,   -62,   164,   307,   -62,   165,   310,   191,   191,
     166,   167,   339,   -62,   171,   171,   171,   171,   191,   191,
     -73,   311,   169,   191,   191,   191,   191,   191,   191,    97,
     224,   -73,   -36,   340,   -73,   191,   191,   356,   223,   191,
     191,   -74,   -73,   358,   362,   223,   223,   223,   223,   171,
     278,   191,   -74,   171,   383,   -74,   150,   224,   -63,   363,
     369,    21,    22,    23,   398,   171,    73,   -63,   -63,   -63,
      28,   223,   -63,    31,   172,   172,   172,    86,    35,   388,
     -63,    36,   312,   313,   372,   375,   191,   191,   314,    39,
     392,   161,   162,   163,   223,   192,   192,   172,   384,    11,
     164,   406,   390,   165,   -84,   391,   173,   166,   167,   191,
     191,   168,   -57,   -84,   -84,   -84,   -58,   -55,   -84,   169,
     407,   -73,   182,   183,   184,   -50,   224,   224,   172,   -51,
     278,   185,   -73,   -52,   186,   -73,   414,    37,   187,   188,
     240,   173,   189,   193,   420,   112,   193,   193,   193,   173,
     190,   -86,   100,   404,   182,   183,   184,   399,   357,   150,
     -86,   -86,   -86,   185,     0,   -86,   186,     0,   192,   192,
     187,   188,     0,   -86,   172,   172,   172,   172,   192,   192,
     -74,     0,   190,   192,   192,   192,   192,   192,   192,   269,
     225,   -74,     0,     0,   -74,   192,   192,     0,   224,   192,
     192,   -74,   402,     0,   150,   224,   224,   224,   224,   172,
     409,   192,    73,   172,     0,     0,     0,   225,   -85,     0,
       0,   213,   214,   215,     0,   172,     0,   -85,   -85,   -85,
     216,   224,   -85,   217,   173,   173,   173,   218,   219,     0,
     -85,   220,     0,     0,     0,     0,   192,   192,     0,   221,
       0,   213,   214,   215,   224,   193,   193,   173,     0,     0,
     216,     0,   -85,   217,     0,     0,   180,   218,   219,   192,
     192,   -85,   -85,   -85,     0,     0,   -85,     0,     0,   221,
       0,   -84,     0,   -85,     0,   -85,   225,   225,   173,     0,
     -84,   -84,   -84,     0,     0,   -84,     0,     0,     0,     0,
       0,   180,   -84,   200,   -84,   200,   200,   200,   200,   180,
     -76,     0,     0,     0,     0,     0,   -61,     0,     0,   -76,
     301,   -76,     0,     0,   -76,   -61,   -61,   -61,   112,   193,
     -61,   -76,     0,   -76,   173,   173,   173,   173,   112,   193,
     -73,     0,     0,   193,   193,   193,   193,   193,   193,   269,
     232,   -73,     0,     0,   -73,   193,   193,     0,   225,   112,
     193,   -73,     0,     0,     0,   225,   225,   225,   225,   173,
       0,   193,   -61,   173,     0,     0,     0,   232,   -78,     0,
       0,   -61,   -61,   -61,     0,   173,   -61,   -78,   -78,   -78,
       0,   225,   -78,   -61,   180,   180,   180,     0,     0,   -78,
       0,   -78,     0,     0,     0,     0,   193,   193,     0,     0,
     -79,     0,     0,     0,   225,   200,   200,   180,     0,   -79,
     -79,   -79,     0,     0,   -79,     0,   181,     0,   -82,   193,
     193,   -79,     0,   -79,     0,     0,     0,   -82,   -82,   -82,
       0,     0,   -82,   -62,     0,     0,   232,   232,   180,   -82,
       0,   -82,   -62,   -62,   -62,     0,     0,   -62,     0,     0,
       0,   181,   -80,   201,   -62,   201,   201,   201,   201,   181,
     -89,   -80,   -80,   -80,     0,     0,   -80,     0,     0,   -89,
     -89,   -89,     0,   -80,   -89,   -80,     0,     0,   200,   200,
       0,   -89,     0,   -89,   180,   180,   180,   180,   200,   200,
       0,     0,     0,   200,   200,   200,   200,   200,   200,     0,
     233,     0,     0,     0,     0,   200,   200,     0,   232,   200,
     200,     0,     0,     0,     0,   232,   232,   232,   232,   180,
       0,   200,   -63,   180,     0,     0,     0,   233,   -83,     0,
       0,   -63,   -63,   -63,     0,   180,   -63,   -83,   -83,   -83,
       0,   232,   -83,   -63,   181,   181,   181,     0,     0,   -83,
       0,   -83,     0,     0,     0,     0,   200,   200,     0,     0,
     -75,     0,     0,     0,   232,   201,   201,   181,     0,   -75,
     301,   -75,     0,     0,   -75,   178,     0,     0,   -77,   200,
     200,   -75,     0,   -75,     0,     0,     0,   -77,   -77,   -77,
       0,     0,   -77,   -81,     0,     0,   233,   233,   181,   -77,
       0,   -77,   -81,   -81,   -81,     0,     0,   -81,     0,     0,
     178,   -46,   198,   212,   198,   198,   198,   198,   178,     0,
     -46,   -46,   -46,     0,     0,   -46,   -62,     0,     0,     0,
       0,     0,   -46,   129,   -46,   -62,   -62,   -62,   201,   201,
     -62,     0,     0,     0,   181,   181,   181,   181,   201,   201,
       0,     0,     0,   201,   201,   201,   201,   201,   201,   230,
       0,     0,     0,     0,     0,   201,   201,     0,   233,   201,
     201,     0,     0,     0,     0,   233,   233,   233,   233,   181,
       0,   201,   -86,   181,     0,     0,   230,     0,   -53,     0,
       0,   -86,   -86,   -86,     0,   181,   -86,   -53,   -53,   -53,
       0,   233,   -53,   -86,   178,   178,     0,     0,     0,   -53,
       0,   -53,     0,     0,     0,     0,   201,   201,     0,     0,
       0,   -88,     0,     0,   233,   198,   178,     0,     0,     0,
     -88,   -88,   -88,     0,   177,   -88,     0,     0,   -81,   201,
     201,     0,   -88,     0,   -88,     0,     0,   -81,   -81,   -81,
       0,     0,   -81,    84,   -63,     0,   230,   178,    85,     0,
     -81,     0,     0,   -63,   -63,   -63,     0,     0,   -63,   177,
     -81,   197,     0,   197,   197,   197,   197,   177,     0,   -81,
     -81,   -81,     0,     0,   -81,   -85,     0,     0,     0,     0,
      85,   128,   -81,     0,   -85,   -85,   -85,   198,   198,   -85,
       0,     0,     0,   178,   178,   328,   -85,   198,   198,     0,
       0,     0,   198,   198,   335,     0,   198,   198,   229,     0,
       0,     0,     0,     0,   198,   198,     0,   230,   198,   198,
       0,     0,     0,     0,   230,   230,   351,   -84,   178,     0,
     198,     0,   178,     0,     0,   229,   -84,   -84,   -84,     0,
       0,   -84,     0,     0,   178,     0,     0,     0,   -76,   -84,
     230,     0,     0,   177,   177,     0,   176,   -76,    98,   -76,
       0,     0,   -76,     0,     0,   198,   198,     0,   -78,     0,
     -76,     0,     0,   230,   197,   177,     0,   -78,   -78,   -78,
       0,     0,   -78,     0,     0,     0,     0,     0,   198,   198,
     -78,   176,     0,   196,     0,   196,   196,   196,   196,   176,
       0,     0,     0,     0,     0,   229,   177,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
       0,     0,     0,     0,   -81,   -30,   -30,   -30,     0,     0,
     228,     0,     0,   -81,   -81,   -81,   197,   197,   -81,   -79,
       0,     0,   177,   327,   212,   -47,   197,   197,   -79,   -79,
     -79,   197,   334,   -79,     0,   197,   197,   228,     0,     0,
       0,   -79,     0,   197,   197,     0,   229,   197,   197,     0,
       0,     0,     0,   229,   350,   176,   176,   177,   -82,   197,
       0,   177,     0,     0,     0,     0,     0,   -82,   -82,   -82,
       0,     0,   -82,   177,     0,     0,   196,   176,   -80,   229,
     -82,     0,     0,     0,     0,   170,     0,   -80,   -80,   -80,
       0,     0,   -80,     0,   197,   197,     0,     0,     0,     0,
     -80,   -89,   229,     0,     0,     0,     0,   228,   176,     0,
     -89,   -89,   -89,     0,     0,   -89,     0,   197,   197,     0,
     170,   -83,   105,   -89,   109,   113,   114,   115,   170,     0,
     -83,   -83,   -83,     0,     0,   -83,   -84,     0,     0,     0,
       0,     0,   -75,   -83,     0,   -84,   -84,   -84,   196,   196,
     -84,   -75,    98,   -75,   176,     0,   -75,   -84,   196,   196,
       0,     0,     0,   196,   -75,     0,     0,   196,   196,   222,
       0,     0,     0,   -77,     0,   196,   196,     0,   228,   196,
     196,   174,   -77,   -77,   -77,   228,     0,   -77,   -46,   176,
       0,   196,     0,   176,     0,   -77,   222,   -46,   -46,   -46,
       0,     0,   -46,   -53,     0,   176,     0,     0,     0,     0,
     -46,   228,   -53,   -53,   -53,   170,   174,   -53,   194,   -88,
     194,   194,   194,   194,   174,   -53,   196,   196,   -88,   -88,
     -88,     0,     0,   -88,   228,     0,   170,   -81,     0,     0,
       0,   -88,     0,     0,     0,   -86,   -81,   -81,   -81,   196,
     196,   -81,   318,     0,   -86,   -86,   -86,   263,   -81,   -86,
       0,     0,     0,     0,     0,   226,   -31,   170,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -81,
       0,     0,   226,     0,   -31,   -31,   -31,     0,   -81,   -81,
     -81,     0,     0,   -81,     0,     0,     0,   109,   322,   263,
     -81,   174,     0,     0,     0,     0,     0,   109,   331,   -76,
       0,     0,     0,     0,     0,     0,   337,   338,   -76,   270,
     -76,     0,   174,   -76,   341,   342,     0,   222,   109,   345,
     -76,     0,     0,     0,   -78,     0,     0,     0,   170,     0,
     355,     0,   170,   -78,   -78,   -78,     0,   -79,   -78,     0,
       0,     0,     0,   174,   170,   -78,   -79,   -79,   -79,     0,
     222,   -79,     0,   -82,     0,     0,     0,     0,   -79,     0,
       0,   -80,   -82,   -82,   -82,   379,   380,   -82,     0,     0,
     -80,   -80,   -80,   222,   -82,   -80,   -89,     0,     0,     0,
       0,     0,   -80,   194,   194,   -89,   -89,   -89,   395,   396,
     -89,     0,     0,   194,   194,   -83,     0,   -89,     0,     0,
       0,     0,   194,   194,   -83,   -83,   -83,     0,   -75,   -83,
     194,   194,     0,   226,   194,   194,   -83,   -75,   270,   -75,
       0,   -77,   -75,     0,   174,     0,   194,   -46,   174,   -75,
     -77,   -77,   -77,     0,     0,   -77,   -46,   -46,   -46,     0,
     174,   -46,   -77,   -53,     0,     0,   226,     0,   -46,   -88,
       0,     0,   -53,   -53,   -53,     0,     0,   -53,   -88,   -88,
     -88,   194,   194,   -88,   -53,   -85,     0,     0,     0,   226,
     -88,     0,     0,     0,   -85,   -85,   -85,     0,     0,   -85,
       0,     0,     0,     0,   194,   194,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,     0,
       0,     0,     0,    -7,    -7,    -7,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,     0,     0,     0,     0,     0,   -18,   -18,   -18,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,     0,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,     0,
       0,   -11,     0,     0,     0,     0,     0,   -11,   -11,   -11,
     -33,     0,   -33,   -33,   -33,   -33,   413,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,   -54,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -64,     0,     0,     0,     0,
       0,   -64,   -64,   -64,   -12,     0,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,     0,     0,   -12,     0,     0,     0,
       0,     0,   -12,   -12,   -12,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,
       0,     0,     0,     0,   -10,   -10,   -10,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -30,     0,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -23,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,     0,     0,     0,     0,     0,   -23,   -23,
     -23,    90,     0,    21,    22,    23,    24,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,    33,     1,    34,
      35,     0,     0,    36,     0,     0,     0,     0,     0,    37,
      91,    39,   -21,     0,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,   -21,     0,     0,     0,     0,     0,
     -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,   -22,     0,     0,     0,     0,
       0,   -22,   -22,   -22,   -24,     0,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,   -24,     0,     0,     0,
       0,     0,   -24,   -24,   -24,   -25,     0,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,     0,
       0,     0,     0,   -25,   -25,   -25,   -26,     0,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -27,     0,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -41,     0,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -28,
       0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,   -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -29,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,     0,     0,     0,     0,     0,   -29,   -29,
     -29,   -20,     0,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,     0,     0,     0,     0,     0,   -20,
     -20,   -20,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,   -19,     0,     0,     0,     0,     0,
     -19,   -19,   -19,   -32,     0,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -40,     0,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,     0,     0,
       0,     0,   -40,   -40,   -40,   -54,     0,   -54,   -54,   -54,
     -54,     0,   -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,     0,   -54,     0,     0,
       0,     0,     0,   -54,   -54,   -54,   -65,     0,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -64,     0,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -34,     0,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
     -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -35,
       0,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,
      90,     0,    21,    22,    23,    24,     0,    25,    26,    27,
       0,    28,    29,    30,    31,    32,    33,     1,    34,    35,
       0,     0,    36,     0,     0,     0,     0,     0,    37,   260,
      39,    -7,     0,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,    -7,     0,     0,     0,     0,     0,    -7,
      -7,    -7,   -18,     0,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,     0,     0,     0,     0,     0,
     -18,   -18,   -18,    90,     0,    21,    22,    23,    24,     0,
      25,    26,    27,     0,    28,    29,    30,    31,    32,    33,
       1,    34,    35,     0,     0,    36,     0,     0,     0,     0,
       0,    37,   359,    39,   -11,     0,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,     0,     0,   -11,     0,     0,     0,
       0,     0,   -11,   -11,   -11,   -12,     0,   -12,   -12,   -12,
     -12,     0,   -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,   -12,     0,     0,
       0,     0,     0,   -12,   -12,   -12,   -10,     0,   -10,   -10,
     -10,   -10,     0,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,
       0,     0,     0,     0,   -10,   -10,   -10,    21,    22,    23,
      24,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,     1,    34,    35,     0,     0,    36,     0,     0,
       0,     0,     0,    37,    38,    39,    21,    22,    23,    24,
       0,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,     1,    34,    35,     0,     0,    36,     0,     0,     0,
       0,     0,    37,   397,    39,    21,    22,    23,    24,     0,
      25,    26,    27,     0,    28,    29,    30,    31,    32,    33,
       1,    34,    35,     0,     0,    36,     0,     0,     0,     0,
       0,    37,   408,    39,    21,    22,    23,    24,     0,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,     1,
      34,    35,     0,     0,    36,     0,     0,     0,     0,     0,
      37,     0,    39,    21,    22,    23,   234,     0,   235,   236,
     237,     0,    28,    29,    30,    31,   238,   239,     1,    34,
      35,     0,     0,    36,   -84,     0,     0,     0,     0,   240,
     -76,    39,     0,   -84,   -84,   -84,   -78,     0,   -84,   -76,
     279,   -76,   -79,     0,   -76,   -78,   -78,   -78,   -82,     0,
     -78,   -79,   -79,   -79,   -80,     0,   -79,   -82,   -82,   -82,
     -89,     0,   -82,   -80,   -80,   -80,   -83,     0,   -80,   -89,
     -89,   -89,   -75,     0,   -89,   -83,   -83,   -83,   -77,     0,
     -83,   -75,   279,   -75,   -46,     0,   -75,   -77,   -77,   -77,
     -53,     0,   -77,   -46,   -46,   -46,   -88,     0,   -46,   -53,
     -53,   -53,     0,     0,   -53,   -88,   -88,   -88,     0,     0,
     -88
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,     0,     0,    37,     3,     3,
     291,    27,   152,   212,    43,    75,   259,   261,    39,    11,
     132,   320,    78,   132,    78,    78,    19,   271,    11,   132,
      22,     0,   132,    11,    11,     3,     4,     5,    94,    22,
      94,    94,    25,   324,    12,    22,    18,    15,   292,    18,
      33,    19,    20,    74,    32,    76,    34,    78,    79,    80,
      81,    82,   361,    31,   263,    31,   347,   310,    84,     3,
       4,     5,    31,    11,    33,   132,    11,    18,    12,    11,
      32,    15,    34,    11,    22,    19,    20,    99,   132,    23,
      22,    32,   152,    11,    32,   294,    34,    31,    33,    33,
      11,    33,   123,   132,    32,   134,    34,    33,    11,    20,
      21,    22,   133,    11,    25,    33,   132,     0,    11,    22,
     132,    32,   151,    34,    22,    29,    11,   156,   132,   150,
      33,   160,   132,   132,    32,    11,    34,   132,   132,    32,
      11,    34,     3,     4,     5,    11,    22,    32,   169,    34,
     206,    12,   206,   206,    15,    18,    22,    33,    19,    20,
      19,    32,    23,   303,     3,     4,     5,    33,    11,   190,
      31,    32,   132,    12,    11,    11,    15,    20,    21,    22,
      19,    20,    25,    11,    23,    22,    22,    31,    31,    32,
      11,    34,    31,    32,    22,    32,    32,    25,    34,   255,
     221,   255,   255,    19,    32,   261,    34,   261,   261,    11,
     240,    32,    31,    34,    11,   271,    32,   271,   271,    31,
      22,   237,    31,    20,    21,    22,    11,    11,    25,    33,
      32,    11,    34,    11,    11,    32,   292,    34,   292,   292,
     261,   262,    20,   303,    22,    11,    33,    25,    33,    33,
     271,   272,    11,    33,    32,    32,    34,    34,   318,   280,
     281,    11,   318,    22,   318,   318,    32,   288,   289,    31,
     291,   292,   293,    11,   414,   387,    11,   389,   387,   308,
     389,   302,    32,   304,   387,   306,   389,   387,    11,   389,
      35,    11,    31,    11,    39,    33,    33,   318,    33,    22,
      11,   413,   318,   324,   413,    11,     0,   319,   420,    32,
     413,   420,    32,   413,    34,    33,    31,   420,   339,   340,
     420,    32,     0,    34,    18,    11,   347,    33,    31,    74,
     387,    76,   389,    78,    79,    80,    81,    82,    11,   369,
      18,   362,   363,   387,    11,   389,    32,    20,   360,    22,
       0,    11,    25,    98,   414,    22,   413,    31,   387,    32,
     389,    34,   392,   420,     0,    32,    19,   388,    18,   413,
      33,   387,    32,   389,    34,   387,   420,   389,   123,    33,
       0,    11,    18,   387,   413,   389,    11,   387,   387,   389,
     389,   420,   387,   387,   389,   389,    36,   413,    18,    39,
     412,   413,    32,   415,   420,   150,    11,    32,   420,   413,
      11,    11,    11,   413,   413,    29,   420,    22,   413,   413,
     420,   420,   167,   168,   169,   420,   420,   387,    32,   389,
      34,    32,    32,    32,    74,    11,    76,    33,    78,    79,
      80,    81,    82,   188,   189,   190,    22,    11,    11,     3,
       4,     5,    11,   413,     0,    95,    32,    20,    12,    22,
     420,    15,    25,     0,    11,    19,    20,    29,    32,    23,
      33,   398,    18,    32,   219,   220,   221,    31,    32,    11,
      19,    18,   409,   123,     1,    32,     3,     4,     5,     6,
       7,     8,     9,    10,    33,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    26,    32,    23,    34,    33,    11,
     150,    32,    29,    30,    31,    33,   261,   262,    11,    11,
      11,    11,   267,   268,   269,   270,   271,   272,   168,   169,
      32,   276,   277,   278,   279,   280,   281,    11,    18,    32,
      32,    32,    32,   288,   289,    32,   291,   292,   293,   189,
     190,    11,    32,   298,   299,   300,   301,   302,    32,   304,
      11,   306,    22,    11,    32,    25,    39,    32,    11,    20,
      21,    22,    32,   318,    25,    32,     3,     4,     5,   324,
     220,   221,    33,    32,    32,    12,    13,    14,    15,    32,
      11,    11,    19,    20,   339,   340,    23,     0,    11,    11,
      33,    74,   347,    76,    31,    78,    79,    80,    81,    82,
      33,    32,    32,    11,    11,    18,    18,   362,   363,    32,
      32,   261,   262,    20,    21,    22,    33,   267,    25,    33,
      32,   271,   272,    11,    32,    32,   276,    34,    33,     0,
     280,   281,    20,    21,    22,    33,    11,    25,   288,   289,
     123,   291,   292,   293,    32,    32,    34,    18,   298,     3,
       4,     5,   302,    33,   304,    11,   306,    32,    12,    32,
      32,    15,    34,    31,    31,    19,    20,   150,   318,    23,
      31,     3,     4,     5,   324,    11,    32,    31,    32,    31,
      12,    13,    14,    15,   167,   168,   169,    19,    20,   339,
     340,    23,    13,    14,    11,    32,    32,   347,    19,    31,
      11,    31,     3,     4,     5,   188,   189,   190,    11,    11,
      26,    12,   362,   363,    15,    32,    39,    31,    19,    20,
      22,    32,    23,    25,    11,    31,    27,    28,    33,    32,
      31,    31,     3,     4,     5,    31,   219,   220,   221,    31,
      31,    12,    13,    14,    15,    32,    31,    31,    19,    20,
      31,    74,    23,    76,    31,    78,    79,    80,    81,    82,
      31,    11,    13,    14,     3,     4,     5,    32,    19,    34,
      20,    21,    22,    12,    31,    25,    15,    31,   261,   262,
      19,    20,    31,    33,   267,   268,   269,   270,   271,   272,
      11,    33,    31,   276,   277,   278,   279,   280,   281,    20,
     123,    22,    32,    31,    25,   288,   289,    33,   291,   292,
     293,    11,    33,    19,    31,   298,   299,   300,   301,   302,
      20,   304,    22,   306,    32,    25,    34,   150,    11,    31,
      29,     3,     4,     5,    32,   318,    34,    20,    21,    22,
      12,   324,    25,    15,   167,   168,   169,    19,    20,    33,
      33,    23,    13,    14,    32,    32,   339,   340,    19,    31,
      29,     3,     4,     5,   347,   188,   189,   190,    32,     3,
      12,    33,    32,    15,    11,    32,    39,    19,    20,   362,
     363,    23,    32,    20,    21,    22,    32,    32,    25,    31,
      33,    11,     3,     4,     5,    32,   219,   220,   221,    32,
      20,    12,    22,    32,    15,    25,    33,    29,    19,    20,
      29,    74,    23,    76,    32,    78,    79,    80,    81,    82,
      31,    11,    73,   388,     3,     4,     5,    32,   306,    34,
      20,    21,    22,    12,    -1,    25,    15,    -1,   261,   262,
      19,    20,    -1,    33,   267,   268,   269,   270,   271,   272,
      11,    -1,    31,   276,   277,   278,   279,   280,   281,    20,
     123,    22,    -1,    -1,    25,   288,   289,    -1,   291,   292,
     293,    32,    32,    -1,    34,   298,   299,   300,   301,   302,
      32,   304,    34,   306,    -1,    -1,    -1,   150,    11,    -1,
      -1,     3,     4,     5,    -1,   318,    -1,    20,    21,    22,
      12,   324,    25,    15,   167,   168,   169,    19,    20,    -1,
      33,    23,    -1,    -1,    -1,    -1,   339,   340,    -1,    31,
      -1,     3,     4,     5,   347,   188,   189,   190,    -1,    -1,
      12,    -1,    11,    15,    -1,    -1,    39,    19,    20,   362,
     363,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    31,
      -1,    11,    -1,    32,    -1,    34,   219,   220,   221,    -1,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    74,    32,    76,    34,    78,    79,    80,    81,    82,
      11,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    20,    21,    22,   261,   262,
      25,    32,    -1,    34,   267,   268,   269,   270,   271,   272,
      11,    -1,    -1,   276,   277,   278,   279,   280,   281,    20,
     123,    22,    -1,    -1,    25,   288,   289,    -1,   291,   292,
     293,    32,    -1,    -1,    -1,   298,   299,   300,   301,   302,
      -1,   304,    11,   306,    -1,    -1,    -1,   150,    11,    -1,
      -1,    20,    21,    22,    -1,   318,    25,    20,    21,    22,
      -1,   324,    25,    32,   167,   168,   169,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,
      11,    -1,    -1,    -1,   347,   188,   189,   190,    -1,    20,
      21,    22,    -1,    -1,    25,    -1,    39,    -1,    11,   362,
     363,    32,    -1,    34,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    25,    11,    -1,    -1,   219,   220,   221,    32,
      -1,    34,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    74,    11,    76,    32,    78,    79,    80,    81,    82,
      11,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    20,
      21,    22,    -1,    32,    25,    34,    -1,    -1,   261,   262,
      -1,    32,    -1,    34,   267,   268,   269,   270,   271,   272,
      -1,    -1,    -1,   276,   277,   278,   279,   280,   281,    -1,
     123,    -1,    -1,    -1,    -1,   288,   289,    -1,   291,   292,
     293,    -1,    -1,    -1,    -1,   298,   299,   300,   301,   302,
      -1,   304,    11,   306,    -1,    -1,    -1,   150,    11,    -1,
      -1,    20,    21,    22,    -1,   318,    25,    20,    21,    22,
      -1,   324,    25,    32,   167,   168,   169,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,
      11,    -1,    -1,    -1,   347,   188,   189,   190,    -1,    20,
      21,    22,    -1,    -1,    25,    39,    -1,    -1,    11,   362,
     363,    32,    -1,    34,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    25,    11,    -1,    -1,   219,   220,   221,    32,
      -1,    34,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      74,    11,    76,    31,    78,    79,    80,    81,    82,    -1,
      20,    21,    22,    -1,    -1,    25,    11,    -1,    -1,    -1,
      -1,    -1,    32,    97,    34,    20,    21,    22,   261,   262,
      25,    -1,    -1,    -1,   267,   268,   269,   270,   271,   272,
      -1,    -1,    -1,   276,   277,   278,   279,   280,   281,   123,
      -1,    -1,    -1,    -1,    -1,   288,   289,    -1,   291,   292,
     293,    -1,    -1,    -1,    -1,   298,   299,   300,   301,   302,
      -1,   304,    11,   306,    -1,    -1,   150,    -1,    11,    -1,
      -1,    20,    21,    22,    -1,   318,    25,    20,    21,    22,
      -1,   324,    25,    32,   168,   169,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,
      -1,    11,    -1,    -1,   347,   189,   190,    -1,    -1,    -1,
      20,    21,    22,    -1,    39,    25,    -1,    -1,    11,   362,
     363,    -1,    32,    -1,    34,    -1,    -1,    20,    21,    22,
      -1,    -1,    25,    26,    11,    -1,   220,   221,    31,    -1,
      33,    -1,    -1,    20,    21,    22,    -1,    -1,    25,    74,
      11,    76,    -1,    78,    79,    80,    81,    82,    -1,    20,
      21,    22,    -1,    -1,    25,    11,    -1,    -1,    -1,    -1,
      31,    96,    33,    -1,    20,    21,    22,   261,   262,    25,
      -1,    -1,    -1,   267,   268,   269,    32,   271,   272,    -1,
      -1,    -1,   276,   277,   278,    -1,   280,   281,   123,    -1,
      -1,    -1,    -1,    -1,   288,   289,    -1,   291,   292,   293,
      -1,    -1,    -1,    -1,   298,   299,   300,    11,   302,    -1,
     304,    -1,   306,    -1,    -1,   150,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,   318,    -1,    -1,    -1,    11,    33,
     324,    -1,    -1,   168,   169,    -1,    39,    20,    21,    22,
      -1,    -1,    25,    -1,    -1,   339,   340,    -1,    11,    -1,
      33,    -1,    -1,   347,   189,   190,    -1,    20,    21,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,   362,   363,
      33,    74,    -1,    76,    -1,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,   220,   221,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    11,    29,    30,    31,    -1,    -1,
     123,    -1,    -1,    20,    21,    22,   261,   262,    25,    11,
      -1,    -1,   267,   268,    31,    32,   271,   272,    20,    21,
      22,   276,   277,    25,    -1,   280,   281,   150,    -1,    -1,
      -1,    33,    -1,   288,   289,    -1,   291,   292,   293,    -1,
      -1,    -1,    -1,   298,   299,   168,   169,   302,    11,   304,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    25,   318,    -1,    -1,   189,   190,    11,   324,
      33,    -1,    -1,    -1,    -1,    39,    -1,    20,    21,    22,
      -1,    -1,    25,    -1,   339,   340,    -1,    -1,    -1,    -1,
      33,    11,   347,    -1,    -1,    -1,    -1,   220,   221,    -1,
      20,    21,    22,    -1,    -1,    25,    -1,   362,   363,    -1,
      74,    11,    76,    33,    78,    79,    80,    81,    82,    -1,
      20,    21,    22,    -1,    -1,    25,    11,    -1,    -1,    -1,
      -1,    -1,    11,    33,    -1,    20,    21,    22,   261,   262,
      25,    20,    21,    22,   267,    -1,    25,    32,   271,   272,
      -1,    -1,    -1,   276,    33,    -1,    -1,   280,   281,   123,
      -1,    -1,    -1,    11,    -1,   288,   289,    -1,   291,   292,
     293,    39,    20,    21,    22,   298,    -1,    25,    11,   302,
      -1,   304,    -1,   306,    -1,    33,   150,    20,    21,    22,
      -1,    -1,    25,    11,    -1,   318,    -1,    -1,    -1,    -1,
      33,   324,    20,    21,    22,   169,    74,    25,    76,    11,
      78,    79,    80,    81,    82,    33,   339,   340,    20,    21,
      22,    -1,    -1,    25,   347,    -1,   190,    11,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    11,    20,    21,    22,   362,
     363,    25,    26,    -1,    20,    21,    22,    31,    32,    25,
      -1,    -1,    -1,    -1,    -1,   123,     1,   221,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    11,
      -1,    -1,   150,    -1,    29,    30,    31,    -1,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,   261,   262,    31,
      32,   169,    -1,    -1,    -1,    -1,    -1,   271,   272,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   280,   281,    20,    21,
      22,    -1,   190,    25,   288,   289,    -1,   291,   292,   293,
      32,    -1,    -1,    -1,    11,    -1,    -1,    -1,   302,    -1,
     304,    -1,   306,    20,    21,    22,    -1,    11,    25,    -1,
      -1,    -1,    -1,   221,   318,    32,    20,    21,    22,    -1,
     324,    25,    -1,    11,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    11,    20,    21,    22,   339,   340,    25,    -1,    -1,
      20,    21,    22,   347,    32,    25,    11,    -1,    -1,    -1,
      -1,    -1,    32,   261,   262,    20,    21,    22,   362,   363,
      25,    -1,    -1,   271,   272,    11,    -1,    32,    -1,    -1,
      -1,    -1,   280,   281,    20,    21,    22,    -1,    11,    25,
     288,   289,    -1,   291,   292,   293,    32,    20,    21,    22,
      -1,    11,    25,    -1,   302,    -1,   304,    11,   306,    32,
      20,    21,    22,    -1,    -1,    25,    20,    21,    22,    -1,
     318,    25,    32,    11,    -1,    -1,   324,    -1,    32,    11,
      -1,    -1,    20,    21,    22,    -1,    -1,    25,    20,    21,
      22,   339,   340,    25,    32,    11,    -1,    -1,    -1,   347,
      32,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,   362,   363,     1,    -1,     3,     4,
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
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
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
      11,    -1,    25,    20,    21,    22,    11,    -1,    25,    20,
      21,    22,    -1,    -1,    25,    20,    21,    22,    -1,    -1,
      25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    36,    37,    38,    39,    40,    45,    46,    19,
       0,    38,    33,    31,    32,    41,    29,    47,    18,    43,
      44,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    19,    20,    23,    29,    30,    31,
      39,    40,    47,    48,    49,    50,    51,    52,    55,    56,
      57,    58,    59,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    72,    73,    74,    75,    76,    77,    78,
      79,    19,    32,    34,    31,    31,    31,    65,    31,    31,
      31,    31,    31,    31,    26,    31,    19,    77,    73,    67,
       1,    30,    49,    33,    11,    22,    25,    20,    21,    42,
      44,    67,    19,    53,    66,    57,    67,    33,    19,    57,
      58,    60,    68,    57,    57,    57,    27,    28,    67,    71,
      19,    65,    32,    80,    32,    19,    58,    73,    75,    76,
      77,    47,    32,    33,    32,    32,    32,    32,    32,    32,
      32,    67,    81,    49,    54,    67,    49,    33,    33,    32,
      34,     7,    33,    67,    49,    53,    32,    49,    45,    46,
      48,     3,     4,     5,    12,    15,    19,    20,    23,    31,
      57,    59,    63,    68,    72,    73,    74,    75,    76,    77,
      78,    79,     3,     4,     5,    12,    15,    19,    20,    23,
      31,    59,    63,    68,    72,    73,    74,    75,    76,    77,
      78,    79,    13,    14,    61,    62,    11,    13,    14,    61,
      62,    29,    31,     3,     4,     5,    12,    15,    19,    20,
      23,    31,    57,    59,    63,    68,    72,    73,    74,    75,
      76,    77,    78,    79,     6,     8,     9,    10,    16,    17,
      29,    39,    40,    45,    46,    47,    50,    51,    52,    55,
      56,    64,    65,    69,    70,    11,    19,    66,    33,    31,
      30,    31,    31,    31,    77,    73,    67,    22,    25,    20,
      21,    31,    31,    77,    73,    67,    22,    25,    20,    21,
      31,    31,    13,    14,    19,    58,    61,    62,    31,    31,
      32,    80,    31,    31,    31,    77,    73,    67,    22,    25,
      20,    21,    31,    31,    31,    65,    31,    31,    48,    33,
      31,    33,    13,    14,    19,    58,    61,    62,    26,    32,
      41,    60,    57,    32,    80,    32,    73,    75,    76,    77,
      60,    57,    32,    73,    75,    76,    77,    57,    57,    31,
      31,    57,    57,    81,    60,    57,    32,    80,    32,    73,
      75,    76,    77,    67,    53,    57,    33,    71,    19,    30,
      32,    41,    31,    31,    19,    58,    65,    66,    67,    29,
      47,    43,    32,    32,    81,    32,    32,    32,    32,    57,
      57,    32,    32,    32,    32,    32,    81,    32,    33,    32,
      32,    32,    29,    47,    43,    57,    57,    30,    32,    32,
      32,    32,    32,    49,    54,    49,    33,    33,    30,    32,
      32,    32,    42,     7,    33,    42,    47,    49,    53,    47,
      32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    41,    42,
      40,    40,    40,    43,    43,    44,    45,    46,    47,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    51,    51,    52,    53,    53,    54,    54,
      55,    56,    57,    57,    58,    58,    59,    60,    60,    60,
      60,    61,    62,    63,    64,    65,    65,    65,    66,    67,
      67,    68,    68,    68,    69,    70,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    80,    79,    79,
      81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     0,
       7,     4,     5,     3,     1,     2,     2,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     7,     9,     1,     0,     1,     0,
       3,     1,     3,     3,     1,     1,     4,     1,     1,     1,
       1,     4,     4,     4,     5,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     5,     5,     1,     1,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     3,     1,     1,     1,     0,     5,     3,
       3,     1
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
#line 121 "bison/clang_syntax.y"
                    {
        tree = (yyval.node);
    }
#line 2439 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 127 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2449 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 132 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2457 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 138 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2465 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 141 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2473 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 147 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2481 "bison/clang_syntax.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 153 "bison/clang_syntax.y"
                           {
        context++;
        pushScopeStack(&scope, context);
    }
#line 2490 "bison/clang_syntax.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 157 "bison/clang_syntax.y"
               {
        populateParams(symbolTable);
    }
#line 2498 "bison/clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleFDeclaration '(' $@1 params ')' $@2 compoundStmt  */
#line 159 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-3].node);
        (yyval.node)->node3 = (yyvsp[0].node);
        popScopeStack(&scope);
    }
#line 2510 "bison/clang_syntax.tab.c"
    break;

  case 11: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 166 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2520 "bison/clang_syntax.tab.c"
    break;

  case 12: /* funcDeclaration: simpleFDeclaration '(' ')' '{' '}'  */
#line 171 "bison/clang_syntax.y"
                                         {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-4].node);
    }
#line 2529 "bison/clang_syntax.tab.c"
    break;

  case 13: /* params: params ',' param  */
#line 178 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2539 "bison/clang_syntax.tab.c"
    break;

  case 14: /* params: param  */
#line 183 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2547 "bison/clang_syntax.tab.c"
    break;

  case 15: /* param: TYPE ID  */
#line 189 "bison/clang_syntax.y"
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
#line 2567 "bison/clang_syntax.tab.c"
    break;

  case 16: /* simpleVDeclaration: TYPE ID  */
#line 207 "bison/clang_syntax.y"
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
#line 2587 "bison/clang_syntax.tab.c"
    break;

  case 17: /* simpleFDeclaration: TYPE ID  */
#line 225 "bison/clang_syntax.y"
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
#line 2607 "bison/clang_syntax.tab.c"
    break;

  case 18: /* compoundStmt: '{' stmtList '}'  */
#line 242 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2615 "bison/clang_syntax.tab.c"
    break;

  case 19: /* stmtList: stmtList primitiveStmt  */
#line 248 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2625 "bison/clang_syntax.tab.c"
    break;

  case 20: /* stmtList: stmtList error  */
#line 253 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 2633 "bison/clang_syntax.tab.c"
    break;

  case 21: /* stmtList: primitiveStmt  */
#line 256 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2641 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: exprStmt  */
#line 262 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2649 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: compoundStmt  */
#line 265 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2657 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: condStmt  */
#line 268 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2665 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: iterStmt  */
#line 271 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2673 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: returnStmt  */
#line 274 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2681 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: setStmt  */
#line 277 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2689 "bison/clang_syntax.tab.c"
    break;

  case 28: /* primitiveStmt: inOP  */
#line 280 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2697 "bison/clang_syntax.tab.c"
    break;

  case 29: /* primitiveStmt: outOP  */
#line 283 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2705 "bison/clang_syntax.tab.c"
    break;

  case 30: /* primitiveStmt: varDeclaration  */
#line 286 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2713 "bison/clang_syntax.tab.c"
    break;

  case 31: /* primitiveStmt: funcDeclaration  */
#line 289 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2721 "bison/clang_syntax.tab.c"
    break;

  case 32: /* exprStmt: expression ';'  */
#line 295 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2729 "bison/clang_syntax.tab.c"
    break;

  case 33: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 301 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2739 "bison/clang_syntax.tab.c"
    break;

  case 34: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 306 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 2750 "bison/clang_syntax.tab.c"
    break;

  case 35: /* iterStmt: FOR_KW '(' iterAssign ';' iterExp ';' iterAssign ')' primitiveStmt  */
#line 315 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 2762 "bison/clang_syntax.tab.c"
    break;

  case 36: /* iterAssign: assignExp  */
#line 324 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2770 "bison/clang_syntax.tab.c"
    break;

  case 37: /* iterAssign: %empty  */
#line 326 "bison/clang_syntax.y"
        {(yyval.node) = NULL;}
#line 2776 "bison/clang_syntax.tab.c"
    break;

  case 38: /* iterExp: simpleExp  */
#line 330 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2784 "bison/clang_syntax.tab.c"
    break;

  case 39: /* iterExp: %empty  */
#line 332 "bison/clang_syntax.y"
        {(yyval.node) = NULL;}
#line 2790 "bison/clang_syntax.tab.c"
    break;

  case 40: /* returnStmt: RETURN_KW expression ';'  */
#line 336 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2799 "bison/clang_syntax.tab.c"
    break;

  case 41: /* setStmt: forallOP  */
#line 343 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2807 "bison/clang_syntax.tab.c"
    break;

  case 42: /* pertOP: simpleExp IN_KW ID  */
#line 349 "bison/clang_syntax.y"
                      {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 2819 "bison/clang_syntax.tab.c"
    break;

  case 43: /* pertOP: simpleExp IN_KW setReturner  */
#line 356 "bison/clang_syntax.y"
                                  {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2829 "bison/clang_syntax.tab.c"
    break;

  case 44: /* setReturner: addOP  */
#line 364 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2837 "bison/clang_syntax.tab.c"
    break;

  case 45: /* setReturner: remOP  */
#line 367 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2845 "bison/clang_syntax.tab.c"
    break;

  case 46: /* typeOP: ISSET_KW '(' setParams ')'  */
#line 373 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2854 "bison/clang_syntax.tab.c"
    break;

  case 47: /* setParams: ID  */
#line 380 "bison/clang_syntax.y"
       {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("is_set parameter");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 2865 "bison/clang_syntax.tab.c"
    break;

  case 48: /* setParams: pertOP  */
#line 386 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2873 "bison/clang_syntax.tab.c"
    break;

  case 49: /* setParams: setReturner  */
#line 389 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2881 "bison/clang_syntax.tab.c"
    break;

  case 50: /* setParams: constOP  */
#line 392 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2889 "bison/clang_syntax.tab.c"
    break;

  case 51: /* addOP: ADD_KW '(' pertOP ')'  */
#line 399 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2898 "bison/clang_syntax.tab.c"
    break;

  case 52: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 406 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2907 "bison/clang_syntax.tab.c"
    break;

  case 53: /* selectOP: EXISTS_KW '(' pertOP ')'  */
#line 413 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
    }
#line 2916 "bison/clang_syntax.tab.c"
    break;

  case 54: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 420 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 2926 "bison/clang_syntax.tab.c"
    break;

  case 55: /* expression: assignExp  */
#line 428 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2934 "bison/clang_syntax.tab.c"
    break;

  case 56: /* expression: simpleExp  */
#line 431 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2942 "bison/clang_syntax.tab.c"
    break;

  case 57: /* expression: setReturner  */
#line 434 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2950 "bison/clang_syntax.tab.c"
    break;

  case 58: /* assignExp: ID ASS_OP expression  */
#line 440 "bison/clang_syntax.y"
                         {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("assignment operator");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[0].node);
        typeHandler((yyval.node));
    }
#line 2963 "bison/clang_syntax.tab.c"
    break;

  case 59: /* simpleExp: binLogicalExp  */
#line 451 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2971 "bison/clang_syntax.tab.c"
    break;

  case 60: /* simpleExp: pertOP  */
#line 454 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2979 "bison/clang_syntax.tab.c"
    break;

  case 61: /* constOP: INT  */
#line 461 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST"BMAG" int"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "int");
    }
#line 2988 "bison/clang_syntax.tab.c"
    break;

  case 62: /* constOP: FLOAT  */
#line 465 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" float"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "float");
    }
#line 2997 "bison/clang_syntax.tab.c"
    break;

  case 63: /* constOP: EMPTY  */
#line 469 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST"BMAG" EMPTY"reset);
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "set");
    }
#line 3006 "bison/clang_syntax.tab.c"
    break;

  case 64: /* inOP: IN '(' ID ')' ';'  */
#line 476 "bison/clang_syntax.y"
                      {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, NULL);
    }
#line 3017 "bison/clang_syntax.tab.c"
    break;

  case 65: /* outOP: OUT '(' outConst ')' ';'  */
#line 485 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
    }
#line 3027 "bison/clang_syntax.tab.c"
    break;

  case 66: /* outConst: STRING  */
#line 493 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
    }
#line 3036 "bison/clang_syntax.tab.c"
    break;

  case 67: /* outConst: CHAR  */
#line 497 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
    }
#line 3045 "bison/clang_syntax.tab.c"
    break;

  case 68: /* outConst: simpleExp  */
#line 501 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3053 "bison/clang_syntax.tab.c"
    break;

  case 69: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 507 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3064 "bison/clang_syntax.tab.c"
    break;

  case 70: /* binLogicalExp: unLogicalExp  */
#line 513 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3072 "bison/clang_syntax.tab.c"
    break;

  case 71: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 519 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 3082 "bison/clang_syntax.tab.c"
    break;

  case 72: /* unLogicalExp: relationalExp  */
#line 524 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3090 "bison/clang_syntax.tab.c"
    break;

  case 73: /* relationalExp: relationalExp REL_OP sumExp  */
#line 530 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3101 "bison/clang_syntax.tab.c"
    break;

  case 74: /* relationalExp: sumExp  */
#line 536 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3109 "bison/clang_syntax.tab.c"
    break;

  case 75: /* sumExp: sumExp SUM_OP mulExp  */
#line 542 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3120 "bison/clang_syntax.tab.c"
    break;

  case 76: /* sumExp: mulExp  */
#line 548 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3128 "bison/clang_syntax.tab.c"
    break;

  case 77: /* mulExp: mulExp MUL_OP signedFactor  */
#line 554 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("*/÷ operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3139 "bison/clang_syntax.tab.c"
    break;

  case 78: /* mulExp: signedFactor  */
#line 560 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3147 "bison/clang_syntax.tab.c"
    break;

  case 79: /* signedFactor: factor  */
#line 566 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3155 "bison/clang_syntax.tab.c"
    break;

  case 80: /* signedFactor: SUM_OP signedFactor  */
#line 569 "bison/clang_syntax.y"
                          {
        char auxstr[100];
        strcpy(auxstr, "signed factor ");
        
        (yyval.node) = createNode(strcat(auxstr, (yyvsp[-1].token).t_title));
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);
    }
#line 3168 "bison/clang_syntax.tab.c"
    break;

  case 81: /* factor: ID  */
#line 580 "bison/clang_syntax.y"
       {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("ID");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 3179 "bison/clang_syntax.tab.c"
    break;

  case 82: /* factor: functionCall  */
#line 586 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3187 "bison/clang_syntax.tab.c"
    break;

  case 83: /* factor: '(' simpleExp ')'  */
#line 589 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3195 "bison/clang_syntax.tab.c"
    break;

  case 84: /* factor: constOP  */
#line 592 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3203 "bison/clang_syntax.tab.c"
    break;

  case 85: /* factor: selectOP  */
#line 595 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3211 "bison/clang_syntax.tab.c"
    break;

  case 86: /* factor: typeOP  */
#line 598 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3219 "bison/clang_syntax.tab.c"
    break;

  case 87: /* $@3: %empty  */
#line 604 "bison/clang_syntax.y"
           {
        qtdParams = 0;
    }
#line 3227 "bison/clang_syntax.tab.c"
    break;

  case 88: /* functionCall: ID '(' $@3 callParams ')'  */
#line 607 "bison/clang_syntax.y"
                   {
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[-1].node);
        qtdHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column);

        // typeHandler($$);
    }
#line 3242 "bison/clang_syntax.tab.c"
    break;

  case 89: /* functionCall: ID '(' ')'  */
#line 617 "bison/clang_syntax.y"
                 {
        qtdParams = 0;
        char typestr[11];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
        qtdHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 3255 "bison/clang_syntax.tab.c"
    break;

  case 90: /* callParams: callParams ',' simpleExp  */
#line 628 "bison/clang_syntax.y"
                            {
        qtdParams++;
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3266 "bison/clang_syntax.tab.c"
    break;

  case 91: /* callParams: simpleExp  */
#line 634 "bison/clang_syntax.y"
                {
        qtdParams++;
        (yyval.node) = (yyvsp[0].node);
    }
#line 3275 "bison/clang_syntax.tab.c"
    break;


#line 3279 "bison/clang_syntax.tab.c"

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

#line 640 "bison/clang_syntax.y"

extern void yyerror(const char* a) {
    printf(BRED"[%03d:%03d] ", line, column);
    printf("SYNTAX   ERROR --> ");
    printf("%s\n"reset, a);
    errors++;
}

extern void qtdHandler(char* title, int line, int column){
    int qtdArgs = findArgs(symbolTable, title);
    if(qtdArgs != qtdParams){
        errors_sem++;
        printf(BRED"[%03d:%03d] ", line, column);
        printf("SEMANTIC ERROR --> Wrong number of arguments in function call: %s\n"reset, title);
        printf(BRED"\t\t\t     EXPECTED: %d\n"reset, qtdArgs);
        printf(BRED"\t\t\t          GOT: %d\n"reset, qtdParams);
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
        printf(BRED"[%03d:%03d] ", line, column);
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
