%{

#include "main.h"
#include "yacc.tab.h"

extern "C"//为了能够在C++程序里面调用C函数，必须把每一个需要使用的C函数，其声明都包括在extern "C"{}块里面，这样C++链接时才能成功链接它们。extern "C"用来在C++环境下设置C链接类型。  
{   //yacc.y中也有类似的这段extern "C"，可以把它们合并成一段，放到共同的头文件main.h中  
    int yywrap(void);  
    int yylex(void);//这个是lex生成的词法分析函数，yacc的yyparse()里会调用它，如果这里不声明，生成的yacc.tab.c在编译时会找不到该函数  
}

%}

delim	[\t" "]
ws {delim}+
keyword_var			var
keyword_int 		int
keyword_void 		void
keyword_const 		const
keyword_while 		while
keyword_break 		break
keyword_continue 	continue
keyword_do 			do
keyword_return 		return
keyword_if	 		if
keyword_for	 		for
keyword_else		else

symbol_left_parenthesis 	\(
symbol_right_parenthesis 	\)
symbol_left_bracket 		\[
symbol_right_bracket		\]
symbol_left_brace 			\{
symbol_right_brace			\}
symbol_define				=

symbol_equal		==
symbol_not_equal	!=
symbol_large		>
symbol_less 		<
symbol_large_equal  >=
symbol_less_equal  	<=

symbol_add			\+
symbol_sub			\-
symbol_div			\/
symbol_mul			\*
symbol_mod			\%

symbol_not 			!
symbol_and			&&
symbol_or			\|\|
symbol_true			true 
symbol_false		false 

symbol_single_row_comment 		"//"
symbol_left_multi_row_comment	"/*"
symbol_right_multi_row_comment	"*/"

single_row_comment			{symbol_single_row_comment}.*\n
multi_row_comment			{symbol_left_multi_row_comment}.*{symbol_right_multi_row_comment}

symbol_delimiter		;
symbol_newline			"\n"

ident			[A-Za-z_][A-Za-z_0-9]*
dec_const		[1-9][0-9]*
oct_const		0[0-7]* 
hex_const		((0x)|(0X))[0-9a-fA-F]+ 


%%

{keyword_var}				{return install_ident(T_VAR);}
{keyword_int}				{return install_ident(T_INT);}
{keyword_void}				{return install_ident(T_VOID);}
{keyword_const}				{return install_ident(T_CONST);}
{keyword_while}				{return install_ident(T_WHILE);}
{keyword_break}				{return install_ident(T_BREAK);}
{keyword_continue}			{return install_ident(T_CONTINUE);}
{keyword_do}				{return install_ident(T_DO);}
{keyword_return}			{return install_ident(T_RETURN);}
{keyword_if}				{return install_ident(T_IF);}
{keyword_for}				{return install_ident(T_FOR);}
{keyword_else}				{return install_ident(T_ELSE);}
{symbol_left_parenthesis}	{return install_ident(T_LEFT_PARENTHESIS);}
{symbol_right_parenthesis}	{return install_ident(T_RIGHT_PARENTHESIS);}
{symbol_left_bracket}		{return install_ident(T_LEFT_BRACKET);}
{symbol_right_bracket}		{return install_ident(T_RIGHT_BRACKET);}
{symbol_left_brace}			{return install_ident(T_LEFT_BRACE);}
{symbol_right_brace}		{return install_ident(T_RIGHT_BRACE);}
{symbol_define}				{return install_ident(T_DEFINE);}
{symbol_equal}				{return install_ident(T_EQUAL);}
{symbol_not_equal}			{return install_ident(T_NOT_EQUAL);}
{symbol_large}				{return install_ident(T_LARGE);}
{symbol_less}				{return install_ident(T_LESS);}
{symbol_large_equal}		{return install_ident(T_LARGE_EQUAL);}
{symbol_less_equal}			{return install_ident(T_LESS_EQUAL);}
{symbol_add}				{return install_ident(T_ADD);}
{symbol_sub}				{return install_ident(T_SUB);}
{symbol_div}				{return install_ident(T_DIV);}
{symbol_mul}				{return install_ident(T_MUL);}
{symbol_mod}				{return install_ident(T_MOD);}
{symbol_not}				{return install_ident(T_NOT);}
{symbol_and}				{return install_ident(T_AND);}
{symbol_or}					{return install_ident(T_OR);}
{symbol_true}				{return install_ident(T_BOOL_TRUE);}
{symbol_false}				{return install_ident(T_BOOL_FALSE);}
{single_row_comment}		{}
{multi_row_comment}			{}
{symbol_delimiter}			{return install_ident(T_DELIMITER);}
{ident}						{return install_ident(T_IDENT);}
{dec_const}					{return install_int(T_DEC_CONST);}
{oct_const}					{return install_int(T_OCT_CONST);}
{hex_const}					{return install_int(T_HEX_CONST);}
{symbol_newline}			{T_NEWLINE_installer();}
{ws}						{yylval.col += yyleng;}
.							{return install_ident(T_ERRORCHAR);}

%%


int T_NEWLINE_installer(){
	yylval.row++;
	yylval.col = 1;
	// return T_NEWLINE;
}

int install_ident(TokenType tokenType){ 
	col += yyleng; 
	yylval.y_id = yytext;
	yylval.col += yyleng;
	return tokenType; 
}

int install_int(TokenType tokenType){
	col += yyleng;
	switch(tokenType){
		case T_DEC_CONST:
			yylval.y_int = atoi(yytext);
			break;
		case T_OCT_CONST:
			char* ret = NULL, ptr = NULL;
			ret = strtol(yytext, &ptr, 8);
			yylval.y_int = atoi(ret);
			break;
		case T_HEX_CONST:
			char* ret = NULL, ptr = NULL;
			ret = strtol(yytext, &ptr, 16);
			yylval.y_int = atoi(ret);
			break;
		default:
			NOT_REACHED();
	}
	yylval.col += yyleng;
	return T_INTEGER_CONST;
}

int install_double(TokenType tokenType){
	col += yyleng;
	yylval.y_double = atod(yytext);
	yylval.col += yyleng;
	return tokenType;
}

