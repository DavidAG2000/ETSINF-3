/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NL = 258,
     T_INT_LIT = 259,
     T_FP_LIT = 260,
     T_ALPHANUM = 261,
     REG_INT = 262,
     REG_FP = 263,
     DE_DATA = 264,
     DE_TEXT = 265,
     DE_DWORD = 266,
     DE_DOUBLE = 267,
     DE_SPACE = 268,
     DE_IREG = 269,
     FORM_INM_L = 270,
     FORM_INM_S = 271,
     FORM_INM = 272,
     FORM_INM_B = 273,
     FORM_INM_T = 274,
     INST_NOP = 275,
     FORM_REG = 276,
     LABEL = 277
   };
#endif
/* Tokens.  */
#define NL 258
#define T_INT_LIT 259
#define T_FP_LIT 260
#define T_ALPHANUM 261
#define REG_INT 262
#define REG_FP 263
#define DE_DATA 264
#define DE_TEXT 265
#define DE_DWORD 266
#define DE_DOUBLE 267
#define DE_SPACE 268
#define DE_IREG 269
#define FORM_INM_L 270
#define FORM_INM_S 271
#define FORM_INM 272
#define FORM_INM_B 273
#define FORM_INM_T 274
#define INST_NOP 275
#define FORM_REG 276
#define LABEL 277




/* Copy the first part of user declarations.  */
#line 1 "input.yacc.y"

/**************************************************************************
 * 
 * Departamento de Informática de Sistema y Computadores (DISCA)
 * Universidad Politecnica de Valencia.                         
 * 
 * Author: Sergio Sáez (ssaez@disca.upv.es)
 * 
 * File: input.yacc.c
 *  
 * Date: Wed Mar 10 20:05:25 GMT 1999
 *
 * Description: 
 *    Contiene la descripción sintáctica del lenguaje ensamblador
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *************************************************************************/

/***** Includes ***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "tipos.h"
#include "etiquetas.h"

/*** Declaraciones externas */

extern FILE *	yyin;   
extern int	yyerror (char *);
extern void     free(void*);
extern int      yylex();
  
/*** Variables globales */
  
char	mensaje[256];
long	linenumber=1;

tipo_t tipo= t_dword;
modo_t modo= m_ninguno;
  
int	idx_ireg= 1;
int	idx_fpreg= 0;
long	pos_datos= -1;
long	pos_instruc= -1;
  
