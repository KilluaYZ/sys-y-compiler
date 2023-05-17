/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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
#include "DotDrawer.hpp"

extern "C"//为了能够在C++程序里面调用C函数，必须把每一个需要使用的C函数，其声明都包括在extern "C"{}      
          //块里面，这样C++链接时才能成功链接它们。extern "C"用来在C++环境下设置C链接类型。  
{   //lex.l中也有类似的这段extern "C"，可以把它们合并成一段，放到共同的头文件main.h中  
    void yyerror(const char *s);  
    extern int yylex(void);//该函数是在lex.yy.c里定义的，yyparse()里要调用该函数，
                            //为了能编译和链接，必须用extern加以声明  
}  


TreeNode* p;
Tree tree;

#line 98 "yacc.tab.c"

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

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_NULL = 3,                     /* T_NULL  */
  YYSYMBOL_T_INT = 4,                      /* T_INT  */
  YYSYMBOL_T_VOID = 5,                     /* T_VOID  */
  YYSYMBOL_T_CONST = 6,                    /* T_CONST  */
  YYSYMBOL_T_WHILE = 7,                    /* T_WHILE  */
  YYSYMBOL_T_BREAK = 8,                    /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 9,                 /* T_CONTINUE  */
  YYSYMBOL_T_DO = 10,                      /* T_DO  */
  YYSYMBOL_T_RETURN = 11,                  /* T_RETURN  */
  YYSYMBOL_T_IF = 12,                      /* T_IF  */
  YYSYMBOL_T_FOR = 13,                     /* T_FOR  */
  YYSYMBOL_T_ELSE = 14,                    /* T_ELSE  */
  YYSYMBOL_T_VAR = 15,                     /* T_VAR  */
  YYSYMBOL_T_LEFT_PARENTHESIS = 16,        /* T_LEFT_PARENTHESIS  */
  YYSYMBOL_T_RIGHT_PARENTHESIS = 17,       /* T_RIGHT_PARENTHESIS  */
  YYSYMBOL_T_LEFT_BRACKET = 18,            /* T_LEFT_BRACKET  */
  YYSYMBOL_T_RIGHT_BRACKET = 19,           /* T_RIGHT_BRACKET  */
  YYSYMBOL_T_LEFT_BRACE = 20,              /* T_LEFT_BRACE  */
  YYSYMBOL_T_RIGHT_BRACE = 21,             /* T_RIGHT_BRACE  */
  YYSYMBOL_T_DEFINE = 22,                  /* T_DEFINE  */
  YYSYMBOL_T_EQUAL = 23,                   /* T_EQUAL  */
  YYSYMBOL_T_NOT_EQUAL = 24,               /* T_NOT_EQUAL  */
  YYSYMBOL_T_LARGE = 25,                   /* T_LARGE  */
  YYSYMBOL_T_LESS = 26,                    /* T_LESS  */
  YYSYMBOL_T_LARGE_EQUAL = 27,             /* T_LARGE_EQUAL  */
  YYSYMBOL_T_LESS_EQUAL = 28,              /* T_LESS_EQUAL  */
  YYSYMBOL_T_ADD = 29,                     /* T_ADD  */
  YYSYMBOL_T_SUB = 30,                     /* T_SUB  */
  YYSYMBOL_T_MUL = 31,                     /* T_MUL  */
  YYSYMBOL_T_DIV = 32,                     /* T_DIV  */
  YYSYMBOL_T_MOD = 33,                     /* T_MOD  */
  YYSYMBOL_T_NOT = 34,                     /* T_NOT  */
  YYSYMBOL_T_AND = 35,                     /* T_AND  */
  YYSYMBOL_T_OR = 36,                      /* T_OR  */
  YYSYMBOL_T_BOOL_TRUE = 37,               /* T_BOOL_TRUE  */
  YYSYMBOL_T_BOOL_FALSE = 38,              /* T_BOOL_FALSE  */
  YYSYMBOL_T_DELIMITER = 39,               /* T_DELIMITER  */
  YYSYMBOL_T_NEWLINE = 40,                 /* T_NEWLINE  */
  YYSYMBOL_T_ERRORCHAR = 41,               /* T_ERRORCHAR  */
  YYSYMBOL_T_IDENT = 42,                   /* T_IDENT  */
  YYSYMBOL_T_COMMA = 43,                   /* T_COMMA  */
  YYSYMBOL_T_INTEGER_CONST = 44,           /* T_INTEGER_CONST  */
  YYSYMBOL_T_HEX_CONST = 45,               /* T_HEX_CONST  */
  YYSYMBOL_T_DEC_CONST = 46,               /* T_DEC_CONST  */
  YYSYMBOL_T_OCT_CONST = 47,               /* T_OCT_CONST  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_CompRoot = 49,                  /* CompRoot  */
  YYSYMBOL_CompUnit = 50,                  /* CompUnit  */
  YYSYMBOL_FuncDef = 51,                   /* FuncDef  */
  YYSYMBOL_Decl = 52,                      /* Decl  */
  YYSYMBOL_constDecl = 53,                 /* constDecl  */
  YYSYMBOL_constDeclRepeat = 54,           /* constDeclRepeat  */
  YYSYMBOL_ConstDef = 55,                  /* ConstDef  */
  YYSYMBOL_ConstDefRepeat = 56,            /* ConstDefRepeat  */
  YYSYMBOL_ConstInitVal = 57,              /* ConstInitVal  */
  YYSYMBOL_ConstInitValRepeat = 58,        /* ConstInitValRepeat  */
  YYSYMBOL_VarDecl = 59,                   /* VarDecl  */
  YYSYMBOL_VarDeclRepeat = 60,             /* VarDeclRepeat  */
  YYSYMBOL_VarDef = 61,                    /* VarDef  */
  YYSYMBOL_VarDefRepeat = 62,              /* VarDefRepeat  */
  YYSYMBOL_InitVal = 63,                   /* InitVal  */
  YYSYMBOL_InitValRepeat = 64,             /* InitValRepeat  */
  YYSYMBOL_FuncFParams = 65,               /* FuncFParams  */
  YYSYMBOL_FuncFParamsRepeat = 66,         /* FuncFParamsRepeat  */
  YYSYMBOL_FuncFParam = 67,                /* FuncFParam  */
  YYSYMBOL_FuncFParamRepeat = 68,          /* FuncFParamRepeat  */
  YYSYMBOL_Block = 69,                     /* Block  */
  YYSYMBOL_BlockRepeat = 70,               /* BlockRepeat  */
  YYSYMBOL_BlockItem = 71,                 /* BlockItem  */
  YYSYMBOL_Stmt = 72,                      /* Stmt  */
  YYSYMBOL_Exp = 73,                       /* Exp  */
  YYSYMBOL_Cond = 74,                      /* Cond  */
  YYSYMBOL_LVal = 75,                      /* LVal  */
  YYSYMBOL_LValRepeat = 76,                /* LValRepeat  */
  YYSYMBOL_PrimaryExp = 77,                /* PrimaryExp  */
  YYSYMBOL_Number = 78,                    /* Number  */
  YYSYMBOL_UnaryExp = 79,                  /* UnaryExp  */
  YYSYMBOL_UnaryOp = 80,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 81,               /* FuncRParams  */
  YYSYMBOL_FuncRParamsRepeat = 82,         /* FuncRParamsRepeat  */
  YYSYMBOL_MulExp = 83,                    /* MulExp  */
  YYSYMBOL_AddExp = 84,                    /* AddExp  */
  YYSYMBOL_RelExp = 85,                    /* RelExp  */
  YYSYMBOL_EqExp = 86,                     /* EqExp  */
  YYSYMBOL_LAndExp = 87,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 88,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 89                   /* ConstExp  */
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
       0,    46,    46,    52,    61,    69,    76,    85,    97,   109,
     120,   133,   140,   148,   158,   173,   178,   189,   198,   213,
     218,   230,   237,   245,   254,   267,   272,   284,   293,   307,
     312,   323,   330,   339,   350,   365,   370,   382,   389,   398,
     409,   419,   424,   435,   442,   454,   459,   470,   480,   492,
     502,   507,   519,   527,   539,   544,   554,   561,   570,   580,
     587,   595,   602,   613,   625,   637,   648,   656,   664,   672,
     683,   692,   701,   708,   721,   726,   738,   747,   754,   763,
     772,   779,   788,   798,   808,   815,   822,   831,   838,   850,
     855,   866,   873,   882,   891,   902,   909,   918,   929,   936,
     945,   954,   963,   974,   981,   990,  1001,  1008,  1019,  1026,
    1037
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_NULL", "T_INT",
  "T_VOID", "T_CONST", "T_WHILE", "T_BREAK", "T_CONTINUE", "T_DO",
  "T_RETURN", "T_IF", "T_FOR", "T_ELSE", "T_VAR", "T_LEFT_PARENTHESIS",
  "T_RIGHT_PARENTHESIS", "T_LEFT_BRACKET", "T_RIGHT_BRACKET",
  "T_LEFT_BRACE", "T_RIGHT_BRACE", "T_DEFINE", "T_EQUAL", "T_NOT_EQUAL",
  "T_LARGE", "T_LESS", "T_LARGE_EQUAL", "T_LESS_EQUAL", "T_ADD", "T_SUB",
  "T_MUL", "T_DIV", "T_MOD", "T_NOT", "T_AND", "T_OR", "T_BOOL_TRUE",
  "T_BOOL_FALSE", "T_DELIMITER", "T_NEWLINE", "T_ERRORCHAR", "T_IDENT",
  "T_COMMA", "T_INTEGER_CONST", "T_HEX_CONST", "T_DEC_CONST",
  "T_OCT_CONST", "$accept", "CompRoot", "CompUnit", "FuncDef", "Decl",
  "constDecl", "constDeclRepeat", "ConstDef", "ConstDefRepeat",
  "ConstInitVal", "ConstInitValRepeat", "VarDecl", "VarDeclRepeat",
  "VarDef", "VarDefRepeat", "InitVal", "InitValRepeat", "FuncFParams",
  "FuncFParamsRepeat", "FuncFParam", "FuncFParamRepeat", "Block",
  "BlockRepeat", "BlockItem", "Stmt", "Exp", "Cond", "LVal", "LValRepeat",
  "PrimaryExp", "Number", "UnaryExp", "UnaryOp", "FuncRParams",
  "FuncRParamsRepeat", "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp",
  "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,   -31,   -23,    23,    32,    49,  -164,  -164,  -164,  -164,
       0,   -22,    25,     6,  -164,  -164,  -164,     9,   275,    51,
    -164,    14,    11,    28,   -10,    17,    42,    79,    33,   275,
    -164,  -164,  -164,    59,  -164,  -164,  -164,  -164,  -164,   275,
      58,    40,    47,    44,  -164,  -164,    40,    29,    61,    42,
      91,   275,   250,  -164,     6,    88,   165,  -164,    42,   107,
      96,   109,   275,  -164,   275,   275,   275,   275,   275,   102,
    -164,    51,   103,    14,    95,  -164,    42,   111,    89,  -164,
    -164,    92,   256,    14,   120,   101,   105,   272,   125,  -164,
    -164,  -164,  -164,   194,  -164,   113,   128,  -164,    99,  -164,
    -164,   114,   141,   156,  -164,  -164,  -164,    58,    58,   275,
     138,   135,  -164,    61,  -164,  -164,   161,  -164,   250,   159,
       6,   143,  -164,   164,   275,  -164,  -164,  -164,   145,   275,
     166,   194,  -164,   275,   107,  -164,   275,  -164,   170,   171,
      51,    51,   168,  -164,   275,   169,   149,  -164,    92,  -164,
     175,   179,    40,   121,    60,   162,   172,  -164,   195,  -164,
    -164,   174,    99,   173,   275,  -164,   102,  -164,   135,  -164,
     192,   250,   250,   196,  -164,   275,  -164,   239,   275,   275,
     275,   275,   275,   275,   275,   275,   239,  -164,  -164,   275,
    -164,   199,  -164,  -164,   161,  -164,   149,  -164,   200,  -164,
      40,    40,    40,    40,   121,   121,    60,   162,   223,   173,
     170,  -164,  -164,   175,  -164,  -164,  -164,  -164,  -164
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     5,     6,    11,    12,
      31,     0,     0,     0,     1,     3,     4,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      84,    85,    86,    72,    79,    77,    80,    78,    91,     0,
      95,   110,     0,     0,    32,    37,    70,    31,    29,     0,
       0,     0,     0,    13,     0,    49,     0,    10,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,    35,
      40,     0,     0,     0,     0,     9,     0,     0,     0,    17,
      21,    15,     0,     0,     0,     0,     0,     0,     0,    52,
      59,    56,    61,    54,    57,     0,    77,     8,    45,    76,
      81,    87,     0,     0,    92,    93,    94,    96,    97,     0,
      33,    41,    38,    29,    28,     7,    19,    22,     0,     0,
       0,     0,    47,     0,     0,    66,    67,    68,     0,     0,
       0,    54,    60,     0,     0,    44,     0,    82,    74,     0,
       0,     0,     0,    30,     0,     0,    25,    23,    15,    14,
      50,     0,    98,   103,   106,   108,    71,    69,     0,    53,
      55,     0,    45,    89,     0,    73,    35,    34,    41,    39,
       0,     0,     0,     0,    16,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    46,     0,
      88,     0,    36,    42,    19,    18,    25,    24,     0,    65,
     100,    99,   102,   101,   104,   105,   107,   109,    62,    89,
      74,    20,    26,    50,    63,    64,    90,    75,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,   210,    20,  -164,    72,   -48,    27,   -69,
      26,  -164,   112,   -16,    63,   -41,    73,   204,    65,   -55,
      31,   -18,   118,   184,  -163,   -19,   116,   -49,    46,  -164,
    -164,   -27,  -164,  -164,    45,    30,   -17,   -67,    74,    57,
    -164,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    91,     8,   121,    24,   145,    79,
     173,     9,    74,    11,   110,    44,   142,    27,   135,    28,
     176,    92,   130,   131,    94,    95,   151,    35,   165,    36,
      37,    38,    39,   102,   190,    40,    46,   153,   154,   155,
     156,    80
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      45,    41,    72,    42,    98,    48,    81,    96,    57,   119,
      60,    10,    63,    25,   199,    25,    17,    20,    18,    12,
       7,    21,    19,   208,    45,    16,    26,    13,    49,    53,
     111,    75,    14,    54,    41,    41,    77,   104,   105,   106,
      97,    22,   101,   103,    96,   215,    51,    18,    23,   146,
      52,    19,    45,     1,     2,     3,    47,   113,   115,    55,
      29,    41,    56,   123,    43,    70,    69,    29,   128,    67,
      68,    43,   148,    30,    31,    61,    59,    62,    32,   162,
      30,    31,    96,   182,   183,    32,    33,    71,    34,    64,
      65,    66,    41,    33,   139,    34,    58,   107,   108,   167,
     168,    41,   195,   196,    73,    29,    82,   152,    76,    78,
     117,    25,   152,    99,   161,   204,   205,   163,    30,    31,
     109,    45,    45,    32,   112,    29,   100,    41,    96,   170,
     116,    33,   118,    34,   114,   120,   124,    96,    30,    31,
     125,   129,   134,    32,   126,   191,   178,   179,   180,   181,
     133,    33,   132,    34,    41,    41,   198,   136,   137,    96,
     140,   200,   201,   202,   203,   152,   152,   152,   152,    83,
     209,     3,    84,    85,    86,   138,    87,    88,   141,   144,
     147,    29,   149,   150,   157,    56,    89,   159,   164,   169,
     166,   171,   172,   175,    30,    31,   177,   184,    83,    32,
       3,    84,    85,    86,    90,    87,    88,    33,   185,    34,
      29,   194,   186,   187,    56,    15,   189,   197,   210,   213,
     174,   211,   212,    30,    31,   143,    50,   188,    32,   192,
      84,    85,    86,    90,    87,    88,    33,   214,    34,    29,
      93,   193,   207,    56,   218,   158,    84,    85,    86,   160,
      87,    88,    30,    31,   216,    29,   217,    32,   206,    56,
       0,     0,    90,     0,     0,    33,    29,    34,    30,    31,
      78,     0,    29,    32,     0,   122,     0,     0,    90,    30,
      31,    33,     0,    34,    32,    30,    31,     0,    29,     0,
      32,    29,    33,     0,    34,     0,     0,     0,    33,     0,
      34,    30,    31,     0,    30,    31,    32,     0,     0,    32,
       0,   127,     0,     0,    33,     0,    34,    33,     0,    34
};

