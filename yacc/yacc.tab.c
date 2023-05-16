/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"
  
/*本yacc的生成文件是yacc.tab.c和yacc.tab.h 
yacc文件由3段组成，用2个%%行把这3段隔开。 
第1段是声明段，包括： 
1-C代码部分：include头文件、函数、类型等声明，这些声明会原样拷到生成的.c文件中。 
2-记号声明，如%token 
3-类型声明，如%type 
第2段是规则段，是yacc文件的主体，包括每个产生式是如何匹配的，以及匹配后要执行的C代码动作。 
第3段是C函数定义段，如yyerror()的定义，这些C代码会原样拷到生成的.c文件中。该段内容可以为空*/  

//第1段：声明段  
#include "main.h"//lex和yacc要共用的头文件，里面包含了一些头文件，重定义了YYSTYPE  

extern "C"//为了能够在C++程序里面调用C函数，必须把每一个需要使用的C函数，其声明都包括在extern "C"{}      
          //块里面，这样C++链接时才能成功链接它们。extern "C"用来在C++环境下设置C链接类型。  
{   //lex.l中也有类似的这段extern "C"，可以把它们合并成一段，放到共同的头文件main.h中  
    void yyerror(const char *s);  
    extern int yylex(void);//该函数是在lex.yy.c里定义的，yyparse()里要调用该函数，
                            //为了能编译和链接，必须用extern加以声明  
}  

void print_out(string str){

}


