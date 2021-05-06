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
    #include "tac.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    // All things are extern and global, since there was a
    // metric ton of scope issues, and could not be solved without those.
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* a);
    extern char* scopeHandler(char* title, int line, int column);
    extern int scopeHandler2(char* title);
    extern int qtdHandler(char* title, int line, int column);
    extern int line;
    extern int column;
    extern int errors;
    extern int context;
    extern Stack scope;
    extern Symbol symbolTable[1000];
    extern Node* tree;
    int errors_sem;
    int qtdParams;
    int indexCharString = 0;
    int indexReg = 0;
    char lastFType[6]; 
    extern FILE *yyin;

#line 127 "bison/clang_syntax.tab.c"

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
#define YYLAST   6903

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  591

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
       0,   129,   129,   135,   140,   146,   149,   155,   161,   165,
     161,   174,   179,   186,   191,   197,   215,   236,   254,   260,
     265,   268,   274,   277,   280,   283,   286,   289,   292,   295,
     298,   301,   307,   313,   318,   322,   328,   333,   338,   346,
     353,   361,   363,   367,   369,   373,   381,   387,   396,   399,
     405,   413,   419,   422,   425,   432,   440,   448,   459,   464,
     471,   474,   481,   503,   506,   513,   519,   525,   532,   541,
     567,   575,   584,   590,   641,   647,   663,   669,   810,   816,
     867,   873,   924,   930,   933,   968,   979,   982,   985,   988,
     991,   994,  1000,  1000,  1013,  1024,  1031
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

