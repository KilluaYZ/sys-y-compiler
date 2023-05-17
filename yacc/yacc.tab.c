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
#include <typeinfo>

extern "C"//为了能够在C++程序里面调用C函数，必须把每一个需要使用的C函数，其声明都包括在extern "C"{}      
          //块里面，这样C++链接时才能成功链接它们。extern "C"用来在C++环境下设置C链接类型。  
{   //lex.l中也有类似的这段extern "C"，可以把它们合并成一段，放到共同的头文件main.h中  
    void yyerror(const char *s);  
    extern int yylex(void);//该函数是在lex.yy.c里定义的，yyparse()里要调用该函数，
                            //为了能编译和链接，必须用extern加以声明  
    extern FILE* yyin, *yyout;
}  

void print_out(string str){
    fprintf(yyout, "%s\n", str.c_str());
}

TreeNode* p;
Tree tree;

#line 103 "yacc.tab.c"

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
  YYSYMBOL_T_NOT = 23,                     /* T_NOT  */
  YYSYMBOL_T_BOOL_TRUE = 24,               /* T_BOOL_TRUE  */
  YYSYMBOL_T_BOOL_FALSE = 25,              /* T_BOOL_FALSE  */
  YYSYMBOL_T_DELIMITER = 26,               /* T_DELIMITER  */
  YYSYMBOL_T_NEWLINE = 27,                 /* T_NEWLINE  */
  YYSYMBOL_T_ERRORCHAR = 28,               /* T_ERRORCHAR  */
  YYSYMBOL_T_IDENT = 29,                   /* T_IDENT  */
  YYSYMBOL_T_COMMA = 30,                   /* T_COMMA  */
  YYSYMBOL_T_INTEGER_CONST = 31,           /* T_INTEGER_CONST  */
  YYSYMBOL_T_HEX_CONST = 32,               /* T_HEX_CONST  */
  YYSYMBOL_T_DEC_CONST = 33,               /* T_DEC_CONST  */
  YYSYMBOL_T_OCT_CONST = 34,               /* T_OCT_CONST  */
  YYSYMBOL_T_ADD = 35,                     /* T_ADD  */
  YYSYMBOL_T_SUB = 36,                     /* T_SUB  */
  YYSYMBOL_T_MUL = 37,                     /* T_MUL  */
  YYSYMBOL_T_DIV = 38,                     /* T_DIV  */
  YYSYMBOL_T_MOD = 39,                     /* T_MOD  */
  YYSYMBOL_T_EQUAL = 40,                   /* T_EQUAL  */
  YYSYMBOL_T_NOT_EQUAL = 41,               /* T_NOT_EQUAL  */
  YYSYMBOL_T_LARGE = 42,                   /* T_LARGE  */
  YYSYMBOL_T_LESS = 43,                    /* T_LESS  */
  YYSYMBOL_T_LARGE_EQUAL = 44,             /* T_LARGE_EQUAL  */
  YYSYMBOL_T_LESS_EQUAL = 45,              /* T_LESS_EQUAL  */
  YYSYMBOL_T_OR = 46,                      /* T_OR  */
  YYSYMBOL_T_AND = 47,                     /* T_AND  */
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
#define YYLAST   289

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
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
       0,    60,    60,    66,    76,    84,    92,   102,   115,   128,
     141,   156,   164,   173,   184,   200,   206,   218,   228,   244,
     250,   263,   271,   280,   290,   304,   310,   323,   333,   348,
     354,   366,   374,   384,   396,   412,   418,   431,   439,   449,
     461,   472,   478,   490,   498,   511,   517,   529,   540,   553,
     564,   570,   583,   592,   605,   611,   622,   630,   640,   651,
     659,   668,   676,   688,   701,   713,   722,   731,   740,   752,
     762,   772,   780,   794,   800,   813,   823,   831,   841,   851,
     859,   869,   880,   891,   899,   907,   917,   925,   938,   944,
     956,   964,   974,   984,   996,  1004,  1014,  1026,  1034,  1044,
    1054,  1064,  1076,  1084,  1094,  1106,  1114,  1126,  1134,  1146
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
  "T_LEFT_BRACE", "T_RIGHT_BRACE", "T_DEFINE", "T_NOT", "T_BOOL_TRUE",
  "T_BOOL_FALSE", "T_DELIMITER", "T_NEWLINE", "T_ERRORCHAR", "T_IDENT",
  "T_COMMA", "T_INTEGER_CONST", "T_HEX_CONST", "T_DEC_CONST",
  "T_OCT_CONST", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", "T_EQUAL",
  "T_NOT_EQUAL", "T_LARGE", "T_LESS", "T_LARGE_EQUAL", "T_LESS_EQUAL",
  "T_OR", "T_AND", "$accept", "CompRoot", "CompUnit", "FuncDef", "Decl",
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

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     130,   -14,    -8,    19,    50,   130,  -167,  -167,  -167,  -167,
      40,    15,    24,    28,  -167,  -167,  -167,     5,   253,    95,
    -167,    30,    34,    53,    74,    45,    62,    73,    63,   253,
    -167,    31,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   253,
     112,    -6,    80,    -4,  -167,  -167,    -6,    87,    76,    62,
      91,   253,   117,  -167,    28,    92,   165,  -167,    62,   109,
     108,   239,   253,  -167,   253,   253,   253,   253,   253,    98,
    -167,    95,   107,    30,   113,  -167,    62,   119,    49,  -167,
    -167,   127,   242,    30,   131,   132,   133,    60,   159,  -167,
    -167,  -167,  -167,   198,  -167,   152,   157,  -167,   150,  -167,
    -167,   153,   167,   163,  -167,  -167,  -167,   112,   112,   253,
     168,   162,  -167,    76,  -167,  -167,   169,  -167,   117,   172,
      28,   171,  -167,   170,   253,  -167,  -167,  -167,   173,   253,
     174,   198,  -167,   253,   109,  -167,   253,  -167,   180,   184,
      95,    95,   187,  -167,   253,   189,   182,  -167,   127,  -167,
     195,   199,    -6,    99,    26,   175,   177,  -167,   200,  -167,
    -167,   193,   150,   185,   253,  -167,    98,  -167,   162,  -167,
     201,   117,   117,   204,  -167,   253,  -167,   228,   253,   253,
     253,   253,   253,   253,   253,   253,   228,  -167,  -167,   253,
    -167,   207,  -167,  -167,   169,  -167,   182,  -167,   209,  -167,
      -6,    -6,    -6,    -6,    99,    99,    26,   175,   216,   185,
     180,  -167,  -167,   195,   228,  -167,  -167,  -167,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     5,     6,    11,    12,
      31,     0,     0,     0,     1,     3,     4,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      85,    71,    78,    83,    84,    76,    79,    77,    90,     0,
      94,   109,     0,     0,    32,    37,    69,    31,    29,     0,
       0,     0,     0,    13,     0,    49,     0,    10,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,    35,
      40,     0,     0,     0,     0,     9,     0,     0,     0,    17,
      21,    15,     0,     0,     0,     0,     0,     0,     0,    52,
      59,    56,    61,    54,    57,     0,    76,     8,    45,    75,
      80,    86,     0,     0,    91,    92,    93,    95,    96,     0,
      33,    41,    38,    29,    28,     7,    19,    22,     0,     0,
       0,     0,    47,     0,     0,    65,    66,    67,     0,     0,
       0,    54,    60,     0,     0,    44,     0,    81,    73,     0,
       0,     0,     0,    30,     0,     0,    25,    23,    15,    14,
      50,     0,    97,   102,   105,   107,    70,    68,     0,    53,
      55,     0,    45,    88,     0,    72,    35,    34,    41,    39,
       0,     0,     0,     0,    16,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    46,     0,
      87,     0,    36,    42,    19,    18,    25,    24,     0,    64,
      99,    98,   101,   100,   103,   104,   106,   108,    62,    88,
      73,    20,    26,    50,     0,    89,    74,    51,    63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,   226,    13,  -167,    84,   -47,    44,   -74,
      46,  -167,   128,   -13,    77,   -38,    78,   223,    85,   -53,
      36,   -12,   121,   194,  -166,   -19,   124,   -54,    56,  -167,
    -167,   -11,  -167,  -167,    51,    20,   -17,   -63,    83,    94,
    -167,   -15
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
      45,    41,    96,    42,   119,    72,    98,    81,    48,    25,
      60,   199,    29,     7,    57,    10,    43,    70,    16,    30,
     208,    12,    26,    13,    45,    31,    71,    32,    63,    67,
      68,    33,    34,   111,    41,    41,    77,    75,    25,    96,
      22,    20,   101,   103,   146,    21,    97,    61,   218,    62,
      14,    49,    45,   104,   105,   106,    17,    23,    18,    47,
     113,    41,    19,   123,   115,    29,   182,   183,   128,    78,
     117,    51,    30,   148,    55,    52,    29,    96,    31,   118,
      32,   162,    56,    30,    33,    34,   127,   107,   108,    31,
      58,    32,    41,    59,   139,    33,    34,   195,   196,    69,
      53,    41,   167,   168,    54,    18,    73,   152,    76,    19,
      82,    29,   152,    25,   161,    43,   109,   163,    30,   204,
     205,    45,    45,    96,    31,    99,    32,    41,   112,   170,
      33,    34,    96,    29,     1,     2,     3,    78,   116,   114,
      30,   178,   179,   180,   181,   191,    31,   124,    32,    64,
      65,    66,    33,    34,    41,    41,   198,   120,   125,   126,
      96,   200,   201,   202,   203,   152,   152,   152,   152,    83,
     209,     3,    84,    85,    86,   129,    87,    88,   132,   133,
     134,    29,   138,   136,   137,    56,    89,   144,    30,   150,
     140,    90,   141,   147,    31,   159,    32,   149,   164,   157,
      33,    34,    83,   166,     3,    84,    85,    86,   169,    87,
      88,   171,   172,   175,    29,   189,   177,   186,    56,   187,
     194,    30,   184,   185,    90,   197,   210,    31,   213,    32,
     214,    15,   174,    33,    34,    84,    85,    86,   211,    87,
      88,   143,   212,   192,    29,    50,   193,   188,    56,   217,
      93,    30,   160,   158,    90,    29,   100,    31,    29,    32,
     215,   122,    30,    33,    34,    30,   216,   206,    31,    29,
      32,    31,     0,    32,    33,    34,    30,    33,    34,   207,
       0,     0,    31,     0,    32,     0,     0,     0,    33,    34
};

