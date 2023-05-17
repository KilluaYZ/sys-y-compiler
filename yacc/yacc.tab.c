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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_NULL = 258,                  /* T_NULL  */
    T_INT = 259,                   /* T_INT  */
    T_VOID = 260,                  /* T_VOID  */
    T_CONST = 261,                 /* T_CONST  */
    T_WHILE = 262,                 /* T_WHILE  */
    T_BREAK = 263,                 /* T_BREAK  */
    T_CONTINUE = 264,              /* T_CONTINUE  */
    T_DO = 265,                    /* T_DO  */
    T_RETURN = 266,                /* T_RETURN  */
    T_IF = 267,                    /* T_IF  */
    T_FOR = 268,                   /* T_FOR  */
    T_VAR = 269,                   /* T_VAR  */
    T_LEFT_PARENTHESIS = 270,      /* T_LEFT_PARENTHESIS  */
    T_LEFT_BRACKET = 271,          /* T_LEFT_BRACKET  */
    T_RIGHT_BRACKET = 272,         /* T_RIGHT_BRACKET  */
    T_LEFT_BRACE = 273,            /* T_LEFT_BRACE  */
    T_RIGHT_BRACE = 274,           /* T_RIGHT_BRACE  */
    T_DEFINE = 275,                /* T_DEFINE  */
    T_NOT = 276,                   /* T_NOT  */
    T_BOOL_TRUE = 277,             /* T_BOOL_TRUE  */
    T_BOOL_FALSE = 278,            /* T_BOOL_FALSE  */
    T_DELIMITER = 279,             /* T_DELIMITER  */
    T_NEWLINE = 280,               /* T_NEWLINE  */
    T_ERRORCHAR = 281,             /* T_ERRORCHAR  */
    T_IDENT = 282,                 /* T_IDENT  */
    T_COMMA = 283,                 /* T_COMMA  */
    T_INTEGER_CONST = 284,         /* T_INTEGER_CONST  */
    T_HEX_CONST = 285,             /* T_HEX_CONST  */
    T_DEC_CONST = 286,             /* T_DEC_CONST  */
    T_OCT_CONST = 287,             /* T_OCT_CONST  */
    T_RIGHT_PARENTHESIS = 288,     /* T_RIGHT_PARENTHESIS  */
    T_ELSE = 289,                  /* T_ELSE  */
    T_ADD = 290,                   /* T_ADD  */
    T_SUB = 291,                   /* T_SUB  */
    T_MUL = 292,                   /* T_MUL  */
    T_DIV = 293,                   /* T_DIV  */
    T_MOD = 294,                   /* T_MOD  */
    T_EQUAL = 295,                 /* T_EQUAL  */
    T_NOT_EQUAL = 296,             /* T_NOT_EQUAL  */
    T_LARGE = 297,                 /* T_LARGE  */
    T_LESS = 298,                  /* T_LESS  */
    T_LARGE_EQUAL = 299,           /* T_LARGE_EQUAL  */
    T_LESS_EQUAL = 300,            /* T_LESS_EQUAL  */
    T_OR = 301,                    /* T_OR  */
    T_AND = 302                    /* T_AND  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_T_VAR = 14,                     /* T_VAR  */
  YYSYMBOL_T_LEFT_PARENTHESIS = 15,        /* T_LEFT_PARENTHESIS  */
  YYSYMBOL_T_LEFT_BRACKET = 16,            /* T_LEFT_BRACKET  */
  YYSYMBOL_T_RIGHT_BRACKET = 17,           /* T_RIGHT_BRACKET  */
  YYSYMBOL_T_LEFT_BRACE = 18,              /* T_LEFT_BRACE  */
  YYSYMBOL_T_RIGHT_BRACE = 19,             /* T_RIGHT_BRACE  */
  YYSYMBOL_T_DEFINE = 20,                  /* T_DEFINE  */
  YYSYMBOL_T_NOT = 21,                     /* T_NOT  */
  YYSYMBOL_T_BOOL_TRUE = 22,               /* T_BOOL_TRUE  */
  YYSYMBOL_T_BOOL_FALSE = 23,              /* T_BOOL_FALSE  */
  YYSYMBOL_T_DELIMITER = 24,               /* T_DELIMITER  */
  YYSYMBOL_T_NEWLINE = 25,                 /* T_NEWLINE  */
  YYSYMBOL_T_ERRORCHAR = 26,               /* T_ERRORCHAR  */
  YYSYMBOL_T_IDENT = 27,                   /* T_IDENT  */
  YYSYMBOL_T_COMMA = 28,                   /* T_COMMA  */
  YYSYMBOL_T_INTEGER_CONST = 29,           /* T_INTEGER_CONST  */
  YYSYMBOL_T_HEX_CONST = 30,               /* T_HEX_CONST  */
  YYSYMBOL_T_DEC_CONST = 31,               /* T_DEC_CONST  */
  YYSYMBOL_T_OCT_CONST = 32,               /* T_OCT_CONST  */
  YYSYMBOL_T_RIGHT_PARENTHESIS = 33,       /* T_RIGHT_PARENTHESIS  */
  YYSYMBOL_T_ELSE = 34,                    /* T_ELSE  */
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
#define YYLAST   304

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
       0,    63,    63,    69,    79,    87,    95,   105,   118,   131,
     144,   159,   167,   176,   187,   203,   209,   221,   231,   247,
     253,   266,   274,   283,   293,   307,   313,   326,   336,   351,
     357,   369,   377,   387,   399,   415,   421,   434,   442,   452,
     464,   475,   481,   493,   501,   514,   520,   532,   543,   556,
     567,   573,   586,   595,   608,   614,   625,   633,   643,   654,
     662,   671,   679,   691,   705,   717,   726,   735,   744,   756,
     766,   776,   784,   798,   804,   817,   827,   835,   845,   855,
     863,   873,   884,   895,   903,   911,   921,   929,   942,   948,
     960,   968,   978,   988,  1000,  1008,  1018,  1030,  1038,  1048,
    1058,  1068,  1080,  1088,  1098,  1110,  1118,  1130,  1138,  1150
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
  "T_RETURN", "T_IF", "T_FOR", "T_VAR", "T_LEFT_PARENTHESIS",
  "T_LEFT_BRACKET", "T_RIGHT_BRACKET", "T_LEFT_BRACE", "T_RIGHT_BRACE",
  "T_DEFINE", "T_NOT", "T_BOOL_TRUE", "T_BOOL_FALSE", "T_DELIMITER",
  "T_NEWLINE", "T_ERRORCHAR", "T_IDENT", "T_COMMA", "T_INTEGER_CONST",
  "T_HEX_CONST", "T_DEC_CONST", "T_OCT_CONST", "T_RIGHT_PARENTHESIS",
  "T_ELSE", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", "T_EQUAL",
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
      26,    18,    20,    36,    62,    26,  -167,  -167,  -167,  -167,
       1,    -9,    50,    40,  -167,  -167,  -167,     5,   268,   232,
    -167,    49,     8,     6,    -1,    66,    53,    63,    67,   268,
    -167,    59,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   268,
      12,    47,    83,    51,  -167,  -167,    47,     9,    81,    53,
      82,   268,   251,  -167,    40,   110,   165,  -167,    53,   124,
      98,   255,   268,  -167,   268,   268,   268,   268,   268,   119,
    -167,   232,   118,    49,   114,  -167,    53,   122,   115,  -167,
    -167,   112,    89,    49,   126,   123,   125,    84,   131,  -167,
    -167,  -167,  -167,   198,  -167,   128,   133,  -167,   120,  -167,
    -167,   129,   142,   141,  -167,  -167,  -167,    12,    12,   268,
     139,   150,  -167,    81,  -167,  -167,   163,  -167,   251,   162,
      40,   158,  -167,   168,   268,  -167,  -167,  -167,   164,   268,
     171,   198,  -167,   268,   124,  -167,   268,  -167,   175,   170,
     232,   232,   174,  -167,   268,   176,   167,  -167,   112,  -167,
     181,   166,    47,    14,    44,   151,   157,  -167,   178,  -167,
    -167,   184,   120,   186,   268,  -167,   119,  -167,   150,  -167,
     195,   251,   251,   196,  -167,   268,  -167,   228,   268,   268,
     268,   268,   268,   268,   268,   268,   228,  -167,  -167,   268,
    -167,   200,  -167,  -167,   163,  -167,   167,  -167,   201,  -167,
      47,    47,    47,    47,    14,    14,    44,   151,   187,   186,
     175,  -167,  -167,   181,   228,  -167,  -167,  -167,  -167
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
    -167,  -167,  -167,   215,    13,  -167,    75,   -47,    30,   -74,
      32,  -167,   113,   -13,    64,   -38,    61,   209,    70,   -53,
      25,   -12,   111,   185,  -166,   -19,   116,   -54,    34,  -167,
    -167,   -11,  -167,  -167,    39,    21,   -17,   -92,    72,    69,
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
      60,   199,    25,     7,    57,    20,    17,    18,    16,    21,
     208,    19,    51,    53,    45,    18,    52,    54,    63,    19,
       1,     2,     3,   111,    41,    41,    77,    75,    26,    96,
      13,    49,   101,   103,   146,    10,    97,    12,   218,    64,
      65,    66,    45,   104,   105,   106,   178,   179,   180,   181,
     113,    41,    14,   123,   115,    22,    29,    23,   128,    43,
      70,    56,    30,   148,    61,    62,    47,    96,    31,    71,
      32,   162,    67,    68,   182,   183,    33,    34,   107,   108,
     204,   205,    41,    55,   139,    59,    58,   195,   196,    29,
      69,    41,   167,   168,    29,    30,   122,   152,   127,    73,
      30,    31,   152,    32,   161,    76,    31,   163,    32,    33,
      34,    45,    45,    96,    33,    34,    82,    41,    25,   170,
      29,    99,    96,    78,   117,   109,    30,   112,   114,   116,
     120,   124,    31,   118,    32,   191,   129,   125,   134,   126,
      33,    34,   132,   133,    41,    41,   198,   136,   138,   140,
      96,   200,   201,   202,   203,   152,   152,   152,   152,    83,
     209,     3,    84,    85,    86,   137,    87,    88,   141,   144,
      29,   147,   149,    56,    89,   150,    30,   166,   157,    90,
     159,   164,    31,   169,    32,   172,   171,   175,   184,   177,
      33,    34,    83,   185,     3,    84,    85,    86,   187,    87,
      88,   186,   194,    29,   189,   197,    56,   210,   213,    30,
      15,   214,    90,   174,   211,    31,   143,    32,   212,   193,
     192,    50,   188,    33,    34,    84,    85,    86,   217,    87,
      88,    93,   160,    29,   216,   158,    56,    29,   215,    30,
      43,     0,    90,    30,   207,    31,   206,    32,     0,    31,
       0,    32,     0,    33,    34,     0,    29,    33,    34,    78,
      29,     0,    30,     0,     0,     0,    30,     0,    31,     0,
      32,     0,    31,    29,    32,     0,    33,    34,   100,    30,
      33,    34,     0,     0,     0,    31,     0,    32,     0,     0,
       0,     0,     0,    33,    34
};

