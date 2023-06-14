/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
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

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */
