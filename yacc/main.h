#ifndef MAIN_HPP  
#define MAIN_HPP  

#include <iostream>//使用C++库  
#include <string>  
#include <stdio.h>//printf和FILE要用的  
#include "Format.h"
#include <unistd.h>
#include <string.h>
#include <cstdlib>

using namespace std;  

//DEBUG打印
#ifndef DEBUG
    #define ASSERT(condition, errMsg) \
        do { \
            if(!(condition)) {\
                cerr<<util::Format("ASSERT failed! {}:{} In function {}(): {}", __FILE__, __LINE__, __func__, errMsg)<<endl; \
                abort();\
            }\
        }while(0);
    
#else
    #define ASSERT(condition,errMsg) ((void)0)
#endif

//不可能到达，有些程序分支是不可能被执行到的，如果被执行到，说明程序出错，
//为了检测这种情况，定义该宏，将其安插到不可能到达的分支中
#define NOT_REACHED()\
    do {\
        cerr<<util::Format("NOT_REACHED: {}:{} In function {}()", __FILE__, __LINE__, __func__)<<endl; \
        while(1);\
    }while(0);

enum TokenType{
	//keywords
	T_NONE, T_NULL, T_INT, T_VOID, T_CONST, T_WHILE, T_BREAK, T_CONTINUE, T_DO, T_RETURN, T_IF, T_FOR, T_ELSE, T_VAR,
	//symbols
	T_LEFT_PARENTHESIS, T_RIGHT_PARENTHESIS, T_LEFT_BRACKET, T_RIGHT_BRACKET, T_LEFT_BRACE, T_RIGHT_BRACE, T_DEFINE, 
	//relation symbols
	T_EQUAL, T_NOT_EQUAL, T_LARGE, T_LESS, T_LARGE_EQUAL, T_LESS_EQUAL, 
	//arithmetic symbols
	T_ADD, T_SUB, T_MUL, T_DIV, T_MOD, 
	//logical symbols
	T_NOT, T_AND, T_OR,
	//bool
	T_BOOL_TRUE, T_BOOL_FALSE, 
	//comment
	T_SINGAL_ROW_COMMENT, T_LEFT_MULTI_ROW_COMMENT, T_RIGHT_MULTI_ROW_COMMENT, T_MULTI_ROW_COMMENT,
	//other
	T_DELIMITER, T_NEWLINE, T_ERRORCHAR,
	//right value
	T_IDENT, T_INTEGER_CONST, T_DEC_CONST, T_OCT_CONST, T_HEX_CONST,  T_ARRAY
};


/*当lex每识别出一个记号后，是通过变量yylval向yacc传递数据的。默认情况下yylval是int类型，也就是只能传递整型数据。 
yylval是用YYSTYPE宏定义的，只要重定义YYSTYPE宏，就能重新指定yylval的类型(可参见yacc自动生成的头文件yacc.tab.h)。 
在我们的例子里，当识别出标识符后要向yacc传递这个标识符串，yylval定义成整型不太方便(要先强制转换成整型，yacc里再转换回char*)。 
这里把YYSTYPE重定义为struct Type，可存放多种信息*/  
struct YaccType//通常这里面每个成员，每次只会使用其中一个，一般是定义成union以节省空间(但这里用了string等复杂类型造成不可以)  
{  
    string y_id;  
    int y_int;  
    double y_double;
    char y_op;  
	int row = 1, col = 1;
};  

#define YYSTYPE YaccType//把YYSTYPE(即yylval变量)重定义为struct Type类型，这样lex就能向yacc返回更多的数据了  

#endif  