#define YYPACT_NINF (-393)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    54,    90,    21,   200,   272,   421,    65,    84,   198,
    -393,   520,   615,    56,   126,   144,  6205,   629,   186,   -15,
     371,  1413,  1513,  1744,   134,   159,   185,   837,   201,   233,
     236,   297,   306,   307,   887,    39,  1067,  6582,   676,  1080,
    3461,  5184,  5215,  5246,  5277,  5308,  5339,  5370,  5401,  5432,
      13,  1786,  1834,  1852,  1883,  1890,  5463,   263,   270,    71,
    1908,  5494,  5525,   171,   208,    50,   806,  1931,  1946,  1952,
    1977,   372,   305,   144,  1080,   102,  1117,   344,  1176,  1117,
    1117,   412,  1007,   422,   837,   239,   439,  2002,   252,   117,
    5556,   727,  5587,  5618,    81,  1067,    39,    39,    39,   479,
     586,   191,   545,   404,   555,   291,   573,  5649,  1644,   334,
     606,   563,  2275,   529,   534,   614,   638,   657,   582,   661,
     670,   675,  2018,  1213,  2025,    80,   258,  1145,  2075,  2091,
     782,  6611,   194,  6640,  2125,  2173,  2191,   951,   697,   738,
      23,   587,  6234,   593,   750,   119,  6263,  5680,   724,  5711,
    5742,  2222,  1213,   636,  6669,    -4,  5773,  2229,    45,  6698,
    6292,  5804,   756,  6321,  5835,  5866,  6727,  5897,  6350,  5928,
    5959,   766,   841,  5990,  2291,  2316,  2322,   849,   860,   871,
     885,  2260,   172,  1080,  1080,   647,  2338,  2353,  2366,  2414,
    2422,  2464,    16,   538,   821,   879,  2472,  2512,  2525,  2561,
    1751,  2247,  2297,   886,   913,   920,   921,  2372,   312,  1117,
    1080,  2430,  2586,  2711,  2761,  2803,  2851,    67,   485,   511,
    1324,  2863,  2869,  2876,  2884,  1237,   155,   262,   265,   930,
     931,   936,   937,   217,  1080,   271,   303,   311,   331,   340,
     351,   361,  6582,   274,   122,   354,   531,   952,   953,   960,
     964,    86,   789,  1213,  1080,    92,  1295,  1311,  1331,  1346,
    1397,  1405,   129,   149,    15,   190,  1447,  1455,  1495,  1547,
     967,   975,   982,   837,  1001,  1005,   706,  1045,   804,  1006,
    1384,  1723,  2062,  2401,  2740,  3227,  3871,   811,  4256,  4564,
     829,   878,   948,  1008,  1009,  1010,  1011,   204,  1080,   985,
    1015,  1024,  1034,  1037,  1041,  1046,  1290,  6021,   988,  1059,
    6052,   141,  6083,  1176,  1117,  1117,  1058,   668,  2578,   646,
     652,  1080,   172,   172,   172,  1176,  1117,  1117,  1077,  2899,
     526,   653,  1117,   312,   312,   312,   759,   778,   779,  1070,
    1071,  1078,  1079,   322,  1080,   784,   786,   787,   822,   827,
     844,   852,   863,  1176,  1117,  1117,  1089,   728,   864,  2907,
    1213,  1176,  1117,  1117,  1100,   749,  1555,   215,   892,  1213,
     789,   789,   789,  1080,   102,  1117,  1094,  1007,  1114,  4595,
     414,  4626,  1176,  1117,  1117,  1120,   874,   904,   114,   146,
     223,  1110,  1111,  1112,  1116,   234,  1080,   249,   318,   367,
     386,   408,   469,   487,   493,  4657,  1260,  1128,   144,  1126,
     915,   939,  1138,  2604,  1213,  2619,   717,  1223,  2639,  2655,
    1144,   949,   958,  1172,  2920,   568,  1350,  2947,  2959,  1176,
    1117,  1117,  1165,   926,   983,  1153,   986,   991,  1175,   369,
    1213,   379,   598,  1168,   992,   996,  1190,  1573,  1213,  1591,
     349,   413,  1607,  1613,   997,  1178,  1056,  4688,  1187,  1197,
    1201,   144,  1205,  1096,  1123,  1235,  1215,  1213,  1222,  1176,
    1117,  1117,  1247,   973,  1127,  1983,  1238,  1239,  1139,  6379,
    6114,   669,  2661,  2677,  2692,   951,   712,  2974,  2994,  3000,
     951,  1245,  1161,  1166,  1273,  1171,  1213,  1181,   403,   411,
     418,   951,   813,  3006,  1638,  1663,  1679,   951,   830,  6756,
     194,  6785,  1252,  1255,  6408,  4719,   893,  1257,  1264,  1265,
     951,   900,  1267,  1183,  1191,  1289,   507,  1213,   546,  6145,
     305,  1269,  2705,  1276,  1203,  1227,  1246,   951,   901,  1278,
     456,  1287,  1685,  6437,  4750,  1291,  6466,  4781,  4812,  4843,
    4874,   305,  1293,  1294,   551,   658,   663,   951,   999,  1301,
    2753,  3026,  1302,  1258,   491,  1736,  4905,  6814,    -4,  4936,
    1308,  1309,  1315,   664,  6176,  1275,  6843,  6495,  4967,  1318,
    6582,  4998,   723,  6524,  5029,  5060,  6872,  5091,  6553,  5122,
    5153
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -393,  -393,  -393,  1320,     0,     1,  -299,   187,  -392,  1281,
       5,     6,   -12,     4,   -32,  -124,  -118,  -113,  -141,   848,
    -102,  -101,  3969,   -14,   452,  -290,   791,  1130,  1469,   -98,
     -17,   -39,  3782,  1808,   -86,   -81,  1000,  4093,  2962,  3598,
    3372,  3188,  2755,  2147,  2486,  -212,  -338
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,    40,    41,    15,    99,    19,    20,
     171,   172,    42,   307,    44,    45,    46,    47,   103,   144,
      48,    49,    50,    51,    52,   111,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   119,    63,    64,    65,
      66,    67,    68,    69,    70,   123,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,     6,    17,     5,     6,     7,     8,   281,     7,     8,
      77,    92,   408,   282,   162,   308,   481,    72,   283,    73,
      43,    -2,   442,   409,   -64,   186,   -76,   -63,   -42,   284,
     285,   360,     1,   286,   306,   420,   104,   -76,   321,     1,
     370,   173,    21,    22,    23,   288,   -64,   -76,   -63,   -76,
     289,    28,    29,    30,    31,   -96,   306,   -96,    86,    35,
     186,   -76,   211,   435,   110,   211,   211,   121,   186,   516,
      39,   443,   -76,     9,    -8,    96,   486,   -95,   -63,   -95,
     235,   461,    94,   -76,   226,   227,   228,   130,    14,   332,
      10,   -47,   462,   229,   230,   231,   232,   -85,    12,   143,
     233,   147,   502,   -64,   -61,   414,   -85,   -85,   -85,   256,
     508,   -85,   234,   -47,   287,    13,   309,   365,   -85,   280,
     -85,   102,   161,   299,   -64,   -65,   -64,   164,   225,   521,
      94,   276,   277,   -65,   169,   -42,   278,   279,   256,   491,
     -63,    92,   -65,   -65,   -65,   440,   -65,   -65,   -65,   124,
     173,   369,   -43,   448,   -65,    16,   -65,   -66,   538,    -8,
     -74,   -63,    18,   -63,   173,    74,   -65,   173,   186,   186,
     186,   -74,   173,   407,   467,   174,   175,   176,   -66,   522,
     -66,   -74,   -63,   -74,   177,   178,   179,   180,   -65,   558,
      75,   181,   182,    95,   211,   211,   186,    21,    22,    23,
      -4,   -78,   225,   184,   -63,    71,    28,    29,    30,    31,
     371,   345,   -78,    86,    35,   -78,    76,    36,    -4,   -74,
     186,   496,   -78,   131,   -78,    39,   -75,   -44,   -85,   -17,
     -74,   -16,    78,   455,   -67,   386,   -85,   -75,   256,   256,
     186,   -74,   -92,   -92,   -92,   -85,    43,   -75,   357,   -75,
     -85,   -92,   -92,   -92,   -92,   -67,   376,   -67,   -92,   -92,
     -91,   527,   -92,   -75,    79,   473,   -85,    80,   -85,   -73,
     -92,   122,    -5,   -66,   -75,    92,   -67,   -92,   -92,   -92,
     -73,   -91,   -91,   -91,   186,   -75,   -92,   -92,   -92,   -92,
      -5,   -73,   397,   -92,   -92,   -66,    93,   -92,   -67,   110,
     211,   211,   -64,   -60,   -91,   -92,   359,   186,   186,   186,
     186,   110,   211,   211,   -90,   200,   201,   202,   211,   211,
     211,   211,   -48,   133,   203,   204,   205,   206,    81,   -90,
     186,   207,   208,   -85,    -9,   104,   -90,    82,    83,   110,
     211,   211,   -49,   210,   -48,   -64,   256,   110,   211,   211,
     -90,   -89,   -90,   433,   -85,   256,   256,   256,   256,   186,
     -73,   211,   -88,   186,   -49,   -66,   -52,   477,   110,   211,
     211,   -73,   -86,   -89,   -66,   -66,   -66,   107,   -48,   -66,
     -94,   -73,   186,   -73,   -88,   281,   -66,   281,   -66,   476,
     -87,   282,   186,   282,   -86,   480,   283,   -49,   283,   -48,
     256,   -48,   -94,   -14,   -15,   -14,   -15,   284,   285,   284,
     285,   286,   -87,   286,   -50,   110,   211,   211,   -49,   -89,
     -49,    -6,   -55,   288,   -77,   288,   256,   579,   289,   -56,
     289,   115,    -8,   371,   256,   -77,   -50,   132,   -77,    -6,
     -89,   120,   -89,   281,   -55,   -77,   460,   -77,   515,   282,
     -85,   -56,   281,   256,   283,   110,   211,   211,   282,   -85,
     -85,   -85,   281,   283,   -85,   284,   285,   -93,   282,   286,
      85,   299,   -85,   283,   284,   285,   299,   544,   286,   547,
     -88,   288,   256,   173,   284,   285,   289,   299,   286,   -93,
     288,   187,   287,   299,   287,   289,   -74,   280,   -47,   280,
     288,   -88,   -57,   -88,   -86,   289,   299,   -74,   242,   276,
     277,   276,   277,   256,   278,   279,   278,   279,   -94,   -47,
      -3,   -47,   -76,   299,   -57,   -86,   187,   -86,   212,   309,
     212,   212,   212,   -76,   187,   578,   333,   -75,    -3,   -94,
     -64,   -94,   -67,   299,   584,   -64,   236,   574,   -75,   -74,
     287,   -67,   -67,   -67,   589,   280,   -67,   -87,   581,   287,
     -74,   135,   -50,   -67,   280,   -67,   136,   276,   277,   287,
     -74,    84,   278,   279,   280,   257,   276,   277,   -87,   -73,
     -87,   278,   279,   -50,   225,   -50,   276,   277,   -41,   300,
     -73,   278,   279,   225,   -33,   134,   -33,   -33,   -33,   -33,
     154,   -33,   -33,   -33,   257,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -72,    -7,   -33,   -91,   -13,   151,
     -13,   152,   -33,   -33,   -33,   137,   -91,   -91,   -91,   -11,
     503,   -91,   152,    -7,   187,   187,   187,   -34,   -53,   -34,
     -34,   -34,   -34,   159,   -34,   -34,   -34,   -11,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -75,   -64,   -34,
     212,   212,   187,   225,   225,   -34,   -34,   -34,   -75,   -55,
     -70,   -92,   -92,   -92,   -56,   -93,   -12,   346,   -75,   -64,
     -92,   -92,   -92,   -92,   415,   424,   187,   -92,   -92,   -71,
     -55,   -92,   -55,   138,   -12,   -56,   -93,   -56,   -93,   -92,
     413,   530,   139,    73,   257,   257,   187,   -30,   -62,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   559,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -18,   -73,   -30,
     149,   -92,   -92,   -92,   -57,   -30,   -30,   -30,   570,   -73,
     -92,   -92,   -92,   -92,   532,   -18,   152,   -92,   -92,   -73,
     187,   -92,   -92,   -92,   -92,   -57,   157,   -57,   398,   -92,
     439,   -92,   -92,   -92,   -92,   212,   212,   212,   -92,   -92,
     -65,   150,   -92,   187,   187,   187,   187,   212,   212,   212,
     -92,   447,   -10,   155,   212,   212,   212,   212,   166,   -66,
     -67,   -65,   244,   245,   246,   -91,   187,   -90,   -48,   310,
     -10,   247,   248,   249,   250,   212,   212,   212,   251,   252,
     -66,   -67,   257,   212,   212,   212,   -91,   -78,   -90,   -48,
     254,   257,   257,   257,   257,   187,    97,   212,   -78,   187,
     188,   -78,   -76,   -49,   212,   212,   212,   379,   -89,   -78,
      21,    22,    23,   -76,   381,   540,   322,   152,   187,    28,
      29,    30,    31,   -76,   -49,   -88,    34,    35,   187,   -89,
      36,   -65,   542,   -47,   152,   188,   257,   213,    39,   188,
     213,   213,   311,   188,   -86,   225,   -88,   -92,   -92,   -92,
     313,   212,   212,   212,   -47,   237,   -92,   -92,   -92,   -92,
     -78,   314,   257,   -92,   -92,   -86,   441,   -92,   -85,   323,
     257,   -78,   315,   225,   -78,   -92,   466,   -85,   -85,   -85,
     -66,   -78,   -85,    84,   258,   225,   316,   325,    85,   257,
     -85,   212,   212,   212,   449,   551,   -64,    73,   301,   -92,
     -92,   -92,   553,   563,   152,   152,   468,   300,   -92,   -92,
     -92,   -92,   300,   258,   326,   -92,   -92,   483,   257,   -92,
     -64,   327,   328,   300,   290,   291,   292,   -92,   495,   300,
     -64,   353,   354,   293,   294,   295,   296,   355,   356,   -64,
     297,   484,   300,   188,   188,   188,   -92,   -92,   -92,   257,
     -67,   488,   298,   361,   362,   -92,   -92,   -92,   -92,   300,
     489,   363,   -92,   -92,   225,   364,   -92,   -64,   373,   213,
     213,   188,   -64,   -64,   -92,   526,   374,   -64,   225,   300,
     174,   175,   176,   375,   406,   497,   347,   -91,   499,   177,
     178,   179,   180,   500,   505,   188,   181,   182,   506,   509,
     183,   573,   377,   152,   116,   117,   378,   380,   184,   382,
     383,   384,   385,   258,   258,   188,   -31,   -90,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -48,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -49,   -64,   -31,   -89,
      21,    22,    23,   -88,   -31,   -31,   -31,   412,   -86,    28,
      29,    30,    31,   174,   175,   176,    86,    35,   511,   188,
      36,   -41,   177,   178,   179,   180,   423,   399,    39,   181,
     182,   429,   430,   183,   188,   213,   213,   -64,   438,   431,
     432,   184,   188,   188,   188,   188,   188,   213,   213,   446,
     200,   201,   202,   213,   213,   213,   213,   457,   518,   203,
     204,   205,   206,   459,   -64,   188,   207,   208,   225,   465,
     209,   469,   470,   471,   188,   213,   213,   472,   210,   485,
     225,   258,   188,   213,   213,   519,   -77,   479,   482,   528,
     258,   258,   258,   258,   188,    97,   213,   -77,   188,   189,
     -77,   -61,   -64,   188,   213,   213,   487,   -64,   -77,   174,
     175,   176,   -94,   490,   494,   498,   501,   188,   203,   178,
     179,   206,   -87,   535,   -64,   108,   208,   188,   536,   209,
     504,   507,   -64,   -94,   189,   258,   214,   210,   189,   214,
     214,   510,   189,   -87,   -50,   555,   244,   245,   246,   512,
     188,   213,   213,   556,   238,   247,   248,   249,   250,   513,
     514,   258,   251,   252,   -77,   -50,   253,   517,   -55,   258,
     336,   337,   338,   323,   254,   -77,   520,   -94,   -77,   339,
     340,   341,   342,   259,   -87,   -77,   343,   -56,   258,   -55,
     188,   213,   213,   174,   175,   176,   525,   302,   344,   -93,
     -62,   -60,   177,   178,   179,   180,   301,   534,   -56,   475,
     182,   301,   259,   183,   537,   548,   -57,   258,   549,   -50,
     -93,   184,   301,   388,   389,   390,   -55,   -56,   301,   554,
     557,   560,   391,   392,   393,   394,   -91,   -57,   561,   395,
     564,   301,   189,   189,   189,   -91,   -91,   -91,   258,   565,
     -91,   396,   -90,    11,   568,   571,   -93,   -91,   301,   -91,
      37,   -90,   -90,   -90,   575,   -78,   -90,   580,   214,   214,
     189,   -57,   -48,   -90,   334,   -90,   -78,   582,   301,   -78,
     586,   -48,   -48,   -48,   100,   348,   -48,   -49,   545,     0,
       0,   -77,     0,   -48,   189,   -48,   -49,   -49,   -49,     0,
     334,   -49,   -77,     0,     0,   -77,     0,   458,   -49,     0,
     -49,     0,   259,   259,   189,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,   -23,   -89,     0,
       0,     0,     0,   -23,   -23,   -23,   -88,   -89,   -89,   -89,
       0,     0,   -89,     0,   -65,   -88,   -88,   -88,   189,   -89,
     -88,   -89,     0,   -65,   -65,   -65,   400,   -88,   -65,   -88,
       0,     0,     0,   189,   214,   214,   -65,     0,     0,     0,
       0,   189,   189,   189,   189,   189,   214,   214,   -80,     0,
       0,     0,   214,   214,   214,   214,   -82,   -80,   372,   -80,
       0,     0,   -80,     0,   189,   -82,   -82,   -82,     0,   -80,
     -82,   -80,     0,   189,   214,   214,     0,   -82,     0,   -82,
     259,   189,   214,   214,     0,     0,     0,     0,     0,   259,
     259,   259,   259,   189,     0,   214,   -83,   189,   190,     0,
       0,     0,   189,   214,   214,   -83,   -83,   -83,     0,     0,
     -83,     0,     0,     0,   -66,     0,   189,   -83,     0,   -83,
       0,     0,     0,   -66,   -66,   -66,   189,     0,   -66,     0,
       0,     0,     0,   190,   259,   215,   -66,   215,   215,   215,
       0,   190,     0,     0,     0,     0,     0,     0,   -86,   189,
     214,   214,     0,   239,     0,     0,   -84,   -86,   -86,   -86,
     259,     0,   -86,     0,     0,   -84,   -84,   -84,   259,   -86,
     -84,   -86,     0,     0,   -94,     0,     0,   -84,     0,   -84,
       0,     0,   260,   -94,   -94,   -94,     0,   259,   -94,   189,
     214,   214,   -87,     0,     0,   -94,   303,   -94,     0,     0,
       0,   -87,   -87,   -87,     0,   302,   -87,     0,   -79,     0,
     302,   260,     0,   -87,   -81,   -87,   259,   -79,   372,   -79,
       0,   302,   -79,   -81,   -81,   -81,     0,   302,   -81,   -79,
       0,   -79,     0,     0,     0,   -81,     0,   -81,     0,   -50,
     302,   190,   190,   190,     0,   -85,     0,   259,   -50,   -50,
     -50,     0,     0,   -50,   -85,   -85,   -85,   302,     0,   -85,
     -50,     0,   -50,     0,   -55,   243,   -51,   215,   215,   190,
       0,     0,     0,   -55,   -55,   -55,     0,   302,   -55,     0,
     -56,     0,     0,     0,   349,   -55,   -93,   -55,     0,   -56,
     -56,   -56,     0,   190,   -56,   -93,   -93,   -93,     0,     0,
     -93,   -56,     0,   -56,     0,     0,     0,   -93,     0,   -93,
       0,   260,   260,   190,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -57,     0,     0,
       0,     0,   -22,   -22,   -22,   -67,   -57,   -57,   -57,     0,
       0,   -57,   -65,     0,   -67,   -67,   -67,   190,   -57,   -67,
     -57,   -65,   -65,   -65,     0,   401,   -65,   -67,     0,     0,
       0,     0,   215,   215,   215,     0,     0,     0,     0,     0,
     190,   190,   190,   190,   215,   215,   215,   -91,     0,     0,
       0,   215,   215,   215,   215,     0,   -91,   -91,   -91,     0,
       0,   -91,     0,   190,     0,     0,     0,     0,     0,   -91,
       0,     0,   215,   215,   215,     0,     0,     0,     0,   260,
     215,   215,   215,     0,     0,     0,     0,     0,   260,   260,
     260,   260,   190,     0,   215,   -90,   190,   191,     0,     0,
       0,   215,   215,   215,   -90,   -90,   -90,     0,     0,   -90,
       0,     0,     0,   -48,     0,   190,     0,   -90,     0,     0,
       0,     0,   -48,   -48,   -48,   190,     0,   -48,     0,     0,
       0,     0,   191,   260,   216,   -48,   112,   216,   216,     0,
     191,     0,     0,     0,   -49,     0,     0,     0,   215,   215,
     215,   -89,   240,   -49,   -49,   -49,     0,     0,   -49,   260,
     -89,   -89,   -89,     0,     0,   -89,   -49,   260,     0,   -88,
       0,     0,     0,   -89,     0,     0,     0,     0,   -88,   -88,
     -88,   261,     0,   -88,     0,     0,   260,     0,   215,   215,
     215,   -88,   -80,     0,     0,   304,     0,     0,     0,     0,
       0,   -80,    98,   -80,   303,     0,   -80,   -82,     0,   303,
     261,     0,     0,   -83,   -80,   260,   -82,   -82,   -82,     0,
     303,   -82,   -83,   -83,   -83,     0,   303,   -83,     0,   -82,
       0,     0,     0,     0,     0,   -83,     0,     0,   -86,   303,
     191,   191,   191,     0,   -85,     0,   260,   -86,   -86,   -86,
       0,     0,   -86,   -85,   -85,   -85,   303,     0,   -85,   406,
     -86,     0,     0,   -84,   317,   -85,   216,   216,   191,     0,
       0,     0,   -84,   -84,   -84,     0,   303,   -84,     0,   -94,
       0,     0,     0,   350,     0,   -84,   -87,     0,   -94,   -94,
     -94,     0,   191,   -94,     0,   -87,   -87,   -87,     0,     0,
     -87,   -94,     0,     0,     0,     0,     0,     0,   -87,     0,
     261,   261,   191,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -79,     0,     0,     0,
       0,   -24,   -24,   -24,     0,   -79,    98,   -79,     0,     0,
     -79,     0,   -81,     0,     0,     0,   191,     0,   -79,     0,
       0,   -81,   -81,   -81,   402,     0,   -81,     0,     0,     0,
       0,   112,   216,   216,   -81,     0,     0,     0,     0,   191,
     191,   191,   191,   112,   216,   216,   -50,     0,     0,     0,
     216,   216,   216,   216,     0,   -50,   -50,   -50,     0,     0,
     -50,     0,   191,     0,     0,     0,     0,     0,   -50,     0,
       0,   112,   216,   216,     0,     0,     0,     0,   261,   112,
     216,   216,     0,     0,     0,     0,     0,   261,   261,   261,
     261,   191,     0,   216,   -55,   191,   198,     0,     0,     0,
     112,   216,   216,   -55,   -55,   -55,     0,     0,   -55,     0,
       0,     0,   -56,     0,   191,     0,   -55,     0,     0,     0,
       0,   -56,   -56,   -56,   191,     0,   -56,     0,     0,     0,
       0,   198,   261,   223,   -56,   223,   223,   223,     0,   198,
       0,     0,     0,   -93,     0,     0,     0,   112,   216,   216,
     -57,   125,   -93,   -93,   -93,     0,     0,   -93,   261,   -57,
     -57,   -57,     0,     0,   -57,   -93,   261,     0,   -66,     0,
       0,     0,   -57,     0,     0,     0,     0,   -66,   -66,   -66,
     268,   -85,   -66,     0,     0,   261,     0,   112,   216,   216,
     -85,   -85,   -85,     0,   148,   -85,   -88,     0,     0,     0,
       0,   317,   -85,   304,     0,   -88,   -88,   -88,   304,   268,
     -88,     0,   -65,     0,   261,     0,     0,   -54,   -67,   304,
       0,   -65,   -65,   -65,     0,   304,   -65,   -67,   -67,   -67,
       0,     0,   -67,   -65,     0,     0,     0,   -66,   304,   198,
     198,   198,     0,   -67,     0,   261,   -66,   -66,   -66,     0,
       0,   -66,   -67,   -67,   -67,   304,     0,   -67,   -66,   -91,
       0,     0,     0,     0,   -67,   223,   223,   198,   -91,   -91,
     -91,     0,     0,   -91,   -90,   304,     0,     0,     0,     0,
     -91,     0,   351,   -90,   -90,   -90,     0,   -48,   -90,     0,
       0,   198,     0,   -85,     0,   -90,   -48,   -48,   -48,     0,
       0,   -48,   -85,   -85,   -85,     0,     0,   -85,   -48,   268,
     268,   198,   -25,   243,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -49,     0,     0,     0,     0,
     -25,   -25,   -25,   -89,   -49,   -49,   -49,     0,     0,   -49,
       0,   -91,   -89,   -89,   -89,   198,   -49,   -89,     0,     0,
     -91,   -91,   -91,   403,   -89,   -91,     0,     0,     0,     0,
     223,   223,   223,     0,     0,     0,     0,     0,   198,   198,
     198,   198,   223,   223,   223,   -88,     0,     0,     0,   223,
     223,   223,   223,   -80,   -88,   -88,   -88,     0,     0,   -88,
       0,   198,   -80,   324,   -80,     0,   -88,   -80,     0,     0,
     223,   223,   223,     0,   -80,     0,     0,   268,   223,   223,
     223,     0,     0,     0,     0,     0,   268,   268,   268,   268,
     198,     0,   223,   -82,   198,   199,     0,     0,     0,   223,
     223,   223,   -82,   -82,   -82,     0,   -83,   -82,     0,     0,
       0,     0,     0,   198,   -82,   -83,   -83,   -83,     0,     0,
     -83,     0,     0,   198,     0,     0,     0,   -83,     0,     0,
     199,   268,   224,     0,   224,   224,   224,     0,   199,     0,
       0,     0,   -86,     0,     0,     0,   223,   223,   223,     0,
     241,   -86,   -86,   -86,     0,     0,   -86,   268,     0,   -84,
       0,     0,     0,   -86,     0,   268,     0,   -90,   -84,   -84,
     -84,     0,     0,   -84,     0,     0,   -90,   -90,   -90,   269,
     -84,   -90,     0,     0,   268,   -94,   223,   223,   223,     0,
       0,     0,     0,   305,   -94,   -94,   -94,     0,     0,   -94,
     -87,     0,   531,     0,     0,     0,   -94,   533,   269,   -87,
     -87,   -87,     0,   268,   -87,     0,     0,     0,   539,     0,
     -79,   -87,     0,     0,   541,     0,     0,     0,     0,   -79,
     324,   -79,     0,     0,   -79,     0,   -81,   552,   199,   199,
     199,   -79,   -50,     0,   268,   -81,   -81,   -81,     0,     0,
     -81,   -50,   -50,   -50,   562,     0,   -50,   -81,   -55,     0,
       0,     0,     0,   -50,   224,   224,   199,   -55,   -55,   -55,
       0,     0,   -55,   -56,   572,     0,     0,     0,     0,   -55,
       0,   352,   -56,   -56,   -56,     0,   -93,   -56,     0,     0,
     199,     0,   -48,     0,   -56,   -93,   -93,   -93,     0,     0,
     -93,   -48,   -48,   -48,     0,     0,   -48,   -93,   269,   269,
     199,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -57,     0,     0,     0,     0,   -26,
     -26,   -26,   -49,   -57,   -57,   -57,     0,     0,   -57,     0,
       0,   -49,   -49,   -49,   199,   -57,   -49,     0,     0,     0,
      87,     0,   404,     0,   197,     0,     0,     0,     0,   224,
     224,   224,     0,     0,     0,     0,     0,   199,   199,   199,
     199,   224,   224,   224,   -89,     0,     0,     0,   224,   224,
     224,   224,     0,   -89,   -89,   -89,     0,     0,   -89,   197,
     199,   222,     0,   222,   222,   222,     0,   197,     0,   224,
     224,   224,     0,     0,     0,     0,   269,   224,   224,   224,
       0,     0,     0,   129,     0,   269,   269,   269,   269,   199,
       0,   224,   -88,   199,     0,     0,     0,     0,   224,   224,
     224,   -88,   -88,   -88,   -80,     0,   -88,     0,   267,     0,
     -82,     0,   199,   -80,   335,   -80,     0,   -83,   -80,   -82,
     -82,   -82,   199,     0,   -82,   -86,   -83,   -83,   -83,     0,
     269,   -83,     0,     0,   -86,   -86,   -86,   267,     0,   -86,
     -84,     0,     0,     0,     0,   224,   224,   224,   -94,   -84,
     -84,   -84,     0,     0,   -84,     0,   269,   -94,   -94,   -94,
       0,   -87,   -94,     0,   269,     0,     0,   318,   197,   197,
     -87,   -87,   -87,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,   269,     0,   224,   224,   224,   -79,     0,
       0,     0,     0,   329,   222,   197,     0,   -79,   335,   -79,
     -81,   305,   -79,     0,     0,     0,   305,     0,     0,   -81,
     -81,   -81,   269,     0,   -81,   -50,     0,   305,     0,   197,
       0,     0,     0,   305,   -50,   -50,   -50,     0,    88,   -50,
       0,   193,     0,     0,     0,   -55,   305,   366,   267,   197,
       0,   -56,     0,   269,   -55,   -55,   -55,   -93,     0,   -55,
     -56,   -56,   -56,   305,     0,   -56,   -93,   -93,   -93,     0,
       0,   -93,     0,     0,     0,     0,   193,   -57,   218,     0,
     218,   218,   218,   305,   193,     0,   -57,   -57,   -57,     0,
       0,   -57,     0,   197,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   222,
     222,     0,     0,     0,     0,     0,   197,   197,   197,   419,
     222,   222,   222,     0,     0,   263,     0,   222,   222,   222,
     428,     0,     0,     0,     0,     0,     0,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   222,
     222,     0,     0,     0,   263,   267,   222,   222,   222,     0,
       0,     0,     0,     0,   267,   267,   267,   453,   197,     0,
     222,     0,   197,     0,     0,     0,     0,   222,   222,   222,
       0,     0,     0,     0,     0,   319,   193,     0,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,   267,
       0,   330,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   222,   222,     0,     0,     0,
       0,     0,     0,     0,     0,   267,   193,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   193,     0,     0,     0,
       0,     0,   267,     0,   222,   222,   222,   196,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,   267,     0,     0,     0,     0,   -27,   -27,   -27,     0,
     193,     0,   196,     0,   221,     0,   221,   221,   221,     0,
     196,     0,     0,     0,     0,   218,   218,   218,     0,     0,
       0,     0,   267,   416,     0,   128,     0,   218,   218,   218,
       0,     0,     0,     0,   425,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,   266,     0,     0,     0,   218,   218,   218,     0,     0,
       0,     0,   263,   218,   218,   218,     0,     0,     0,     0,
       0,   450,     0,     0,     0,   193,     0,   218,     0,   193,
     266,     0,     0,     0,   218,   218,   218,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,     0,
       0,   196,   196,     0,     0,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   218,   218,     0,     0,     0,   221,   196,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,     0,
     263,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,   263,
       0,   218,   218,   218,     0,     0,     0,     0,     0,     0,
       0,   266,   196,     0,     0,     0,   195,     0,   220,     0,
     220,   220,   220,     0,   195,     0,     0,     0,   263,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,   127,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,   -30,     0,   196,     0,     0,   263,
     -30,   -30,   -30,     0,     0,   265,     0,     0,     0,     0,
       0,   221,   221,   221,     0,     0,     0,     0,     0,   196,
     196,   418,     0,   221,   221,   221,     0,     0,     0,     0,
     221,   221,   427,     0,   265,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   221,   221,     0,     0,     0,     0,   266,   221,
     221,   221,     0,     0,     0,   195,   195,   266,   266,   452,
       0,   196,     0,   221,     0,   196,     0,     0,     0,     0,
     221,   221,   221,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   195,     0,   196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,   195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,   221,   221,
       0,     0,     0,     0,     0,   265,   195,     0,   266,     0,
       0,     0,     0,     0,     0,     0,   266,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,     0,   221,   221,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,     0,   194,     0,   219,     0,   219,   219,   219,     0,
     194,     0,     0,     0,   266,   220,   220,   220,     0,     0,
       0,     0,     0,   195,   417,     0,     0,   220,   220,   220,
       0,     0,     0,     0,   220,   426,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,   195,     0,     0,     0,
       0,   264,     0,     0,     0,   220,   220,   220,     0,     0,
       0,     0,   265,   220,   220,   220,     0,     0,     0,     0,
       0,   265,   451,     0,     0,   195,     0,   220,     0,   195,
     264,     0,     0,     0,   220,   220,   220,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,   194,   194,     0,     0,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   220,   220,     0,     0,     0,   219,   194,     0,
       0,     0,   265,     0,     0,     0,     0,     0,     0,     0,
     265,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   194,     0,     0,     0,     0,     0,     0,   265,
       0,   220,   220,   220,     0,     0,     0,     0,     0,     0,
       0,   264,   194,     0,     0,     0,   101,     0,   106,     0,
     106,   106,   106,     0,   118,     0,     0,     0,   265,     0,
       0,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,     0,   194,     0,     0,   265,
     -46,   -46,   -46,     0,     0,   140,     0,     0,     0,     0,
       0,   219,   219,   219,   145,     0,     0,     0,     0,   194,
       0,     0,     0,   219,   219,   219,     0,     0,     0,     0,
     219,     0,     0,     0,   158,     0,     0,     0,     0,     0,
       0,     0,   194,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   219,   219,     0,     0,     0,     0,   264,   219,
     219,   219,     0,     0,     0,     0,   320,   264,     0,     0,
       0,   194,     0,   219,     0,   194,     0,     0,     0,     0,
     219,   219,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   331,     0,   194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,     0,     0,     0,   185,     0,
       0,     0,   264,     0,     0,     0,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   219,   219,
       0,     0,     0,     0,     0,     0,   368,     0,   264,     0,
       0,     0,     0,   185,     0,   105,   264,   109,   113,   114,
       0,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     0,   219,   219,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,     0,   264,   106,   106,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   106,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,   264,   434,     0,     0,     0,
       0,     0,   192,     0,     0,   106,   106,   106,     0,     0,
       0,     0,   140,   106,   106,   106,     0,     0,     0,     0,
       0,     0,     0,   185,     0,   454,     0,   106,     0,   118,
       0,     0,     0,     0,   106,   106,   106,   192,     0,   217,
       0,   217,   217,   217,     0,   192,     0,     0,   474,   185,
       0,     0,     0,     0,     0,     0,     0,     0,   478,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,     0,
       0,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,   106,   106,   106,     0,     0,   262,     0,     0,     0,
       0,     0,   140,   185,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,     0,     0,     0,   140,
       0,   106,   106,   106,     0,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   185,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   192,   140,   -28,
       0,     0,   109,   410,   411,   -28,   -28,   -28,     0,     0,
       0,     0,   145,     0,   109,   421,   422,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   140,
       0,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   436,   437,     0,     0,   192,     0,   255,
     109,   444,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,     0,   456,     0,   185,   192,     0,     0,
       0,   109,   463,   464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,   109,   492,
     493,     0,     0,     0,     0,     0,   217,   217,   217,   255,
       0,     0,     0,     0,     0,     0,     0,   255,   217,   217,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   192,   109,   523,
     524,     0,     0,     0,     0,     0,   217,   217,   217,     0,
       0,     0,     0,   262,   217,   217,   217,     0,     0,     0,
       0,     0,     0,     0,     0,   255,   192,     0,   217,     0,
     192,     0,     0,     0,     0,   217,   217,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,   255,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,   262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   217,   217,     0,     0,     0,     0,     0,
       0,     0,     0,   262,     0,     0,     0,     0,     0,     0,
       0,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     262,     0,   217,   217,   217,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,   262,
       0,     0,     0,   -29,   -29,   -29,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,
     262,     0,     0,     0,    -7,    -7,    -7,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,     0,     0,     0,     0,     0,   -18,   -18,   -18,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
       0,     0,   -11,     0,     0,     0,     0,     0,   -11,   -11,
     -11,   -33,     0,   -33,   -33,   -33,   -33,   567,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,   -58,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -69,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -68,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -12,     0,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,   -12,     0,     0,
       0,     0,     0,   -12,   -12,   -12,   -34,     0,   -34,   -34,
     -34,   -34,   576,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,   -59,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -10,
       0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,
       0,   -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,     0,     0,     0,     0,     0,   -37,
     -37,   -37,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,   -38,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,     0,     0,     0,     0,
       0,   -39,   -39,   -39,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,     0,     0,
       0,     0,   -40,   -40,   -40,   -31,     0,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -23,     0,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,     0,     0,   -23,   -23,   -23,    90,     0,    21,
      22,    23,    24,     0,    25,    26,    27,     0,    28,    29,
      30,    31,    32,    33,     1,    34,    35,     0,     0,    36,
       0,     0,     0,     0,     0,    37,    91,    39,   -21,     0,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -22,
       0,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,     0,     0,     0,     0,     0,   -22,   -22,   -22,
     -24,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -25,     0,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -26,     0,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -46,     0,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -28,     0,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -29,     0,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,
       0,     0,     0,     0,   -29,   -29,   -29,   -20,     0,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -19,     0,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
     -19,     0,     0,     0,     0,     0,   -19,   -19,   -19,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -45,     0,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -58,     0,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -58,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -69,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -68,     0,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -68,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -59,     0,   -59,   -59,   -59,   -59,
       0,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,     0,   -59,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -35,     0,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,     0,
       0,     0,     0,   -35,   -35,   -35,   -36,     0,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -37,     0,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -38,     0,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -39,
       0,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,   -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -40,     0,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,     0,     0,     0,     0,   -40,   -40,
     -40,    90,     0,    21,    22,    23,    24,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,    33,     1,    34,
      35,     0,     0,    36,     0,     0,     0,     0,     0,    37,
     312,    39,    90,     0,    21,    22,    23,    24,     0,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,     1,
      34,    35,     0,     0,    36,     0,     0,     0,     0,     0,
      37,   405,    39,    -7,     0,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,     0,     0,     0,
       0,    -7,    -7,    -7,   -18,     0,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,   -18,     0,     0,     0,
       0,     0,   -18,   -18,   -18,   -11,     0,   -11,   -11,   -11,
     -11,     0,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,     0,     0,   -11,     0,     0,
       0,     0,     0,   -11,   -11,   -11,   -12,     0,   -12,   -12,
     -12,   -12,     0,   -12,   -12,   -12,     0,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,     0,
       0,     0,     0,     0,   -12,   -12,   -12,   -10,     0,   -10,
     -10,   -10,   -10,     0,   -10,   -10,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,     0,   -10,
       0,     0,     0,     0,     0,   -10,   -10,   -10,    21,    22,
      23,    24,     0,    25,    26,    27,     0,    28,    29,    30,
      31,    32,    33,     1,    34,    35,     0,     0,    36,     0,
       0,     0,     0,     0,    37,    38,    39,    21,    22,    23,
      24,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,     1,    34,    35,     0,     0,    36,     0,     0,
       0,     0,     0,    37,   153,    39,    21,    22,    23,    24,
       0,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,     1,    34,    35,     0,     0,    36,     0,     0,     0,
       0,     0,    37,   156,    39,    21,    22,    23,    24,     0,
      25,    26,    27,     0,    28,    29,    30,    31,    32,    33,
       1,    34,    35,     0,     0,    36,     0,     0,     0,     0,
       0,    37,   165,    39,    21,    22,    23,    24,     0,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,     1,
      34,    35,     0,     0,    36,     0,     0,     0,     0,     0,
      37,   167,    39,    21,    22,    23,    24,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,    33,     1,    34,
      35,     0,     0,    36,     0,     0,     0,     0,     0,    37,
     170,    39,    21,    22,    23,    24,     0,    25,    26,    27,
       0,    28,    29,    30,    31,    32,    33,     1,    34,    35,
       0,     0,    36,     0,     0,     0,     0,     0,    37,   529,
      39,    21,    22,    23,    24,     0,    25,    26,    27,     0,
      28,    29,    30,    31,    32,    33,     1,    34,    35,     0,
       0,    36,     0,     0,     0,     0,     0,    37,   550,    39,
      21,    22,    23,    24,     0,    25,    26,    27,     0,    28,
      29,    30,    31,    32,    33,     1,    34,    35,     0,     0,
      36,     0,     0,     0,     0,     0,    37,   566,    39,    21,
      22,    23,    24,     0,    25,    26,    27,     0,    28,    29,
      30,    31,    32,    33,     1,    34,    35,     0,     0,    36,
       0,     0,     0,     0,     0,    37,   569,    39,    21,    22,
      23,    24,     0,    25,    26,    27,     0,    28,    29,    30,
      31,    32,    33,     1,    34,    35,     0,     0,    36,     0,
       0,     0,     0,     0,    37,   585,    39,    21,    22,    23,
      24,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,     1,    34,    35,     0,     0,    36,     0,     0,
       0,     0,     0,    37,   587,    39,    21,    22,    23,    24,
       0,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,     1,    34,    35,     0,     0,    36,     0,     0,     0,
       0,     0,    37,   590,    39,    21,    22,    23,    24,     0,
      25,    26,    27,     0,    28,    29,    30,    31,    32,    33,
       1,    34,    35,     0,     0,    36,     0,     0,     0,     0,
       0,    37,     0,    39,    21,    22,    23,   270,     0,   271,
     272,   273,     0,    28,    29,    30,    31,   274,   275,     1,
      34,    35,     0,     0,    36,     0,     0,     0,     0,     0,
     142,     0,    39,    21,    22,    23,    24,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,    33,     1,    34,
      35,     0,     0,    36,     0,     0,     0,     0,     0,   146,
       0,    39,    21,    22,    23,    24,     0,    25,    26,    27,
       0,    28,    29,    30,    31,    32,    33,     1,    34,    35,
       0,     0,    36,     0,     0,     0,     0,     0,   160,     0,
      39,    21,    22,    23,    24,     0,    25,    26,    27,     0,
      28,    29,    30,    31,    32,    33,     1,    34,    35,     0,
       0,    36,     0,     0,     0,     0,     0,   163,     0,    39,
      21,    22,    23,    24,     0,    25,    26,    27,     0,    28,
      29,    30,    31,    32,    33,     1,    34,    35,     0,     0,
      36,     0,     0,     0,     0,     0,   168,     0,    39,    21,
      22,    23,   270,     0,   271,   272,   273,     0,    28,    29,
      30,    31,   274,   275,     1,    34,    35,     0,     0,    36,
       0,     0,     0,     0,     0,   543,     0,    39,    21,    22,
      23,   270,     0,   271,   272,   273,     0,    28,    29,    30,
      31,   274,   275,     1,    34,    35,     0,     0,    36,     0,
       0,     0,     0,     0,   546,     0,    39,    21,    22,    23,
     270,     0,   271,   272,   273,     0,    28,    29,    30,    31,
     274,   275,     1,    34,    35,     0,     0,    36,     0,     0,
       0,     0,     0,   577,     0,    39,    21,    22,    23,   270,
       0,   271,   272,   273,     0,    28,    29,    30,    31,   274,
     275,     1,    34,    35,     0,     0,    36,     0,     0,     0,
       0,     0,   583,     0,    39,    21,    22,    23,   270,     0,
     271,   272,   273,     0,    28,    29,    30,    31,   274,   275,
       1,    34,    35,     0,     0,    36,     0,     0,     0,     0,
       0,   588,     0,    39
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,     0,     0,   131,     3,     3,
      27,    43,   311,   131,   155,    19,   408,    32,   131,    34,
      16,     0,   360,   313,    11,    39,    11,    11,    32,   131,
     131,   243,    18,   131,    11,   325,    75,    22,    22,    18,
      25,    37,     3,     4,     5,   131,    33,    32,    32,    34,
     131,    12,    13,    14,    15,    32,    11,    34,    19,    20,
      74,    11,    76,   353,    78,    79,    80,    84,    82,   461,
      31,   361,    22,    19,    18,    25,   414,    32,    11,    34,
      94,   380,    11,    33,     3,     4,     5,    99,    32,    22,
       0,    11,   382,    12,    13,    14,    15,    11,    33,   131,
      19,   133,   440,    11,    33,   317,    20,    21,    22,   123,
     448,    25,    31,    33,   131,    31,   155,    31,    32,   131,
      34,    19,   154,   137,    32,    11,    34,   159,    11,   467,
      11,   131,   131,    11,   166,    33,   131,   131,   152,   429,
      11,   173,    20,    21,    22,   357,    32,    25,    34,    32,
     146,    22,    33,   365,    32,    29,    34,    11,   496,    18,
      11,    32,    18,    34,   160,    31,    11,   163,   182,   183,
     184,    22,   168,    32,   386,     3,     4,     5,    32,   469,
      34,    32,    11,    34,    12,    13,    14,    15,    33,   527,
      31,    19,    20,    22,   208,   209,   210,     3,     4,     5,
       0,    11,    11,    31,    33,    19,    12,    13,    14,    15,
      20,   225,    22,    19,    20,    25,    31,    23,    18,    11,
     234,   433,    32,    32,    34,    31,    11,    33,    11,    31,
      22,    33,    31,   374,    11,    31,    32,    22,   252,   253,
     254,    33,     3,     4,     5,    11,   242,    32,    31,    34,
      33,    12,    13,    14,    15,    32,   273,    34,    19,    20,
      11,   473,    23,    11,    31,    31,    32,    31,    34,    11,
      31,    32,     0,    11,    22,   307,    11,     3,     4,     5,
      22,    32,    11,    34,   298,    33,    12,    13,    14,    15,
      18,    33,   306,    19,    20,    33,    33,    23,    33,   313,
     314,   315,    11,    33,    33,    31,    32,   321,   322,   323,
     324,   325,   326,   327,    11,     3,     4,     5,   332,   333,
     334,   335,    11,    32,    12,    13,    14,    15,    31,    11,
     344,    19,    20,    11,    29,   374,    33,    31,    31,   353,
     354,   355,    11,    31,    33,    11,   360,   361,   362,   363,
      32,    11,    34,    31,    32,   369,   370,   371,   372,   373,
      11,   375,    11,   377,    33,    11,    32,   406,   382,   383,
     384,    22,    11,    33,    20,    21,    22,    33,    11,    25,
      11,    32,   396,    34,    33,   509,    32,   511,    34,   406,
      11,   509,   406,   511,    33,   407,   509,    11,   511,    32,
     414,    34,    33,    32,    32,    34,    34,   509,   509,   511,
     511,   509,    33,   511,    11,   429,   430,   431,    32,    11,
      34,     0,    11,   509,    11,   511,   440,   568,   509,    11,
     511,    19,    18,    20,   448,    22,    33,    33,    25,    18,
      32,    19,    34,   567,    33,    32,    32,    34,   460,   567,
      11,    33,   576,   467,   567,   469,   470,   471,   576,    20,
      21,    22,   586,   576,    25,   567,   567,    11,   586,   567,
      31,   485,    33,   586,   576,   576,   490,   509,   576,   511,
      11,   567,   496,   479,   586,   586,   567,   501,   586,    33,
     576,    39,   509,   507,   511,   576,    11,   509,    11,   511,
     586,    32,    11,    34,    11,   586,   520,    22,    29,   509,
     509,   511,   511,   527,   509,   509,   511,   511,    11,    32,
       0,    34,    11,   537,    33,    32,    74,    34,    76,   568,
      78,    79,    80,    22,    82,   567,    25,    11,    18,    32,
      11,    34,    11,   557,   576,    11,    94,   559,    22,    11,
     567,    20,    21,    22,   586,   567,    25,    11,   570,   576,
      22,    32,    11,    32,   576,    34,    32,   567,   567,   586,
      32,    26,   567,   567,   586,   123,   576,   576,    32,    11,
      34,   576,   576,    32,    11,    34,   586,   586,    33,   137,
      22,   586,   586,    11,     1,    32,     3,     4,     5,     6,
       7,     8,     9,    10,   152,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    32,     0,    23,    11,    32,    32,
      34,    34,    29,    30,    31,    11,    20,    21,    22,     0,
      32,    25,    34,    18,   182,   183,   184,     1,    32,     3,
       4,     5,     6,     7,     8,     9,    10,    18,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    11,    11,    23,
     208,   209,   210,    11,    11,    29,    30,    31,    22,    11,
      32,     3,     4,     5,    11,    11,     0,   225,    32,    32,
      12,    13,    14,    15,    32,    32,   234,    19,    20,    32,
      32,    23,    34,    32,    18,    32,    32,    34,    34,    31,
      32,    32,    32,    34,   252,   253,   254,     1,    33,     3,
       4,     5,     6,     7,     8,     9,    10,   530,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    11,    23,
      33,     3,     4,     5,    11,    29,    30,    31,   551,    22,
      12,    13,    14,    15,    32,    18,    34,    19,    20,    32,
     298,    23,     3,     4,     5,    32,    32,    34,   306,    31,
      32,    12,    13,    14,    15,   313,   314,   315,    19,    20,
      11,    33,    23,   321,   322,   323,   324,   325,   326,   327,
      31,    32,     0,    33,   332,   333,   334,   335,    32,    11,
      11,    32,     3,     4,     5,    11,   344,    11,    11,    33,
      18,    12,    13,    14,    15,   353,   354,   355,    19,    20,
      32,    32,   360,   361,   362,   363,    32,    11,    32,    32,
      31,   369,   370,   371,   372,   373,    20,   375,    22,   377,
      39,    25,    11,    11,   382,   383,   384,    33,    11,    33,
       3,     4,     5,    22,    33,    32,    25,    34,   396,    12,
      13,    14,    15,    32,    32,    11,    19,    20,   406,    32,
      23,    32,    32,    11,    34,    74,   414,    76,    31,    78,
      79,    80,    31,    82,    11,    11,    32,     3,     4,     5,
      31,   429,   430,   431,    32,    94,    12,    13,    14,    15,
      11,    31,   440,    19,    20,    32,    32,    23,    11,    20,
     448,    22,    31,    11,    25,    31,    32,    20,    21,    22,
      32,    32,    25,    26,   123,    11,    31,    31,    31,   467,
      33,   469,   470,   471,    32,    32,    11,    34,   137,     3,
       4,     5,    32,    32,    34,    34,    32,   485,    12,    13,
      14,    15,   490,   152,    31,    19,    20,    32,   496,    23,
      11,    31,    31,   501,     3,     4,     5,    31,    32,   507,
      11,    31,    31,    12,    13,    14,    15,    31,    31,    11,
      19,    32,   520,   182,   183,   184,     3,     4,     5,   527,
      32,    32,    31,    31,    31,    12,    13,    14,    15,   537,
      32,    31,    19,    20,    11,    31,    23,    11,    31,   208,
     209,   210,    11,    11,    31,    32,    31,    11,    11,   557,
       3,     4,     5,    31,    26,    32,   225,    32,    32,    12,
      13,    14,    15,    32,    32,   234,    19,    20,    32,    32,
      23,    32,    31,    34,    27,    28,    31,    31,    31,    31,
      31,    31,    31,   252,   253,   254,     1,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    32,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    32,    11,    23,    32,
       3,     4,     5,    32,    29,    30,    31,    19,    32,    12,
      13,    14,    15,     3,     4,     5,    19,    20,    32,   298,
      23,    32,    12,    13,    14,    15,    19,   306,    31,    19,
      20,    31,    31,    23,   313,   314,   315,    11,    19,    31,
      31,    31,   321,   322,   323,   324,   325,   326,   327,    19,
       3,     4,     5,   332,   333,   334,   335,    33,    32,    12,
      13,    14,    15,    19,    11,   344,    19,    20,    11,    19,
      23,    31,    31,    31,   353,   354,   355,    31,    31,    11,
      11,   360,   361,   362,   363,    32,    11,    29,    32,    32,
     369,   370,   371,   372,   373,    20,   375,    22,   377,    39,
      25,    32,    11,   382,   383,   384,    32,    11,    33,     3,
       4,     5,    11,    11,    19,    32,    11,   396,    12,    13,
      14,    15,    11,    32,    11,    19,    20,   406,    32,    23,
      32,    11,    11,    32,    74,   414,    76,    31,    78,    79,
      80,    33,    82,    32,    11,    32,     3,     4,     5,    32,
     429,   430,   431,    32,    94,    12,    13,    14,    15,    32,
      29,   440,    19,    20,    11,    32,    23,    32,    11,   448,
       3,     4,     5,    20,    31,    22,    11,    32,    25,    12,
      13,    14,    15,   123,    32,    32,    19,    11,   467,    32,
     469,   470,   471,     3,     4,     5,    19,   137,    31,    11,
      32,    32,    12,    13,    14,    15,   485,    32,    32,    19,
      20,   490,   152,    23,    11,    33,    11,   496,    33,    32,
      32,    31,   501,     3,     4,     5,    32,    32,   507,    32,
      11,    32,    12,    13,    14,    15,    11,    32,    32,    19,
      32,   520,   182,   183,   184,    20,    21,    22,   527,    32,
      25,    31,    11,     3,    33,    32,    32,    32,   537,    34,
      29,    20,    21,    22,    32,    11,    25,    29,   208,   209,
     210,    32,    11,    32,    20,    34,    22,    32,   557,    25,
      32,    20,    21,    22,    73,   225,    25,    11,   510,    -1,
      -1,    11,    -1,    32,   234,    34,    20,    21,    22,    -1,
      20,    25,    22,    -1,    -1,    25,    -1,   377,    32,    -1,
      34,    -1,   252,   253,   254,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    11,    -1,
      -1,    -1,    -1,    29,    30,    31,    11,    20,    21,    22,
      -1,    -1,    25,    -1,    11,    20,    21,    22,   298,    32,
      25,    34,    -1,    20,    21,    22,   306,    32,    25,    34,
      -1,    -1,    -1,   313,   314,   315,    33,    -1,    -1,    -1,
      -1,   321,   322,   323,   324,   325,   326,   327,    11,    -1,
      -1,    -1,   332,   333,   334,   335,    11,    20,    21,    22,
      -1,    -1,    25,    -1,   344,    20,    21,    22,    -1,    32,
      25,    34,    -1,   353,   354,   355,    -1,    32,    -1,    34,
     360,   361,   362,   363,    -1,    -1,    -1,    -1,    -1,   369,
     370,   371,   372,   373,    -1,   375,    11,   377,    39,    -1,
      -1,    -1,   382,   383,   384,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    11,    -1,   396,    32,    -1,    34,
      -1,    -1,    -1,    20,    21,    22,   406,    -1,    25,    -1,
      -1,    -1,    -1,    74,   414,    76,    33,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    11,   429,
     430,   431,    -1,    94,    -1,    -1,    11,    20,    21,    22,
     440,    -1,    25,    -1,    -1,    20,    21,    22,   448,    32,
      25,    34,    -1,    -1,    11,    -1,    -1,    32,    -1,    34,
      -1,    -1,   123,    20,    21,    22,    -1,   467,    25,   469,
     470,   471,    11,    -1,    -1,    32,   137,    34,    -1,    -1,
      -1,    20,    21,    22,    -1,   485,    25,    -1,    11,    -1,
     490,   152,    -1,    32,    11,    34,   496,    20,    21,    22,
      -1,   501,    25,    20,    21,    22,    -1,   507,    25,    32,
      -1,    34,    -1,    -1,    -1,    32,    -1,    34,    -1,    11,
     520,   182,   183,   184,    -1,    11,    -1,   527,    20,    21,
      22,    -1,    -1,    25,    20,    21,    22,   537,    -1,    25,
      32,    -1,    34,    -1,    11,    31,    32,   208,   209,   210,
      -1,    -1,    -1,    20,    21,    22,    -1,   557,    25,    -1,
      11,    -1,    -1,    -1,   225,    32,    11,    34,    -1,    20,
      21,    22,    -1,   234,    25,    20,    21,    22,    -1,    -1,
      25,    32,    -1,    34,    -1,    -1,    -1,    32,    -1,    34,
      -1,   252,   253,   254,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    11,    -1,    -1,
      -1,    -1,    29,    30,    31,    11,    20,    21,    22,    -1,
      -1,    25,    11,    -1,    20,    21,    22,   298,    32,    25,
      34,    20,    21,    22,    -1,   306,    25,    33,    -1,    -1,
      -1,    -1,   313,   314,   315,    -1,    -1,    -1,    -1,    -1,
     321,   322,   323,   324,   325,   326,   327,    11,    -1,    -1,
      -1,   332,   333,   334,   335,    -1,    20,    21,    22,    -1,
      -1,    25,    -1,   344,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,   353,   354,   355,    -1,    -1,    -1,    -1,   360,
     361,   362,   363,    -1,    -1,    -1,    -1,    -1,   369,   370,
     371,   372,   373,    -1,   375,    11,   377,    39,    -1,    -1,
      -1,   382,   383,   384,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    11,    -1,   396,    -1,    33,    -1,    -1,
      -1,    -1,    20,    21,    22,   406,    -1,    25,    -1,    -1,
      -1,    -1,    74,   414,    76,    33,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,    11,    -1,    -1,    -1,   429,   430,
     431,    11,    94,    20,    21,    22,    -1,    -1,    25,   440,
      20,    21,    22,    -1,    -1,    25,    33,   448,    -1,    11,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    20,    21,
      22,   123,    -1,    25,    -1,    -1,   467,    -1,   469,   470,
     471,    33,    11,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,   485,    -1,    25,    11,    -1,   490,
     152,    -1,    -1,    11,    33,   496,    20,    21,    22,    -1,
     501,    25,    20,    21,    22,    -1,   507,    25,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    11,   520,
     182,   183,   184,    -1,    11,    -1,   527,    20,    21,    22,
      -1,    -1,    25,    20,    21,    22,   537,    -1,    25,    26,
      33,    -1,    -1,    11,    31,    32,   208,   209,   210,    -1,
      -1,    -1,    20,    21,    22,    -1,   557,    25,    -1,    11,
      -1,    -1,    -1,   225,    -1,    33,    11,    -1,    20,    21,
      22,    -1,   234,    25,    -1,    20,    21,    22,    -1,    -1,
      25,    33,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
     252,   253,   254,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    11,    -1,    -1,    -1,
      -1,    29,    30,    31,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,    11,    -1,    -1,    -1,   298,    -1,    33,    -1,
      -1,    20,    21,    22,   306,    -1,    25,    -1,    -1,    -1,
      -1,   313,   314,   315,    33,    -1,    -1,    -1,    -1,   321,
     322,   323,   324,   325,   326,   327,    11,    -1,    -1,    -1,
     332,   333,   334,   335,    -1,    20,    21,    22,    -1,    -1,
      25,    -1,   344,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,   353,   354,   355,    -1,    -1,    -1,    -1,   360,   361,
     362,   363,    -1,    -1,    -1,    -1,    -1,   369,   370,   371,
     372,   373,    -1,   375,    11,   377,    39,    -1,    -1,    -1,
     382,   383,   384,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,    -1,    11,    -1,   396,    -1,    33,    -1,    -1,    -1,
      -1,    20,    21,    22,   406,    -1,    25,    -1,    -1,    -1,
      -1,    74,   414,    76,    33,    78,    79,    80,    -1,    82,
      -1,    -1,    -1,    11,    -1,    -1,    -1,   429,   430,   431,
      11,    94,    20,    21,    22,    -1,    -1,    25,   440,    20,
      21,    22,    -1,    -1,    25,    33,   448,    -1,    11,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    20,    21,    22,
     123,    11,    25,    -1,    -1,   467,    -1,   469,   470,   471,
      20,    21,    22,    -1,   137,    25,    11,    -1,    -1,    -1,
      -1,    31,    32,   485,    -1,    20,    21,    22,   490,   152,
      25,    -1,    11,    -1,   496,    -1,    -1,    32,    11,   501,
      -1,    20,    21,    22,    -1,   507,    25,    20,    21,    22,
      -1,    -1,    25,    32,    -1,    -1,    -1,    11,   520,   182,
     183,   184,    -1,    11,    -1,   527,    20,    21,    22,    -1,
      -1,    25,    20,    21,    22,   537,    -1,    25,    32,    11,
      -1,    -1,    -1,    -1,    32,   208,   209,   210,    20,    21,
      22,    -1,    -1,    25,    11,   557,    -1,    -1,    -1,    -1,
      32,    -1,   225,    20,    21,    22,    -1,    11,    25,    -1,
      -1,   234,    -1,    11,    -1,    32,    20,    21,    22,    -1,
      -1,    25,    20,    21,    22,    -1,    -1,    25,    32,   252,
     253,   254,     1,    31,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    11,    -1,    -1,    -1,    -1,
      29,    30,    31,    11,    20,    21,    22,    -1,    -1,    25,
      -1,    11,    20,    21,    22,   298,    32,    25,    -1,    -1,
      20,    21,    22,   306,    32,    25,    -1,    -1,    -1,    -1,
     313,   314,   315,    -1,    -1,    -1,    -1,    -1,   321,   322,
     323,   324,   325,   326,   327,    11,    -1,    -1,    -1,   332,
     333,   334,   335,    11,    20,    21,    22,    -1,    -1,    25,
      -1,   344,    20,    21,    22,    -1,    32,    25,    -1,    -1,
     353,   354,   355,    -1,    32,    -1,    -1,   360,   361,   362,
     363,    -1,    -1,    -1,    -1,    -1,   369,   370,   371,   372,
     373,    -1,   375,    11,   377,    39,    -1,    -1,    -1,   382,
     383,   384,    20,    21,    22,    -1,    11,    25,    -1,    -1,
      -1,    -1,    -1,   396,    32,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,   406,    -1,    -1,    -1,    32,    -1,    -1,
      74,   414,    76,    -1,    78,    79,    80,    -1,    82,    -1,
      -1,    -1,    11,    -1,    -1,    -1,   429,   430,   431,    -1,
      94,    20,    21,    22,    -1,    -1,    25,   440,    -1,    11,
      -1,    -1,    -1,    32,    -1,   448,    -1,    11,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    20,    21,    22,   123,
      32,    25,    -1,    -1,   467,    11,   469,   470,   471,    -1,
      -1,    -1,    -1,   137,    20,    21,    22,    -1,    -1,    25,
      11,    -1,   485,    -1,    -1,    -1,    32,   490,   152,    20,
      21,    22,    -1,   496,    25,    -1,    -1,    -1,   501,    -1,
      11,    32,    -1,    -1,   507,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    25,    -1,    11,   520,   182,   183,
     184,    32,    11,    -1,   527,    20,    21,    22,    -1,    -1,
      25,    20,    21,    22,   537,    -1,    25,    32,    11,    -1,
      -1,    -1,    -1,    32,   208,   209,   210,    20,    21,    22,
      -1,    -1,    25,    11,   557,    -1,    -1,    -1,    -1,    32,
      -1,   225,    20,    21,    22,    -1,    11,    25,    -1,    -1,
     234,    -1,    11,    -1,    32,    20,    21,    22,    -1,    -1,
      25,    20,    21,    22,    -1,    -1,    25,    32,   252,   253,
     254,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    11,    -1,    -1,    -1,    -1,    29,
      30,    31,    11,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,    20,    21,    22,   298,    32,    25,    -1,    -1,    -1,
      35,    -1,   306,    -1,    39,    -1,    -1,    -1,    -1,   313,
     314,   315,    -1,    -1,    -1,    -1,    -1,   321,   322,   323,
     324,   325,   326,   327,    11,    -1,    -1,    -1,   332,   333,
     334,   335,    -1,    20,    21,    22,    -1,    -1,    25,    74,
     344,    76,    -1,    78,    79,    80,    -1,    82,    -1,   353,
     354,   355,    -1,    -1,    -1,    -1,   360,   361,   362,   363,
      -1,    -1,    -1,    98,    -1,   369,   370,   371,   372,   373,
      -1,   375,    11,   377,    -1,    -1,    -1,    -1,   382,   383,
     384,    20,    21,    22,    11,    -1,    25,    -1,   123,    -1,
      11,    -1,   396,    20,    21,    22,    -1,    11,    25,    20,
      21,    22,   406,    -1,    25,    11,    20,    21,    22,    -1,
     414,    25,    -1,    -1,    20,    21,    22,   152,    -1,    25,
      11,    -1,    -1,    -1,    -1,   429,   430,   431,    11,    20,
      21,    22,    -1,    -1,    25,    -1,   440,    20,    21,    22,
      -1,    11,    25,    -1,   448,    -1,    -1,   182,   183,   184,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,    -1,   469,   470,   471,    11,    -1,
      -1,    -1,    -1,   208,   209,   210,    -1,    20,    21,    22,
      11,   485,    25,    -1,    -1,    -1,   490,    -1,    -1,    20,
      21,    22,   496,    -1,    25,    11,    -1,   501,    -1,   234,
      -1,    -1,    -1,   507,    20,    21,    22,    -1,    36,    25,
      -1,    39,    -1,    -1,    -1,    11,   520,   252,   253,   254,
      -1,    11,    -1,   527,    20,    21,    22,    11,    -1,    25,
      20,    21,    22,   537,    -1,    25,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    74,    11,    76,    -1,
      78,    79,    80,   557,    82,    -1,    20,    21,    22,    -1,
      -1,    25,    -1,   298,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,   314,
     315,    -1,    -1,    -1,    -1,    -1,   321,   322,   323,   324,
     325,   326,   327,    -1,    -1,   123,    -1,   332,   333,   334,
     335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,   354,
     355,    -1,    -1,    -1,   152,   360,   361,   362,   363,    -1,
      -1,    -1,    -1,    -1,   369,   370,   371,   372,   373,    -1,
     375,    -1,   377,    -1,    -1,    -1,    -1,   382,   383,   384,
      -1,    -1,    -1,    -1,    -1,   183,   184,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,
      -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   429,   430,   431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   440,   234,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,    -1,
      -1,    -1,   467,    -1,   469,   470,   471,    39,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,   496,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
     298,    -1,    74,    -1,    76,    -1,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,    -1,   313,   314,   315,    -1,    -1,
      -1,    -1,   527,   321,    -1,    97,    -1,   325,   326,   327,
      -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,   353,   354,   355,    -1,    -1,
      -1,    -1,   360,   361,   362,   363,    -1,    -1,    -1,    -1,
      -1,   369,    -1,    -1,    -1,   373,    -1,   375,    -1,   377,
     152,    -1,    -1,    -1,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,   183,   184,    -1,    -1,    -1,   414,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,   430,   431,    -1,    -1,    -1,   209,   210,    -1,
      -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,   467,
      -1,   469,   470,   471,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,    74,    -1,    76,    -1,
      78,    79,    80,    -1,    82,    -1,    -1,    -1,   496,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    96,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,   298,    -1,    -1,   527,
      29,    30,    31,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,   313,   314,   315,    -1,    -1,    -1,    -1,    -1,   321,
     322,   323,    -1,   325,   326,   327,    -1,    -1,    -1,    -1,
     332,   333,   334,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   353,   354,   355,    -1,    -1,    -1,    -1,   360,   361,
     362,   363,    -1,    -1,    -1,   183,   184,   369,   370,   371,
      -1,   373,    -1,   375,    -1,   377,    -1,    -1,    -1,    -1,
     382,   383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,   210,    -1,   396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   414,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,   431,
      -1,    -1,    -1,    -1,    -1,   253,   254,    -1,   440,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   448,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,    -1,   469,   470,   471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     298,    -1,    74,    -1,    76,    -1,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,   496,   313,   314,   315,    -1,    -1,
      -1,    -1,    -1,   321,   322,    -1,    -1,   325,   326,   327,
      -1,    -1,    -1,    -1,   332,   333,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   527,   344,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,   353,   354,   355,    -1,    -1,
      -1,    -1,   360,   361,   362,   363,    -1,    -1,    -1,    -1,
      -1,   369,   370,    -1,    -1,   373,    -1,   375,    -1,   377,
     152,    -1,    -1,    -1,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,   183,   184,    -1,    -1,    -1,   414,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,   430,   431,    -1,    -1,    -1,   209,   210,    -1,
      -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,   467,
      -1,   469,   470,   471,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,    74,    -1,    76,    -1,
      78,    79,    80,    -1,    82,    -1,    -1,    -1,   496,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,   298,    -1,    -1,   527,
      29,    30,    31,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,   313,   314,   315,   132,    -1,    -1,    -1,    -1,   321,
      -1,    -1,    -1,   325,   326,   327,    -1,    -1,    -1,    -1,
     332,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   353,   354,   355,    -1,    -1,    -1,    -1,   360,   361,
     362,   363,    -1,    -1,    -1,    -1,   184,   369,    -1,    -1,
      -1,   373,    -1,   375,    -1,   377,    -1,    -1,    -1,    -1,
     382,   383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   210,    -1,   396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    39,    -1,
      -1,    -1,   414,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,   431,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,   440,    -1,
      -1,    -1,    -1,    74,    -1,    76,   448,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,    -1,   469,   470,   471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   496,   313,   314,   315,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,    -1,    -1,   527,   344,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,   353,   354,   355,    -1,    -1,
      -1,    -1,   360,   361,   362,   363,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,    -1,   373,    -1,   375,    -1,   377,
      -1,    -1,    -1,    -1,   382,   383,   384,    74,    -1,    76,
      -1,    78,    79,    80,    -1,    82,    -1,    -1,   396,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   414,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,   430,   431,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,   440,   254,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,   467,
      -1,   469,   470,   471,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,   298,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   184,   496,    23,
      -1,    -1,   313,   314,   315,    29,    30,    31,    -1,    -1,
      -1,    -1,   510,    -1,   325,   326,   327,    -1,    -1,    -1,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   353,   354,   355,    -1,    -1,   234,    -1,   360,
     361,   362,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   373,    -1,   375,    -1,   377,   254,    -1,    -1,
      -1,   382,   383,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
     431,    -1,    -1,    -1,    -1,    -1,   313,   314,   315,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,   325,   326,
     327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   467,   344,   469,   470,
     471,    -1,    -1,    -1,    -1,    -1,   353,   354,   355,    -1,
      -1,    -1,    -1,   360,   361,   362,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   496,   373,    -1,   375,    -1,
     377,    -1,    -1,    -1,    -1,   382,   383,   384,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,
      -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,    -1,   406,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,   430,   431,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     467,    -1,   469,   470,   471,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,   496,
      -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
     527,    -1,    -1,    -1,    29,    30,    31,     1,    -1,     3,
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
      -1,    29,    -1,    31,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31
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
      58,    60,    68,    57,    57,    19,    27,    28,    67,    71,
      19,    65,    32,    80,    32,    78,    73,    75,    76,    77,
      47,    32,    33,    32,    32,    32,    32,    11,    32,    32,
      67,    81,    29,    49,    54,    67,    29,    49,    78,    33,
      33,    32,    34,    30,     7,    33,    30,    32,    67,     7,
      29,    49,    53,    29,    49,    30,    32,    30,    29,    49,
      30,    45,    46,    48,     3,     4,     5,    12,    13,    14,
      15,    19,    20,    23,    31,    57,    58,    59,    61,    62,
      63,    68,    72,    73,    74,    75,    76,    77,    78,    79,
       3,     4,     5,    12,    13,    14,    15,    19,    20,    23,
      31,    58,    59,    61,    62,    63,    68,    72,    73,    74,
      75,    76,    77,    78,    79,    11,     3,     4,     5,    12,
      13,    14,    15,    19,    31,    58,    59,    61,    62,    63,
      68,    79,    29,    31,     3,     4,     5,    12,    13,    14,
      15,    19,    20,    23,    31,    57,    58,    59,    61,    62,
      63,    68,    72,    73,    74,    75,    76,    77,    78,    79,
       6,     8,     9,    10,    16,    17,    39,    40,    45,    46,
      47,    50,    51,    52,    55,    56,    64,    65,    69,    70,
       3,     4,     5,    12,    13,    14,    15,    19,    31,    58,
      59,    61,    62,    63,    68,    79,    11,    48,    19,    66,
      33,    31,    30,    31,    31,    31,    31,    31,    77,    73,
      67,    22,    25,    20,    21,    31,    31,    31,    31,    77,
      73,    67,    22,    25,    20,    21,     3,     4,     5,    12,
      13,    14,    15,    19,    31,    58,    59,    61,    62,    63,
      68,    78,    79,    31,    31,    31,    31,    31,    67,    32,
      80,    31,    31,    31,    31,    31,    77,    73,    67,    22,
      25,    20,    21,    31,    31,    31,    65,    31,    31,    33,
      31,    33,    31,    31,    31,    31,    31,    67,     3,     4,
       5,    12,    13,    14,    15,    19,    31,    58,    59,    61,
      62,    63,    68,    78,    79,    30,    26,    32,    41,    60,
      57,    57,    19,    32,    80,    32,    73,    75,    76,    77,
      60,    57,    57,    19,    32,    73,    75,    76,    77,    31,
      31,    31,    31,    31,    67,    60,    57,    57,    19,    32,
      80,    32,    81,    60,    57,    57,    19,    32,    80,    32,
      73,    75,    76,    77,    67,    53,    57,    33,    71,    19,
      32,    41,    60,    57,    57,    19,    32,    80,    32,    31,
      31,    31,    31,    31,    67,    19,    65,    66,    67,    29,
      47,    43,    32,    32,    32,    11,    81,    32,    32,    32,
      11,    60,    57,    57,    19,    32,    80,    32,    32,    32,
      32,    11,    81,    32,    32,    32,    32,    11,    81,    32,
      33,    32,    32,    32,    29,    47,    43,    32,    32,    32,
      11,    81,    60,    57,    57,    19,    32,    80,    32,    30,
      32,    78,    32,    78,    32,    32,    32,    11,    81,    78,
      32,    78,    32,    29,    49,    54,    29,    49,    33,    33,
      30,    32,    78,    32,    32,    32,    32,    11,    81,    42,
      32,    32,    78,    32,    32,    32,    30,     7,    33,    30,
      42,    32,    78,    32,    47,    32,     7,    29,    49,    53,
      29,    47,    32,    29,    49,    30,    32,    30,    29,    49,
      30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    41,    42,
      40,    40,    40,    43,    43,    44,    45,    46,    47,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    51,    51,    51,    51,    51,    51,    52,
      52,    53,    53,    54,    54,    55,    56,    57,    58,    58,
      59,    60,    60,    60,    60,    61,    62,    63,    64,    64,
      65,    65,    66,    67,    67,    68,    68,    68,    69,    70,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    80,    79,    79,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     0,
       7,     4,     5,     3,     1,     2,     2,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     6,     7,     8,     8,     9,     9,
      10,     1,     0,     1,     0,     3,     1,     3,     1,     1,
       4,     1,     1,     1,     1,     4,     4,     6,     5,     6,
       1,     1,     3,     1,     1,     1,     1,     1,     5,     5,
       1,     1,     1,     3,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     3,     1,     1,
       1,     1,     0,     5,     3,     3,     1
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
#line 129 "bison/clang_syntax.y"
                    {
        tree = (yyval.node);
    }
