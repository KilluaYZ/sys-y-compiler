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
  YYSYMBOL_T_COMMA = 42,                   /* T_COMMA  */
  YYSYMBOL_T_IDENT = 43,                   /* T_IDENT  */
  YYSYMBOL_T_INTEGER_CONST = 44,           /* T_INTEGER_CONST  */
  YYSYMBOL_T_DEC_CONST = 45,               /* T_DEC_CONST  */
  YYSYMBOL_T_OCT_CONST = 46,               /* T_OCT_CONST  */
  YYSYMBOL_T_HEX_CONST = 47,               /* T_HEX_CONST  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_CompUnit = 49,                  /* CompUnit  */
  YYSYMBOL_CompUnit1 = 50,                 /* CompUnit1  */
  YYSYMBOL_Decl = 51,                      /* Decl  */
  YYSYMBOL_ConstDecl = 52,                 /* ConstDecl  */
  YYSYMBOL_ConstDecl1 = 53,                /* ConstDecl1  */
  YYSYMBOL_BType = 54,                     /* BType  */
  YYSYMBOL_ConstDef = 55,                  /* ConstDef  */
  YYSYMBOL_ConstDef1 = 56,                 /* ConstDef1  */
  YYSYMBOL_ConstInitVal = 57,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVal1 = 58,             /* ConstInitVal1  */
  YYSYMBOL_ConstInitVal2 = 59,             /* ConstInitVal2  */
  YYSYMBOL_VarDecl = 60,                   /* VarDecl  */
  YYSYMBOL_VarDecl1 = 61,                  /* VarDecl1  */
  YYSYMBOL_VarDef = 62,                    /* VarDef  */
  YYSYMBOL_VarDef1 = 63,                   /* VarDef1  */
  YYSYMBOL_InitVal = 64,                   /* InitVal  */
  YYSYMBOL_InitVal1 = 65,                  /* InitVal1  */
  YYSYMBOL_FuncDef = 66,                   /* FuncDef  */
  YYSYMBOL_FuncType = 67,                  /* FuncType  */
  YYSYMBOL_FuncFParams = 68,               /* FuncFParams  */
  YYSYMBOL_FuncFParams1 = 69,              /* FuncFParams1  */
  YYSYMBOL_FuncFParam = 70,                /* FuncFParam  */
  YYSYMBOL_FuncFParam1 = 71,               /* FuncFParam1  */
  YYSYMBOL_FuncFParam2 = 72,               /* FuncFParam2  */
  YYSYMBOL_Block = 73,                     /* Block  */
  YYSYMBOL_Block1 = 74,                    /* Block1  */
  YYSYMBOL_BlockItem = 75,                 /* BlockItem  */
  YYSYMBOL_Stmt = 76,                      /* Stmt  */
  YYSYMBOL_Stmt1 = 77,                     /* Stmt1  */
  YYSYMBOL_ELSE_STMT = 78,                 /* ELSE_STMT  */
  YYSYMBOL_Exp = 79,                       /* Exp  */
  YYSYMBOL_Cond = 80,                      /* Cond  */
  YYSYMBOL_LVal = 81,                      /* LVal  */
  YYSYMBOL_LVal1 = 82,                     /* LVal1  */
  YYSYMBOL_PrimaryExp = 83,                /* PrimaryExp  */
  YYSYMBOL_Number = 84,                    /* Number  */
  YYSYMBOL_UnaryExp = 85,                  /* UnaryExp  */
  YYSYMBOL_UnaryExp1 = 86,                 /* UnaryExp1  */
  YYSYMBOL_UnaryOp = 87,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 88,               /* FuncRParams  */
  YYSYMBOL_FuncRParams1 = 89,              /* FuncRParams1  */
  YYSYMBOL_MulExp = 90,                    /* MulExp  */
  YYSYMBOL_MulExp1 = 91,                   /* MulExp1  */
  YYSYMBOL_AddExp = 92,                    /* AddExp  */
  YYSYMBOL_AddExp1 = 93,                   /* AddExp1  */
  YYSYMBOL_RelExp = 94,                    /* RelExp  */
  YYSYMBOL_RelExp1 = 95,                   /* RelExp1  */
  YYSYMBOL_EqExp = 96,                     /* EqExp  */
  YYSYMBOL_EqExp1 = 97,                    /* EqExp1  */
  YYSYMBOL_LAndExp = 98,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 99,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 100                  /* ConstExp  */
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
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

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
       0,   139,   139,   147,   157,   164,   173,   180,   189,   202,
     209,   220,   229,   241,   247,   259,   266,   277,   283,   293,
     299,   310,   322,   328,   339,   347,   359,   365,   377,   384,
     392,   404,   410,   421,   435,   442,   451,   461,   467,   478,
     486,   497,   508,   513,   525,   536,   541,   551,   558,   567,
     577,   585,   592,   604,   615,   623,   631,   642,   647,   656,
     662,   672,   681,   690,   700,   705,   717,   726,   733,   742,
     751,   758,   768,   778,   783,   792,   799,   806,   815,   825,
     830,   841,   848,   859,   866,   873,   882,   889,   900,   907,
     916,   923,   934,   941,   948,   955,   964,   971,   982,   989,
     998,  1005,  1016,  1023,  1034
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
  "T_BOOL_FALSE", "T_DELIMITER", "T_NEWLINE", "T_ERRORCHAR", "T_COMMA",
  "T_IDENT", "T_INTEGER_CONST", "T_DEC_CONST", "T_OCT_CONST",
  "T_HEX_CONST", "$accept", "CompUnit", "CompUnit1", "Decl", "ConstDecl",
  "ConstDecl1", "BType", "ConstDef", "ConstDef1", "ConstInitVal",
  "ConstInitVal1", "ConstInitVal2", "VarDecl", "VarDecl1", "VarDef",
  "VarDef1", "InitVal", "InitVal1", "FuncDef", "FuncType", "FuncFParams",
  "FuncFParams1", "FuncFParam", "FuncFParam1", "FuncFParam2", "Block",
  "Block1", "BlockItem", "Stmt", "Stmt1", "ELSE_STMT", "Exp", "Cond",
  "LVal", "LVal1", "PrimaryExp", "Number", "UnaryExp", "UnaryExp1",
  "UnaryOp", "FuncRParams", "FuncRParams1", "MulExp", "MulExp1", "AddExp",
  "AddExp1", "RelExp", "RelExp1", "EqExp", "EqExp1", "LAndExp", "LOrExp",
  "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

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
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    29,     8,    20,    27,    78,
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
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
  case 2: /* CompUnit: CompUnit1  */