static const yytype_int16 yycheck[] =
{
      19,    18,    43,    18,    59,    21,    54,    56,    26,    78,
      29,    42,    39,     4,   177,     4,    16,    39,    18,    42,
       0,    43,    22,   186,    43,     5,    17,     4,    17,    39,
      71,    49,     0,    43,    51,    52,    51,    64,    65,    66,
      58,    16,    61,    62,    93,   208,    18,    18,    42,   118,
      22,    22,    71,     4,     5,     6,    42,    73,    76,    42,
      16,    78,    20,    82,    20,    21,    19,    16,    87,    29,
      30,    20,   120,    29,    30,    16,    43,    18,    34,   134,
      29,    30,   131,    23,    24,    34,    42,    43,    44,    31,
      32,    33,   109,    42,   109,    44,    17,    67,    68,   140,
     141,   118,   171,   172,    43,    16,    18,   124,    17,    20,
      21,     4,   129,    17,   133,   182,   183,   136,    29,    30,
      18,   140,   141,    34,    21,    16,    17,   144,   177,   144,
      19,    42,    43,    44,    39,    43,    16,   186,    29,    30,
      39,    16,    43,    34,    39,   164,    25,    26,    27,    28,
      22,    42,    39,    44,   171,   172,   175,    43,    17,   208,
      22,   178,   179,   180,   181,   182,   183,   184,   185,     4,
     189,     6,     7,     8,     9,    19,    11,    12,    43,    18,
      21,    16,    39,    19,    39,    20,    21,    21,    18,    21,
      19,    22,    43,    18,    29,    30,    17,    35,     4,    34,
       6,     7,     8,     9,    39,    11,    12,    42,    36,    44,
      16,    19,    17,    39,    20,     5,    43,    21,    19,    19,
     148,   194,   196,    29,    30,   113,    22,   162,    34,   166,
       7,     8,     9,    39,    11,    12,    42,    14,    44,    16,
      56,   168,   185,    20,   213,   129,     7,     8,     9,   131,
      11,    12,    29,    30,   209,    16,   210,    34,   184,    20,
      -1,    -1,    39,    -1,    -1,    42,    16,    44,    29,    30,
      20,    -1,    16,    34,    -1,    19,    -1,    -1,    39,    29,
      30,    42,    -1,    44,    34,    29,    30,    -1,    16,    -1,
      34,    16,    42,    -1,    44,    -1,    -1,    -1,    42,    -1,
      44,    29,    30,    -1,    29,    30,    34,    -1,    -1,    34,
      -1,    39,    -1,    -1,    42,    -1,    44,    42,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    49,    50,    51,    52,    53,    59,
      42,    61,    42,     4,     0,    51,    52,    16,    18,    22,
      39,    43,    16,    42,    55,     4,    17,    65,    67,    16,
      29,    30,    34,    42,    44,    75,    77,    78,    79,    80,
      83,    84,    89,    20,    63,    73,    84,    42,    61,    17,
      65,    18,    22,    39,    43,    42,    20,    69,    17,    43,
      73,    16,    18,    79,    31,    32,    33,    29,    30,    19,
      21,    43,    63,    43,    60,    69,    17,    89,    20,    57,
      89,    55,    18,     4,     7,     8,     9,    11,    12,    21,
      39,    52,    69,    71,    72,    73,    75,    69,    67,    17,
      17,    73,    81,    73,    79,    79,    79,    83,    83,    18,
      62,    63,    21,    61,    39,    69,    19,    21,    43,    57,
      43,    54,    19,    73,    16,    39,    39,    39,    73,    16,
      70,    71,    39,    22,    43,    66,    43,    17,    19,    89,
      22,    43,    64,    60,    18,    56,    57,    21,    55,    39,
      19,    74,    84,    85,    86,    87,    88,    39,    74,    21,
      70,    73,    67,    73,    18,    76,    19,    63,    63,    21,
      89,    22,    43,    58,    54,    18,    68,    17,    25,    26,
      27,    28,    23,    24,    35,    36,    17,    39,    66,    43,
      82,    73,    62,    64,    19,    57,    57,    21,    73,    72,
      84,    84,    84,    84,    85,    85,    86,    87,    72,    73,
      19,    56,    58,    19,    14,    72,    82,    76,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    51,    51,    51,
      51,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    74,    75,    75,    76,    76,    77,    77,    77,    78,
      79,    79,    79,    79,    80,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    88,    88,
      89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     6,     6,     5,
       5,     1,     1,     4,     7,     0,     3,     3,     7,     0,
       4,     1,     2,     3,     5,     0,     3,     3,     6,     0,
       3,     1,     3,     5,     7,     0,     4,     1,     3,     5,
       2,     0,     3,     1,     4,     0,     3,     4,     6,     2,
       0,     4,     2,     4,     0,     2,     1,     1,     4,     1,
       2,     1,     5,     6,     6,     5,     2,     2,     2,     3,
       1,     1,     1,     5,     0,     4,     3,     1,     1,     1,
       1,     3,     4,     2,     1,     1,     1,     1,     4,     0,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* CompRoot: CompUnit  */
#line 47 "yacc.y"
    {
        tree.rootNode = (yyvsp[0].y_node);
    }
#line 1349 "yacc.tab.c"
    break;

  case 3: /* CompUnit: CompUnit FuncDef  */
#line 53 "yacc.y"
    {
        cout << "CompUnit -> CompUnit FuncDef***********************************************" << endl;
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
        tree.rootNode = p;
    }
#line 1362 "yacc.tab.c"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 62 "yacc.y"
    {
        cout << "CompUnit -> CompUnit Decl***********************************************" << endl;
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1374 "yacc.tab.c"
    break;

  case 5: /* CompUnit: FuncDef  */
#line 70 "yacc.y"
    {
        cout << "CompUnit -> FuncDef***********************************************" << endl;
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1385 "yacc.tab.c"
    break;

  case 6: /* CompUnit: Decl  */
#line 77 "yacc.y"
    {
        cout << "CompUnit -> Decl***********************************************" << endl;
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1396 "yacc.tab.c"
    break;

  case 7: /* FuncDef: T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block  */
#line 86 "yacc.y"
    {
        cout << "FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block" << endl;
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1412 "yacc.tab.c"
    break;

  case 8: /* FuncDef: T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block  */
#line 98 "yacc.y"
    {
        cout << "FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block" << endl;
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1428 "yacc.tab.c"
    break;

  case 9: /* FuncDef: T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block  */
#line 110 "yacc.y"
    {
        cout << "FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block" << endl;
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1443 "yacc.tab.c"
    break;

  case 10: /* FuncDef: T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block  */
#line 121 "yacc.y"
    {
        cout << "FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block" << endl;
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1458 "yacc.tab.c"
    break;

  case 11: /* Decl: constDecl  */
#line 134 "yacc.y"
    {
        cout << "Decl -> constDecl" << endl;
        p = new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1469 "yacc.tab.c"
    break;

  case 12: /* Decl: VarDecl  */
#line 141 "yacc.y"
    {
        cout << "Decl -> VarDecl" << endl;
        p = new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1480 "yacc.tab.c"
    break;

  case 13: /* constDecl: T_CONST T_INT ConstDef T_DELIMITER  */
#line 149 "yacc.y"
    {
        cout << "constDecl -> T_CONST T_INT ConstDef T_DELIMITER" << endl;
        p = new TreeNode("constDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1494 "yacc.tab.c"
    break;

  case 14: /* constDecl: T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER  */
#line 159 "yacc.y"
    {
        cout << "constDecl -> T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER" << endl;
        p = new TreeNode("constDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-6].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back((yyvsp[-4].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1511 "yacc.tab.c"
    break;

  case 15: /* constDeclRepeat: %empty  */
#line 173 "yacc.y"
    {
        cout << "constDeclRepeat -> empty" << endl;
        p = new TreeNode("constDeclRepeat");
        (yyval.y_node) = p;
    }
#line 1521 "yacc.tab.c"
    break;

  case 16: /* constDeclRepeat: T_COMMA ConstDef constDeclRepeat  */
#line 179 "yacc.y"
    {
        cout << "constDeclRepeat -> T_COMMA ConstDef constDeclRepeat" << endl;
        p = new TreeNode("constDeclRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1534 "yacc.tab.c"
    break;

  case 17: /* ConstDef: T_IDENT T_DEFINE ConstInitVal  */
#line 190 "yacc.y"
    {
        cout << "ConstDef -> T_IDENT T_DEFINE ConstInitVal" << endl;
        p = new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1547 "yacc.tab.c"
    break;

  case 18: /* ConstDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal  */
#line 199 "yacc.y"
    {
        cout << "ConstDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal" << endl;
        p = new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-6].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back((yyvsp[-4].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1564 "yacc.tab.c"
    break;

  case 19: /* ConstDefRepeat: %empty  */
#line 213 "yacc.y"
    {
        cout << "ConstDefRepeat -> empty" << endl;
        p = new TreeNode("ConstDefRepeat");
        (yyval.y_node) = p;
    }
#line 1574 "yacc.tab.c"
    break;

  case 20: /* ConstDefRepeat: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat  */
#line 219 "yacc.y"
    {
        cout << "ConstDefRepeat -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat" << endl;
        p = new TreeNode("ConstDefRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1588 "yacc.tab.c"
    break;

  case 21: /* ConstInitVal: ConstExp  */
#line 231 "yacc.y"
    {
        cout << "ConstInitVal -> ConstExp" << endl;
        p = new TreeNode("ConstInitVal");
         p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1599 "yacc.tab.c"
    break;

  case 22: /* ConstInitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 238 "yacc.y"
    {
        cout << "ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1611 "yacc.tab.c"
    break;

  case 23: /* ConstInitVal: T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE  */
#line 246 "yacc.y"
    {
        cout << "ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE" << endl;
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1624 "yacc.tab.c"
    break;

  case 24: /* ConstInitVal: T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE  */
#line 255 "yacc.y"
    {
        cout << "ConstInitVal -> T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE" << endl;
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1639 "yacc.tab.c"
    break;

  case 25: /* ConstInitValRepeat: %empty  */
#line 267 "yacc.y"
    {
        cout << "ConstInitValRepeat -> empty" << endl;
        p = new TreeNode("ConstInitValRepeat");
        (yyval.y_node) = p;
    }
#line 1649 "yacc.tab.c"
    break;

  case 26: /* ConstInitValRepeat: T_COMMA ConstInitVal ConstInitValRepeat  */
#line 273 "yacc.y"
    {
        cout << "ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat" << endl;
        p = new TreeNode("ConstInitValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1662 "yacc.tab.c"
    break;

  case 27: /* VarDecl: T_INT VarDef T_DELIMITER  */
#line 285 "yacc.y"
    {
        cout << "VarDecl -> T_INT VarDef T_DELIMITER" << endl;
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1675 "yacc.tab.c"
    break;

  case 28: /* VarDecl: T_INT VarDef T_COMMA VarDef VarDeclRepeat T_DELIMITER  */
#line 294 "yacc.y"
    {
        cout << "VarDecl -> T_INT VarDef VarDeclRepeat T_DELIMITER" << endl;
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back((yyvsp[-4].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1691 "yacc.tab.c"
    break;

  case 29: /* VarDeclRepeat: %empty  */
#line 307 "yacc.y"
    {      
        cout << "VarDeclRepeat -> empty"; 
        p = new TreeNode("VarDeclRepeat");  
        (yyval.y_node) = p;
    }
#line 1701 "yacc.tab.c"
    break;

  case 30: /* VarDeclRepeat: T_COMMA VarDef VarDeclRepeat  */
#line 313 "yacc.y"
    {
        cout << "VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat";
        p = new TreeNode("VarDeclRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1714 "yacc.tab.c"
    break;

  case 31: /* VarDef: T_IDENT  */
#line 324 "yacc.y"
    {
        cout << "VarDef -> T_IDENT" << endl;
        p = new TreeNode("VarDef");  
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1725 "yacc.tab.c"
    break;

  case 32: /* VarDef: T_IDENT T_DEFINE InitVal  */
#line 331 "yacc.y"
    {
        cout << "VarDef -> T_IDENT T_DEFINE InitVal" << endl;
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1738 "yacc.tab.c"
    break;

  case 33: /* VarDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat  */
#line 340 "yacc.y"
    {
        cout << "VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat" << endl;
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1753 "yacc.tab.c"
    break;

  case 34: /* VarDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal  */
#line 351 "yacc.y"
    {
        cout << "VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal" << endl;
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-6].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back((yyvsp[-4].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1770 "yacc.tab.c"
    break;

  case 35: /* VarDefRepeat: %empty  */
#line 365 "yacc.y"
    {
        cout << "VarDefRepeat -> empty" << endl;
        p = new TreeNode("VarDefRepeat");
        (yyval.y_node) = p;
    }
#line 1780 "yacc.tab.c"
    break;

  case 36: /* VarDefRepeat: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat  */
#line 371 "yacc.y"
    {       
        cout << "VarDefRepeat: -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat" << endl;
        p = new TreeNode("VarDefRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1794 "yacc.tab.c"
    break;

  case 37: /* InitVal: Exp  */
#line 383 "yacc.y"
    {
        cout << "InitVal -> Exp" << endl;
        p = new TreeNode("InitVal");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1805 "yacc.tab.c"
    break;

  case 38: /* InitVal: T_LEFT_BRACE InitVal T_RIGHT_BRACE  */
#line 390 "yacc.y"
    {
        cout << "InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl" << endl;
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1818 "yacc.tab.c"
    break;

  case 39: /* InitVal: T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE  */
#line 399 "yacc.y"
    {
        cout << "InitVal -> T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE" << endl;
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1833 "yacc.tab.c"
    break;

  case 40: /* InitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 410 "yacc.y"
    {
        cout << "InitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1845 "yacc.tab.c"
    break;

  case 41: /* InitValRepeat: %empty  */
#line 419 "yacc.y"
    {
        cout << "InitValRepeat -> empty" << endl;
        p = new TreeNode("InitValRepeat");
        (yyval.y_node) = p;
    }
#line 1855 "yacc.tab.c"
    break;

  case 42: /* InitValRepeat: T_COMMA InitVal InitValRepeat  */
#line 425 "yacc.y"
    {
        cout << "InitValRepeat -> T_COMMA InitVal InitValRepeat" << endl;
        p = new TreeNode("InitValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1868 "yacc.tab.c"
    break;

  case 43: /* FuncFParams: FuncFParam  */
#line 436 "yacc.y"
    {
        cout << "FuncFParams -> FuncFParam" << endl;
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1879 "yacc.tab.c"
    break;

  case 44: /* FuncFParams: FuncFParam T_COMMA FuncFParam FuncFParamsRepeat  */
#line 443 "yacc.y"
    {
        cout << "FuncFParams -> FuncFParam T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1893 "yacc.tab.c"
    break;

  case 45: /* FuncFParamsRepeat: %empty  */
#line 454 "yacc.y"
    {
        cout << "FuncFParamsRepeat -> empty" << endl;
        p = new TreeNode("FuncFParamsRepeat");
        (yyval.y_node) = p;
    }
#line 1903 "yacc.tab.c"
    break;

  case 46: /* FuncFParamsRepeat: T_COMMA FuncFParam FuncFParamsRepeat  */
#line 460 "yacc.y"
    {
        cout << "FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        p = new TreeNode("FuncFParamsRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1916 "yacc.tab.c"
    break;

  case 47: /* FuncFParam: T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET  */
#line 471 "yacc.y"
    {
        cout << "FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET " << endl;
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1930 "yacc.tab.c"
    break;

  case 48: /* FuncFParam: T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat  */
#line 481 "yacc.y"
    {
        cout << "FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat " << endl;
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1946 "yacc.tab.c"
    break;

  case 49: /* FuncFParam: T_INT T_IDENT  */
#line 493 "yacc.y"
    {
        cout << "FuncFParam -> T_INT T_IDENT" << endl;
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1958 "yacc.tab.c"
    break;

  case 50: /* FuncFParamRepeat: %empty  */
#line 502 "yacc.y"
    {
        cout << "FuncFParamRepeat -> empty" << endl;
        p = new TreeNode("FuncFParamRepeat");
        (yyval.y_node) = p;
    }
#line 1968 "yacc.tab.c"
    break;

  case 51: /* FuncFParamRepeat: T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat  */
#line 508 "yacc.y"
    {
        cout << "FuncFParamRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat" << endl;
        p = new TreeNode("FuncFParamRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1982 "yacc.tab.c"
    break;

  case 52: /* Block: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 520 "yacc.y"
    {
        cout << "Block -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1994 "yacc.tab.c"
    break;

  case 53: /* Block: T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE  */
#line 528 "yacc.y"
    {
        cout << "Block -> T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE" << endl;
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2008 "yacc.tab.c"
    break;

  case 54: /* BlockRepeat: %empty  */
#line 539 "yacc.y"
    {
        cout << "BlockRepeat -> empty" << endl;
        p = new TreeNode("BlockRepeat");
        (yyval.y_node) = p;
    }
#line 2018 "yacc.tab.c"
    break;

  case 55: /* BlockRepeat: BlockItem BlockRepeat  */
#line 545 "yacc.y"
    {
        cout << "BlockRepeat -> BlockItem BlockRepeat" << endl;
        p = new TreeNode("BlockRepeat");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2030 "yacc.tab.c"
    break;

  case 56: /* BlockItem: Decl  */
#line 555 "yacc.y"
    {
        cout << "BlockItem -> Decl" << endl;
        p = new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2041 "yacc.tab.c"
    break;

  case 57: /* BlockItem: Stmt  */
#line 562 "yacc.y"
    {
        cout << "BlockItem -> Stmt" << endl;
        p = new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2052 "yacc.tab.c"
    break;

  case 58: /* Stmt: LVal T_DEFINE Exp T_DELIMITER  */
#line 571 "yacc.y"
    {
        cout << "Stmt -> LVal T_DEFINE Exp T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2066 "yacc.tab.c"
    break;

  case 59: /* Stmt: T_DELIMITER  */
#line 581 "yacc.y"
    {
        cout << "Stmt -> T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2077 "yacc.tab.c"
    break;

  case 60: /* Stmt: Exp T_DELIMITER  */
#line 588 "yacc.y"
    {
        cout << "Stmt -> Exp T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2089 "yacc.tab.c"
    break;

  case 61: /* Stmt: Block  */
#line 596 "yacc.y"
    {
        cout << "Stmt -> Block" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2100 "yacc.tab.c"
    break;

  case 62: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 603 "yacc.y"
    {
        cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2115 "yacc.tab.c"
    break;

  case 63: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt T_ELSE  */
#line 614 "yacc.y"
    {
        cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt T_ELSE" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2131 "yacc.tab.c"
    break;

  case 64: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt Stmt  */
#line 626 "yacc.y"
    {
        cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt Stmt" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2147 "yacc.tab.c"
    break;

  case 65: /* Stmt: T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 638 "yacc.y"
    {
        cout << "Stmt -> T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2162 "yacc.tab.c"
    break;

  case 66: /* Stmt: T_BREAK T_DELIMITER  */
#line 649 "yacc.y"
    {
        cout << "Stmt -> T_BREAK T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2174 "yacc.tab.c"
    break;

  case 67: /* Stmt: T_CONTINUE T_DELIMITER  */
#line 657 "yacc.y"
    {
        cout << "Stmt -> T_CONTINUE T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2186 "yacc.tab.c"
    break;

  case 68: /* Stmt: T_RETURN T_DELIMITER  */
#line 665 "yacc.y"
    {
        cout << "Stmt -> T_RETURN T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2198 "yacc.tab.c"
    break;

  case 69: /* Stmt: T_RETURN Exp T_DELIMITER  */
#line 673 "yacc.y"
    {
        cout << "Stmt -> T_RETURN Exp T_DELIMITER" << endl;
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2211 "yacc.tab.c"
    break;

  case 70: /* Exp: AddExp  */
#line 684 "yacc.y"
    {
        cout << "Exp -> AddExp" << endl;
        p = new TreeNode("Exp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2222 "yacc.tab.c"
    break;

  case 71: /* Cond: LOrExp  */
#line 693 "yacc.y"
    {
        cout << "Cond -> LOrExp" << endl;
        p = new TreeNode("Cond");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2233 "yacc.tab.c"
    break;

  case 72: /* LVal: T_IDENT  */
#line 702 "yacc.y"
    {
        cout << "LVal -> T_IDENT" << endl;
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2244 "yacc.tab.c"
    break;

  case 73: /* LVal: T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat  */
#line 709 "yacc.y"
    {
        cout << "LVal -> T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat" << endl;
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2259 "yacc.tab.c"
    break;

  case 74: /* LValRepeat: %empty  */
#line 721 "yacc.y"
    {
        cout << "LValRepeat -> empty" << endl;
        p = new TreeNode("LValRepeat");
        (yyval.y_node) = p;
    }
#line 2269 "yacc.tab.c"
    break;

  case 75: /* LValRepeat: T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat  */
#line 727 "yacc.y"
    {
        cout << "LValRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat" << endl;
        p = new TreeNode("LValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2283 "yacc.tab.c"
    break;

  case 76: /* PrimaryExp: T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS  */
#line 739 "yacc.y"
    {
        cout << "PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS" << endl;
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2296 "yacc.tab.c"
    break;

  case 77: /* PrimaryExp: LVal  */
#line 748 "yacc.y"
    {
        cout << "PrimaryExp -> LVal" << endl;
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2307 "yacc.tab.c"
    break;

  case 78: /* PrimaryExp: Number  */
#line 755 "yacc.y"
    {
        cout << "PrimaryExp -> Number" << endl;
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2318 "yacc.tab.c"
    break;

  case 79: /* Number: T_INTEGER_CONST  */
#line 764 "yacc.y"
    {
        cout << "Number -> T_INTEGER_CONST "<< endl;
        p = new TreeNode("Number");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_int)));
        (yyval.y_node) = p;
    }
#line 2329 "yacc.tab.c"
    break;

  case 80: /* UnaryExp: PrimaryExp  */
#line 773 "yacc.y"
    {
        cout << "UnaryExp -> PrimaryExp" << endl;
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2340 "yacc.tab.c"
    break;

  case 81: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS  */
#line 780 "yacc.y"
    {
        cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS" << endl;
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2353 "yacc.tab.c"
    break;

  case 82: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS  */
#line 789 "yacc.y"
    {
        cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS" << endl;
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2367 "yacc.tab.c"
    break;

  case 83: /* UnaryExp: UnaryOp UnaryExp  */
#line 799 "yacc.y"
    {
        cout << "UnaryExp -> UnaryOp UnaryExp" << endl;
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2379 "yacc.tab.c"
    break;

  case 84: /* UnaryOp: T_ADD  */
#line 809 "yacc.y"
    {
        cout << "UnaryOp -> T_ADD" << endl;
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2390 "yacc.tab.c"
    break;

  case 85: /* UnaryOp: T_SUB  */
#line 816 "yacc.y"
    {
        cout << "UnaryOp -> T_SUB" << endl;
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2401 "yacc.tab.c"
    break;

  case 86: /* UnaryOp: T_NOT  */
#line 823 "yacc.y"
    {
        cout << "UnaryOp -> T_NOT" << endl;
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2412 "yacc.tab.c"
    break;

  case 87: /* FuncRParams: Exp  */
#line 832 "yacc.y"
    {
        cout << "FuncRParams -> Exp";
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2423 "yacc.tab.c"
    break;

  case 88: /* FuncRParams: Exp T_COMMA Exp FuncRParamsRepeat  */
#line 839 "yacc.y"
    {
        cout << "FuncRParams -> T_COMMA Exp FuncRParamsRepeat" << endl;
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2437 "yacc.tab.c"
    break;

  case 89: /* FuncRParamsRepeat: %empty  */
#line 850 "yacc.y"
    {
        cout << "FuncRParamsRepeat -> empty" << endl;
        p = new TreeNode("FuncRParamsRepeat");
        (yyval.y_node) = p;
    }
#line 2447 "yacc.tab.c"
    break;

  case 90: /* FuncRParamsRepeat: T_COMMA Exp FuncRParamsRepeat  */
#line 856 "yacc.y"
    {
        cout << "FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat" << endl;
        p = new TreeNode("FuncRParamsRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2460 "yacc.tab.c"
    break;

  case 91: /* MulExp: UnaryExp  */
#line 867 "yacc.y"
    {
        cout << "MulExp -> UnaryExp" << endl;
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2471 "yacc.tab.c"
    break;

  case 92: /* MulExp: MulExp T_MUL UnaryExp  */
#line 874 "yacc.y"
    {
        cout << "MulExp -> MulExp T_MUL UnaryExp" << endl;
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2484 "yacc.tab.c"
    break;

  case 93: /* MulExp: MulExp T_DIV UnaryExp  */
#line 883 "yacc.y"
    {
        cout << "MulExp -> MulExp T_DIV UnaryExp" << endl;
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2497 "yacc.tab.c"
    break;

  case 94: /* MulExp: MulExp T_MOD UnaryExp  */
#line 892 "yacc.y"
    {
        cout << "MulExp -> MulExp T_MOD UnaryExp" << endl;
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2510 "yacc.tab.c"
    break;

  case 95: /* AddExp: MulExp  */
#line 903 "yacc.y"
    {
        cout << "AddExp -> MulExp" << endl;
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2521 "yacc.tab.c"
    break;

  case 96: /* AddExp: AddExp T_ADD MulExp  */
#line 910 "yacc.y"
    {
        cout << "AddExp -> AddExp T_ADD MulExp" << endl;
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2534 "yacc.tab.c"
    break;

  case 97: /* AddExp: AddExp T_SUB MulExp  */
#line 919 "yacc.y"
    {
        cout << "AddExp -> AddExp T_SUB MulExp" << endl;
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2547 "yacc.tab.c"
    break;

  case 98: /* RelExp: AddExp  */
#line 930 "yacc.y"
    {
        cout << "RelExp -> AddExp" << endl;
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2558 "yacc.tab.c"
    break;

  case 99: /* RelExp: RelExp T_LESS AddExp  */
#line 937 "yacc.y"
    {
        cout << "RelExp -> RelExp T_LESS AddExp" << endl; 
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;  
    }
#line 2571 "yacc.tab.c"
    break;

  case 100: /* RelExp: RelExp T_LARGE AddExp  */
#line 946 "yacc.y"
    {
        cout << "RelExp -> RelExp T_LARGE AddExp" << endl;
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2584 "yacc.tab.c"
    break;

  case 101: /* RelExp: RelExp T_LESS_EQUAL AddExp  */
#line 955 "yacc.y"
    {
        cout << "RelExp -> RelExp T_LESS_EQUAL AddExp" << endl;
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2597 "yacc.tab.c"
    break;

  case 102: /* RelExp: RelExp T_LARGE_EQUAL AddExp  */
#line 964 "yacc.y"
    {
        cout << "RelExp -> RelExp T_LARGE_EQUAL AddExp" << endl;
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2610 "yacc.tab.c"
    break;

  case 103: /* EqExp: RelExp  */
#line 975 "yacc.y"
    {
        cout << "EqExp -> RelExp" << endl;
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2621 "yacc.tab.c"
    break;

  case 104: /* EqExp: EqExp T_EQUAL RelExp  */
#line 982 "yacc.y"
    {
        cout << "EqExp -> EqExp T_EQUAL RelExp" << endl;
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2634 "yacc.tab.c"
    break;

  case 105: /* EqExp: EqExp T_NOT_EQUAL RelExp  */
#line 991 "yacc.y"
    {
        cout << "EqExp -> EqExp T_NOT_EQUAL RelExp" << endl;
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2647 "yacc.tab.c"
    break;

  case 106: /* LAndExp: EqExp  */
#line 1002 "yacc.y"
    {
        cout << "LAndExp -> EqExp" << endl;
        p = new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2658 "yacc.tab.c"
    break;

  case 107: /* LAndExp: LAndExp T_AND EqExp  */
#line 1009 "yacc.y"
    {
        cout << "LAndExp -> LAndExp T_AND EqExp" << endl;
        p = new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2671 "yacc.tab.c"
    break;

  case 108: /* LOrExp: LAndExp  */
#line 1020 "yacc.y"
    {
        cout << "LOrExp -> LAndExp" << endl;
        p = new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2682 "yacc.tab.c"
    break;

  case 109: /* LOrExp: LOrExp T_OR LAndExp  */
#line 1027 "yacc.y"
    {
        cout << "LOrExp -> LOrExp T_OR LAndExp" << endl;
        p = new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2695 "yacc.tab.c"
    break;

  case 110: /* ConstExp: AddExp  */
#line 1038 "yacc.y"
    {
        cout << "ConstExp -> AddExp" << endl;
        p = new TreeNode("ConstExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2706 "yacc.tab.c"
    break;


#line 2710 "yacc.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 1045 "yacc.y"
  

void yyerror(const char *s) //当yacc遇到语法错误时，会回调yyerror函数，并且把错误信息放在参数s中  
{  
    cerr<<s<<endl;//直接输出错误信息
    /* cerr<<"line: "<<yylex.row<<" col: "<<yylex.col<<" \""<<yylex.y_id<<"\""<<endl;   */
}  

int main()//程序主函数，这个函数也可以放到其它.c, .cpp文件里  
{  
    const char* sFile="file.txt";//打开要读取的文本文件  
    FILE* fp=fopen(sFile, "r");  
    if(fp==NULL)  
    {  
         printf("cannot open %s\n", sFile);  
         return -1;  
    }  
    extern FILE* yyin;  //yyin和yyout都是FILE*类型  
    yyin=fp;//yacc会从yyin读取输入，yyin默认是标准输入，
            //这里改为磁盘文件。yacc默认向yyout输出，可修改yyout改变输出目的  

    printf("-----begin parsing %s\n", sFile);  
    yyparse();//使yacc开始读取输入和解析，它会调用lex的yylex()读取记号  
    puts("-----end parsing");  
   
    fclose(fp);

    /* cout<<"[DEBUG] 先序遍历树"<<endl;
    tree.print_tree(); */
    
    if(tree.rootNode){
        DotDrawer drawer;
        drawer.genarateDot(tree);
        drawer.writeToFile();
        cout<<"end~"<<endl;
    }

    return 0;  

}  

