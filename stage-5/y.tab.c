/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "fun.y" /* yacc.c:339  */
  
    #define YYSTYPE struct tnode*
	#include <stdio.h>
	#include <stdlib.h>
    #include <string.h>
    #include "symbol.h"
    #include "symbol.c"
    #include "parameter.h"
    #include "parameter.c"
    #include "tree.h"
    #include "tree.c"
    #include "codegen.h"
    #include "codegen.c"

;

#line 83 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    BEG = 259,
    READ = 260,
    WRITE = 261,
    END = 262,
    ASGN = 263,
    ID = 264,
    IF = 265,
    THEN = 266,
    WHILE = 267,
    ENDWHILE = 268,
    ENDIF = 269,
    DO = 270,
    ELSE = 271,
    REPEAT = 272,
    UNTIL = 273,
    BREAK = 274,
    CONTINUE = 275,
    MAIN = 276,
    DECL = 277,
    ENDDECL = 278,
    INT = 279,
    STR = 280,
    CONN = 281,
    INTTYPE = 282,
    STRTYPE = 283,
    BOOLTYPE = 284,
    VARIABLE = 285,
    ARRAY = 286,
    FUNCTION = 287,
    RETURN = 288,
    AND = 289,
    OR = 290,
    NOT = 291,
    PLUS = 292,
    MINUS = 293,
    MUL = 294,
    DIV = 295,
    MOD = 296,
    LT = 297,
    GT = 298,
    LE = 299,
    GE = 300,
    EQ = 301,
    NEQ = 302
  };