#line 3070 "bison/clang_syntax.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 135 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("declaration list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3080 "bison/clang_syntax.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 140 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3088 "bison/clang_syntax.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 146 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3096 "bison/clang_syntax.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 149 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3104 "bison/clang_syntax.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration ';'  */
#line 155 "bison/clang_syntax.y"
                           {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3112 "bison/clang_syntax.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 161 "bison/clang_syntax.y"
                           {
        context++;
        pushStack(&scope, context);
    }
#line 3121 "bison/clang_syntax.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 165 "bison/clang_syntax.y"
               {
        populateParams(symbolTable);
    }
#line 3129 "bison/clang_syntax.tab.c"
    break;

  case 10: /* funcDeclaration: simpleFDeclaration '(' $@1 params ')' $@2 compoundStmt  */
#line 167 "bison/clang_syntax.y"
                   {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-3].node);
        (yyval.node)->node3 = (yyvsp[0].node);
        popStack(&scope);
    }
#line 3141 "bison/clang_syntax.tab.c"
    break;

  case 11: /* funcDeclaration: simpleFDeclaration '(' ')' compoundStmt  */
#line 174 "bison/clang_syntax.y"
                                              {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-3].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3151 "bison/clang_syntax.tab.c"
    break;

  case 12: /* funcDeclaration: simpleFDeclaration '(' ')' '{' '}'  */