static const yytype_int16 yycheck[] =
{
      19,    18,    56,    18,    78,    43,    59,    54,    21,     4,
      29,   177,    16,     0,    26,    29,    20,    21,     5,    23,
     186,    29,    17,     4,    43,    29,    30,    31,    39,    35,
      36,    35,    36,    71,    51,    52,    51,    49,     4,    93,
      16,    26,    61,    62,   118,    30,    58,    16,   214,    18,
       0,    17,    71,    64,    65,    66,    16,    29,    18,    29,
      73,    78,    22,    82,    76,    16,    40,    41,    87,    20,
      21,    18,    23,   120,    29,    22,    16,   131,    29,    30,
      31,   134,    20,    23,    35,    36,    26,    67,    68,    29,
      17,    31,   109,    30,   109,    35,    36,   171,   172,    19,
      26,   118,   140,   141,    30,    18,    30,   124,    17,    22,
      18,    16,   129,     4,   133,    20,    18,   136,    23,   182,
     183,   140,   141,   177,    29,    17,    31,   144,    21,   144,
      35,    36,   186,    16,     4,     5,     6,    20,    19,    26,
      23,    42,    43,    44,    45,   164,    29,    16,    31,    37,
      38,    39,    35,    36,   171,   172,   175,    30,    26,    26,
     214,   178,   179,   180,   181,   182,   183,   184,   185,     4,
     189,     6,     7,     8,     9,    16,    11,    12,    26,    22,
      30,    16,    19,    30,    17,    20,    21,    18,    23,    19,
      22,    26,    30,    21,    29,    21,    31,    26,    18,    26,
      35,    36,     4,    19,     6,     7,     8,     9,    21,    11,
      12,    22,    30,    18,    16,    30,    17,    17,    20,    26,
      19,    23,    47,    46,    26,    21,    19,    29,    19,    31,
      14,     5,   148,    35,    36,     7,     8,     9,   194,    11,
      12,   113,   196,   166,    16,    22,   168,   162,    20,   213,
      56,    23,   131,   129,    26,    16,    17,    29,    16,    31,
     209,    19,    23,    35,    36,    23,   210,   184,    29,    16,
      31,    29,    -1,    31,    35,    36,    23,    35,    36,   185,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    49,    50,    51,    52,    53,    59,
      29,    61,    29,     4,     0,    51,    52,    16,    18,    22,
      26,    30,    16,    29,    55,     4,    17,    65,    67,    16,
      23,    29,    31,    35,    36,    75,    77,    78,    79,    80,
      83,    84,    89,    20,    63,    73,    84,    29,    61,    17,
      65,    18,    22,    26,    30,    29,    20,    69,    17,    30,
      73,    16,    18,    79,    37,    38,    39,    35,    36,    19,
      21,    30,    63,    30,    60,    69,    17,    89,    20,    57,
      89,    55,    18,     4,     7,     8,     9,    11,    12,    21,
      26,    52,    69,    71,    72,    73,    75,    69,    67,    17,
      17,    73,    81,    73,    79,    79,    79,    83,    83,    18,
      62,    63,    21,    61,    26,    69,    19,    21,    30,    57,
      30,    54,    19,    73,    16,    26,    26,    26,    73,    16,
      70,    71,    26,    22,    30,    66,    30,    17,    19,    89,
      22,    30,    64,    60,    18,    56,    57,    21,    55,    26,
      19,    74,    84,    85,    86,    87,    88,    26,    74,    21,
      70,    73,    67,    73,    18,    76,    19,    63,    63,    21,
      89,    22,    30,    58,    54,    18,    68,    17,    42,    43,
      44,    45,    40,    41,    47,    46,    17,    26,    66,    30,
      82,    73,    62,    64,    19,    57,    57,    21,    73,    72,
      84,    84,    84,    84,    85,    85,    86,    87,    72,    73,
      19,    56,    58,    19,    14,    82,    76,    68,    72
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
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    75,    75,    76,    76,    77,    77,    77,    78,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    88,    88,    89
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
       2,     1,     5,     7,     5,     2,     2,     2,     3,     1,
       1,     1,     5,     0,     4,     3,     1,     1,     1,     1,
       3,     4,     2,     1,     1,     1,     1,     4,     0,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1
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
#line 61 "yacc.y"
    {
        tree.rootNode = (yyvsp[0].y_node);
    }
#line 1345 "yacc.tab.c"
    break;

  case 3: /* CompUnit: CompUnit FuncDef  */
#line 67 "yacc.y"
    {
        // cout << "CompUnit -> CompUnit FuncDef"<< endl;
        print_out("CompUnit -> CompUnit FuncDef");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
        tree.rootNode = p;
    }
#line 1359 "yacc.tab.c"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 77 "yacc.y"
    {
        print_out("CompUnit -> CompUnit Decl");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1371 "yacc.tab.c"
    break;

  case 5: /* CompUnit: FuncDef  */
#line 85 "yacc.y"
    {
        // cout << "CompUnit -> FuncDef" << endl;
        print_out("CompUnit -> FuncDef");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1383 "yacc.tab.c"
    break;

  case 6: /* CompUnit: Decl  */
#line 93 "yacc.y"
    {
        // cout << "CompUnit -> Decl" << endl;
        print_out("CompUnit -> Decl");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1395 "yacc.tab.c"
    break;

  case 7: /* FuncDef: T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block  */
#line 103 "yacc.y"
    {
        // cout << "FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block");
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
#line 116 "yacc.y"
    {
        // cout << "FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block");
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1429 "yacc.tab.c"
    break;

  case 9: /* FuncDef: T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block  */
#line 129 "yacc.y"
    {
        // cout << "FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block");

        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1446 "yacc.tab.c"
    break;

  case 10: /* FuncDef: T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block  */
#line 142 "yacc.y"
    {
        // cout << "FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block");

        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1463 "yacc.tab.c"
    break;

  case 11: /* Decl: constDecl  */
#line 157 "yacc.y"
    {
        // cout << "Decl -> constDecl" << endl;
        print_out("Decl -> constDecl");
        p = new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1475 "yacc.tab.c"
    break;

  case 12: /* Decl: VarDecl  */
#line 165 "yacc.y"
    {
        // cout << "Decl -> VarDecl" << endl;
        print_out("Decl -> VarDecl");
        p = new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1487 "yacc.tab.c"
    break;

  case 13: /* constDecl: T_CONST T_INT ConstDef T_DELIMITER  */
#line 174 "yacc.y"
    {
        // cout << "constDecl -> T_CONST T_INT ConstDef T_DELIMITER" << endl;
        print_out("constDecl -> T_CONST T_INT ConstDef T_DELIMITER");
        p = new TreeNode("constDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1502 "yacc.tab.c"
    break;

  case 14: /* constDecl: T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER  */
#line 185 "yacc.y"
    {
        // cout << "constDecl -> T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER" << endl;
        print_out("constDecl -> T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER");
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
#line 1520 "yacc.tab.c"
    break;

  case 15: /* constDeclRepeat: %empty  */
#line 200 "yacc.y"
    {
        // cout << "constDeclRepeat -> " << endl;
        print_out("constDeclRepeat -> ");
        p = new TreeNode("constDeclRepeat");
        (yyval.y_node) = p;
    }
#line 1531 "yacc.tab.c"
    break;

  case 16: /* constDeclRepeat: T_COMMA ConstDef constDeclRepeat  */
#line 207 "yacc.y"
    {
        // cout << "constDeclRepeat -> T_COMMA ConstDef constDeclRepeat" << endl;
        print_out("constDeclRepeat -> T_COMMA ConstDef constDeclRepeat");
        p = new TreeNode("constDeclRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1545 "yacc.tab.c"
    break;

  case 17: /* ConstDef: T_IDENT T_DEFINE ConstInitVal  */
#line 219 "yacc.y"
    {
        // cout << "ConstDef -> T_IDENT T_DEFINE ConstInitVal" << endl;
        print_out("ConstDef -> T_IDENT T_DEFINE ConstInitVal");
        p = new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1559 "yacc.tab.c"
    break;

  case 18: /* ConstDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal  */
#line 229 "yacc.y"
    {
        // cout << "ConstDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal" << endl;
        print_out("ConstDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal");
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
#line 1577 "yacc.tab.c"
    break;

  case 19: /* ConstDefRepeat: %empty  */
#line 244 "yacc.y"
    {
        // cout << "ConstDefRepeat -> " << endl;
        print_out("ConstDefRepeat -> ");
        p = new TreeNode("ConstDefRepeat");
        (yyval.y_node) = p;
    }
#line 1588 "yacc.tab.c"
    break;

  case 20: /* ConstDefRepeat: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat  */
#line 251 "yacc.y"
    {
        // cout << "ConstDefRepeat -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat" << endl;
        print_out("ConstDefRepeat -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat");
        p = new TreeNode("ConstDefRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1603 "yacc.tab.c"
    break;

  case 21: /* ConstInitVal: ConstExp  */
#line 264 "yacc.y"
    {
        // cout << "ConstInitVal -> ConstExp" << endl;
        print_out("ConstInitVal -> ConstExp");
        p = new TreeNode("ConstInitVal");
         p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1615 "yacc.tab.c"
    break;

  case 22: /* ConstInitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 272 "yacc.y"
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1628 "yacc.tab.c"
    break;

  case 23: /* ConstInitVal: T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE  */
#line 281 "yacc.y"
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1642 "yacc.tab.c"
    break;

  case 24: /* ConstInitVal: T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE  */
#line 291 "yacc.y"
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1658 "yacc.tab.c"
    break;

  case 25: /* ConstInitValRepeat: %empty  */
#line 304 "yacc.y"
    {
        // cout << "ConstInitValRepeat -> empty" << endl;
        print_out("ConstInitValRepeat -> empty");
        p = new TreeNode("ConstInitValRepeat");
        (yyval.y_node) = p;
    }
#line 1669 "yacc.tab.c"
    break;

  case 26: /* ConstInitValRepeat: T_COMMA ConstInitVal ConstInitValRepeat  */
#line 311 "yacc.y"
    {
        // cout << "ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat" << endl;
        print_out("ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat");
        p = new TreeNode("ConstInitValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1683 "yacc.tab.c"
    break;

  case 27: /* VarDecl: T_INT VarDef T_DELIMITER  */
#line 324 "yacc.y"
    {
        // cout << "VarDecl -> T_INT VarDef T_DELIMITER" << endl;
        print_out("VarDecl -> T_INT VarDef T_DELIMITER");
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1697 "yacc.tab.c"
    break;

  case 28: /* VarDecl: T_INT VarDef T_COMMA VarDef VarDeclRepeat T_DELIMITER  */
#line 334 "yacc.y"
    {
        // cout << "VarDecl -> T_INT VarDef VarDeclRepeat T_DELIMITER" << endl;
        print_out("VarDecl -> T_INT VarDef VarDeclRepeat T_DELIMITER");
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back((yyvsp[-4].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1714 "yacc.tab.c"
    break;

  case 29: /* VarDeclRepeat: %empty  */
#line 348 "yacc.y"
    {      
        // cout << "VarDeclRepeat -> "; 
        print_out("VarDeclRepeat -> ");
        p = new TreeNode("VarDeclRepeat");  
        (yyval.y_node) = p;
    }
#line 1725 "yacc.tab.c"
    break;

  case 30: /* VarDeclRepeat: T_COMMA VarDef VarDeclRepeat  */
#line 355 "yacc.y"
    {
        // cout << "VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat";
        print_out("VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat");
        p = new TreeNode("VarDeclRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1739 "yacc.tab.c"
    break;

  case 31: /* VarDef: T_IDENT  */
#line 367 "yacc.y"
    {
        // cout << "VarDef -> T_IDENT" << endl;
        print_out("VarDef -> T_IDENT");
        p = new TreeNode("VarDef");  
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1751 "yacc.tab.c"
    break;

  case 32: /* VarDef: T_IDENT T_DEFINE InitVal  */
#line 375 "yacc.y"
    {
        // cout << "VarDef -> T_IDENT T_DEFINE InitVal" << endl;
        print_out("VarDef -> T_IDENT T_DEFINE InitVal");
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1765 "yacc.tab.c"
    break;

  case 33: /* VarDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat  */
#line 385 "yacc.y"
    {
        // cout << "VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat" << endl;
        print_out("VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat");
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1781 "yacc.tab.c"
    break;

  case 34: /* VarDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal  */
#line 397 "yacc.y"
    {
        // cout << "VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal" << endl;
        print_out("VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal");
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
#line 1799 "yacc.tab.c"
    break;

  case 35: /* VarDefRepeat: %empty  */
#line 412 "yacc.y"
    {
        cout << "VarDefRepeat -> " << endl;
        print_out("VarDefRepeat -> ");
        p = new TreeNode("VarDefRepeat");
        (yyval.y_node) = p;
    }
#line 1810 "yacc.tab.c"
    break;

  case 36: /* VarDefRepeat: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat  */
#line 419 "yacc.y"
    {       
        // cout << "VarDefRepeat: -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat" << endl;
        print_out("VarDefRepeat: -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat");
        p = new TreeNode("VarDefRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1825 "yacc.tab.c"
    break;

  case 37: /* InitVal: Exp  */
#line 432 "yacc.y"
    {
        // cout << "InitVal -> Exp" << endl;
        print_out("InitVal -> Exp");
        p = new TreeNode("InitVal");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1837 "yacc.tab.c"
    break;

  case 38: /* InitVal: T_LEFT_BRACE InitVal T_RIGHT_BRACE  */
#line 440 "yacc.y"
    {
        // cout << "InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl" << endl;
        print_out("InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1851 "yacc.tab.c"
    break;

  case 39: /* InitVal: T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE  */
#line 450 "yacc.y"
    {
        // cout << "InitVal -> T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE" << endl;
        print_out("InitVal -> T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1867 "yacc.tab.c"
    break;

  case 40: /* InitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 462 "yacc.y"
    {
        // cout << "InitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("InitVal -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1880 "yacc.tab.c"
    break;

  case 41: /* InitValRepeat: %empty  */
#line 472 "yacc.y"
    {
        // cout << "InitValRepeat -> " << endl;
        print_out("InitValRepeat -> ");
        p = new TreeNode("InitValRepeat");
        (yyval.y_node) = p;
    }
#line 1891 "yacc.tab.c"
    break;

  case 42: /* InitValRepeat: T_COMMA InitVal InitValRepeat  */
#line 479 "yacc.y"
    {
        // cout << "InitValRepeat -> T_COMMA InitVal InitValRepeat" << endl;
        print_out("InitValRepeat -> T_COMMA InitVal InitValRepeat");
        p = new TreeNode("InitValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1905 "yacc.tab.c"
    break;

  case 43: /* FuncFParams: FuncFParam  */
#line 491 "yacc.y"
    {
        // cout << "FuncFParams -> FuncFParam" << endl;
        print_out("FuncFParams -> FuncFParam");
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1917 "yacc.tab.c"
    break;

  case 44: /* FuncFParams: FuncFParam T_COMMA FuncFParam FuncFParamsRepeat  */
#line 499 "yacc.y"
    {
        // cout << "FuncFParams -> FuncFParam T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        print_out("FuncFParams -> FuncFParam T_COMMA FuncFParam FuncFParamsRepeat");
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1932 "yacc.tab.c"
    break;

  case 45: /* FuncFParamsRepeat: %empty  */
#line 511 "yacc.y"
    {
        // cout << "FuncFParamsRepeat -> " << endl;
        print_out("FuncFParamsRepeat -> ");
        p = new TreeNode("FuncFParamsRepeat");
        (yyval.y_node) = p;
    }
#line 1943 "yacc.tab.c"
    break;

  case 46: /* FuncFParamsRepeat: T_COMMA FuncFParam FuncFParamsRepeat  */
#line 518 "yacc.y"
    {
        // cout << "FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        print_out("FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat");
        p = new TreeNode("FuncFParamsRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1957 "yacc.tab.c"
    break;

  case 47: /* FuncFParam: T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET  */
#line 530 "yacc.y"
    {
        // cout << "FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET " << endl;
        print_out("FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET ");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1972 "yacc.tab.c"
    break;

  case 48: /* FuncFParam: T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat  */
#line 541 "yacc.y"
    {
        // cout << "FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat " << endl;
        print_out("FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat ");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1989 "yacc.tab.c"
    break;

  case 49: /* FuncFParam: T_INT T_IDENT  */
#line 554 "yacc.y"
    {
        // cout << "FuncFParam -> T_INT T_IDENT" << endl;
        print_out("FuncFParam -> T_INT T_IDENT");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2002 "yacc.tab.c"
    break;

  case 50: /* FuncFParamRepeat: %empty  */
#line 564 "yacc.y"
    {
        // cout << "FuncFParamRepeat -> " << endl;
        print_out("FuncFParamRepeat -> ");
        p = new TreeNode("FuncFParamRepeat");
        (yyval.y_node) = p;
    }
#line 2013 "yacc.tab.c"
    break;

  case 51: /* FuncFParamRepeat: T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat  */
#line 571 "yacc.y"
    {
        // cout << "FuncFParamRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat" << endl;
        print_out("FuncFParamRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat");
        p = new TreeNode("FuncFParamRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2028 "yacc.tab.c"
    break;

  case 52: /* Block: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 584 "yacc.y"
    {
        // cout << "Block -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("Block -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2041 "yacc.tab.c"
    break;

  case 53: /* Block: T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE  */
#line 593 "yacc.y"
    {
        // cout << "Block -> T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE" << endl;
        print_out("Block -> T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE");
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2056 "yacc.tab.c"
    break;

  case 54: /* BlockRepeat: %empty  */
#line 605 "yacc.y"
    {
        // cout << "BlockRepeat -> " << endl;
        print_out("BlockRepeat -> ");
        p = new TreeNode("BlockRepeat");
        (yyval.y_node) = p;
    }
#line 2067 "yacc.tab.c"
    break;

  case 55: /* BlockRepeat: BlockItem BlockRepeat  */
#line 612 "yacc.y"
    {
        // cout << "BlockRepeat -> BlockItem BlockRepeat" << endl;
        print_out("BlockRepeat -> BlockItem BlockRepeat");
        p = new TreeNode("BlockRepeat");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2080 "yacc.tab.c"
    break;

  case 56: /* BlockItem: Decl  */
#line 623 "yacc.y"
    {
        // cout << "BlockItem -> Decl" << endl;
        print_out("BlockItem -> Decl");
        p = new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2092 "yacc.tab.c"
    break;

  case 57: /* BlockItem: Stmt  */
#line 631 "yacc.y"
    {
        // cout << "BlockItem -> Stmt" << endl;
        print_out("BlockItem -> Stmt");
        p = new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2104 "yacc.tab.c"
    break;

  case 58: /* Stmt: LVal T_DEFINE Exp T_DELIMITER  */
#line 641 "yacc.y"
    {
        // cout << "Stmt -> LVal T_DEFINE Exp T_DELIMITER" << endl;
        print_out("Stmt -> LVal T_DEFINE Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2119 "yacc.tab.c"
    break;

  case 59: /* Stmt: T_DELIMITER  */
#line 652 "yacc.y"
    {
        // cout << "Stmt -> T_DELIMITER" << endl;
        print_out("Stmt -> T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2131 "yacc.tab.c"
    break;

  case 60: /* Stmt: Exp T_DELIMITER  */
#line 660 "yacc.y"
    {
        // cout << "Stmt -> Exp T_DELIMITER" << endl;
        print_out("Stmt -> Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2144 "yacc.tab.c"
    break;

  case 61: /* Stmt: Block  */
#line 669 "yacc.y"
    {
        // cout << "Stmt -> Block" << endl;
        print_out("Stmt -> Block");
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2156 "yacc.tab.c"
    break;

  case 62: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 677 "yacc.y"
    {
        // cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt" << endl;
        print_out("Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2172 "yacc.tab.c"
    break;

  case 63: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt T_ELSE Stmt  */
#line 689 "yacc.y"
    {
        // cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt1 T_ELSE Stmt" << endl;
        print_out("Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt1 T_ELSE Stmt");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-6].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-5].y_id)));
        p->childNodes.push_back((yyvsp[-4].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        (yyval.y_node) = p;
    }
#line 2189 "yacc.tab.c"
    break;

  case 64: /* Stmt: T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 702 "yacc.y"
    {
        cout << "Stmt -> T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt" << endl;
        print_out("Stmt -> T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2205 "yacc.tab.c"
    break;

  case 65: /* Stmt: T_BREAK T_DELIMITER  */
#line 714 "yacc.y"
    {
        // cout << "Stmt -> T_BREAK T_DELIMITER" << endl;
        print_out("Stmt -> T_BREAK T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2218 "yacc.tab.c"
    break;

  case 66: /* Stmt: T_CONTINUE T_DELIMITER  */
#line 723 "yacc.y"
    {
        // cout << "Stmt -> T_CONTINUE T_DELIMITER" << endl;
        print_out("Stmt -> T_CONTINUE T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2231 "yacc.tab.c"
    break;

  case 67: /* Stmt: T_RETURN T_DELIMITER  */
#line 732 "yacc.y"
    {
        // cout << "Stmt -> T_RETURN T_DELIMITER" << endl;
        print_out("Stmt -> T_RETURN T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2244 "yacc.tab.c"
    break;

  case 68: /* Stmt: T_RETURN Exp T_DELIMITER  */
#line 741 "yacc.y"
    {
        // cout << "Stmt -> T_RETURN Exp T_DELIMITER" << endl;
        print_out("Stmt -> T_RETURN Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2258 "yacc.tab.c"
    break;

  case 69: /* Exp: AddExp  */
#line 753 "yacc.y"
    {
        // cout << "Exp -> AddExp" << endl;
        print_out("Exp -> AddExp");
        p = new TreeNode("Exp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2270 "yacc.tab.c"
    break;

  case 70: /* Cond: LOrExp  */
#line 763 "yacc.y"
    {
        // cout << "Cond -> LOrExp" << endl;
        print_out("Cond -> LOrExp");
        p = new TreeNode("Cond");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2282 "yacc.tab.c"
    break;

  case 71: /* LVal: T_IDENT  */
#line 773 "yacc.y"
    {
        // cout << "LVal -> T_IDENT" << endl;
        print_out("LVal -> T_IDENT");
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2294 "yacc.tab.c"
    break;

  case 72: /* LVal: T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat  */
#line 781 "yacc.y"
    {
        // cout << "LVal -> T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat" << endl;
        print_out("LVal -> T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat");
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-4].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2310 "yacc.tab.c"
    break;

  case 73: /* LValRepeat: %empty  */
#line 794 "yacc.y"
    {
        // cout << "LValRepeat -> empty" << endl;
        print_out("LValRepeat -> empty");
        p = new TreeNode("LValRepeat");
        (yyval.y_node) = p;
    }
#line 2321 "yacc.tab.c"
    break;

  case 74: /* LValRepeat: T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat  */
#line 801 "yacc.y"
    {
        // cout << "LValRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat" << endl;
        print_out("LValRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat");
        p = new TreeNode("LValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2336 "yacc.tab.c"
    break;

  case 75: /* PrimaryExp: T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS  */
#line 814 "yacc.y"
    {
        // cout << "PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS" << endl;
        print_out("PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2350 "yacc.tab.c"
    break;

  case 76: /* PrimaryExp: LVal  */
#line 824 "yacc.y"
    {
        // cout << "PrimaryExp -> LVal" << endl;
        print_out("PrimaryExp -> LVal");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2362 "yacc.tab.c"
    break;

  case 77: /* PrimaryExp: Number  */
#line 832 "yacc.y"
    {
        // cout << "PrimaryExp -> Number" << endl;
        print_out("PrimaryExp -> Number");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2374 "yacc.tab.c"
    break;

  case 78: /* Number: T_INTEGER_CONST  */
#line 842 "yacc.y"
    {
        // cout << "Number -> T_INTEGER_CONST "<< endl;
        print_out("Number -> T_INTEGER_CONST ");
        p = new TreeNode("Number");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_int)));
        (yyval.y_node) = p;
    }
#line 2386 "yacc.tab.c"
    break;

  case 79: /* UnaryExp: PrimaryExp  */
#line 852 "yacc.y"
    {
        // cout << "UnaryExp -> PrimaryExp" << endl;
        print_out("UnaryExp -> PrimaryExp");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2398 "yacc.tab.c"
    break;

  case 80: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS  */
#line 860 "yacc.y"
    {
        // cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS" << endl;
        print_out("UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2412 "yacc.tab.c"
    break;

  case 81: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS  */
#line 870 "yacc.y"
    {
        // cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS" << endl;
        print_out("UnaryExp -> T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-3].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2427 "yacc.tab.c"
    break;

  case 82: /* UnaryExp: UnaryOp UnaryExp  */
#line 881 "yacc.y"
    {
        // cout << "UnaryExp -> UnaryOp UnaryExp" << endl;
        print_out("UnaryExp -> UnaryOp UnaryExp");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2440 "yacc.tab.c"
    break;

  case 83: /* UnaryOp: T_ADD  */
#line 892 "yacc.y"
    {
        // cout << "UnaryOp -> T_ADD" << endl;
        print_out("UnaryOp -> T_ADD");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2452 "yacc.tab.c"
    break;

  case 84: /* UnaryOp: T_SUB  */
#line 900 "yacc.y"
    {
        // cout << "UnaryOp -> T_SUB" << endl;
        print_out("UnaryOp -> T_SUB");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2464 "yacc.tab.c"
    break;

  case 85: /* UnaryOp: T_NOT  */
#line 908 "yacc.y"
    {
        // cout << "UnaryOp -> T_NOT" << endl;
        print_out("UnaryOp -> T_NOT");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2476 "yacc.tab.c"
    break;

  case 86: /* FuncRParams: Exp  */
#line 918 "yacc.y"
    {
        // cout << "FuncRParams -> Exp";
        print_out("FuncRParams -> Exp");
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2488 "yacc.tab.c"
    break;

  case 87: /* FuncRParams: Exp T_COMMA Exp FuncRParamsRepeat  */
#line 926 "yacc.y"
    {
        // cout << "FuncRParams -> T_COMMA Exp FuncRParamsRepeat" << endl;
        print_out("FuncRParams -> T_COMMA Exp FuncRParamsRepeat");
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back((yyvsp[-3].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2503 "yacc.tab.c"
    break;

  case 88: /* FuncRParamsRepeat: %empty  */
#line 938 "yacc.y"
    {
        // cout << "FuncRParamsRepeat -> " << endl;
        print_out("FuncRParamsRepeat -> ");
        p = new TreeNode("FuncRParamsRepeat");
        (yyval.y_node) = p;
    }
#line 2514 "yacc.tab.c"
    break;

  case 89: /* FuncRParamsRepeat: T_COMMA Exp FuncRParamsRepeat  */
#line 945 "yacc.y"
    {
        // cout << "FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat" << endl;
        print_out("FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat");
        p = new TreeNode("FuncRParamsRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2528 "yacc.tab.c"
    break;

  case 90: /* MulExp: UnaryExp  */
#line 957 "yacc.y"
    {
        // cout << "MulExp -> UnaryExp" << endl;
        print_out("MulExp -> UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2540 "yacc.tab.c"
    break;

  case 91: /* MulExp: MulExp T_MUL UnaryExp  */
#line 965 "yacc.y"
    {
        // cout << "MulExp -> MulExp T_MUL UnaryExp" << endl;
        print_out("MulExp -> MulExp T_MUL UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2554 "yacc.tab.c"
    break;

  case 92: /* MulExp: MulExp T_DIV UnaryExp  */
#line 975 "yacc.y"
    {
        // cout << "MulExp -> MulExp T_DIV UnaryExp" << endl;
        print_out("MulExp -> MulExp T_DIV UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2568 "yacc.tab.c"
    break;

  case 93: /* MulExp: MulExp T_MOD UnaryExp  */
#line 985 "yacc.y"
    {
        // cout << "MulExp -> MulExp T_MOD UnaryExp" << endl;
        print_out("MulExp -> MulExp T_MOD UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2582 "yacc.tab.c"
    break;

  case 94: /* AddExp: MulExp  */
#line 997 "yacc.y"
    {
        // cout << "AddExp -> MulExp" << endl;
        print_out("AddExp -> MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2594 "yacc.tab.c"
    break;

  case 95: /* AddExp: AddExp T_ADD MulExp  */
#line 1005 "yacc.y"
    {
        // cout << "AddExp -> AddExp T_ADD MulExp" << endl;
        print_out("AddExp -> AddExp T_ADD MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2608 "yacc.tab.c"
    break;

  case 96: /* AddExp: AddExp T_SUB MulExp  */
#line 1015 "yacc.y"
    {
        // cout << "AddExp -> AddExp T_SUB MulExp" << endl;
        print_out("AddExp -> AddExp T_SUB MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2622 "yacc.tab.c"
    break;

  case 97: /* RelExp: AddExp  */
#line 1027 "yacc.y"
    {
        // cout << "RelExp -> AddExp" << endl;
        print_out("RelExp -> AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2634 "yacc.tab.c"
    break;

  case 98: /* RelExp: RelExp T_LESS AddExp  */
#line 1035 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LESS AddExp" << endl; 
        print_out("RelExp -> RelExp T_LESS AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;  
    }
#line 2648 "yacc.tab.c"
    break;

  case 99: /* RelExp: RelExp T_LARGE AddExp  */
#line 1045 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LARGE AddExp" << endl;
        print_out("RelExp -> RelExp T_LARGE AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2662 "yacc.tab.c"
    break;

  case 100: /* RelExp: RelExp T_LESS_EQUAL AddExp  */
#line 1055 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LESS_EQUAL AddExp" << endl;
        print_out("RelExp -> RelExp T_LESS_EQUAL AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2676 "yacc.tab.c"
    break;

  case 101: /* RelExp: RelExp T_LARGE_EQUAL AddExp  */
#line 1065 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LARGE_EQUAL AddExp" << endl;
        print_out("RelExp -> RelExp T_LARGE_EQUAL AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2690 "yacc.tab.c"
    break;

  case 102: /* EqExp: RelExp  */
#line 1077 "yacc.y"
    {
        // cout << "EqExp -> RelExp" << endl;
        print_out("EqExp -> RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2702 "yacc.tab.c"
    break;

  case 103: /* EqExp: EqExp T_EQUAL RelExp  */
#line 1085 "yacc.y"
    {
        // cout << "EqExp -> EqExp T_EQUAL RelExp" << endl;
        print_out("EqExp -> EqExp T_EQUAL RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2716 "yacc.tab.c"
    break;

  case 104: /* EqExp: EqExp T_NOT_EQUAL RelExp  */
#line 1095 "yacc.y"
    {
        // cout << "EqExp -> EqExp T_NOT_EQUAL RelExp" << endl;
        print_out("EqExp -> EqExp T_NOT_EQUAL RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2730 "yacc.tab.c"
    break;

  case 105: /* LAndExp: EqExp  */
#line 1107 "yacc.y"
    {
        // cout << "LAndExp -> EqExp" << endl;
        print_out("LAndExp -> EqExp");
        p = new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2742 "yacc.tab.c"
    break;

  case 106: /* LAndExp: LAndExp T_AND EqExp  */
#line 1115 "yacc.y"
    {
        // cout << "LAndExp -> LAndExp T_AND EqExp" << endl;
        print_out("LAndExp -> LAndExp T_AND EqExp");
        p = new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2756 "yacc.tab.c"
    break;

  case 107: /* LOrExp: LAndExp  */
#line 1127 "yacc.y"
    {
        // cout << "LOrExp -> LAndExp" << endl;
        print_out("LOrExp -> LAndExp");
        p = new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2768 "yacc.tab.c"
    break;

  case 108: /* LOrExp: LOrExp T_OR LAndExp  */
#line 1135 "yacc.y"
    {
        // cout << "LOrExp -> LOrExp T_OR LAndExp" << endl;
        print_out("LOrExp -> LOrExp T_OR LAndExp");
        p = new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2782 "yacc.tab.c"
    break;

  case 109: /* ConstExp: AddExp  */
#line 1147 "yacc.y"
    {
        // cout << "ConstExp -> AddExp" << endl;
        print_out("ConstExp -> AddExp");
        p = new TreeNode("ConstExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2794 "yacc.tab.c"
    break;


#line 2798 "yacc.tab.c"

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

#line 1155 "yacc.y"
  

void yyerror(const char *s) //当yacc遇到语法错误时，会回调yyerror函数，并且把错误信息放在参数s中  
{  
    cerr<<s<<endl;//直接输出错误信息
    /* cerr<<"line: "<<yylex.row<<" col: "<<yylex.col<<" \""<<yylex.y_id<<"\""<<endl;   */
}  

int main(int argc, char** argv)//程序主函数，这个函数也可以放到其它.c, .cpp文件里  
{  
    /* const char* sFile="file.txt";//打开要读取的文本文件   */

    string inFilePath = "file.txt";
    string outFilePath = "file.out";
    string outDotPath = "file.dot";

    if(argc > 1){
        if(argc == 4){
            inFilePath = argv[1];
            outFilePath = argv[2];
            outDotPath = argv[3];
        }else{
            cout<<"Usage: ./main <inFilePath> <outFilePath> <outDotPath>"<<endl;
            exit(0);
        }
    }

    /* extern FILE *yyin, *yyout;  //yyin和yyout都是FILE*类型   */
    yyin=fopen(inFilePath.c_str(), "r");  
    if(yyin==NULL)  
    {  
        cerr<<"cant't open file "<<inFilePath<<endl;
        exit(0);
    }  

    yyout=fopen(outFilePath.c_str(), "w");  
    if(yyout==NULL)  
    {  
        cerr<<"cant't open file "<<outFilePath<<endl;
        exit(0);
    }  
    yyparse();//使yacc开始读取输入和解析，它会调用lex的yylex()读取记号  
   
    fclose(yyin);
    fclose(yyout);

    /* cout<<"[DEBUG] 先序遍历树"<<endl;
    tree.print_tree(); */
    
    if(tree.rootNode){
        DotDrawer drawer;
        drawer.genarateDot(tree);
        drawer.writeToFile(outDotPath);
        cout<<"Done~"<<endl;
    }

    return 0;  

}  