/*****************************************************************************/



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 66 "input.yacc.y"
{
  double fvalue;	
  long   ivalue;
  char   cvalue[128];
}
/* Line 193 of yacc.c.  */
#line 211 "input.yacc.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 224 "input.yacc.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   82

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNRULES -- Number of states.  */
#define YYNSTATES  85

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      24,    25,     2,     2,    23,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    11,    16,    17,    22,
      25,    27,    29,    30,    32,    34,    35,    39,    40,    44,
      47,    50,    51,    55,    58,    59,    60,    64,    65,    69,
      72,    73,    74,    78,    81,    82,    84,    86,    88,    90,
      92,   100,   108,   113,   120,   127,   134
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      27,     0,    -1,    -1,    22,    28,    29,    -1,    29,    -1,
      -1,    32,     3,    30,    27,    -1,    -1,    47,     3,    31,
      27,    -1,     3,    27,    -1,    32,    -1,    47,    -1,    -1,
       9,    -1,    10,    -1,    -1,    11,    33,    35,    -1,    -1,
      12,    34,    38,    -1,    13,     4,    -1,    14,    42,    -1,
      -1,     4,    36,    37,    -1,    23,    35,    -1,    -1,    -1,
       5,    39,    41,    -1,    -1,     4,    40,    41,    -1,    23,
      38,    -1,    -1,    -1,     4,    43,    44,    -1,    23,    42,
      -1,    -1,     4,    -1,     6,    -1,     4,    -1,     6,    -1,
      20,    -1,    15,     7,    23,    45,    24,     7,    25,    -1,
      16,     7,    23,    45,    24,     7,    25,    -1,    18,     7,
      23,    46,    -1,    21,     7,    23,     7,    23,     7,    -1,
      21,     7,    23,     7,    23,    45,    -1,    17,     7,    23,
       7,    23,    45,    -1,    19,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    93,   113,   119,   118,   126,   125,   132,
     136,   140,   145,   149,   155,   174,   173,   184,   183,   193,
     204,   216,   215,   247,   252,   257,   256,   279,   278,   301,
     306,   311,   310,   322,   327,   352,   357,   363,   368,   374,
     388,   420,   456,   470,   500,   517,   531
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NL", "T_INT_LIT", "T_FP_LIT",
  "T_ALPHANUM", "REG_INT", "REG_FP", "DE_DATA", "DE_TEXT", "DE_DWORD",
  "DE_DOUBLE", "DE_SPACE", "DE_IREG", "FORM_INM_L", "FORM_INM_S",
  "FORM_INM", "FORM_INM_B", "FORM_INM_T", "INST_NOP", "FORM_REG", "LABEL",
  "','", "'('", "')'", "$accept", "r_inicio", "@1", "r_linea_ensamblador",
  "@2", "@3", "r_directiva", "@4", "@5", "r_lista_enteros", "@6",
  "r_lista_enteros_cont", "r_lista_reales", "@7", "@8",
  "r_lista_reales_cont", "r_valores_enteros", "@9",
  "r_valores_enteros_cont", "r_inmediato", "r_posicion", "r_instruccion", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    26,    28,    27,    27,    30,    29,    31,    29,    29,
      29,    29,    29,    32,    32,    33,    32,    34,    32,    32,
      32,    36,    35,    37,    37,    39,    38,    40,    38,    41,
      41,    43,    42,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     0,     4,     0,     4,     2,
       1,     1,     0,     1,     1,     0,     3,     0,     3,     2,
       2,     0,     3,     2,     0,     0,     3,     0,     3,     2,
       0,     0,     3,     2,     0,     1,     1,     1,     1,     1,
       7,     7,     4,     6,     6,     6,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    12,    13,    14,    15,    17,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     2,     0,     4,    10,    11,
       9,     0,     0,    19,    31,    20,     0,     0,     0,     0,
      46,     0,    12,     1,     5,     7,    21,    16,    27,    25,
      18,    34,     0,     0,     0,     0,     0,     3,    12,    12,
      24,    30,    30,     0,    32,    35,    36,     0,     0,     0,
      37,    38,    42,     0,     6,     8,     0,    22,     0,    28,
      26,    33,     0,     0,     0,     0,    23,    29,     0,     0,
      45,    43,    44,    40,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    32,    17,    48,    49,    18,    21,    22,    37,
      50,    67,    40,    52,    51,    69,    25,    41,    54,    57,
      62,    19
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const yytype_int8 yypact[] =
{
       0,     0,   -43,   -43,   -43,   -43,     3,    20,    23,    24,
      42,    43,    47,   -43,    45,   -43,    29,   -43,    50,    51,
     -43,    52,    22,   -43,   -43,   -43,    32,    34,    35,    36,
     -43,    37,    25,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,    38,     2,     2,    55,    19,    56,   -43,     0,     0,
      41,    44,    44,    20,   -43,   -43,   -43,    46,    48,    53,
     -43,   -43,   -43,    54,   -43,   -43,    52,   -43,    22,   -43,
     -43,   -43,    58,    59,     2,    -2,   -43,   -43,    49,    57,
     -43,   -43,   -43,   -43,   -43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,    -1,   -43,    39,   -43,   -43,   -43,   -43,   -43,     7,
     -43,   -43,     1,   -43,   -43,    16,    26,   -43,   -43,   -42,
     -43,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      20,    58,    55,     1,    56,    81,    55,    23,    56,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    60,    24,    61,    38,    39,     1,    33,
      26,    27,    80,    82,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    64,    65,    28,
      29,    30,    31,    34,    35,    42,    36,    43,    44,    45,
      46,    53,    59,    63,    66,    78,    79,    68,    70,    77,
      72,    47,    73,    76,    83,     0,    74,    75,     0,    71,
       0,     0,    84
};