#line 179 "bison/clang_syntax.y"
                                         {
        (yyval.node) = createNode("function declaration");
        (yyval.node)->node1 = (yyvsp[-4].node);
    }
#line 3160 "bison/clang_syntax.tab.c"
    break;

  case 13: /* params: params ',' param  */
#line 186 "bison/clang_syntax.y"
                     {
        (yyval.node) = createNode("parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3170 "bison/clang_syntax.tab.c"
    break;

  case 14: /* params: param  */
#line 191 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3178 "bison/clang_syntax.tab.c"
    break;

  case 15: /* param: TYPE ID  */
#line 197 "bison/clang_syntax.y"
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
#line 3198 "bison/clang_syntax.tab.c"
    break;

  case 16: /* simpleVDeclaration: TYPE ID  */
#line 215 "bison/clang_syntax.y"
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

        (yyval.node)->ta_isTable = 1;
        sprintf((yyval.node)->ta_table,"%s %s_%d",(yyvsp[-1].token).t_title, (yyvsp[0].token).t_title, (yyvsp[0].token).t_context);
    }
#line 3221 "bison/clang_syntax.tab.c"
    break;

  case 17: /* simpleFDeclaration: TYPE ID  */
#line 236 "bison/clang_syntax.y"
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
        strcpy(lastFType, (yyvsp[-1].token).t_title);
    }