#line 97 "yacc.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
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
    T_NULL = 258,
    T_INT = 259,
    T_VOID = 260,
    T_CONST = 261,
    T_WHILE = 262,
    T_BREAK = 263,
    T_CONTINUE = 264,
    T_DO = 265,
    T_RETURN = 266,
    T_IF = 267,
    T_FOR = 268,
    T_ELSE = 269,
    T_VAR = 270,
    T_LEFT_PARENTHESIS = 271,
    T_RIGHT_PARENTHESIS = 272,
    T_LEFT_BRACKET = 273,
    T_RIGHT_BRACKET = 274,
    T_LEFT_BRACE = 275,
    T_RIGHT_BRACE = 276,
    T_DEFINE = 277,
    T_EQUAL = 278,
    T_NOT_EQUAL = 279,
    T_LARGE = 280,
    T_LESS = 281,
    T_LARGE_EQUAL = 282,
    T_LESS_EQUAL = 283,
    T_ADD = 284,
    T_SUB = 285,
    T_MUL = 286,
    T_DIV = 287,
    T_MOD = 288,
    T_NOT = 289,
    T_AND = 290,
    T_OR = 291,
    T_BOOL_TRUE = 292,
    T_BOOL_FALSE = 293,
    T_DELIMITER = 294,
    T_NEWLINE = 295,
    T_ERRORCHAR = 296,
    T_COMMA = 297,
    T_IDENT = 298,
    T_INTEGER_CONST = 299,
    T_DEC_CONST = 300,
    T_OCT_CONST = 301,
    T_HEX_CONST = 302
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,   143,   143,   147,   153,   157,   163,   167,   173,   179,
     182,   188,   194,   200,   203,   209,   213,   219,   222,   228,
     231,   237,   243,   246,   252,   256,   262,   265,   271,   275,
     279,   285,   288,   294,   300,   304,   310,   316,   319,   325,
     329,   335,   341,   344,   350,   356,   359,   365,   369,   375,
     379,   383,   387,   391,   395,   399,   403,   409,   412,   418,
     421,   427,   433,   439,   445,   448,   454,   458,   462,   468,
     474,   478,   482,   488,   491,   497,   501,   505,   511,   517,
     520,   526,   530,   536,   540,   544,   550,   554,   560,   564,
     570,   574,   580,   584,   588,   592,   598,   602,   608,   612,
     618,   622,   628,   632,   638
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NULL", "T_INT", "T_VOID", "T_CONST",
  "T_WHILE", "T_BREAK", "T_CONTINUE", "T_DO", "T_RETURN", "T_IF", "T_FOR",
  "T_ELSE", "T_VAR", "T_LEFT_PARENTHESIS", "T_RIGHT_PARENTHESIS",
  "T_LEFT_BRACKET", "T_RIGHT_BRACKET", "T_LEFT_BRACE", "T_RIGHT_BRACE",
  "T_DEFINE", "T_EQUAL", "T_NOT_EQUAL", "T_LARGE", "T_LESS",
  "T_LARGE_EQUAL", "T_LESS_EQUAL", "T_ADD", "T_SUB", "T_MUL", "T_DIV",
  "T_MOD", "T_NOT", "T_AND", "T_OR", "T_BOOL_TRUE", "T_BOOL_FALSE",
  "T_DELIMITER", "T_NEWLINE", "T_ERRORCHAR", "T_COMMA", "T_IDENT",
  "T_INTEGER_CONST", "T_DEC_CONST", "T_OCT_CONST", "T_HEX_CONST",
  "$accept", "CompUnit", "CompUnit1", "Decl", "ConstDecl", "ConstDecl1",
  "BType", "ConstDef", "ConstDef1", "ConstInitVal", "ConstInitVal1",
  "ConstInitVal2", "VarDecl", "VarDecl1", "VarDef", "VarDef1", "InitVal",
  "InitVal1", "FuncDef", "FuncType", "FuncFParams", "FuncFParams1",
  "FuncFParam", "FuncFParam1", "FuncFParam2", "Block", "Block1",
  "BlockItem", "Stmt", "Stmt1", "ELSE_STMT", "Exp", "Cond", "LVal",
  "LVal1", "PrimaryExp", "Number", "UnaryExp", "UnaryExp1", "UnaryOp",
  "FuncRParams", "FuncRParams1", "MulExp", "MulExp1", "AddExp", "AddExp1",
  "RelExp", "RelExp1", "EqExp", "EqExp1", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      85,  -136,  -136,    11,    53,  -136,  -136,  -136,    -3,  -136,
    -136,     9,  -136,    17,  -136,  -136,     1,    21,    52,    59,
      29,    88,    54,    -3,    46,    11,    88,    71,    17,    55,
      88,  -136,  -136,  -136,    27,  -136,  -136,  -136,  -136,  -136,
      88,    51,   -19,    79,    66,    21,  -136,    62,    89,    72,
      96,    91,    29,  -136,    99,   -19,    88,    88,  -136,  -136,
    -136,  -136,  -136,    88,  -136,  -136,    88,     1,     7,  -136,
    -136,  -136,   105,   104,    11,  -136,    59,    91,  -136,  -136,
    -136,  -136,    77,   113,  -136,   114,  -136,    51,  -136,  -136,
      94,   119,  -136,    58,  -136,    72,  -136,    97,   122,    88,
    -136,  -136,   126,    66,   124,   128,   131,   109,   110,    88,
     134,  -136,  -136,   130,    58,  -136,   115,  -136,   133,  -136,
      91,  -136,  -136,    77,  -136,    94,  -136,    88,  -136,    88,
    -136,  -136,   117,    88,  -136,  -136,  -136,    88,    97,  -136,
    -136,   138,   135,   -19,   101,    31,   118,   123,  -136,   141,
     121,  -136,   128,     5,  -136,  -136,  -136,  -136,    88,  -136,
    -136,    88,    88,    88,     5,  -136,  -136,  -136,   -19,   101,
      31,   118,   147,     5,  -136,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    34,     0,     0,     2,     4,     6,     0,     7,
       5,     0,    11,     0,     1,     3,    26,    22,     0,    13,
       9,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    64,    69,    67,    70,    68,    81,
       0,    86,   104,     0,     0,    22,    21,     0,     0,    37,
       0,     0,     9,     8,     0,    61,    73,     0,    63,    72,
      83,    84,    85,     0,    88,    89,     0,    26,     0,    25,
      28,    23,    39,     0,     0,    36,    13,    17,    12,    15,
      10,    66,    79,     0,    74,     0,    82,    87,    27,    29,
      31,     0,    40,    45,    33,    37,    14,    19,     0,     0,
      78,    71,    64,     0,     0,    42,     0,     0,     0,    57,
       0,    47,    51,     0,    45,    48,     0,    58,    67,    38,
       0,    18,    16,    79,    65,    31,    30,     0,    41,     0,
      54,    55,     0,     0,    44,    46,    50,     0,    19,    80,
      32,     0,     0,    90,    96,   100,   102,    62,    56,     0,
       0,    20,    42,    57,    93,    92,    95,    94,     0,    98,
      99,     0,     0,     0,    57,    49,    43,    53,    91,    97,
     101,   103,    59,    57,    52,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   158,   -67,  -136,   111,    -1,   136,    90,   -74,
    -136,    30,  -136,   120,   144,   102,   -61,    45,  -136,  -136,
    -136,    76,    98,  -136,    22,   100,    61,  -136,  -135,    67,
    -136,   -24,    44,   -92,    78,  -136,  -136,   -32,  -136,  -136,
    -136,    56,   112,  -136,   -21,  -136,    20,  -136,    23,  -136,
      19,  -136,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    29,     8,    20,    27,    78,
      98,   121,     9,    24,    17,    22,    69,   104,    10,    11,
      48,    75,    49,    92,   128,   112,   113,   114,   115,   116,
     174,   117,   142,    36,    58,    37,    38,    39,    83,    40,
      84,   100,    41,    63,    55,    66,   144,   158,   145,   161,
     146,   147,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   118,    13,    97,    43,    42,    54,    90,    59,    50,
      64,    65,   106,   107,   108,    12,   109,   110,   167,    21,
      70,    30,   118,    30,    47,    93,   111,    68,    89,   172,
      42,    86,    82,    85,    31,    32,    31,    32,   175,    33,
      16,    33,   125,    56,    70,    57,   138,   111,    34,    35,
      34,    35,    18,    14,   159,   160,    42,     1,     2,     3,
      19,   118,    12,    23,     3,   106,   107,   108,    25,   109,
     110,    28,   118,    47,    30,   123,    44,    26,    93,    70,
      60,   118,    30,    61,    62,    46,    68,    31,    32,     1,
       2,     3,    33,    51,    53,    31,    32,   -57,    67,    42,
      33,    34,    35,   141,    30,    72,    73,    30,   143,    34,
      35,    77,   143,   150,    74,    76,    81,    31,    32,    99,
      31,    32,    33,    91,    93,    33,   154,   155,   156,   157,
     101,    34,    35,   102,    34,    35,   103,   168,   105,   120,
     143,   143,   143,   122,    57,   126,   127,   129,   130,   131,
     133,   134,   153,   162,   136,   137,   148,   152,   164,   163,
     165,   173,    15,    80,    52,    71,    96,    45,   151,    88,
     140,   119,    95,    94,   166,   135,   132,   149,    87,   139,
     124,   169,   171,     0,     0,   170
};