static const yytype_int8 yycheck[] =
{
       1,    43,     4,     3,     6,     7,     4,     4,     6,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     4,     4,     6,     4,     5,     3,     0,
       7,     7,    74,    75,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    48,    49,     7,
       7,     4,     7,     3,     3,    23,     4,    23,    23,    23,
      23,    23,     7,     7,    23,     7,     7,    23,    52,    68,
      24,    32,    24,    66,    25,    -1,    23,    23,    -1,    53,
      -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    27,    29,    32,    47,
      27,    33,    34,     4,     4,    42,     7,     7,     7,     7,
       4,     7,    28,     0,     3,     3,     4,    35,     4,     5,
      38,    43,    23,    23,    23,    23,    23,    29,    30,    31,
      36,    40,    39,    23,    44,     4,     6,    45,    45,     7,
       4,     6,    46,     7,    27,    27,    23,    37,    23,    41,
      41,    42,    24,    24,    23,    23,    35,    38,     7,     7,
      45,     7,    45,    25,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 94 "input.yacc.y"
    {
	  switch (modo)
	  {
	  case m_ninguno:
	    yyerror("Etiqueta indefinida");
	  case m_datos:
	    te_inserta((yyvsp[(1) - (1)].cvalue),linenumber,pos_datos,m_datos);
	    break;
	  case m_instruc:
	    te_inserta((yyvsp[(1) - (1)].cvalue),linenumber,pos_instruc,m_instruc);
	    break;
	  default:
	    yyerror("PÁNICO");
	  } /* endswitch */
	;}
    break;

  case 3:
#line 110 "input.yacc.y"
    {
	;}
    break;

  case 4:
#line 114 "input.yacc.y"
    {
	;}
    break;

  case 5:
#line 119 "input.yacc.y"
    {
	;}
    break;

  case 6:
#line 122 "input.yacc.y"
    {
	;}
    break;

  case 7:
#line 126 "input.yacc.y"
    {
	;}
    break;

  case 8:
#line 129 "input.yacc.y"
    {
	;}
    break;

  case 9:
#line 133 "input.yacc.y"
    {
	;}
    break;

  case 10:
#line 137 "input.yacc.y"
    {
	;}
    break;

  case 11:
#line 141 "input.yacc.y"
    {
	;}
    break;

  case 12:
#line 145 "input.yacc.y"
    { 
	;}
    break;

  case 13:
#line 150 "input.yacc.y"
    {
	pos_datos= 0;
	modo= m_datos;
	;}
    break;

  case 14:
#line 156 "input.yacc.y"
    {
	pos_instruc= 0;
	modo= m_instruc;
	;}
    break;

  case 15:
#line 174 "input.yacc.y"
    {
	 if (modo != m_datos)
	   yyerror("Datos en la memoria de instrucciones");
         tipo= t_dword;
	;}
    break;

  case 16:
#line 180 "input.yacc.y"
    {
	;}
    break;

  case 17:
#line 184 "input.yacc.y"
    {
	 if (modo != m_datos)
	   yyerror("Datos en la memoria de instrucciones");
         tipo= t_double;
	;}
    break;

  case 18:
#line 190 "input.yacc.y"
    {
	;}
    break;

  case 19:
#line 194 "input.yacc.y"
    {
	 if (modo != m_datos)
	   yyerror("Datos en la memoria de instrucciones");

         pos_datos+= (yyvsp[(2) - (2)].ivalue);

	 if (pos_datos > TAM_MEMO_DATOS)
	   yyerror("Excedido el tamaño de la memoria de datos");
	;}
    break;

  case 20:
#line 205 "input.yacc.y"
    {
	;}
    break;

  case 21:
#line 216 "input.yacc.y"
    {
	switch (tipo)
	  {
	  case t_word:
	    if (!esta_alineada_dir_word(pos_datos))
	      pos_datos= (dir_word(pos_datos)+1)*sizeof(word);
            if ((yyvsp[(1) - (1)].ivalue) > MAX_WORD)
              yyerror("Literal fuera del rango del tipo 'word'");
            MD.mword[dir_word(pos_datos)]= (word)(yyvsp[(1) - (1)].ivalue);    
            /* mem_etiqueta(pos_datos, tipo); */
	    pos_datos+= sizeof(word);    
	    break;	
	  case t_dword:
	    if (!esta_alineada_dir_dword(pos_datos))
	      pos_datos= (dir_dword(pos_datos)+1)*sizeof(dword);
	    MD.mdword[dir_dword(pos_datos)]= (dword)(yyvsp[(1) - (1)].ivalue);
	    pos_datos+= sizeof(dword);
	    break;	
	  default:
	    yyerror("PÁNICO");
	    break;
	  } /* endswitch */

        if (pos_datos > TAM_MEMO_DATOS)
	  yyerror("Excedido el tamaño de la memoria de datos");
	;}
    break;

  case 22:
#line 243 "input.yacc.y"
    {
	;}
    break;

  case 23:
#line 248 "input.yacc.y"
    {
	;}
    break;

  case 24:
#line 252 "input.yacc.y"
    {
	;}
    break;

  case 25:
#line 257 "input.yacc.y"
    {
	switch (tipo)
	  {
	  case t_double:
	    if (!esta_alineada_dir_double(pos_datos))
	      pos_datos= (dir_double(pos_datos)+1)*sizeof(double);
	    MD.mdouble[dir_double(pos_datos)]= (double)(yyvsp[(1) - (1)].fvalue);
	    pos_datos+= sizeof(double);    
	    break;	
	  default:
	    yyerror("PÁNICO");
	    break;
	  } /* endswitch */

        if (pos_datos > TAM_MEMO_DATOS)
	  yyerror("Excedido el tamaño de la memoria de datos");
	;}
    break;

  case 26:
#line 275 "input.yacc.y"
    {
	;}
    break;

  case 27:
#line 279 "input.yacc.y"
    {
	switch (tipo)
	  {
	  case t_double:
	    if (!esta_alineada_dir_double(pos_datos))
	      pos_datos= (dir_double(pos_datos)+1)*sizeof(double);
	    MD.mdouble[dir_double(pos_datos)]= (double)(yyvsp[(1) - (1)].ivalue);
	    pos_datos+= sizeof(double);    
	    break;	
	  default:
	    yyerror("PÁNICO");
	    break;
	  } /* endswitch */

        if (pos_datos > TAM_MEMO_DATOS)
	  yyerror("Excedido el tamaño de la memoria de datos");
	;}
    break;

  case 28:
#line 297 "input.yacc.y"
    {
	;}
    break;

  case 29:
#line 302 "input.yacc.y"
    {
	;}
    break;

  case 30:
#line 306 "input.yacc.y"
    {
	;}
    break;

  case 31:
#line 311 "input.yacc.y"
    {
  	  if (idx_ireg >= TAM_REGISTROS)
	    yyerror("Excedido el número de registros");
	  Rint[idx_ireg].valor= (yyvsp[(1) - (1)].ivalue);
	  idx_ireg++;
	;}
    break;

  case 32:
#line 318 "input.yacc.y"
    {
	;}
    break;

  case 33:
#line 323 "input.yacc.y"
    {
	;}
    break;

  case 34:
#line 327 "input.yacc.y"
    {
	;}
    break;

  case 35:
#line 353 "input.yacc.y"
    {
	  (yyval.ivalue)= (yyvsp[(1) - (1)].ivalue);
	;}
    break;

  case 36:
#line 358 "input.yacc.y"
    {
	  (yyval.ivalue)= te_resuelve((yyvsp[(1) - (1)].cvalue), linenumber, pos_instruc, m_datos);
	;}
    break;

  case 37:
#line 364 "input.yacc.y"
    {
	  (yyval.ivalue)= (yyvsp[(1) - (1)].ivalue);
	;}
    break;

  case 38:
#line 369 "input.yacc.y"
    {
	  (yyval.ivalue)= te_resuelve((yyvsp[(1) - (1)].cvalue), linenumber, pos_instruc, m_instruc);
	;}
    break;

  case 39:
#line 375 "input.yacc.y"
    { 
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (1)].ivalue);
	  MI[pos_instruc].tipo= FormatoR;
	  MI[pos_instruc].Rfuente1= 0;
	  MI[pos_instruc].Rfuente2= 0;
	  MI[pos_instruc].Rdestino= 0;
	  MI[pos_instruc].inmediato= 0;
	  pos_instruc++;
	;}
    break;

  case 40:
#line 389 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (7)].ivalue);
	  MI[pos_instruc].tipo= FormatoI;
	  MI[pos_instruc].Rdestino= (yyvsp[(2) - (7)].ivalue);
	  MI[pos_instruc].Rfuente1= (yyvsp[(6) - (7)].ivalue);
	  MI[pos_instruc].Rfuente2= 0;
	  MI[pos_instruc].inmediato= (yyvsp[(4) - (7)].ivalue);
	  pos_instruc++;
	;}
    break;

  case 41:
#line 421 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (7)].ivalue);
	  MI[pos_instruc].tipo= FormatoI;
	  MI[pos_instruc].Rdestino= 0;

//	dlx
//	  MI[pos_instruc].Rfuente1= $4;
//	  MI[pos_instruc].Rfuente2= $7;
//	  MI[pos_instruc].inmediato= $2;

	  MI[pos_instruc].Rfuente1= (yyvsp[(6) - (7)].ivalue);
	  MI[pos_instruc].Rfuente2= (yyvsp[(2) - (7)].ivalue);
	  MI[pos_instruc].inmediato= (yyvsp[(4) - (7)].ivalue);
	  pos_instruc++;
	;}
    break;

  case 42:
#line 457 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (4)].ivalue);
	  MI[pos_instruc].tipo= FormatoI;
	  MI[pos_instruc].Rdestino= 0;
	  MI[pos_instruc].Rfuente1= (yyvsp[(2) - (4)].ivalue);
	  MI[pos_instruc].Rfuente2= 0;
	  MI[pos_instruc].inmediato= (yyvsp[(4) - (4)].ivalue) - pos_instruc -1;
	  pos_instruc++;
	;}
    break;

  case 43:
#line 471 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (6)].ivalue);
	  MI[pos_instruc].tipo= FormatoR;
	  MI[pos_instruc].Rdestino= (yyvsp[(2) - (6)].ivalue);
	  MI[pos_instruc].Rfuente1= (yyvsp[(4) - (6)].ivalue);
	  MI[pos_instruc].Rfuente2= (yyvsp[(6) - (6)].ivalue);
	  MI[pos_instruc].inmediato= 0;
	  pos_instruc++;
	;}
    break;

  case 44:
#line 501 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (6)].ivalue) + 1;
	  /* El c�digo de operaci�n de las operaciones aritm�ticas
	     enteras con valores inmediatos son iguales a las que usan
	     registros M�S UNO. Ver fichero instrucciones.h */
	  MI[pos_instruc].tipo= FormatoI;
	  MI[pos_instruc].Rdestino= (yyvsp[(2) - (6)].ivalue);
	  MI[pos_instruc].Rfuente1= (yyvsp[(4) - (6)].ivalue);
	  MI[pos_instruc].Rfuente2= 0;
	  MI[pos_instruc].inmediato= (yyvsp[(6) - (6)].ivalue);
	  pos_instruc++;
	;}
    break;

  case 45:
#line 518 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (6)].ivalue);
	  MI[pos_instruc].tipo= FormatoI;
	  MI[pos_instruc].Rdestino= (yyvsp[(2) - (6)].ivalue);
	  MI[pos_instruc].Rfuente1= (yyvsp[(4) - (6)].ivalue);
	  MI[pos_instruc].Rfuente2= 0;
	  MI[pos_instruc].inmediato= (yyvsp[(6) - (6)].ivalue);
	  pos_instruc++;
	;}
    break;

  case 46:
#line 532 "input.yacc.y"
    {
	  if (modo != m_instruc)
	    yyerror("Se espera '.text' antes de las instrucciones");

	  MI[pos_instruc].codop= (yyvsp[(1) - (2)].ivalue);
	  MI[pos_instruc].tipo= FormatoI;
	  MI[pos_instruc].Rdestino= 0;
	  MI[pos_instruc].Rfuente1= 0;
	  MI[pos_instruc].Rfuente2= 0;
	  MI[pos_instruc].inmediato= (yyvsp[(2) - (2)].ivalue);
	  pos_instruc++;
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 1938 "input.yacc.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 578 "input.yacc.y"


/*** Definicion de codigo ***********************************************/

int yyerror 
(
 char *s
 )
{
  fprintf(stderr,"\n%s:%ld. Error: %s\n", nombre_fich, linenumber, s);
  exit(1);
} /* end yyerror */

void ensamblador
(
 FILE * f_input
 )
{

   yyin = f_input;
   if (yyin == NULL) return;
   
   /*** Realiza el 'parsing' del fichero de entrada */
   yyparse();

   te_confirma();		/* Confirma que al final no quedan
				   etiquetas por resolver */

   SegDatos.inicio= 0;		/* Segmento de datos */
   SegDatos.final= pos_datos;
   SegInstruc.inicio= 0;	/* Segmento de instrucciones */
   SegInstruc.final= pos_instruc;

} /* end ensamblador */