#line 3242 "bison/clang_syntax.tab.c"
    break;

  case 18: /* compoundStmt: '{' stmtList '}'  */
#line 254 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3250 "bison/clang_syntax.tab.c"
    break;

  case 19: /* stmtList: stmtList primitiveStmt  */
#line 260 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("statement list");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3260 "bison/clang_syntax.tab.c"
    break;

  case 20: /* stmtList: stmtList error  */
#line 265 "bison/clang_syntax.y"
                     {
        // printf("DEU PAU\n");
    }
#line 3268 "bison/clang_syntax.tab.c"
    break;

  case 21: /* stmtList: primitiveStmt  */
#line 268 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3276 "bison/clang_syntax.tab.c"
    break;

  case 22: /* primitiveStmt: exprStmt  */
#line 274 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3284 "bison/clang_syntax.tab.c"
    break;

  case 23: /* primitiveStmt: compoundStmt  */
#line 277 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3292 "bison/clang_syntax.tab.c"
    break;

  case 24: /* primitiveStmt: condStmt  */
#line 280 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3300 "bison/clang_syntax.tab.c"
    break;

  case 25: /* primitiveStmt: iterStmt  */
#line 283 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3308 "bison/clang_syntax.tab.c"
    break;

  case 26: /* primitiveStmt: returnStmt  */