#endif
/* Tokens.  */
#define NUM 258
#define BEG 259
#define READ 260
#define WRITE 261
#define END 262
#define ASGN 263
#define ID 264
#define IF 265
#define THEN 266
#define WHILE 267
#define ENDWHILE 268
#define ENDIF 269
#define DO 270
#define ELSE 271
#define REPEAT 272
#define UNTIL 273
#define BREAK 274
#define CONTINUE 275
#define MAIN 276
#define DECL 277
#define ENDDECL 278
#define INT 279
#define STR 280
#define CONN 281
#define INTTYPE 282
#define STRTYPE 283
#define BOOLTYPE 284
#define VARIABLE 285
#define ARRAY 286
#define FUNCTION 287
#define RETURN 288
#define AND 289
#define OR 290
#define NOT 291
#define PLUS 292
#define MINUS 293
#define MUL 294
#define DIV 295
#define MOD 296
#define LT 297
#define GT 298
#define LE 299
#define GE 300
#define EQ 301
#define NEQ 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    29,    30,    33,    34,    37,    38,    41,
      41,    44,    45,    48,    49,    53,    54,    56,    59,    60,
      61,    65,    72,    73,    76,    77,    76,    88,    89,    90,
      93,    94,    97,   100,   101,   104,   105,   108,   108,   114,
     117,   118,   121,   122,   125,   127,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   161,   162
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "BEG", "READ", "WRITE", "END",
  "ASGN", "ID", "IF", "THEN", "WHILE", "ENDWHILE", "ENDIF", "DO", "ELSE",
  "REPEAT", "UNTIL", "BREAK", "CONTINUE", "MAIN", "DECL", "ENDDECL", "INT",
  "STR", "CONN", "INTTYPE", "STRTYPE", "BOOLTYPE", "VARIABLE", "ARRAY",
  "FUNCTION", "RETURN", "AND", "OR", "NOT", "PLUS", "MINUS", "MUL", "DIV",
  "MOD", "LT", "GT", "LE", "GE", "EQ", "NEQ", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "$accept", "start", "Gdeclblock",
  "Gdecllist", "Gdecl", "$@1", "Type", "Glist", "Gid", "Paralist", "para",
  "Fdefblock", "Fdef", "$@2", "$@3", "Ldeclblock", "Ldecllist", "LDecl",
  "Llist", "Body", "Mainblock", "$@4", "Rstmt", "Slist", "exp", "stmt",
  "Arglist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    59,    44,
      91,    93,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF -76

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-76)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,    28,    33,    61,   -21,   -76,   -76,   -76,   -76,    52,
     -76,   -76,    26,   -76,    33,    76,   -21,   -76,   -76,   -76,
     -76,    86,    45,   -76,   -76,   -76,    15,   -17,   -76,   -76,
      47,    99,     3,   -76,    86,    51,     3,    63,   103,   -44,
     -76,   -76,    94,   -39,   -76,   -76,     3,   -76,    57,   115,
     -76,   -76,   -76,   111,    68,   -76,    98,    67,    71,   -76,
       0,   -76,   -76,   -76,    74,    77,    59,    80,    88,   172,
     172,    95,    96,    20,    20,    20,   140,    98,   193,   -76,
     -76,    94,   -76,   143,    20,    20,    20,    20,    20,    20,
     190,   118,   -76,   -76,   343,   174,   209,   -76,   151,   -76,
      20,    20,    20,    20,    20,    20,    20,    20,    20,    20,
      20,    20,    20,    20,   115,   -76,   226,   243,   328,   373,
     -23,   260,   277,   109,   110,   -76,   -76,   -76,   358,   174,
     174,   382,   382,   388,   388,   388,   394,   394,   394,   394,
     394,   394,   112,   117,   128,   -76,    20,   -76,   168,   165,
      20,    20,   -76,   -76,   -76,   -76,   373,   172,   172,   294,
     311,    54,   136,    10,   135,   137,   172,   138,   -76,   -76,
     -76,   154,   -76,   146,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     6,    11,    12,     0,
       7,     9,     0,     1,    11,     0,     0,    23,     3,     5,
       8,     0,     0,    24,    22,     2,    15,     0,    14,    37,
       0,     0,    18,    10,     0,     0,    18,     0,     0,     0,
      20,    13,    27,     0,    16,    21,     0,    17,     0,     0,
      25,    19,    28,     0,     0,    30,     0,     0,     0,    33,
       0,    29,    31,    42,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      38,    27,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,    59,     0,    36,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    72,
       0,     0,     0,     0,     0,    39,    60,    35,     0,    57,
      58,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     0,     0,     0,    44,     0,    45,     0,     0,
       0,     0,    61,    26,    62,    63,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      65,     0,    66,     0,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,   -76,   -76,   188,   -76,    46,   -76,   164,   167,
     158,   -76,   206,   -76,   -76,   142,   -76,   171,   -76,   127,
       8,   -76,   152,   -69,   -67,   -75,   -76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     9,    10,    21,    38,    27,    28,    39,
      40,    16,    17,    30,    58,    49,    54,    55,    60,    57,
       5,    35,    76,    77,    78,    79,   120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    91,    99,    14,     8,    46,    94,    95,    96,    47,
      46,     1,    18,     2,    50,    99,    99,   116,   117,   118,
     119,   121,   122,    63,    25,   158,   146,     7,     8,    66,
     147,    33,    34,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,    11,    82,    83,
      15,     6,     7,     8,    12,    11,    74,    63,   168,    64,
      65,    13,    15,    66,    67,    31,    68,    32,   165,    69,
     166,    70,    75,    71,    72,    19,     7,     8,    22,   156,
      52,     7,     8,   159,   160,    23,    99,    99,   161,   162,
      74,    61,     7,     8,    53,    26,    99,   171,    29,    36,
      53,    63,    37,    64,    65,    42,    75,    66,    67,    86,
      68,    87,    45,    69,    44,    70,    48,    71,    72,    56,
      59,    63,    80,    64,    65,    81,    84,    66,    67,    85,
      68,    73,    88,    69,    74,    70,   124,    71,    72,    63,
      89,    64,    65,    92,    93,    66,    67,    97,    68,   167,
      75,    69,   115,    70,    74,    71,    72,    63,   127,    64,
      65,   150,   151,    66,    67,   154,    68,   153,   173,    69,
      75,    70,    74,    71,    72,    63,   155,    64,    65,   157,
     158,    66,    67,   169,    68,   170,   172,    69,    75,    70,
      74,    71,    72,    63,   174,    64,    65,    20,    41,    66,
      67,   100,   123,    43,    51,    69,    75,    70,    74,    71,
      72,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    24,   114,    75,    62,    74,   101,   102,    98,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   142,    75,   101,   102,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,     0,
     101,   102,   126,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,     0,   101,   102,   143,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,     0,   101,   102,   144,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
       0,   101,   102,   148,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,     0,   101,   102,
     149,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,     0,     0,   101,   102,   163,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,     0,   101,   102,   164,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,   101,   102,   145,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   125,   101,   102,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   152,   101,   102,     0,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1
};