static const yytype_int16 yycheck[] =
{
      19,    18,    56,    18,    78,    43,    59,    54,    21,     4,
      29,   177,     4,     0,    26,    24,    15,    16,     5,    28,
     186,    20,    16,    24,    43,    16,    20,    28,    39,    20,
       4,     5,     6,    71,    51,    52,    51,    49,    33,    93,
       4,    33,    61,    62,   118,    27,    58,    27,   214,    37,
      38,    39,    71,    64,    65,    66,    42,    43,    44,    45,
      73,    78,     0,    82,    76,    15,    15,    27,    87,    18,
      19,    18,    21,   120,    15,    16,    27,   131,    27,    28,
      29,   134,    35,    36,    40,    41,    35,    36,    67,    68,
     182,   183,   109,    27,   109,    28,    33,   171,   172,    15,
      17,   118,   140,   141,    15,    21,    17,   124,    24,    28,
      21,    27,   129,    29,   133,    33,    27,   136,    29,    35,
      36,   140,   141,   177,    35,    36,    16,   144,     4,   144,
      15,    33,   186,    18,    19,    16,    21,    19,    24,    17,
      28,    15,    27,    28,    29,   164,    15,    24,    28,    24,
      35,    36,    24,    20,   171,   172,   175,    28,    17,    20,
     214,   178,   179,   180,   181,   182,   183,   184,   185,     4,
     189,     6,     7,     8,     9,    33,    11,    12,    28,    16,
      15,    19,    24,    18,    19,    17,    21,    17,    24,    24,
      19,    16,    27,    19,    29,    28,    20,    16,    47,    33,
      35,    36,     4,    46,     6,     7,     8,     9,    24,    11,
      12,    33,    17,    15,    28,    19,    18,    17,    17,    21,
       5,    34,    24,   148,   194,    27,   113,    29,   196,   168,
     166,    22,   162,    35,    36,     7,     8,     9,   213,    11,
      12,    56,   131,    15,   210,   129,    18,    15,   209,    21,
      18,    -1,    24,    21,   185,    27,   184,    29,    -1,    27,
      -1,    29,    -1,    35,    36,    -1,    15,    35,    36,    18,
      15,    -1,    21,    -1,    -1,    -1,    21,    -1,    27,    -1,
      29,    -1,    27,    15,    29,    -1,    35,    36,    33,    21,
      35,    36,    -1,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    49,    50,    51,    52,    53,    59,
      27,    61,    27,     4,     0,    51,    52,    15,    16,    20,
      24,    28,    15,    27,    55,     4,    33,    65,    67,    15,
      21,    27,    29,    35,    36,    75,    77,    78,    79,    80,
      83,    84,    89,    18,    63,    73,    84,    27,    61,    33,
      65,    16,    20,    24,    28,    27,    18,    69,    33,    28,
      73,    15,    16,    79,    37,    38,    39,    35,    36,    17,
      19,    28,    63,    28,    60,    69,    33,    89,    18,    57,
      89,    55,    16,     4,     7,     8,     9,    11,    12,    19,
      24,    52,    69,    71,    72,    73,    75,    69,    67,    33,
      33,    73,    81,    73,    79,    79,    79,    83,    83,    16,
      62,    63,    19,    61,    24,    69,    17,    19,    28,    57,
      28,    54,    17,    73,    15,    24,    24,    24,    73,    15,
      70,    71,    24,    20,    28,    66,    28,    33,    17,    89,
      20,    28,    64,    60,    16,    56,    57,    19,    55,    24,
      17,    74,    84,    85,    86,    87,    88,    24,    74,    19,
      70,    73,    67,    73,    16,    76,    17,    63,    63,    19,
      89,    20,    28,    58,    54,    16,    68,    33,    42,    43,
      44,    45,    40,    41,    47,    46,    33,    24,    66,    28,
      82,    73,    62,    64,    17,    57,    57,    19,    73,    72,
      84,    84,    84,    84,    85,    85,    86,    87,    72,    73,
      17,    56,    58,    17,    34,    82,    76,    68,    72
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
#line 64 "yacc.y"
    {
        tree.rootNode = (yyvsp[0].y_node);
    }
#line 1425 "yacc.tab.c"
    break;

  case 3: /* CompUnit: CompUnit FuncDef  */
#line 70 "yacc.y"
    {
        // cout << "CompUnit -> CompUnit FuncDef"<< endl;
        print_out("CompUnit -> CompUnit FuncDef");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
        tree.rootNode = p;
    }
#line 1439 "yacc.tab.c"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 80 "yacc.y"
    {
        print_out("CompUnit -> CompUnit Decl");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1451 "yacc.tab.c"
    break;

  case 5: /* CompUnit: FuncDef  */
#line 88 "yacc.y"
    {
        // cout << "CompUnit -> FuncDef" << endl;
        print_out("CompUnit -> FuncDef");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1463 "yacc.tab.c"
    break;

  case 6: /* CompUnit: Decl  */
#line 96 "yacc.y"
    {
        // cout << "CompUnit -> Decl" << endl;
        print_out("CompUnit -> Decl");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1475 "yacc.tab.c"
    break;

  case 7: /* FuncDef: T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block  */
#line 106 "yacc.y"
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
#line 1492 "yacc.tab.c"
    break;

  case 8: /* FuncDef: T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block  */
#line 119 "yacc.y"
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
#line 1509 "yacc.tab.c"
    break;

  case 9: /* FuncDef: T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block  */
#line 132 "yacc.y"
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
#line 1526 "yacc.tab.c"
    break;

  case 10: /* FuncDef: T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block  */
#line 145 "yacc.y"
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
#line 1543 "yacc.tab.c"
    break;

  case 11: /* Decl: constDecl  */
#line 160 "yacc.y"
    {
        // cout << "Decl -> constDecl" << endl;
        print_out("Decl -> constDecl");
        p = new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1555 "yacc.tab.c"
    break;

  case 12: /* Decl: VarDecl  */
#line 168 "yacc.y"
    {
        // cout << "Decl -> VarDecl" << endl;
        print_out("Decl -> VarDecl");
        p = new TreeNode("Decl");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1567 "yacc.tab.c"
    break;

  case 13: /* constDecl: T_CONST T_INT ConstDef T_DELIMITER  */
#line 177 "yacc.y"
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
#line 1582 "yacc.tab.c"
    break;

  case 14: /* constDecl: T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER  */
#line 188 "yacc.y"
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
#line 1600 "yacc.tab.c"
    break;

  case 15: /* constDeclRepeat: %empty  */
#line 203 "yacc.y"
    {
        // cout << "constDeclRepeat -> " << endl;
        print_out("constDeclRepeat -> ");
        p = new TreeNode("constDeclRepeat");
        (yyval.y_node) = p;
    }
#line 1611 "yacc.tab.c"
    break;

  case 16: /* constDeclRepeat: T_COMMA ConstDef constDeclRepeat  */
#line 210 "yacc.y"
    {
        // cout << "constDeclRepeat -> T_COMMA ConstDef constDeclRepeat" << endl;
        print_out("constDeclRepeat -> T_COMMA ConstDef constDeclRepeat");
        p = new TreeNode("constDeclRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1625 "yacc.tab.c"
    break;

  case 17: /* ConstDef: T_IDENT T_DEFINE ConstInitVal  */
#line 222 "yacc.y"
    {
        // cout << "ConstDef -> T_IDENT T_DEFINE ConstInitVal" << endl;
        print_out("ConstDef -> T_IDENT T_DEFINE ConstInitVal");
        p = new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1639 "yacc.tab.c"
    break;

  case 18: /* ConstDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal  */
#line 232 "yacc.y"
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
#line 1657 "yacc.tab.c"
    break;

  case 19: /* ConstDefRepeat: %empty  */
#line 247 "yacc.y"
    {
        // cout << "ConstDefRepeat -> " << endl;
        print_out("ConstDefRepeat -> ");
        p = new TreeNode("ConstDefRepeat");
        (yyval.y_node) = p;
    }
#line 1668 "yacc.tab.c"
    break;

  case 20: /* ConstDefRepeat: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat  */
#line 254 "yacc.y"
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
#line 1683 "yacc.tab.c"
    break;

  case 21: /* ConstInitVal: ConstExp  */
#line 267 "yacc.y"
    {
        // cout << "ConstInitVal -> ConstExp" << endl;
        print_out("ConstInitVal -> ConstExp");
        p = new TreeNode("ConstInitVal");
         p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1695 "yacc.tab.c"
    break;

  case 22: /* ConstInitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 275 "yacc.y"
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1708 "yacc.tab.c"
    break;

  case 23: /* ConstInitVal: T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE  */
#line 284 "yacc.y"
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1722 "yacc.tab.c"
    break;

  case 24: /* ConstInitVal: T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE  */
#line 294 "yacc.y"
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
#line 1738 "yacc.tab.c"
    break;

  case 25: /* ConstInitValRepeat: %empty  */
#line 307 "yacc.y"
    {
        // cout << "ConstInitValRepeat -> empty" << endl;
        print_out("ConstInitValRepeat -> empty");
        p = new TreeNode("ConstInitValRepeat");
        (yyval.y_node) = p;
    }
#line 1749 "yacc.tab.c"
    break;

  case 26: /* ConstInitValRepeat: T_COMMA ConstInitVal ConstInitValRepeat  */
#line 314 "yacc.y"
    {
        // cout << "ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat" << endl;
        print_out("ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat");
        p = new TreeNode("ConstInitValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1763 "yacc.tab.c"
    break;

  case 27: /* VarDecl: T_INT VarDef T_DELIMITER  */
#line 327 "yacc.y"
    {
        // cout << "VarDecl -> T_INT VarDef T_DELIMITER" << endl;
        print_out("VarDecl -> T_INT VarDef T_DELIMITER");
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1777 "yacc.tab.c"
    break;

  case 28: /* VarDecl: T_INT VarDef T_COMMA VarDef VarDeclRepeat T_DELIMITER  */
#line 337 "yacc.y"
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
#line 1794 "yacc.tab.c"
    break;

  case 29: /* VarDeclRepeat: %empty  */
#line 351 "yacc.y"
    {      
        // cout << "VarDeclRepeat -> "; 
        print_out("VarDeclRepeat -> ");
        p = new TreeNode("VarDeclRepeat");  
        (yyval.y_node) = p;
    }
#line 1805 "yacc.tab.c"
    break;

  case 30: /* VarDeclRepeat: T_COMMA VarDef VarDeclRepeat  */
#line 358 "yacc.y"
    {
        // cout << "VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat";
        print_out("VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat");
        p = new TreeNode("VarDeclRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1819 "yacc.tab.c"
    break;

  case 31: /* VarDef: T_IDENT  */
#line 370 "yacc.y"
    {
        // cout << "VarDef -> T_IDENT" << endl;
        print_out("VarDef -> T_IDENT");
        p = new TreeNode("VarDef");  
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1831 "yacc.tab.c"
    break;

  case 32: /* VarDef: T_IDENT T_DEFINE InitVal  */
#line 378 "yacc.y"
    {
        // cout << "VarDef -> T_IDENT T_DEFINE InitVal" << endl;
        print_out("VarDef -> T_IDENT T_DEFINE InitVal");
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1845 "yacc.tab.c"
    break;

  case 33: /* VarDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat  */
#line 388 "yacc.y"
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
#line 1861 "yacc.tab.c"
    break;

  case 34: /* VarDef: T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal  */
#line 400 "yacc.y"
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
#line 1879 "yacc.tab.c"
    break;

  case 35: /* VarDefRepeat: %empty  */
#line 415 "yacc.y"
    {
        cout << "VarDefRepeat -> " << endl;
        print_out("VarDefRepeat -> ");
        p = new TreeNode("VarDefRepeat");
        (yyval.y_node) = p;
    }
#line 1890 "yacc.tab.c"
    break;

  case 36: /* VarDefRepeat: T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat  */
#line 422 "yacc.y"
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
#line 1905 "yacc.tab.c"
    break;

  case 37: /* InitVal: Exp  */
#line 435 "yacc.y"
    {
        // cout << "InitVal -> Exp" << endl;
        print_out("InitVal -> Exp");
        p = new TreeNode("InitVal");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1917 "yacc.tab.c"
    break;

  case 38: /* InitVal: T_LEFT_BRACE InitVal T_RIGHT_BRACE  */
#line 443 "yacc.y"
    {
        // cout << "InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl" << endl;
        print_out("InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1931 "yacc.tab.c"
    break;

  case 39: /* InitVal: T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE  */
#line 453 "yacc.y"
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
#line 1947 "yacc.tab.c"
    break;

  case 40: /* InitVal: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 465 "yacc.y"
    {
        // cout << "InitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("InitVal -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 1960 "yacc.tab.c"
    break;

  case 41: /* InitValRepeat: %empty  */
#line 475 "yacc.y"
    {
        // cout << "InitValRepeat -> " << endl;
        print_out("InitValRepeat -> ");
        p = new TreeNode("InitValRepeat");
        (yyval.y_node) = p;
    }
#line 1971 "yacc.tab.c"
    break;

  case 42: /* InitValRepeat: T_COMMA InitVal InitValRepeat  */
#line 482 "yacc.y"
    {
        // cout << "InitValRepeat -> T_COMMA InitVal InitValRepeat" << endl;
        print_out("InitValRepeat -> T_COMMA InitVal InitValRepeat");
        p = new TreeNode("InitValRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1985 "yacc.tab.c"
    break;

  case 43: /* FuncFParams: FuncFParam  */
#line 494 "yacc.y"
    {
        // cout << "FuncFParams -> FuncFParam" << endl;
        print_out("FuncFParams -> FuncFParam");
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 1997 "yacc.tab.c"
    break;

  case 44: /* FuncFParams: FuncFParam T_COMMA FuncFParam FuncFParamsRepeat  */
#line 502 "yacc.y"
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
#line 2012 "yacc.tab.c"
    break;

  case 45: /* FuncFParamsRepeat: %empty  */
#line 514 "yacc.y"
    {
        // cout << "FuncFParamsRepeat -> " << endl;
        print_out("FuncFParamsRepeat -> ");
        p = new TreeNode("FuncFParamsRepeat");
        (yyval.y_node) = p;
    }
#line 2023 "yacc.tab.c"
    break;

  case 46: /* FuncFParamsRepeat: T_COMMA FuncFParam FuncFParamsRepeat  */
#line 521 "yacc.y"
    {
        // cout << "FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        print_out("FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat");
        p = new TreeNode("FuncFParamsRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2037 "yacc.tab.c"
    break;

  case 47: /* FuncFParam: T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET  */
#line 533 "yacc.y"
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
#line 2052 "yacc.tab.c"
    break;

  case 48: /* FuncFParam: T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat  */
#line 544 "yacc.y"
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
#line 2069 "yacc.tab.c"
    break;

  case 49: /* FuncFParam: T_INT T_IDENT  */
#line 557 "yacc.y"
    {
        // cout << "FuncFParam -> T_INT T_IDENT" << endl;
        print_out("FuncFParam -> T_INT T_IDENT");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2082 "yacc.tab.c"
    break;

  case 50: /* FuncFParamRepeat: %empty  */
#line 567 "yacc.y"
    {
        // cout << "FuncFParamRepeat -> " << endl;
        print_out("FuncFParamRepeat -> ");
        p = new TreeNode("FuncFParamRepeat");
        (yyval.y_node) = p;
    }
#line 2093 "yacc.tab.c"
    break;

  case 51: /* FuncFParamRepeat: T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat  */
#line 574 "yacc.y"
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
#line 2108 "yacc.tab.c"
    break;

  case 52: /* Block: T_LEFT_BRACE T_RIGHT_BRACE  */
#line 587 "yacc.y"
    {
        // cout << "Block -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("Block -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2121 "yacc.tab.c"
    break;

  case 53: /* Block: T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE  */
#line 596 "yacc.y"
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
#line 2136 "yacc.tab.c"
    break;

  case 54: /* BlockRepeat: %empty  */
#line 608 "yacc.y"
    {
        // cout << "BlockRepeat -> " << endl;
        print_out("BlockRepeat -> ");
        p = new TreeNode("BlockRepeat");
        (yyval.y_node) = p;
    }
#line 2147 "yacc.tab.c"
    break;

  case 55: /* BlockRepeat: BlockItem BlockRepeat  */
#line 615 "yacc.y"
    {
        // cout << "BlockRepeat -> BlockItem BlockRepeat" << endl;
        print_out("BlockRepeat -> BlockItem BlockRepeat");
        p = new TreeNode("BlockRepeat");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2160 "yacc.tab.c"
    break;

  case 56: /* BlockItem: Decl  */
#line 626 "yacc.y"
    {
        // cout << "BlockItem -> Decl" << endl;
        print_out("BlockItem -> Decl");
        p = new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2172 "yacc.tab.c"
    break;

  case 57: /* BlockItem: Stmt  */
#line 634 "yacc.y"
    {
        // cout << "BlockItem -> Stmt" << endl;
        print_out("BlockItem -> Stmt");
        p = new TreeNode("BlockItem");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2184 "yacc.tab.c"
    break;

  case 58: /* Stmt: LVal T_DEFINE Exp T_DELIMITER  */
#line 644 "yacc.y"
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
#line 2199 "yacc.tab.c"
    break;

  case 59: /* Stmt: T_DELIMITER  */
#line 655 "yacc.y"
    {
        // cout << "Stmt -> T_DELIMITER" << endl;
        print_out("Stmt -> T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2211 "yacc.tab.c"
    break;

  case 60: /* Stmt: Exp T_DELIMITER  */
#line 663 "yacc.y"
    {
        // cout << "Stmt -> Exp T_DELIMITER" << endl;
        print_out("Stmt -> Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2224 "yacc.tab.c"
    break;

  case 61: /* Stmt: Block  */
#line 672 "yacc.y"
    {
        // cout << "Stmt -> Block" << endl;
        print_out("Stmt -> Block");
        p = new TreeNode("Stmt");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2236 "yacc.tab.c"
    break;

  case 62: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 680 "yacc.y"
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
#line 2252 "yacc.tab.c"
    break;

  case 63: /* Stmt: T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt T_ELSE Stmt  */
#line 692 "yacc.y"
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
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2270 "yacc.tab.c"
    break;

  case 64: /* Stmt: T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt  */
#line 706 "yacc.y"
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
#line 2286 "yacc.tab.c"
    break;

  case 65: /* Stmt: T_BREAK T_DELIMITER  */
#line 718 "yacc.y"
    {
        // cout << "Stmt -> T_BREAK T_DELIMITER" << endl;
        print_out("Stmt -> T_BREAK T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2299 "yacc.tab.c"
    break;

  case 66: /* Stmt: T_CONTINUE T_DELIMITER  */
#line 727 "yacc.y"
    {
        // cout << "Stmt -> T_CONTINUE T_DELIMITER" << endl;
        print_out("Stmt -> T_CONTINUE T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2312 "yacc.tab.c"
    break;

  case 67: /* Stmt: T_RETURN T_DELIMITER  */
#line 736 "yacc.y"
    {
        // cout << "Stmt -> T_RETURN T_DELIMITER" << endl;
        print_out("Stmt -> T_RETURN T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2325 "yacc.tab.c"
    break;

  case 68: /* Stmt: T_RETURN Exp T_DELIMITER  */
#line 745 "yacc.y"
    {
        // cout << "Stmt -> T_RETURN Exp T_DELIMITER" << endl;
        print_out("Stmt -> T_RETURN Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2339 "yacc.tab.c"
    break;

  case 69: /* Exp: AddExp  */
#line 757 "yacc.y"
    {
        // cout << "Exp -> AddExp" << endl;
        print_out("Exp -> AddExp");
        p = new TreeNode("Exp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2351 "yacc.tab.c"
    break;

  case 70: /* Cond: LOrExp  */
#line 767 "yacc.y"
    {
        // cout << "Cond -> LOrExp" << endl;
        print_out("Cond -> LOrExp");
        p = new TreeNode("Cond");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2363 "yacc.tab.c"
    break;

  case 71: /* LVal: T_IDENT  */
#line 777 "yacc.y"
    {
        // cout << "LVal -> T_IDENT" << endl;
        print_out("LVal -> T_IDENT");
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2375 "yacc.tab.c"
    break;

  case 72: /* LVal: T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat  */
#line 785 "yacc.y"
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
#line 2391 "yacc.tab.c"
    break;

  case 73: /* LValRepeat: %empty  */
#line 798 "yacc.y"
    {
        // cout << "LValRepeat -> empty" << endl;
        print_out("LValRepeat -> empty");
        p = new TreeNode("LValRepeat");
        (yyval.y_node) = p;
    }
#line 2402 "yacc.tab.c"
    break;

  case 74: /* LValRepeat: T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat  */
#line 805 "yacc.y"
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
#line 2417 "yacc.tab.c"
    break;

  case 75: /* PrimaryExp: T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS  */
#line 818 "yacc.y"
    {
        // cout << "PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS" << endl;
        print_out("PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2431 "yacc.tab.c"
    break;

  case 76: /* PrimaryExp: LVal  */
#line 828 "yacc.y"
    {
        // cout << "PrimaryExp -> LVal" << endl;
        print_out("PrimaryExp -> LVal");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2443 "yacc.tab.c"
    break;

  case 77: /* PrimaryExp: Number  */
#line 836 "yacc.y"
    {
        // cout << "PrimaryExp -> Number" << endl;
        print_out("PrimaryExp -> Number");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2455 "yacc.tab.c"
    break;

  case 78: /* Number: T_INTEGER_CONST  */
#line 846 "yacc.y"
    {
        // cout << "Number -> T_INTEGER_CONST "<< endl;
        print_out("Number -> T_INTEGER_CONST ");
        p = new TreeNode("Number");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_int)));
        (yyval.y_node) = p;
    }
#line 2467 "yacc.tab.c"
    break;

  case 79: /* UnaryExp: PrimaryExp  */
#line 856 "yacc.y"
    {
        // cout << "UnaryExp -> PrimaryExp" << endl;
        print_out("UnaryExp -> PrimaryExp");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2479 "yacc.tab.c"
    break;

  case 80: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS  */
#line 864 "yacc.y"
    {
        // cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS" << endl;
        print_out("UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2493 "yacc.tab.c"
    break;

  case 81: /* UnaryExp: T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS  */
#line 874 "yacc.y"
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
#line 2508 "yacc.tab.c"
    break;

  case 82: /* UnaryExp: UnaryOp UnaryExp  */
#line 885 "yacc.y"
    {
        // cout << "UnaryExp -> UnaryOp UnaryExp" << endl;
        print_out("UnaryExp -> UnaryOp UnaryExp");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2521 "yacc.tab.c"
    break;

  case 83: /* UnaryOp: T_ADD  */
#line 896 "yacc.y"
    {
        // cout << "UnaryOp -> T_ADD" << endl;
        print_out("UnaryOp -> T_ADD");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2533 "yacc.tab.c"
    break;

  case 84: /* UnaryOp: T_SUB  */
#line 904 "yacc.y"
    {
        // cout << "UnaryOp -> T_SUB" << endl;
        print_out("UnaryOp -> T_SUB");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2545 "yacc.tab.c"
    break;

  case 85: /* UnaryOp: T_NOT  */
#line 912 "yacc.y"
    {
        // cout << "UnaryOp -> T_NOT" << endl;
        print_out("UnaryOp -> T_NOT");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode((yyvsp[0].y_id)));
        (yyval.y_node) = p;
    }
#line 2557 "yacc.tab.c"
    break;

  case 86: /* FuncRParams: Exp  */
#line 922 "yacc.y"
    {
        // cout << "FuncRParams -> Exp";
        print_out("FuncRParams -> Exp");
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2569 "yacc.tab.c"
    break;

  case 87: /* FuncRParams: Exp T_COMMA Exp FuncRParamsRepeat  */
#line 930 "yacc.y"
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
#line 2584 "yacc.tab.c"
    break;

  case 88: /* FuncRParamsRepeat: %empty  */
#line 942 "yacc.y"
    {
        // cout << "FuncRParamsRepeat -> " << endl;
        print_out("FuncRParamsRepeat -> ");
        p = new TreeNode("FuncRParamsRepeat");
        (yyval.y_node) = p;
    }
#line 2595 "yacc.tab.c"
    break;

  case 89: /* FuncRParamsRepeat: T_COMMA Exp FuncRParamsRepeat  */
#line 949 "yacc.y"
    {
        // cout << "FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat" << endl;
        print_out("FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat");
        p = new TreeNode("FuncRParamsRepeat");
        p->childNodes.push_back(new TreeNode((yyvsp[-2].y_id)));
        p->childNodes.push_back((yyvsp[-1].y_node));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2609 "yacc.tab.c"
    break;

  case 90: /* MulExp: UnaryExp  */
#line 961 "yacc.y"
    {
        // cout << "MulExp -> UnaryExp" << endl;
        print_out("MulExp -> UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2621 "yacc.tab.c"
    break;

  case 91: /* MulExp: MulExp T_MUL UnaryExp  */
#line 969 "yacc.y"
    {
        // cout << "MulExp -> MulExp T_MUL UnaryExp" << endl;
        print_out("MulExp -> MulExp T_MUL UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2635 "yacc.tab.c"
    break;

  case 92: /* MulExp: MulExp T_DIV UnaryExp  */
#line 979 "yacc.y"
    {
        // cout << "MulExp -> MulExp T_DIV UnaryExp" << endl;
        print_out("MulExp -> MulExp T_DIV UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2649 "yacc.tab.c"
    break;

  case 93: /* MulExp: MulExp T_MOD UnaryExp  */
#line 989 "yacc.y"
    {
        // cout << "MulExp -> MulExp T_MOD UnaryExp" << endl;
        print_out("MulExp -> MulExp T_MOD UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2663 "yacc.tab.c"
    break;

  case 94: /* AddExp: MulExp  */
#line 1001 "yacc.y"
    {
        // cout << "AddExp -> MulExp" << endl;
        print_out("AddExp -> MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2675 "yacc.tab.c"
    break;

  case 95: /* AddExp: AddExp T_ADD MulExp  */
#line 1009 "yacc.y"
    {
        // cout << "AddExp -> AddExp T_ADD MulExp" << endl;
        print_out("AddExp -> AddExp T_ADD MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2689 "yacc.tab.c"
    break;

  case 96: /* AddExp: AddExp T_SUB MulExp  */
#line 1019 "yacc.y"
    {
        // cout << "AddExp -> AddExp T_SUB MulExp" << endl;
        print_out("AddExp -> AddExp T_SUB MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2703 "yacc.tab.c"
    break;

  case 97: /* RelExp: AddExp  */
#line 1031 "yacc.y"
    {
        // cout << "RelExp -> AddExp" << endl;
        print_out("RelExp -> AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2715 "yacc.tab.c"
    break;

  case 98: /* RelExp: RelExp T_LESS AddExp  */
#line 1039 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LESS AddExp" << endl; 
        print_out("RelExp -> RelExp T_LESS AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;  
    }
#line 2729 "yacc.tab.c"
    break;

  case 99: /* RelExp: RelExp T_LARGE AddExp  */
#line 1049 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LARGE AddExp" << endl;
        print_out("RelExp -> RelExp T_LARGE AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2743 "yacc.tab.c"
    break;

  case 100: /* RelExp: RelExp T_LESS_EQUAL AddExp  */
#line 1059 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LESS_EQUAL AddExp" << endl;
        print_out("RelExp -> RelExp T_LESS_EQUAL AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2757 "yacc.tab.c"
    break;

  case 101: /* RelExp: RelExp T_LARGE_EQUAL AddExp  */
#line 1069 "yacc.y"
    {
        // cout << "RelExp -> RelExp T_LARGE_EQUAL AddExp" << endl;
        print_out("RelExp -> RelExp T_LARGE_EQUAL AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2771 "yacc.tab.c"
    break;

  case 102: /* EqExp: RelExp  */
#line 1081 "yacc.y"
    {
        // cout << "EqExp -> RelExp" << endl;
        print_out("EqExp -> RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2783 "yacc.tab.c"
    break;

  case 103: /* EqExp: EqExp T_EQUAL RelExp  */
#line 1089 "yacc.y"
    {
        // cout << "EqExp -> EqExp T_EQUAL RelExp" << endl;
        print_out("EqExp -> EqExp T_EQUAL RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2797 "yacc.tab.c"
    break;

  case 104: /* EqExp: EqExp T_NOT_EQUAL RelExp  */
#line 1099 "yacc.y"
    {
        // cout << "EqExp -> EqExp T_NOT_EQUAL RelExp" << endl;
        print_out("EqExp -> EqExp T_NOT_EQUAL RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2811 "yacc.tab.c"
    break;

  case 105: /* LAndExp: EqExp  */
#line 1111 "yacc.y"
    {
        // cout << "LAndExp -> EqExp" << endl;
        print_out("LAndExp -> EqExp");
        p = new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2823 "yacc.tab.c"
    break;

  case 106: /* LAndExp: LAndExp T_AND EqExp  */
#line 1119 "yacc.y"
    {
        // cout << "LAndExp -> LAndExp T_AND EqExp" << endl;
        print_out("LAndExp -> LAndExp T_AND EqExp");
        p = new TreeNode("LAndExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2837 "yacc.tab.c"
    break;

  case 107: /* LOrExp: LAndExp  */
#line 1131 "yacc.y"
    {
        // cout << "LOrExp -> LAndExp" << endl;
        print_out("LOrExp -> LAndExp");
        p = new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2849 "yacc.tab.c"
    break;

  case 108: /* LOrExp: LOrExp T_OR LAndExp  */
#line 1139 "yacc.y"
    {
        // cout << "LOrExp -> LOrExp T_OR LAndExp" << endl;
        print_out("LOrExp -> LOrExp T_OR LAndExp");
        p = new TreeNode("LOrExp");
        p->childNodes.push_back((yyvsp[-2].y_node));
        p->childNodes.push_back(new TreeNode((yyvsp[-1].y_id)));
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2863 "yacc.tab.c"
    break;

  case 109: /* ConstExp: AddExp  */
#line 1151 "yacc.y"
    {
        // cout << "ConstExp -> AddExp" << endl;
        print_out("ConstExp -> AddExp");
        p = new TreeNode("ConstExp");
        p->childNodes.push_back((yyvsp[0].y_node));
        (yyval.y_node) = p;
    }
#line 2875 "yacc.tab.c"
    break;


#line 2879 "yacc.tab.c"

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

#line 1159 "yacc.y"
  

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