#line 286 "bison/clang_syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3316 "bison/clang_syntax.tab.c"
    break;

  case 27: /* primitiveStmt: setStmt  */
#line 289 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3324 "bison/clang_syntax.tab.c"
    break;

  case 28: /* primitiveStmt: inOP  */
#line 292 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3332 "bison/clang_syntax.tab.c"
    break;

  case 29: /* primitiveStmt: outOP  */
#line 295 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3340 "bison/clang_syntax.tab.c"
    break;

  case 30: /* primitiveStmt: varDeclaration  */
#line 298 "bison/clang_syntax.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3348 "bison/clang_syntax.tab.c"
    break;

  case 31: /* primitiveStmt: funcDeclaration  */
#line 301 "bison/clang_syntax.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3356 "bison/clang_syntax.tab.c"
    break;

  case 32: /* exprStmt: expression ';'  */
#line 307 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3364 "bison/clang_syntax.tab.c"
    break;

  case 33: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt  */
#line 313 "bison/clang_syntax.y"
                                                     {
        (yyval.node) = createNode("if statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3374 "bison/clang_syntax.tab.c"
    break;

  case 34: /* condStmt: IF_KW '(' simpleExp ')' '{' '}'  */
#line 318 "bison/clang_syntax.y"
                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-3].node);
    }