#line 140 "yacc.y"
    {  
        cout<<"CompUnit -> CompUnit1"<<endl;
        p =  new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
        tree.rootNode = p;
    }
#line 1326 "yacc.tab.c"
    break;

  case 3: /* CompUnit: CompUnit CompUnit1  */
#line 148 "yacc.y"
    {
        cout<<"CompUnit -> CompUnit CompUnit1"<<endl;
        p =  new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1338 "yacc.tab.c"
    break;

  case 4: /* CompUnit1: Decl  */
#line 158 "yacc.y"
    {
        cout<<"CompUnit1 -> Decl"<<endl;
        p =  new TreeNode("CompUnit1");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1349 "yacc.tab.c"
    break;

  case 5: /* CompUnit1: FuncDef  */
#line 165 "yacc.y"
    {
        cout<<"CompUnit1 -> FuncDef"<<endl;
        p =  new TreeNode("CompUnit1");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1360 "yacc.tab.c"
    break;

  case 6: /* Decl: ConstDecl  */
#line 174 "yacc.y"
    {
        cout<<"Decl -> ConstDecl"<<endl;
        p =  new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1371 "yacc.tab.c"
    break;

  case 7: /* Decl: VarDecl  */
#line 181 "yacc.y"
    {
        cout<<"Decl -> VarDecl"<<endl;
        p =  new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1382 "yacc.tab.c"
    break;

  case 8: /* ConstDecl: T_CONST BType ConstDef ConstDecl1 T_DELIMITER  */
#line 190 "yacc.y"
    {
        cout<<"ConstDecl -> T_CONST BType ConstDef ConstDecl1 T_DELIMITER"<<endl;
        p =  new TreeNode("ConstDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1397 "yacc.tab.c"
    break;

  case 9: /* ConstDecl1: %empty  */
#line 202 "yacc.y"
    {
        cout<<"ConstDecl1 ->  "<<endl;
        // drawer.addEdge("ConstDecl1", "");
        p =  new TreeNode("ConstDecl1");
        (yyval.y_node) = p;

    }
#line 1409 "yacc.tab.c"
    break;

  case 10: /* ConstDecl1: T_COMMA ConstDef ConstDecl1  */
#line 210 "yacc.y"
    {
        cout<<"ConstDecl1 -> T_COMMA ConstDef ConstDecl1"<<endl;
        p =  new TreeNode("ConstDecl1");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1422 "yacc.tab.c"
    break;

  case 11: /* BType: T_INT  */
#line 221 "yacc.y"
    {
        cout<<"BType -> T_INT "<<endl;
        p =  new TreeNode("BType");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1433 "yacc.tab.c"
    break;

  case 12: /* ConstDef: T_IDENT ConstDef1 T_DEFINE ConstInitVal  */
#line 230 "yacc.y"
    {
        cout<<"ConstDef -> T_IDENT ConstDef1 T_DEFINE ConstInitVal "<<endl;
        p =  new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1447 "yacc.tab.c"
    break;

  case 13: /* ConstDef1: %empty  */
#line 241 "yacc.y"
    {
        cout<<"ConstDef1 ->  "<<endl;
        // drawer.addEdge("ConstDef1", "");
        p =  new TreeNode("ConstDef1");
        (yyval.y_node) = p;
    }
#line 1458 "yacc.tab.c"
    break;

  case 14: /* ConstDef1: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDef1  */
#line 248 "yacc.y"
    {
        cout<<"ConstDef1 -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDef1 "<<endl;
        p =  new TreeNode("ConstDef1");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1472 "yacc.tab.c"
    break;

  case 15: /* ConstInitVal: ConstExp  */
#line 260 "yacc.y"
    {
        cout<<"ConstInitVal ->  ConstExp"<<endl;
        p =  new TreeNode("ConstInitVal");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1483 "yacc.tab.c"
    break;

  case 16: /* ConstInitVal: T_LEFT_BRACE ConstInitVal1 T_RIGHT_BRACE  */
#line 267 "yacc.y"
    {
        cout<<"ConstInitVal ->  T_LEFT_BRACE ConstInitVal1 T_RIGHT_BRACE"<<endl;
        p =  new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1496 "yacc.tab.c"
    break;

  case 17: /* ConstInitVal1: %empty  */
#line 277 "yacc.y"
    {
        cout<<"ConstInitVal1 ->  "<<endl;
        // drawer.addEdge("ConstInitVal1", "");
        p =  new TreeNode("ConstInitVal1");
        (yyval.y_node) = p;
    }
#line 1507 "yacc.tab.c"
    break;

  case 18: /* ConstInitVal1: ConstInitVal ConstInitVal2  */
#line 284 "yacc.y"
    {
        cout<<"ConstInitVal1 -> ConstInitVal ConstInitVal2 "<<endl;
        p =  new TreeNode("ConstInitVal1");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1519 "yacc.tab.c"
    break;

  case 19: /* ConstInitVal2: %empty  */
#line 293 "yacc.y"
    {
        cout<<"ConstInitVal2 ->  "<<endl;
        // drawer.addEdge("ConstInitVal2", "");
        p =  new TreeNode("ConstInitVal2");
        (yyval.y_node) = p;
    }
#line 1530 "yacc.tab.c"
    break;

  case 20: /* ConstInitVal2: T_COMMA ConstInitVal ConstInitVal2  */
#line 300 "yacc.y"
    {
        cout<<"ConstInitVal2 -> T_COMMA ConstInitVal ConstInitVal2 "<<endl;
        p =  new TreeNode("ConstInitVal2");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1543 "yacc.tab.c"
    break;

  case 21: /* VarDecl: BType VarDef VarDecl1 T_DELIMITER  */
#line 311 "yacc.y"
    {
        cout<<"VarDecl -> BType VarDef VarDecl1 T_DELIMITER "<<endl;
        p =  new TreeNode("VarDecl");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1557 "yacc.tab.c"
    break;

  case 22: /* VarDecl1: %empty  */
#line 322 "yacc.y"
    {
        cout<<"VarDecl1 ->  "<<endl;
        // drawer.addEdge("VarDecl1", "");
        p =  new TreeNode("VarDecl1");
        (yyval.y_node) = p;
    }
#line 1568 "yacc.tab.c"
    break;

  case 23: /* VarDecl1: T_COMMA VarDef VarDecl1  */
#line 329 "yacc.y"
    {
        cout<<"VarDecl1 -> T_COMMA VarDef VarDecl1 "<<endl;
        p =  new TreeNode("VarDecl1");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1581 "yacc.tab.c"
    break;

  case 24: /* VarDef: T_IDENT VarDef1  */
#line 340 "yacc.y"
    {
        cout<<"VarDef -> T_IDENT VarDef1 "<<endl;
        p =  new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1593 "yacc.tab.c"
    break;

  case 25: /* VarDef: T_IDENT VarDef1 T_DEFINE InitVal  */
#line 348 "yacc.y"
    {
        cout<<"VarDef -> T_IDENT VarDef1 T_DEFINE InitVal "<<endl;
        p =  new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1607 "yacc.tab.c"
    break;

  case 26: /* VarDef1: %empty  */
#line 359 "yacc.y"
    {
        cout<<"VarDef1 -> "<<endl;
        // drawer.addEdge("VarDef1", "");
        p =  new TreeNode("VarDef1");
        (yyval.y_node) = p;
    }
#line 1618 "yacc.tab.c"
    break;

  case 27: /* VarDef1: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDef1  */
#line 366 "yacc.y"
    {
        cout<<"VarDef1 -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDef1"<<endl;
        p =  new TreeNode("VarDef1");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1632 "yacc.tab.c"
    break;

  case 28: /* InitVal: Exp  */
#line 378 "yacc.y"
    {
        cout<<"InitVal -> Exp"<<endl;
        p =  new TreeNode("InitVal");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1643 "yacc.tab.c"
    break;

  case 29: /* InitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 385 "yacc.y"
    {
        cout<<"InitVal -> T_LEFT_BRACE  T_RIGHT_BRACE"<<endl;
        p =  new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1655 "yacc.tab.c"
    break;

  case 30: /* InitVal: T_LEFT_BRACE InitVal InitVal1 T_RIGHT_BRACE  */
#line 393 "yacc.y"
    {
        cout<<"InitVal -> T_LEFT_BRACE InitVal InitVal1 T_RIGHT_BRACE"<<endl;
        p =  new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1669 "yacc.tab.c"
    break;

  case 31: /* InitVal1: %empty  */
#line 404 "yacc.y"
    {
        cout<<"InitVal1 -> "<<endl;
        // drawer.addEdge("InitVal1", "");
        p =  new TreeNode("InitVal1");
        (yyval.y_node) = p;
    }
#line 1680 "yacc.tab.c"
    break;

  case 32: /* InitVal1: T_COMMA InitVal InitVal1  */
#line 411 "yacc.y"
    {
        cout<<"InitVal1 -> T_COMMA InitVal InitVal1"<<endl;
        p =  new TreeNode("InitVal1");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1693 "yacc.tab.c"
    break;

  case 33: /* FuncDef: FuncType T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block  */
#line 422 "yacc.y"
    {
        cout<<"FuncDef -> FuncType T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block"<<endl;
        p =  new TreeNode("FuncDef");
        p->childNodes.push_back((yyvsp[-5].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1709 "yacc.tab.c"
    break;

  case 34: /* FuncType: T_VOID  */
#line 436 "yacc.y"
    {
        cout<<"FuncType -> T_VOID"<<endl;
        p =  new TreeNode("FuncType");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1720 "yacc.tab.c"
    break;

  case 35: /* FuncType: T_INT  */
#line 443 "yacc.y"
    {
        cout<<"FuncType -> T_INT"<<endl;
        p =  new TreeNode("FuncType");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1731 "yacc.tab.c"
    break;

  case 36: /* FuncFParams: FuncFParam FuncFParams1  */
#line 452 "yacc.y"
    {
        cout<<"FuncFParams -> FuncFParam FuncFParams1"<<endl;
        p =  new TreeNode("FuncFParams");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1743 "yacc.tab.c"
    break;

  case 37: /* FuncFParams1: %empty  */
#line 461 "yacc.y"
    {
        cout<<"FuncFParams1 ->  "<<endl;
        // drawer.addEdge("FuncFParams1", "");
        p =  new TreeNode("FuncFParams1");
        (yyval.y_node) = p;
    }
#line 1754 "yacc.tab.c"
    break;

  case 38: /* FuncFParams1: T_COMMA FuncFParam FuncFParams1  */
#line 468 "yacc.y"
    {
        cout<<"FuncFParams1 -> T_COMMA FuncFParam FuncFParams1 "<<endl;
        p =  new TreeNode("FuncFParams1");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1767 "yacc.tab.c"
    break;

  case 39: /* FuncFParam: BType T_IDENT  */
#line 479 "yacc.y"
    {
        cout<<"FuncFParam -> BType T_IDENT  "<<endl;
        p =  new TreeNode("FuncFParam");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1779 "yacc.tab.c"
    break;

  case 40: /* FuncFParam: BType T_IDENT FuncFParam1  */
#line 487 "yacc.y"
    {
        cout<<"FuncFParam -> BType T_IDENT FuncFParam1  "<<endl;
        p =  new TreeNode("FuncFParam");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1792 "yacc.tab.c"
    break;

  case 41: /* FuncFParam1: T_LEFT_BRACKET T_RIGHT_BRACKET FuncFParam2  */
#line 498 "yacc.y"
    {
        cout<<"FuncFParam1 -> T_LEFT_BRACKET T_RIGHT_BRACKET FuncFParam2 "<<endl;
        p =  new TreeNode("FuncFParam1");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1805 "yacc.tab.c"
    break;

  case 42: /* FuncFParam2: %empty  */
#line 508 "yacc.y"
    {
        cout<<"FuncFParam2 ->   "<<endl;
        p =  new TreeNode("FuncFParam2");
        (yyval.y_node) = p;
    }
#line 1815 "yacc.tab.c"
    break;

  case 43: /* FuncFParam2: T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParam2  */
#line 514 "yacc.y"
    {
        cout<<"FuncFParam2 -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParam2"<<endl;
        p =  new TreeNode("FuncFParam2");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1829 "yacc.tab.c"
    break;

  case 44: /* Block: T_LEFT_BRACE Block1 T_RIGHT_BRACE  */
#line 526 "yacc.y"
    {
        cout<<"Block ->  T_LEFT_BRACE Block1 T_RIGHT_BRACE "<<endl;
        p =  new TreeNode("Block");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1842 "yacc.tab.c"
    break;

  case 45: /* Block1: %empty  */
#line 536 "yacc.y"
    {
        cout<<"Block1 ->  "<<endl;
        p =  new TreeNode("Block1");
        (yyval.y_node) = p;
    }
#line 1852 "yacc.tab.c"
    break;

  case 46: /* Block1: BlockItem Block1  */
#line 542 "yacc.y"
    {
        cout<<"Block1 ->  BlockItem Block1"<<endl;
        p =  new TreeNode("Block1");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1864 "yacc.tab.c"
    break;

  case 47: /* BlockItem: Decl  */
#line 552 "yacc.y"
    {
        cout<<"BlockItem ->  Decl"<<endl;
        p =  new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1875 "yacc.tab.c"
    break;

  case 48: /* BlockItem: Stmt  */
#line 559 "yacc.y"
    {
        cout<<"BlockItem ->  Stmt"<<endl;
        p =  new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1886 "yacc.tab.c"
    break;

  case 49: /* Stmt: LVal T_DEFINE Exp T_DELIMITER  */
#line 568 "yacc.y"
    {
        cout<<"Stmt ->  LVal T_DEFINE Exp T_DELIMITER "<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1900 "yacc.tab.c"
    break;

  case 50: /* Stmt: Stmt1 T_DELIMITER  */
#line 578 "yacc.y"
    {
        cout<<"Stmt ->  Stmt1 T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1912 "yacc.tab.c"
    break;

  case 51: /* Stmt: Block  */
#line 586 "yacc.y"
    {
        cout<<"Stmt ->  Block"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1923 "yacc.tab.c"
    break;

  case 52: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt ELSE_STMT  */
#line 593 "yacc.y"
    {
        cout<<"Stmt ->  T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt ELSE_STMT"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1939 "yacc.tab.c"
    break;

  case 53: /* Stmt: T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 605 "yacc.y"
    {
        cout<<"Stmt ->  T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1954 "yacc.tab.c"
    break;

  case 54: /* Stmt: T_BREAK T_DELIMITER  */
#line 616 "yacc.y"
    {
        cout<<"Stmt ->  T_BREAK T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1966 "yacc.tab.c"
    break;

  case 55: /* Stmt: T_CONTINUE T_DELIMITER  */
#line 624 "yacc.y"
    {
        cout<<"Stmt ->  T_CONTINUE T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1978 "yacc.tab.c"
    break;

  case 56: /* Stmt: T_RETURN Stmt1 T_DELIMITER  */
#line 632 "yacc.y"
    {
        cout<<"Stmt ->  T_RETURN Stmt1 T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1991 "yacc.tab.c"
    break;

  case 57: /* Stmt1: %empty  */
#line 642 "yacc.y"
    {
        cout<<"Stmt1 ->  "<<endl;
        p =  new TreeNode("Stmt1");
        (yyval.y_node) = p;
    }
#line 2001 "yacc.tab.c"
    break;

  case 58: /* Stmt1: Exp  */
#line 648 "yacc.y"
    {
        cout<<"Stmt1 -> Exp Stmt1"<<endl;
        p =  new TreeNode("Stmt1");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2012 "yacc.tab.c"
    break;

  case 59: /* ELSE_STMT: %empty  */
#line 656 "yacc.y"
    {
        cout<<"ELSE_STMT ->  "<<endl;
        // drawer.addEdge("ELSE_STMT", "");
        p =  new TreeNode("ELSE_STMT");
        (yyval.y_node) = p;
    }
#line 2023 "yacc.tab.c"
    break;

  case 60: /* ELSE_STMT: T_ELSE Stmt  */
#line 663 "yacc.y"
    {
        cout<<"ELSE_STMT -> T_ELSE Stmt "<<endl;
        p =  new TreeNode("ELSE_STMT");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2035 "yacc.tab.c"
    break;

  case 61: /* Exp: AddExp  */
#line 673 "yacc.y"
    {
        cout<<"Exp -> AddExp "<<endl;
        p =  new TreeNode("Exp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2046 "yacc.tab.c"
    break;

  case 62: /* Cond: LOrExp  */
#line 682 "yacc.y"
    {
        cout<<"Cond -> AddLOrExpExp "<<endl;
        p =  new TreeNode("Cond");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2057 "yacc.tab.c"
    break;

  case 63: /* LVal: T_IDENT LVal1  */
#line 691 "yacc.y"
    {
        cout<<"LVal -> T_IDENT LVal1 "<<endl;
        p =  new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2069 "yacc.tab.c"
    break;

  case 64: /* LVal1: %empty  */
#line 700 "yacc.y"
    {
        cout<<"LVal1 -> "<<endl;
        p =  new TreeNode("LVal1");
        (yyval.y_node) = p;
    }
#line 2079 "yacc.tab.c"
    break;

  case 65: /* LVal1: T_LEFT_BRACKET Exp T_RIGHT_BRACKET LVal1  */
#line 706 "yacc.y"
    {
        cout<<"LVal1 -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LVal1 "<<endl;
        p =  new TreeNode("LVal1");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2093 "yacc.tab.c"
    break;

  case 66: /* PrimaryExp: T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS  */
#line 718 "yacc.y"
    {
        cout<<"PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS "<<endl;
        p =  new TreeNode("PrimaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2106 "yacc.tab.c"
    break;

  case 67: /* PrimaryExp: LVal  */
#line 727 "yacc.y"
    {
        cout<<"PrimaryExp -> LVal "<<endl;
        p =  new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2117 "yacc.tab.c"
    break;

  case 68: /* PrimaryExp: Number  */
#line 734 "yacc.y"
    {
        cout<<"PrimaryExp -> Number "<<endl;
        p =  new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2128 "yacc.tab.c"
    break;

  case 69: /* Number: T_INTEGER_CONST  */
#line 743 "yacc.y"
    {
        cout<<"Number -> T_INTEGER_CONST "<<endl;
        p =  new TreeNode("Number");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_int)));
        (yyval.y_node) = p;
    }
#line 2139 "yacc.tab.c"
    break;

  case 70: /* UnaryExp: PrimaryExp  */
#line 752 "yacc.y"
    {
        cout<<"UnaryExp -> PrimaryExp "<<endl;
        p =  new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2150 "yacc.tab.c"
    break;

  case 71: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS UnaryExp1 T_RIGHT_PARENTHESIS  */
#line 759 "yacc.y"
    {
        cout<<"UnaryExp -> T_IDENT T_LEFT_PARENTHESIS UnaryExp1 T_RIGHT_PARENTHESIS "<<endl;
        p =  new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2164 "yacc.tab.c"
    break;

  case 72: /* UnaryExp: UnaryOp UnaryExp  */
#line 769 "yacc.y"
    {
        cout<<"UnaryExp -> UnaryOp UnaryExp "<<endl;
        p =  new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2176 "yacc.tab.c"
    break;

  case 73: /* UnaryExp1: %empty  */
#line 778 "yacc.y"
    {
        cout<<"UnaryExp1 ->  "<<endl;
        p =  new TreeNode("UnaryExp1");
        (yyval.y_node) = p;
    }
#line 2186 "yacc.tab.c"
    break;

  case 74: /* UnaryExp1: FuncRParams  */
#line 784 "yacc.y"
    {
        cout<<"UnaryExp1 -> FuncRParams "<<endl;
        p =  new TreeNode("UnaryExp1");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2197 "yacc.tab.c"
    break;

  case 75: /* UnaryOp: T_ADD  */
#line 793 "yacc.y"
    {
        cout<<"UnaryOp -> T_ADD "<<endl;
        p =  new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2208 "yacc.tab.c"
    break;

  case 76: /* UnaryOp: T_SUB  */
#line 800 "yacc.y"
    {
        cout<<"UnaryOp -> T_SUB "<<endl;
        p =  new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2219 "yacc.tab.c"
    break;

  case 77: /* UnaryOp: T_NOT  */
#line 807 "yacc.y"
    {
        cout<<"UnaryOp -> T_NOT "<<endl;
        p =  new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2230 "yacc.tab.c"
    break;

  case 78: /* FuncRParams: Exp FuncRParams1  */
#line 816 "yacc.y"
    {
        cout<<"FuncRParams -> Exp FuncRParams1 "<<endl;
        p =  new TreeNode("FuncRParams");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2242 "yacc.tab.c"
    break;

  case 79: /* FuncRParams1: %empty  */
#line 825 "yacc.y"
    {
        cout<<"FuncRParams1 -> "<<endl;
        p =  new TreeNode("FuncRParams1");
        (yyval.y_node) = p;
    }
#line 2252 "yacc.tab.c"
    break;

  case 80: /* FuncRParams1: T_COMMA Exp FuncRParams1  */
#line 831 "yacc.y"
    {
        cout<<"FuncRParams1 -> T_COMMA Exp FuncRParams1"<<endl;
        p =  new TreeNode("FuncRParams1");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2265 "yacc.tab.c"
    break;

  case 81: /* MulExp: UnaryExp  */
#line 842 "yacc.y"
    {
        cout<<"MulExp -> UnaryExp"<<endl;
        p =  new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2276 "yacc.tab.c"
    break;

  case 82: /* MulExp: MulExp MulExp1 UnaryExp  */
#line 849 "yacc.y"
    {
        cout<<"MulExp -> MulExp MulExp1 UnaryExp"<<endl;
        p =  new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2289 "yacc.tab.c"
    break;

  case 83: /* MulExp1: T_ADD  */
#line 860 "yacc.y"
    {
        cout<<"MulExp1 -> T_ADD"<<endl;
        p =  new TreeNode("MulExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2300 "yacc.tab.c"
    break;

  case 84: /* MulExp1: T_DIV  */
#line 867 "yacc.y"
    {
        cout<<"MulExp1 -> T_DIV"<<endl;
        p =  new TreeNode("MulExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2311 "yacc.tab.c"
    break;

  case 85: /* MulExp1: T_MOD  */
#line 874 "yacc.y"
    {
        cout<<"MulExp1 -> T_MOD"<<endl;
        p =  new TreeNode("MulExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2322 "yacc.tab.c"
    break;

  case 86: /* AddExp: MulExp  */
#line 883 "yacc.y"
    {
        cout<<"AddExp -> MulExp"<<endl;
        p =  new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2333 "yacc.tab.c"
    break;

  case 87: /* AddExp: AddExp AddExp1 MulExp  */
#line 890 "yacc.y"
    {
        cout<<"AddExp -> AddExp AddExp1 MulExp"<<endl;
        p =  new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2346 "yacc.tab.c"
    break;

  case 88: /* AddExp1: T_ADD  */
#line 901 "yacc.y"
    {
        cout<<"AddExp1 -> T_ADD"<<endl;
        p =  new TreeNode("AddExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2357 "yacc.tab.c"
    break;

  case 89: /* AddExp1: T_SUB  */
#line 908 "yacc.y"
    {
        cout<<"AddExp1 -> T_SUB"<<endl;
        p =  new TreeNode("AddExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2368 "yacc.tab.c"
    break;

  case 90: /* RelExp: AddExp  */
#line 917 "yacc.y"
    {
        cout<<"RelExp -> AddExp"<<endl;
        p =  new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2379 "yacc.tab.c"
    break;

  case 91: /* RelExp: RelExp RelExp1 AddExp  */
#line 924 "yacc.y"
    {
        cout<<"RelExp -> RelExp RelExp1 AddExp"<<endl;
        p =  new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2392 "yacc.tab.c"
    break;

  case 92: /* RelExp1: T_LESS  */
#line 935 "yacc.y"
    {
        cout<<"RelExp1 -> T_LESS"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2403 "yacc.tab.c"
    break;

  case 93: /* RelExp1: T_LARGE  */
#line 942 "yacc.y"
    {
        cout<<"RelExp1 -> T_LARGE"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2414 "yacc.tab.c"
    break;

  case 94: /* RelExp1: T_LESS_EQUAL  */
#line 949 "yacc.y"
    {
        cout<<"RelExp1 -> T_LESS_EQUAL"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2425 "yacc.tab.c"
    break;

  case 95: /* RelExp1: T_LARGE_EQUAL  */
#line 956 "yacc.y"
    {
        cout<<"RelExp1 -> T_LARGE_EQUAL"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2436 "yacc.tab.c"
    break;

  case 96: /* EqExp: RelExp  */
#line 965 "yacc.y"
    {
        cout<<"EqExp -> RelExp"<<endl;
        p =  new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2447 "yacc.tab.c"
    break;

  case 97: /* EqExp: EqExp EqExp1 RelExp  */
#line 972 "yacc.y"
    {
        cout<<"EqExp -> EqExp EqExp1 RelExp"<<endl;
        p =  new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2460 "yacc.tab.c"
    break;

  case 98: /* EqExp1: T_EQUAL  */
#line 983 "yacc.y"
    {
        cout<<"EqExp1 -> T_EQUAL"<<endl;
        p =  new TreeNode("EqExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2471 "yacc.tab.c"
    break;

  case 99: /* EqExp1: T_NOT_EQUAL  */
#line 990 "yacc.y"
    {
        cout<<"EqExp1 -> T_NOT_EQUAL"<<endl;
        p =  new TreeNode("EqExp1");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2482 "yacc.tab.c"
    break;

  case 100: /* LAndExp: EqExp  */
#line 999 "yacc.y"
    {
        cout<<"LAndExp -> EqExp"<<endl;
        p =  new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2493 "yacc.tab.c"
    break;

  case 101: /* LAndExp: LAndExp T_AND EqExp  */
#line 1006 "yacc.y"
    {
        cout<<"LAndExp -> LAndExp T_AND EqExp"<<endl;
        p =  new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2506 "yacc.tab.c"
    break;

  case 102: /* LOrExp: LAndExp  */
#line 1017 "yacc.y"
    {
        cout<<"LOrExp -> LAndExp"<<endl;
        p =  new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2517 "yacc.tab.c"
    break;

  case 103: /* LOrExp: LOrExp T_OR LAndExp  */
#line 1024 "yacc.y"
    {   
        cout<<"LOrExp -> LOrExp T_OR LAndExp"<<endl;
        p =  new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2530 "yacc.tab.c"
    break;

  case 104: /* ConstExp: AddExp  */
#line 1035 "yacc.y"
    {
        cout<<"ConstExp -> AddExp"<<endl;
        p =  new TreeNode("ConstExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2541 "yacc.tab.c"
    break;


#line 2545 "yacc.tab.c"

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

#line 1071 "yacc.y"
  

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

    DotDrawer drawer;
    drawer.genarateDot(tree);
    drawer.writeToFile();
    cout<<"end~"<<endl;

    return 0;  

}  