static const yytype_int16 yycheck[] =
{
      69,    70,    77,    24,    25,    49,    73,    74,    75,    53,
      49,    22,     4,    24,    53,    90,    91,    84,    85,    86,
      87,    88,    89,     3,    16,    15,    49,    24,    25,     9,
      53,    48,    49,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     1,    48,    49,
       4,    23,    24,    25,    21,     9,    36,     3,    48,     5,
       6,     0,    16,     9,    10,    50,    12,    52,    14,    15,
      16,    17,    52,    19,    20,    23,    24,    25,    52,   146,
      23,    24,    25,   150,   151,     9,   161,   162,   157,   158,
      36,    23,    24,    25,    48,     9,   171,   166,    53,    52,
      54,     3,     3,     5,     6,    54,    52,     9,    10,    50,
      12,    52,     9,    15,    51,    17,    22,    19,    20,     4,
       9,     3,    55,     5,     6,    54,    52,     9,    10,    52,
      12,    33,    52,    15,    36,    17,    18,    19,    20,     3,
      52,     5,     6,    48,    48,     9,    10,     7,    12,    13,
      52,    15,     9,    17,    36,    19,    20,     3,     7,     5,
       6,    52,    52,     9,    10,    48,    12,    55,    14,    15,
      52,    17,    36,    19,    20,     3,    48,     5,     6,    11,
      15,     9,    10,    48,    12,    48,    48,    15,    52,    17,
      36,    19,    20,     3,    48,     5,     6,     9,    34,     9,
      10,     8,    12,    36,    46,    15,    52,    17,    36,    19,
      20,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    16,    81,    52,    54,    36,    34,    35,    77,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   114,    52,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      34,    35,    53,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    34,    35,    53,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    34,    35,    53,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    34,    35,    53,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    34,    35,
      53,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    34,    35,    53,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    34,    35,    53,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    34,    35,    51,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      42,    43,    44,    45,    46,    47,    42,    43,    44,    45,
      46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    24,    57,    58,    76,    23,    24,    25,    59,
      60,    62,    21,     0,    24,    62,    67,    68,    76,    23,
      60,    61,    52,     9,    68,    76,     9,    63,    64,    53,
      69,    50,    52,    48,    49,    77,    52,     3,    62,    65,
      66,    64,    54,    65,    51,     9,    49,    53,    22,    71,
      53,    66,    23,    62,    72,    73,     4,    75,    70,     9,
      74,    23,    73,     3,     5,     6,     9,    10,    12,    15,
      17,    19,    20,    33,    36,    52,    78,    79,    80,    81,
      55,    54,    48,    49,    52,    52,    50,    52,    52,    52,
      79,    79,    48,    48,    80,    80,    80,     7,    78,    81,
       8,    34,    35,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    71,     9,    80,    80,    80,    80,
      82,    80,    80,    12,    18,    48,    53,     7,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    75,    53,    53,    51,    49,    53,    53,    53,
      52,    52,    48,    55,    48,    48,    80,    11,    15,    80,
      80,    79,    79,    53,    53,    14,    16,    13,    48,    48,
      48,    79,    48,    14,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    57,    58,    58,    59,    59,    61,
      60,    62,    62,    63,    63,    64,    64,    64,    65,    65,
      65,    66,    67,    67,    69,    70,    68,    71,    71,    71,
      72,    72,    73,    74,    74,    75,    75,    77,    76,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     1,     2,     0,
       4,     1,     1,     3,     1,     1,     4,     4,     0,     3,
       1,     2,     2,     1,     0,     0,    11,     0,     2,     3,
       1,     2,     3,     1,     3,     4,     3,     0,     9,     3,
       2,     1,     1,     1,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     5,     5,    10,     8,     8,     7,     7,     2,
       2,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 5:
#line 33 "fun.y" /* yacc.c:1646  */
    {Gprinttable();initialize();}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 41 "fun.y" /* yacc.c:1646  */
    {dectype=ctype;}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 44 "fun.y" /* yacc.c:1646  */
    {ctype=INTTYPE;}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 45 "fun.y" /* yacc.c:1646  */
    {ctype=STRTYPE;}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 53 "fun.y" /* yacc.c:1646  */
    {Ginstall((yyvsp[0])->stringVal,dectype,1,VARIABLE,NULL);}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 54 "fun.y" /* yacc.c:1646  */
    {if((yyvsp[-1])->intVal<=0) {printf("array %s size invalid ",(yyvsp[-3])->stringVal);exit(1);}
		                      Ginstall((yyvsp[-3])->stringVal,dectype,(yyvsp[-1])->intVal,ARRAY,NULL);}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 56 "fun.y" /* yacc.c:1646  */
    {Ginstall((yyvsp[-3])->stringVal,dectype,-1,FUNCTION,parahead);parahead=NULL;}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 65 "fun.y" /* yacc.c:1646  */
    { Parainstall((yyvsp[0])->stringVal,ctype); }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "fun.y" /* yacc.c:1646  */
    {dectype=ctype;}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 77 "fun.y" /* yacc.c:1646  */
    {struct Gsymbol *temp=GLookup((yyvsp[-4])->stringVal);
                            if(temp== NULL){printf("function %s not defined ",(yyvsp[-4])->stringVal);exit(1);}
                            if(temp->type != dectype){printf("fun %s invalid return type",(yyvsp[-4])->stringVal);exit(1);}
                            checkpara(parahead,temp->paralist);Lparainstall();parahead=NULL;
                             fprintf(out,"F%d: ",temp->flabel);}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 82 "fun.y" /* yacc.c:1646  */
    {Lprinttable();fungen((yyvsp[-1]));
                             struct Gsymbol *temp = GLookup((yyvsp[-9])->stringVal);
                             if(temp->size == 0) {printf("multiple function declaration");exit(1);}
                             temp->size=0;Lsymboltable=NULL;}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "fun.y" /* yacc.c:1646  */
    {Linstall((yyvsp[0])->stringVal,ctype);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "fun.y" /* yacc.c:1646  */
    {Linstall((yyvsp[0])->stringVal,ctype);}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 104 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,CONN,(yyvsp[-2]),(yyvsp[-1]),NULL);}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 105 "fun.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "fun.y" /* yacc.c:1646  */
    { dectype=INTTYPE;fprintf(out,"MAIN: ");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "fun.y" /* yacc.c:1646  */
    {Lprinttable();fungen((yyvsp[-1]));Lsymboltable=NULL;}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 114 "fun.y" /* yacc.c:1646  */
    {(yyval)=Createtree(0,0,NULL,RETURN,(yyvsp[-1]),NULL,NULL);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 117 "fun.y" /* yacc.c:1646  */
    {(yyval)=Createtree(0,0,NULL,CONN,(yyvsp[-1]),(yyvsp[0]),NULL);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 118 "fun.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 122 "fun.y" /* yacc.c:1646  */
    {(yyvsp[0])->Gentry = GLookup((yyvsp[0])->stringVal); (yyvsp[0])->Lentry=  LLookup((yyvsp[0])->stringVal); 
                              if((yyvsp[0])->Lentry == NULL) if((yyvsp[0])->Gentry == NULL) 
                              {printf("undeclared variable %s\n",(yyvsp[0])->stringVal);exit(1);}Variable((yyvsp[0]));(yyval) = (yyvsp[0]);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 125 "fun.y" /* yacc.c:1646  */
    {(yyvsp[-3])->Gentry = GLookup((yyvsp[-3])->stringVal); if((yyvsp[-3])->Gentry == NULL) 
                              {printf("undeclared array %s\n",(yyvsp[-3])->stringVal);exit(1);}Array((yyvsp[-3]));(yyvsp[-3])->left=(yyvsp[-1]);checkindex((yyvsp[-1]));(yyval) = (yyvsp[-3]);}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 127 "fun.y" /* yacc.c:1646  */
    {(yyvsp[-3])->Gentry = GLookup((yyvsp[-3])->stringVal); (yyvsp[-3])->Lentry=  LLookup((yyvsp[-3])->stringVal); 
                              if((yyvsp[-3])->Lentry == NULL) if((yyvsp[-3])->Gentry == NULL) 
                              {printf("undeclared function %s\n",(yyvsp[-3])->stringVal);exit(1);}Function((yyvsp[-3]));
                              (yyvsp[-3])->Arglist=arghead;checkarg((yyvsp[-3]));arghead=NULL;(yyval) = (yyvsp[-3]);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 131 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,INTTYPE,NULL,PLUS,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,INTTYPE,NULL,MINUS,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,INTTYPE,NULL,MUL,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,INTTYPE,NULL,DIV,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,INTTYPE,NULL,MOD,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,LT,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,GT,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,LE,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,GE,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,EQ,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 141 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,NEQ,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,AND,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,OR,(yyvsp[-2]),(yyvsp[0]),NULL);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,BOOLTYPE,NULL,NOT,(yyvsp[0]),NULL,NULL);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "fun.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,'=',ASGN,(yyvsp[-3]),(yyvsp[-1]),NULL);}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 150 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,READ,(yyvsp[-2]),NULL,NULL);}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 151 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,WRITE,(yyvsp[-2]),NULL,NULL);}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 152 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,IF,(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]));}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 153 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,IF,(yyvsp[-5]),(yyvsp[-2]),NULL);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 154 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,WHILE,(yyvsp[-5]),(yyvsp[-2]),NULL);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 155 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,DO,(yyvsp[-2]),(yyvsp[-5]),NULL);}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 156 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,REPEAT,(yyvsp[-2]),(yyvsp[-5]),NULL);}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 157 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,BREAK,NULL,NULL,NULL);}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 158 "fun.y" /* yacc.c:1646  */
    {(yyval) = Createtree(0,0,NULL,CONTINUE,NULL,NULL,NULL);}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 161 "fun.y" /* yacc.c:1646  */
    {Arginstall((yyvsp[0]));}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 162 "fun.y" /* yacc.c:1646  */
    {Arginstall((yyvsp[0]));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1788 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 165 "fun.y" /* yacc.c:1906  */


void yyerror(char *s)
{
    printf("error in yacc %s",s);
	exit(0);
}

int main(int argc,char* argv[]) {
if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
}   
    out=fopen(argv[2],"w");
	yyparse();
    return 0;
}
void checkindex(struct tnode* node)
{
	int type=gettype(node);
	if(type != INTTYPE)
	{
		printf("invalid array size");
		exit(1);
	}
}

void checkarg(struct tnode* node)
{
    struct parameter *para=node->Gentry->paralist;
    struct argument *arg=getarg();
    if(para == NULL && arg == NULL) return;
    while(para!=NULL && arg !=NULL)
    {
        if(para->type==gettype(arg->node))
        {
            para=para->next;
            arg=arg->prev;
            continue;
        }
        printf("parameter %s mismatch ",node->stringVal);
        exit(1);
    
    }
    if(!(para==NULL && arg== NULL))
    {
        printf("parameter %s mismatch",node->stringVal);
        exit(1);
    }
}

void Variable(struct tnode *node)
{
    int design = getdesign(node->stringVal);
    if(design != VARIABLE)
    {    
        printf("ERROR: variable id %s invalid \n",node->stringVal);
        exit(1);
    }
}
void Array(struct tnode *node)
{
    int design = getdesign(node->stringVal);
    if(design != ARRAY)
    { 
        printf("ERROR: variable array %s invalid \n",node->stringVal);
        exit(1);
    }
}
void Function(struct tnode* node)
{
    int design=getdesign(node->stringVal);
    if(design!=FUNCTION)
    {
        printf("ERROR:Function %s invalid",node->stringVal);
        exit(1);
    }
}

int getdesign(char *name)
{
   struct Lsymbol *ptr= Lsymboltable;
    while(ptr!=NULL)
    {
        if(!(strcmp(name,ptr->name)))
        {
            return VARIABLE;
        }
        ptr=ptr->next;
    }

    struct Gsymbol *ptr2 = Gsymboltable;
    while(ptr2 != NULL)
    {
        if(!(strcmp(name,ptr2->name)))
        {
            return ptr2->design;
        }
        ptr2 = ptr2->next;
    }
    return 0;
}