static const yytype_int16 yycheck[] =
{
      21,    93,     3,    77,    21,    26,    30,    68,    40,    26,
      29,    30,     7,     8,     9,     4,    11,    12,   153,    18,
      44,    16,   114,    16,    25,    20,    93,    20,    21,   164,
      51,    63,    56,    57,    29,    30,    29,    30,   173,    34,
      43,    34,   103,    16,    68,    18,   120,   114,    43,    44,
      43,    44,    43,     0,    23,    24,    77,     4,     5,     6,
      43,   153,     4,    42,     6,     7,     8,     9,    16,    11,
      12,    42,   164,    74,    16,    99,    22,    18,    20,   103,
      29,   173,    16,    32,    33,    39,    20,    29,    30,     4,
       5,     6,    34,    22,    39,    29,    30,    39,    19,   120,
      34,    43,    44,   127,    16,    43,    17,    16,   129,    43,
      44,    20,   133,   137,    42,    19,    17,    29,    30,    42,
      29,    30,    34,    18,    20,    34,    25,    26,    27,    28,
      17,    43,    44,    19,    43,    44,    42,   158,    19,    42,
     161,   162,   163,    21,    18,    21,    18,    16,    39,    39,
      16,    21,    17,    35,    39,    22,    39,    19,    17,    36,
      39,    14,     4,    52,    28,    45,    76,    23,   138,    67,
     125,    95,    74,    73,   152,   114,   109,   133,    66,   123,
     102,   161,   163,    -1,    -1,   162
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    49,    50,    51,    52,    54,    60,
      66,    67,     4,    54,     0,    50,    43,    62,    43,    43,
      55,    18,    63,    42,    61,    16,    18,    56,    42,    53,
      16,    29,    30,    34,    43,    44,    81,    83,    84,    85,
      87,    90,    92,   100,    22,    62,    39,    54,    68,    70,
     100,    22,    55,    39,    79,    92,    16,    18,    82,    85,
      29,    32,    33,    91,    29,    30,    93,    19,    20,    64,
      79,    61,    43,    17,    42,    69,    19,    20,    57,   100,
      53,    17,    79,    86,    88,    79,    85,    90,    63,    21,
      64,    18,    71,    20,    73,    70,    56,    57,    58,    42,
      89,    17,    19,    42,    65,    19,     7,     8,     9,    11,
      12,    51,    73,    74,    75,    76,    77,    79,    81,    69,
      42,    59,    21,    79,    82,    64,    21,    18,    72,    16,
      39,    39,    77,    16,    21,    74,    39,    22,    57,    89,
      65,    79,    80,    92,    94,    96,    98,    99,    39,    80,
      79,    59,    19,    17,    25,    26,    27,    28,    95,    23,
      24,    97,    35,    36,    17,    39,    72,    76,    92,    94,
      96,    98,    76,    14,    78,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    51,    51,    52,    53,
      53,    54,    55,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    66,    67,    67,    68,    69,    69,    70,
      70,    71,    72,    72,    73,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    78,
      78,    79,    80,    81,    82,    82,    83,    83,    83,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    88,    89,
      89,    90,    90,    91,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     5,     0,
       3,     1,     4,     0,     4,     1,     3,     0,     2,     0,
       3,     4,     0,     3,     2,     4,     0,     4,     1,     2,
       4,     0,     3,     6,     1,     1,     2,     0,     3,     2,
       3,     3,     0,     4,     3,     0,     2,     1,     1,     4,
       2,     1,     6,     5,     2,     2,     3,     0,     1,     0,
       2,     1,     1,     2,     0,     4,     3,     1,     1,     1,
       1,     4,     2,     0,     1,     1,     1,     1,     2,     0,
       3,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
# undef YYSTACK_RELOCATE
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
  case 2:
#line 144 "yacc.y"
    {  
        cout<<"CompUnit -> CompUint1"<<endl;
    }
#line 1503 "yacc.tab.c"
    break;

  case 3:
#line 148 "yacc.y"
    {
        cout<<"CompUnit -> CompUnit CompUint1"<<endl;
    }
#line 1511 "yacc.tab.c"
    break;

  case 4:
#line 154 "yacc.y"
    {
        cout<<"CompUnit1 -> Decl"<<endl;
    }
#line 1519 "yacc.tab.c"
    break;

  case 5:
#line 158 "yacc.y"
    {
        cout<<"CompUnit1 -> FuncDef"<<endl;
    }
#line 1527 "yacc.tab.c"
    break;

  case 6:
#line 164 "yacc.y"
    {
        cout<<"Decl -> ConstDecl"<<endl;
    }
#line 1535 "yacc.tab.c"
    break;

  case 7:
#line 168 "yacc.y"
    {
        cout<<"Decl -> VarDecl"<<endl;
    }
#line 1543 "yacc.tab.c"
    break;

  case 8:
#line 174 "yacc.y"
    {
        cout<<"ConstDecl -> T_CONST BType ConstDef ConstDecl1 T_DELIMITER"<<endl;
    }
#line 1551 "yacc.tab.c"
    break;

  case 9:
#line 179 "yacc.y"
    {
        cout<<"ConstDecl1 ->  "<<endl;
    }
#line 1559 "yacc.tab.c"
    break;

  case 10:
#line 183 "yacc.y"
    {
        cout<<"ConstDecl1 -> T_COMMA ConstDef ConstDecl1"<<endl;
    }
#line 1567 "yacc.tab.c"
    break;

  case 11:
#line 189 "yacc.y"
    {
        cout<<"BType -> T_INT "<<endl;
    }
#line 1575 "yacc.tab.c"
    break;

  case 12:
#line 195 "yacc.y"
    {
        cout<<"ConstDef -> T_IDENT ConstDef1 T_DEFINE ConstInitVal "<<endl;
    }
#line 1583 "yacc.tab.c"
    break;

  case 13:
#line 200 "yacc.y"
    {
        cout<<"ConstDef1 ->  "<<endl;
    }
#line 1591 "yacc.tab.c"
    break;

  case 14:
#line 204 "yacc.y"
    {
        cout<<"ConstDef1 -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDef1 "<<endl;
    }
#line 1599 "yacc.tab.c"
    break;

  case 15:
#line 210 "yacc.y"
    {
        cout<<"ConstInitVal ->  ConstExp"<<endl;
    }
#line 1607 "yacc.tab.c"
    break;

  case 16:
#line 214 "yacc.y"
    {
        cout<<"ConstInitVal ->  T_LEFT_BRACE ConstInitVal1 T_RIGHT_BRACE"<<endl;
    }
#line 1615 "yacc.tab.c"
    break;

  case 17:
#line 219 "yacc.y"
    {
        cout<<"ConstInitVal1 ->  "<<endl;
    }
#line 1623 "yacc.tab.c"
    break;

  case 18:
#line 223 "yacc.y"
    {
        cout<<"ConstInitVal1 -> ConstInitVal ConstInitVal2 "<<endl;
    }
#line 1631 "yacc.tab.c"
    break;

  case 19:
#line 228 "yacc.y"
    {
        cout<<"ConstInitVal2 ->  "<<endl;
    }
#line 1639 "yacc.tab.c"
    break;

  case 20:
#line 232 "yacc.y"
    {
        cout<<"ConstInitVal2 -> T_COMMA ConstInitVal ConstInitVal2 "<<endl;
    }
#line 1647 "yacc.tab.c"
    break;

  case 21:
#line 238 "yacc.y"
    {
        cout<<"VarDecl -> BType VarDef VarDecl1 T_DELIMITER "<<endl;
    }
#line 1655 "yacc.tab.c"
    break;

  case 22:
#line 243 "yacc.y"
    {
        cout<<"VarDecl1 ->  "<<endl;
    }
#line 1663 "yacc.tab.c"
    break;

  case 23:
#line 247 "yacc.y"
    {
        cout<<"VarDecl1 -> T_COMMA VarDef VarDecl1 "<<endl;
    }
#line 1671 "yacc.tab.c"
    break;

  case 24:
#line 253 "yacc.y"
    {
        cout<<"VarDef -> T_IDENT VarDef1 "<<endl;
    }
#line 1679 "yacc.tab.c"
    break;

  case 25:
#line 257 "yacc.y"
    {
        cout<<"VarDef -> T_IDENT VarDef1 T_DEFINE InitVal "<<endl;
    }
#line 1687 "yacc.tab.c"
    break;

  case 26:
#line 262 "yacc.y"
    {
        cout<<"VarDef1 -> "<<endl;
    }
#line 1695 "yacc.tab.c"
    break;

  case 27:
#line 266 "yacc.y"
    {
        cout<<"VarDef1 -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDef1"<<endl;
    }
#line 1703 "yacc.tab.c"
    break;

  case 28:
#line 272 "yacc.y"
    {
        cout<<"InitVal -> "<<endl;
    }
#line 1711 "yacc.tab.c"
    break;

  case 29:
#line 276 "yacc.y"
    {
         cout<<"InitVal -> T_LEFT_BRACE  T_RIGHT_BRACE"<<endl;
    }
#line 1719 "yacc.tab.c"
    break;

  case 30:
#line 280 "yacc.y"
    {

    }
#line 1727 "yacc.tab.c"
    break;

  case 31:
#line 285 "yacc.y"
    {
        cout<<"InitVal1 -> "<<endl;
    }
#line 1735 "yacc.tab.c"
    break;

  case 32:
#line 289 "yacc.y"
    {
        cout<<"InitVal1 -> T_COMMA InitVal InitVal1"<<endl;
    }
#line 1743 "yacc.tab.c"
    break;

  case 33:
#line 295 "yacc.y"
    {
        cout<<"FuncDef -> FuncType T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block"<<endl;
    }
#line 1751 "yacc.tab.c"
    break;

  case 34:
#line 301 "yacc.y"
    {
        cout<<"FuncType -> T_VOID"<<endl;
    }
#line 1759 "yacc.tab.c"
    break;

  case 35:
#line 305 "yacc.y"
    {
        cout<<"FuncType -> T_INT"<<endl;
    }
#line 1767 "yacc.tab.c"
    break;

  case 36:
#line 311 "yacc.y"
    {
        cout<<"FuncFParams -> FuncFParam FuncFParams1"<<endl;
    }
#line 1775 "yacc.tab.c"
    break;

  case 37:
#line 316 "yacc.y"
    {
        cout<<"FuncFParams1 ->  "<<endl;
    }
#line 1783 "yacc.tab.c"
    break;

  case 38:
#line 320 "yacc.y"
    {
        cout<<"FuncFParams1 -> T_COMMA FuncFParam FuncFParams1 "<<endl;
    }
#line 1791 "yacc.tab.c"
    break;

  case 39:
#line 326 "yacc.y"
    {
        cout<<"FuncFParam -> BType T_IDENT  "<<endl;
    }
#line 1799 "yacc.tab.c"
    break;

  case 40:
#line 330 "yacc.y"
    {
        cout<<"FuncFParam -> BType T_IDENT FuncFParam1  "<<endl;
    }
#line 1807 "yacc.tab.c"
    break;

  case 41:
#line 336 "yacc.y"
    {
        cout<<"FuncFParam1 -> T_LEFT_BRACKET T_RIGHT_BRACKET FuncFParam2 "<<endl;
    }
#line 1815 "yacc.tab.c"
    break;

  case 42:
#line 341 "yacc.y"
    {
        cout<<"FuncFParam2 ->   "<<endl;
    }
#line 1823 "yacc.tab.c"
    break;

  case 43:
#line 345 "yacc.y"
    {
        cout<<"FuncFParam2 -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParam2"<<endl;
    }
#line 1831 "yacc.tab.c"
    break;

  case 44:
#line 351 "yacc.y"
    {
        cout<<"Block ->  T_LEFT_BRACE Block1 T_RIGHT_BRACE "<<endl;
    }
#line 1839 "yacc.tab.c"
    break;

  case 45:
#line 356 "yacc.y"
    {
        cout<<"Block1 ->  "<<endl;
    }
#line 1847 "yacc.tab.c"
    break;

  case 46:
#line 360 "yacc.y"
    {
        cout<<"Block1 ->  BlockItem Block1"<<endl;
    }
#line 1855 "yacc.tab.c"
    break;

  case 47:
#line 366 "yacc.y"
    {
        cout<<"BlockItem ->  Decl"<<endl;
    }
#line 1863 "yacc.tab.c"
    break;

  case 48:
#line 370 "yacc.y"
    {
        cout<<"BlockItem ->  Stmt"<<endl;
    }
#line 1871 "yacc.tab.c"
    break;

  case 49:
#line 376 "yacc.y"
    {
        cout<<"Stmt ->  LVal T_DEFINE Exp T_DELIMITER "<<endl;
    }
#line 1879 "yacc.tab.c"
    break;

  case 50:
#line 380 "yacc.y"
    {
        cout<<"Stmt ->  Stmt1 T_DELIMITER"<<endl;
    }
#line 1887 "yacc.tab.c"
    break;

  case 51:
#line 384 "yacc.y"
    {
        cout<<"Stmt ->  Block"<<endl;
    }
#line 1895 "yacc.tab.c"
    break;

  case 52:
#line 388 "yacc.y"
    {
        cout<<"Stmt ->  T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt ELSE_STMT"<<endl;
    }
#line 1903 "yacc.tab.c"
    break;

  case 53:
#line 392 "yacc.y"
    {
        cout<<"Stmt ->  T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt"<<endl;
    }
#line 1911 "yacc.tab.c"
    break;

  case 54:
#line 396 "yacc.y"
    {
        cout<<"Stmt ->  T_BREAK T_DELIMITER"<<endl;
    }
#line 1919 "yacc.tab.c"
    break;

  case 55:
#line 400 "yacc.y"
    {
        cout<<"Stmt ->  T_CONTINUE T_DELIMITER"<<endl;
    }
#line 1927 "yacc.tab.c"
    break;

  case 56:
#line 404 "yacc.y"
    {
        cout<<"Stmt ->  T_RETURN Stmt1 T_DELIMITER"<<endl;
    }
#line 1935 "yacc.tab.c"
    break;

  case 57:
#line 409 "yacc.y"
    {
        cout<<"Stmt1 ->  "<<endl;
    }
#line 1943 "yacc.tab.c"
    break;

  case 58:
#line 413 "yacc.y"
    {
        cout<<"Stmt1 ->  Exp"<<endl;
    }
#line 1951 "yacc.tab.c"
    break;

  case 59:
#line 418 "yacc.y"
    {
        cout<<"ELSE_STMT ->  "<<endl;
    }
#line 1959 "yacc.tab.c"
    break;

  case 60:
#line 422 "yacc.y"
    {
        cout<<"ELSE_STMT -> T_ELSE Stmt "<<endl;
    }
#line 1967 "yacc.tab.c"
    break;

  case 61:
#line 428 "yacc.y"
    {
        cout<<"Exp -> AddExp "<<endl;
    }
#line 1975 "yacc.tab.c"
    break;

  case 62:
#line 434 "yacc.y"
    {
        cout<<"Cond -> AddLOrExpExp "<<endl;
    }
#line 1983 "yacc.tab.c"
    break;

  case 63:
#line 440 "yacc.y"
    {
        cout<<"LVal -> T_IDENT LVal1 "<<endl;
    }
#line 1991 "yacc.tab.c"
    break;

  case 64:
#line 445 "yacc.y"
    {
        cout<<"LVal1 -> "<<endl;
    }
#line 1999 "yacc.tab.c"
    break;

  case 65:
#line 449 "yacc.y"
    {
        cout<<"LVal1 -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LVal1 "<<endl;
    }
#line 2007 "yacc.tab.c"
    break;

  case 66:
#line 455 "yacc.y"
    {
        cout<<"PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS "<<endl;
    }
#line 2015 "yacc.tab.c"
    break;

  case 67:
#line 459 "yacc.y"
    {
        cout<<"PrimaryExp -> LVal "<<endl;
    }
#line 2023 "yacc.tab.c"
    break;

  case 68:
#line 463 "yacc.y"
    {
        cout<<"PrimaryExp -> Number "<<endl;
    }
#line 2031 "yacc.tab.c"
    break;

  case 69:
#line 469 "yacc.y"
    {
        cout<<"Number -> T_INTEGER_CONST "<<endl;
    }
#line 2039 "yacc.tab.c"
    break;

  case 70:
#line 475 "yacc.y"
    {
        cout<<"UnaryExp -> PrimaryExp "<<endl;
    }
#line 2047 "yacc.tab.c"
    break;

  case 71:
#line 479 "yacc.y"
    {
        cout<<"UnaryExp -> T_IDENT T_LEFT_PARENTHESIS UnaryExp1 T_RIGHT_PARENTHESIS "<<endl;
    }
#line 2055 "yacc.tab.c"
    break;

  case 72:
#line 483 "yacc.y"
    {
        cout<<"UnaryExp -> UnaryOp UnaryExp "<<endl;
    }
#line 2063 "yacc.tab.c"
    break;

  case 73:
#line 488 "yacc.y"
    {
        cout<<"UnaryExp1 ->  "<<endl;
    }
#line 2071 "yacc.tab.c"
    break;

  case 74:
#line 492 "yacc.y"
    {
        cout<<"UnaryExp1 -> FuncRParams "<<endl;
    }
#line 2079 "yacc.tab.c"
    break;

  case 75:
#line 498 "yacc.y"
    {
        cout<<"UnaryOp -> T_ADD "<<endl;
    }
#line 2087 "yacc.tab.c"
    break;

  case 76:
#line 502 "yacc.y"
    {
        cout<<"UnaryOp -> T_SUB "<<endl;
    }
#line 2095 "yacc.tab.c"
    break;

  case 77:
#line 506 "yacc.y"
    {
        cout<<"UnaryOp -> T_NOT "<<endl;
    }
#line 2103 "yacc.tab.c"
    break;

  case 78:
#line 512 "yacc.y"
    {
        cout<<"FuncRParams -> Exp FuncRParams1 "<<endl;
    }
#line 2111 "yacc.tab.c"
    break;

  case 79:
#line 517 "yacc.y"
    {
        cout<<"FuncRParams1 -> "<<endl;
    }
#line 2119 "yacc.tab.c"
    break;

  case 80:
#line 521 "yacc.y"
    {
        cout<<"FuncRParams1 -> T_COMMA Exp FuncRParams1"<<endl;
    }
#line 2127 "yacc.tab.c"
    break;

  case 81:
#line 527 "yacc.y"
    {
        cout<<"MulExp -> UnaryExp"<<endl;
    }
#line 2135 "yacc.tab.c"
    break;

  case 82:
#line 531 "yacc.y"
    {
        cout<<"MulExp -> MulExp MulExp1 UnaryExp"<<endl;
    }
#line 2143 "yacc.tab.c"
    break;

  case 83:
#line 537 "yacc.y"
    {
        cout<<"MulExp1 -> T_ADD"<<endl;
    }
#line 2151 "yacc.tab.c"
    break;

  case 84:
#line 541 "yacc.y"
    {
        cout<<"MulExp1 -> T_DIV"<<endl;
    }
#line 2159 "yacc.tab.c"
    break;

  case 85:
#line 545 "yacc.y"
    {
        cout<<"MulExp1 -> T_MOD"<<endl;
    }
#line 2167 "yacc.tab.c"
    break;

  case 86:
#line 551 "yacc.y"
    {
        cout<<"AddExp -> MulExp"<<endl;
    }
#line 2175 "yacc.tab.c"
    break;

  case 87:
#line 555 "yacc.y"
    {
        cout<<"AddExp -> AddExp AddExp1 MulExp"<<endl;
    }
#line 2183 "yacc.tab.c"
    break;

  case 88:
#line 561 "yacc.y"
    {
        cout<<"AddExp1 -> T_ADD"<<endl;
    }
#line 2191 "yacc.tab.c"
    break;

  case 89:
#line 565 "yacc.y"
    {
        cout<<"AddExp1 -> T_SUB"<<endl;
    }
#line 2199 "yacc.tab.c"
    break;

  case 90:
#line 571 "yacc.y"
    {
        cout<<"RelExp -> AddExp"<<endl;
    }
#line 2207 "yacc.tab.c"
    break;

  case 91:
#line 575 "yacc.y"
    {
        cout<<"RelExp -> RelExp RelExp1 AddExp"<<endl;
    }
#line 2215 "yacc.tab.c"
    break;

  case 92:
#line 581 "yacc.y"
    {
        cout<<"RelExp1 -> T_LESS"<<endl;
    }
#line 2223 "yacc.tab.c"
    break;

  case 93:
#line 585 "yacc.y"
    {
        cout<<"RelExp1 -> T_LARGE"<<endl;
    }
#line 2231 "yacc.tab.c"
    break;

  case 94:
#line 589 "yacc.y"
    {
        cout<<"RelExp1 -> T_LESS_EQUAL"<<endl;
    }
#line 2239 "yacc.tab.c"
    break;

  case 95:
#line 593 "yacc.y"
    {
        cout<<"RelExp1 -> T_LARGE_EQUAL"<<endl;
    }
#line 2247 "yacc.tab.c"
    break;

  case 96:
#line 599 "yacc.y"
    {
        cout<<"EqExp -> RelExp"<<endl;
    }
#line 2255 "yacc.tab.c"
    break;

  case 97:
#line 603 "yacc.y"
    {
        cout<<"EqExp -> EqExp EqExp1 RelExp"<<endl;
    }
#line 2263 "yacc.tab.c"
    break;

  case 98:
#line 609 "yacc.y"
    {
        cout<<"EqExp1 -> T_EQUAL"<<endl;
    }
#line 2271 "yacc.tab.c"
    break;

  case 99:
#line 613 "yacc.y"
    {
        cout<<"EqExp1 -> T_NOT_EQUAL"<<endl;
    }
#line 2279 "yacc.tab.c"
    break;

  case 100:
#line 619 "yacc.y"
    {
        cout<<"LAndExp -> EqExp"<<endl;
    }
#line 2287 "yacc.tab.c"
    break;

  case 101:
#line 623 "yacc.y"
    {
        cout<<"LAndExp -> LAndExp T_AND EqExp"<<endl;
    }
#line 2295 "yacc.tab.c"
    break;

  case 102:
#line 629 "yacc.y"
    {
        cout<<"LOrExp -> LAndExp"<<endl;
    }
#line 2303 "yacc.tab.c"
    break;

  case 103:
#line 633 "yacc.y"
    {   
        cout<<"LOrExp -> LOrExp T_OR LAndExp"<<endl;
    }
#line 2311 "yacc.tab.c"
    break;

  case 104:
#line 639 "yacc.y"
    {
        cout<<"ConstExp -> AddExp"<<endl;

    }
#line 2320 "yacc.tab.c"
    break;


#line 2324 "yacc.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 673 "yacc.y"
  

void yyerror(const char *s) //当yacc遇到语法错误时，会回调yyerror函数，并且把错误信息放在参数s中  
{  
    cerr<<s<<endl;//直接输出错误信息  
}  

int main()//程序主函数，这个函数也可以放到其它.c, .cpp文件里  
{  
    // const char* sFile="file.txt";//打开要读取的文本文件  
    // FILE* fp=fopen(sFile, "r");  
    // if(fp==NULL)  
    // {  
    //     printf("cannot open %s\n", sFile);  
    //     return -1;  
    // }  
    // extern FILE* yyin;  //yyin和yyout都是FILE*类型  
    // yyin=fp;//yacc会从yyin读取输入，yyin默认是标准输入，
    //         //这里改为磁盘文件。yacc默认向yyout输出，可修改yyout改变输出目的  

    // printf("-----begin parsing %s\n", sFile);  
    yyparse();//使yacc开始读取输入和解析，它会调用lex的yylex()读取记号  
    // puts("-----end parsing");  

    // fclose(fp);  

    // return 0;  
}  