#line 3383 "bison/clang_syntax.tab.c"
    break;

  case 35: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW primitiveStmt  */
#line 322 "bison/clang_syntax.y"
                                                                  {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-4].node);
        (yyval.node)->node2 = (yyvsp[-2].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 3394 "bison/clang_syntax.tab.c"
    break;

  case 36: /* condStmt: IF_KW '(' simpleExp ')' '{' '}' ELSE_KW primitiveStmt  */
#line 328 "bison/clang_syntax.y"
                                                             {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-5].node);
        (yyval.node)->node3 = (yyvsp[0].node);
    }
#line 3404 "bison/clang_syntax.tab.c"
    break;

  case 37: /* condStmt: IF_KW '(' simpleExp ')' primitiveStmt ELSE_KW '{' '}'  */
#line 333 "bison/clang_syntax.y"
                                                            {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-5].node);
        (yyval.node)->node2 = (yyvsp[-3].node);
    }
#line 3414 "bison/clang_syntax.tab.c"
    break;

  case 38: /* condStmt: IF_KW '(' simpleExp ')' '{' '}' ELSE_KW '{' '}'  */
#line 338 "bison/clang_syntax.y"
                                                      {
        (yyval.node) = createNode("if else statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
    }
#line 3423 "bison/clang_syntax.tab.c"
    break;

  case 39: /* iterStmt: FOR_KW '(' iterAssign ';' iterExp ';' iterAssign ')' primitiveStmt  */
#line 346 "bison/clang_syntax.y"
                                                                       {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-6].node);
        (yyval.node)->node2 = (yyvsp[-4].node);
        (yyval.node)->node3 = (yyvsp[-2].node);
        (yyval.node)->node4 = (yyvsp[0].node);
    }
#line 3435 "bison/clang_syntax.tab.c"
    break;

  case 40: /* iterStmt: FOR_KW '(' iterAssign ';' iterExp ';' iterAssign ')' '{' '}'  */
#line 353 "bison/clang_syntax.y"
                                                                   {
        (yyval.node) = createNode("for statement");
        (yyval.node)->node1 = (yyvsp[-7].node);
        (yyval.node)->node2 = (yyvsp[-5].node);
        (yyval.node)->node3 = (yyvsp[-3].node);
    }
#line 3446 "bison/clang_syntax.tab.c"
    break;

  case 41: /* iterAssign: assignExp  */
#line 361 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3454 "bison/clang_syntax.tab.c"
    break;

  case 42: /* iterAssign: %empty  */
#line 363 "bison/clang_syntax.y"
        {(yyval.node) = NULL;}
#line 3460 "bison/clang_syntax.tab.c"
    break;

  case 43: /* iterExp: simpleExp  */
#line 367 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3468 "bison/clang_syntax.tab.c"
    break;

  case 44: /* iterExp: %empty  */
#line 369 "bison/clang_syntax.y"
        {(yyval.node) = NULL;}
#line 3474 "bison/clang_syntax.tab.c"
    break;

  case 45: /* returnStmt: RETURN_KW expression ';'  */
#line 373 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("return statement");
        (yyval.node)->node1 = (yyvsp[-1].node);
        typeHandler((yyval.node), (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 3484 "bison/clang_syntax.tab.c"
    break;

  case 46: /* setStmt: forallOP  */
#line 381 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3492 "bison/clang_syntax.tab.c"
    break;

  case 47: /* pertOP: simpleExp IN_KW factor  */
#line 387 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("in operator");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
        typeHandler((yyval.node), (yyvsp[-1].token).t_line, (yyvsp[-1].token).t_column);
    }
#line 3503 "bison/clang_syntax.tab.c"
    break;

  case 48: /* setReturner: addOP  */
#line 396 "bison/clang_syntax.y"
          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3511 "bison/clang_syntax.tab.c"
    break;

  case 49: /* setReturner: remOP  */
#line 399 "bison/clang_syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3519 "bison/clang_syntax.tab.c"
    break;

  case 50: /* typeOP: ISSET_KW '(' setParams ')'  */
#line 405 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("is_set operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
        strcpy((yyval.node)->n_type, "int");
    }
#line 3529 "bison/clang_syntax.tab.c"
    break;

  case 51: /* setParams: ID  */
#line 413 "bison/clang_syntax.y"
       {
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("is_set parameter");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
    }
#line 3540 "bison/clang_syntax.tab.c"
    break;

  case 52: /* setParams: pertOP  */
#line 419 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3548 "bison/clang_syntax.tab.c"
    break;

  case 53: /* setParams: setReturner  */
#line 422 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3556 "bison/clang_syntax.tab.c"
    break;

  case 54: /* setParams: constOP  */
#line 425 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3564 "bison/clang_syntax.tab.c"
    break;

  case 55: /* addOP: ADD_KW '(' pertOP ')'  */
#line 432 "bison/clang_syntax.y"
                          {
        (yyval.node) = createNode("add operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
        strcpy((yyval.node)->n_type, "set");
    }
#line 3574 "bison/clang_syntax.tab.c"
    break;

  case 56: /* remOP: REMOVE_KW '(' pertOP ')'  */
#line 440 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("remove operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
        strcpy((yyval.node)->n_type, "set");
    }
#line 3584 "bison/clang_syntax.tab.c"
    break;

  case 57: /* selectOP: EXISTS_KW '(' ID IN_KW factor ')'  */
#line 448 "bison/clang_syntax.y"
                                      {
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column));
        (yyval.node) = createNode("exists operator");
        (yyval.node)->node1 = (yyvsp[-1].node);
        (yyval.node)->s_token = emulateToken((yyvsp[-3].token).t_title, (yyvsp[-3].token).t_line, (yyvsp[-3].token).t_column, typestr);
        strcpy((yyval.node)->n_type, "int");
    }
#line 3597 "bison/clang_syntax.tab.c"
    break;

  case 58: /* forallOP: FORALL_KW '(' pertOP ')' primitiveStmt  */
#line 459 "bison/clang_syntax.y"
                                           {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
    }
#line 3607 "bison/clang_syntax.tab.c"
    break;

  case 59: /* forallOP: FORALL_KW '(' pertOP ')' '{' '}'  */
#line 464 "bison/clang_syntax.y"
                                      {
        (yyval.node) = createNode("forall statement");
        (yyval.node)->node1 = (yyvsp[-3].node);
    }
#line 3616 "bison/clang_syntax.tab.c"
    break;

  case 60: /* expression: assignExp  */
#line 471 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3624 "bison/clang_syntax.tab.c"
    break;

  case 61: /* expression: simpleExp  */
#line 474 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
        expTypeHandler((yyval.node));
    }
#line 3633 "bison/clang_syntax.tab.c"
    break;

  case 62: /* assignExp: ID ASS_OP expression  */
#line 481 "bison/clang_syntax.y"
                         {
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("assignment operator");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[0].node);
        typeHandler((yyval.node), (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);

        if(strcmp(typestr, "")){
            (yyval.node)->ta_isSymbol = 1;
            sprintf((yyval.node)->ta_val,"%s_%d",(yyvsp[-2].token).t_title, scopeHandler2((yyvsp[-2].token).t_title));
            if((yyval.node)->node1->ta_isSymbol){
                sprintf((yyval.node)->ta_code, "mov %s, %s", (yyval.node)->ta_val, (yyval.node)->node1->ta_val);
            }
            else if((yyval.node)->node1->ta_isAux){
                sprintf((yyval.node)->ta_code, "mov %s, $%d", (yyval.node)->ta_val, (yyval.node)->node1->ta_reg);
            }
        }
    }
#line 3657 "bison/clang_syntax.tab.c"
    break;

  case 63: /* simpleExp: binLogicalExp  */
#line 503 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3665 "bison/clang_syntax.tab.c"
    break;

  case 64: /* simpleExp: pertOP  */
#line 506 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3673 "bison/clang_syntax.tab.c"
    break;

  case 65: /* constOP: INT  */
#line 513 "bison/clang_syntax.y"
        {
        (yyval.node) = createNode("CONST");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "int");
        (yyval.node)->ta_isSymbol = 1;
        strcpy((yyval.node)->ta_val, (yyvsp[0].token).t_title);
    }
#line 3684 "bison/clang_syntax.tab.c"
    break;

  case 66: /* constOP: FLOAT  */
#line 519 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "float");
        (yyval.node)->ta_isSymbol = 1;
        strcpy((yyval.node)->ta_val, (yyvsp[0].token).t_title);
    }
#line 3695 "bison/clang_syntax.tab.c"
    break;

  case 67: /* constOP: EMPTY  */
#line 525 "bison/clang_syntax.y"
            {
        (yyval.node) = createNode("CONST");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, "set");
    }
#line 3704 "bison/clang_syntax.tab.c"
    break;

  case 68: /* inOP: IN '(' ID ')' ';'  */
#line 532 "bison/clang_syntax.y"
                      {
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("read");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, NULL);
    }
#line 3715 "bison/clang_syntax.tab.c"
    break;

  case 69: /* outOP: OUT '(' outConst ')' ';'  */
#line 541 "bison/clang_syntax.y"
                             {
        (yyval.node) = createNode("write/writeln");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        if(strcmp((yyval.node)->node1->n_title, "CONST STRING")){
            if(!strcmp((yyvsp[-4].token).t_title, "write")){
                if((yyval.node)->node1->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "print %s", (yyval.node)->node1->ta_val);
                }
                else if((yyval.node)->node1->ta_isAux){
                    sprintf((yyval.node)->ta_code, "print $%d", (yyval.node)->node1->ta_reg);
                }
            }
            else if(!strcmp((yyvsp[-4].token).t_title, "writeln")){
                if((yyval.node)->node1->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "println %s", (yyval.node)->node1->ta_val);
                }
                else if((yyval.node)->node1->ta_isAux){
                    sprintf((yyval.node)->ta_code, "println $%d", (yyval.node)->node1->ta_reg);
                }
            }
        }
    }
#line 3743 "bison/clang_syntax.tab.c"
    break;

  case 70: /* outConst: STRING  */
#line 567 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST STRING");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
        (yyval.node)->ta_isTable = 1;
        int size = (int) strlen((yyvsp[0].token).t_title) - 2;
        indexCharString++;
        sprintf((yyval.node)->ta_table,"char _str%d[] = %s\nint _str%d_size = %d",indexCharString, (yyvsp[0].token).t_title,indexCharString , size);
    }
#line 3756 "bison/clang_syntax.tab.c"
    break;

  case 71: /* outConst: CHAR  */
#line 575 "bison/clang_syntax.y"
           {
        (yyval.node) = createNode("CONST CHAR");
        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, NULL);
        (yyval.node)->ta_isTable = 1;
        indexCharString++;
        sprintf((yyval.node)->ta_table,"char _str%d = %s", indexCharString, (yyvsp[0].token).t_title);
        (yyval.node)->ta_isSymbol = 1;
        sprintf((yyval.node)->ta_val, "_str%d", indexCharString);
    }
#line 3770 "bison/clang_syntax.tab.c"
    break;

  case 72: /* outConst: simpleExp  */
#line 584 "bison/clang_syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3778 "bison/clang_syntax.tab.c"
    break;

  case 73: /* binLogicalExp: binLogicalExp BIN_LOG_OP unLogicalExp  */
#line 590 "bison/clang_syntax.y"
                                          {
        (yyval.node) = createNode("binary expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);

        if(!strcmp((yyvsp[-1].token).t_title, "&&")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "and $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "and $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "and $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "and $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
        else if(!strcmp((yyvsp[-1].token).t_title, "||")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "or $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "or $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "or $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "or $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
    }
#line 3834 "bison/clang_syntax.tab.c"
    break;

  case 74: /* binLogicalExp: unLogicalExp  */
#line 641 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3842 "bison/clang_syntax.tab.c"
    break;

  case 75: /* unLogicalExp: UN_LOG_OP unLogicalExp  */
#line 647 "bison/clang_syntax.y"
                           {
        (yyval.node) = createNode("unary expression");
        // $$->s_token = emulateToken($1.t_title, $1.t_line, $1.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[0].node);

        if((yyval.node)->node1->ta_isSymbol){
            (yyval.node)->ta_isAux = 1;
            (yyval.node)->ta_reg = indexReg++;
            sprintf((yyval.node)->ta_code, "not $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val);
        }
        else if((yyval.node)->node1->ta_isAux){
            (yyval.node)->ta_isAux = 1;
            (yyval.node)->ta_reg = indexReg++;
            sprintf((yyval.node)->ta_code, "not $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg);
        }
    }
#line 3863 "bison/clang_syntax.tab.c"
    break;

  case 76: /* unLogicalExp: relationalExp  */
#line 663 "bison/clang_syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3871 "bison/clang_syntax.tab.c"
    break;

  case 77: /* relationalExp: relationalExp REL_OP sumExp  */
#line 669 "bison/clang_syntax.y"
                                {
        (yyval.node) = createNode("relational expression");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);

        if(!strcmp((yyvsp[-1].token).t_title, "==")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "seq $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "seq $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "seq $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "seq $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
        if(!strcmp((yyvsp[-1].token).t_title, "!=")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "seq $%d, %s, %s\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "seq $%d, %s, $%d\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "seq $%d, $%d, %s\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "seq $%d, $%d, $%d\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
            }
        }

        else if(!strcmp((yyvsp[-1].token).t_title, ">=")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "slt $%d, %s, %s\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "slt $%d, %s, $%d\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "slt $%d, $%d, %s\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "slt $%d, $%d, $%d\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
            }
        }

        else if(!strcmp((yyvsp[-1].token).t_title, ">")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "sleq $%d, %s, %s\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "sleq $%d, %s, $%d\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "sleq $%d, $%d, %s\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "sleq $%d, $%d, $%d\nnot $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg,(yyval.node)->ta_reg,(yyval.node)->ta_reg);
                }
            }
        }
        else if(!strcmp((yyvsp[-1].token).t_title, "<")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "slt $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "slt $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "slt $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "slt $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
        else if(!strcmp((yyvsp[-1].token).t_title, "<=")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "sleq $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "sleq $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "sleq $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "sleq $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
    }
#line 4017 "bison/clang_syntax.tab.c"
    break;

  case 78: /* relationalExp: sumExp  */
#line 810 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4025 "bison/clang_syntax.tab.c"
    break;

  case 79: /* sumExp: sumExp SUM_OP mulExp  */
#line 816 "bison/clang_syntax.y"
                         {
        (yyval.node) = createNode("+/- operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);

        if(!strcmp((yyvsp[-1].token).t_title, "+")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "add $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "add $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "add $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "add $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
        else if(!strcmp((yyvsp[-1].token).t_title, "-")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "sub $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "sub $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "sub $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "sub $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
    }
#line 4081 "bison/clang_syntax.tab.c"
    break;

  case 80: /* sumExp: mulExp  */
#line 867 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4089 "bison/clang_syntax.tab.c"
    break;

  case 81: /* mulExp: mulExp MUL_OP signedFactor  */
#line 873 "bison/clang_syntax.y"
                               {
        (yyval.node) = createNode("*/÷ operation");
        // $$->s_token = emulateToken($2.t_title, $2.t_line, $2.t_column, NULL);
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
        if(!strcmp((yyvsp[-1].token).t_title, "*")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "mul $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "mul $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "mul $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "mul $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }
        else if(!strcmp((yyvsp[-1].token).t_title, "/")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "div $%d, %s, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "div $%d, %s, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val, (yyval.node)->node2->ta_reg);
                }
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                if((yyval.node)->node2->ta_isSymbol){
                    sprintf((yyval.node)->ta_code, "div $%d, $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_val);
                }
                else if((yyval.node)->node2->ta_isAux){
                    sprintf((yyval.node)->ta_code, "div $%d, $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg, (yyval.node)->node2->ta_reg);
                }
            }
        }

    }
#line 4145 "bison/clang_syntax.tab.c"
    break;

  case 82: /* mulExp: signedFactor  */
#line 924 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4153 "bison/clang_syntax.tab.c"
    break;

  case 83: /* signedFactor: factor  */
#line 930 "bison/clang_syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4161 "bison/clang_syntax.tab.c"
    break;

  case 84: /* signedFactor: SUM_OP signedFactor  */
#line 933 "bison/clang_syntax.y"
                          {
        char auxstr[100];
        strcpy(auxstr, "signed factor ");
        (yyval.node) = createNode(strcat(auxstr, (yyvsp[-1].token).t_title));
        (yyval.node)->node1 = (yyvsp[0].node);
        if(!strcmp((yyvsp[-1].token).t_title, "-")){
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                sprintf((yyval.node)->ta_code, "minus $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val);
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                sprintf((yyval.node)->ta_code, "minus $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg);

            }
        }
        else{
            if((yyval.node)->node1->ta_isSymbol){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                sprintf((yyval.node)->ta_code, "mov $%d, %s", (yyval.node)->ta_reg, (yyval.node)->node1->ta_val);
            }
            else if((yyval.node)->node1->ta_isAux){
                (yyval.node)->ta_isAux = 1;
                (yyval.node)->ta_reg = indexReg++;
                sprintf((yyval.node)->ta_code, "mov $%d, $%d", (yyval.node)->ta_reg, (yyval.node)->node1->ta_reg);

            }
        }
    }
#line 4198 "bison/clang_syntax.tab.c"
    break;

  case 85: /* factor: ID  */
#line 968 "bison/clang_syntax.y"
       {
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column));
        (yyval.node) = createNode("ID");

        (yyval.node)->s_token = emulateToken((yyvsp[0].token).t_title, (yyvsp[0].token).t_line, (yyvsp[0].token).t_column, typestr);
        if(strcmp(typestr, "")){
            (yyval.node)->ta_isSymbol = 1;
            sprintf((yyval.node)->ta_val,"%s_%d",(yyvsp[0].token).t_title, scopeHandler2((yyvsp[0].token).t_title));
        }
    }
#line 4214 "bison/clang_syntax.tab.c"
    break;

  case 86: /* factor: functionCall  */
#line 979 "bison/clang_syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4222 "bison/clang_syntax.tab.c"
    break;

  case 87: /* factor: '(' simpleExp ')'  */
#line 982 "bison/clang_syntax.y"
                        {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 4230 "bison/clang_syntax.tab.c"
    break;

  case 88: /* factor: constOP  */
#line 985 "bison/clang_syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4238 "bison/clang_syntax.tab.c"
    break;

  case 89: /* factor: selectOP  */
#line 988 "bison/clang_syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4246 "bison/clang_syntax.tab.c"
    break;

  case 90: /* factor: typeOP  */
#line 991 "bison/clang_syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4254 "bison/clang_syntax.tab.c"
    break;

  case 91: /* factor: setReturner  */
#line 994 "bison/clang_syntax.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 4262 "bison/clang_syntax.tab.c"
    break;

  case 92: /* $@3: %empty  */
#line 1000 "bison/clang_syntax.y"
           {
        qtdParams = 0;
    }
#line 4270 "bison/clang_syntax.tab.c"
    break;

  case 93: /* functionCall: ID '(' $@3 callParams ')'  */
#line 1003 "bison/clang_syntax.y"
                   {
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, typestr);
        (yyval.node)->node1 = (yyvsp[-1].node);
        if(qtdHandler((yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column)){
            paramsHandler(symbolTable, (yyvsp[-4].token).t_title, (yyvsp[-4].token).t_line, (yyvsp[-4].token).t_column, (yyvsp[-1].node), qtdParams);
        }
    }
#line 4285 "bison/clang_syntax.tab.c"
    break;

  case 94: /* functionCall: ID '(' ')'  */
#line 1013 "bison/clang_syntax.y"
                 {
        qtdParams = 0;
        char typestr[6];
        strcpy(typestr,scopeHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column));
        (yyval.node) = createNode("function call");
        (yyval.node)->s_token = emulateToken((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column, typestr);
        qtdHandler((yyvsp[-2].token).t_title, (yyvsp[-2].token).t_line, (yyvsp[-2].token).t_column);
    }
#line 4298 "bison/clang_syntax.tab.c"
    break;

  case 95: /* callParams: callParams ',' simpleExp  */
#line 1024 "bison/clang_syntax.y"
                            {
        qtdParams++;
        (yyval.node) = createNode("call parameters");
        (yyval.node)->node1 = (yyvsp[-2].node);
        (yyval.node)->node2 = (yyvsp[0].node);
        expTypeHandler((yyvsp[0].node));
    }
#line 4310 "bison/clang_syntax.tab.c"
    break;

  case 96: /* callParams: simpleExp  */
#line 1031 "bison/clang_syntax.y"
                {
        qtdParams++;
        (yyval.node) = (yyvsp[0].node);
        expTypeHandler((yyval.node));
    }
#line 4320 "bison/clang_syntax.tab.c"
    break;


#line 4324 "bison/clang_syntax.tab.c"

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

#line 1038 "bison/clang_syntax.y"

extern void yyerror(const char* a) {
    printf(BRED"[%03d:%03d] ", line, column);
    printf("SYNTAX   ERROR --> ");
    printf("%s\n"reset, a);
    errors++;
}

extern int qtdHandler(char* title, int line, int column){
    int qtdArgs = findArgs(symbolTable, title);
    if(qtdArgs != qtdParams){
        errors_sem++;
        printf(BRED"[%03d:%03d] ", line, column);
        printf("SEMANTIC ERROR --> Wrong number of arguments in function call: %s\n"reset, title);
        printf(BRED"\t\t\t     EXPECTED: %d\n"reset, qtdArgs);
        printf(BRED"\t\t\t          GOT: %d\n"reset, qtdParams);
        return 0;
    }
    return 1;
}

extern char* scopeHandler(char* title, int line, int column){
    int idx = searchStack(&scope);
    int inContext = 0;
    int st_pos = 0;
    for(int i = idx - 1 ; i >= 0; i--){
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

extern int scopeHandler2(char* title){
    int idx = searchStack(&scope);
    int st_pos = 0;
    for(int i = idx - 1 ; i >= 0; i--){
        st_pos = searchVarContext(symbolTable, title, scope.stack[i]);
        if(st_pos >= 0){
            // printf("S TYPE DO SCOPE HANDLER ACHOU ISSO AQUI OW %s\n", symbolTable[st_pos].s_type);
            return symbolTable[st_pos].s_scope;
        }
    }
    return -1;
}

int main(int argc, char **argv){
    errors_sem = 0;
    FILE *fp = fopen(argv[1], "r");
    initTable(symbolTable);
    initStack(&scope);
    pushStack(&scope, 0);
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
        printf("\nTypecasting caption: \n");
        printf("\t<type> \n");
        printf("\t(cast) \n\n");
        printTree(tree, 0);
        writeFile();
    }
    else if(errors){
        printf(BRED"The Abstract Syntax Tree will not be shown if there are syntactic or lexical errors.\n");
        printf(reset);
    }
    else{
        printf("\n--------AST--------\n");
        printf("\nTypecasting caption: \n");
        printf("\t<type> \n");
        printf("\t(cast) \n\n");
        printTree(tree, 0);
    }
    printf("\n--------Symbol Table--------\n");
    printTable(symbolTable);
    freeTree();
    yylex_destroy();
    return 0;
}
