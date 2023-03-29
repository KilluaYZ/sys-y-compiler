%{

#include<stdio.h>
#include<unistd.h>
#include<string.h>
enum TokenType{
	//keywords
	T_INT, T_VOID, T_CONST, T_WHILE, T_BREAK, T_CONTINUE, T_DO, T_RETURN, T_IF, T_FOR, T_ELSE, T_VAR,
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
	T_SINGAL_ROW_COMMENT, T_LEFT_MULTI_ROW_COMMENT, T_RIGHT_MULTI_ROW_COMMENT,
	//other
	T_DELIMITER, T_NEWLINE, T_ERRORCHAR,
	//right value
	T_IDENT, T_INTEGER_CONST, T_DEC_CONST, T_OCT_CONST, T_HEX_CONST,  T_ARRAY
};


int yylval;

%}

delim	[ \t \n]
ws {delim}+
keyword_var			var
keyword_int			"int"	
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

symbol_singal_row_comment 		\/\/
symbol_left_multi_row_comment	\/\*
symbol_right_multi_row_comment	\*\/

symbol_delimiter		;
symbol_newline			[\t\n]




ident			[A-Za-z_][A-Za-z_0-9]*
dec_const		[1-9][0-9]*
oct_const		0[0-7]* 
hex_const		((0x)|(0X))[0-9a-fA-F]+ 


%%

{keyword_var}				{yylval = T_VAR; return T_VAR;}
{keyword_int}				{yylval = T_INT; return T_INT;}
{keyword_void}				{yylval = T_VOID; return T_VOID;}
{keyword_const}				{yylval = T_CONST; return T_CONST;}
{keyword_while}				{yylval = T_WHILE; return T_WHILE;}
{keyword_break}				{yylval = T_BREAK; return T_BREAK;}
{keyword_continue}			{yylval = T_CONTINUE; return T_CONTINUE;}
{keyword_do}				{yylval = T_DO; return T_DO;}
{keyword_return}			{yylval = T_RETURN; return T_RETURN;}
{keyword_if}				{yylval = T_IF; return T_IF;}
{keyword_for}				{yylval = T_FOR; return T_FOR;}
{keyword_else}				{yylval = T_ELSE; return T_ELSE;}
{symbol_left_parenthesis}	{yylval = T_LEFT_PARENTHESIS; return T_LEFT_PARENTHESIS;}
{symbol_right_parenthesis}	{yylval = T_RIGHT_PARENTHESIS; return T_RIGHT_PARENTHESIS;}
{symbol_left_bracket}		{yylval = T_LEFT_BRACKET; return T_LEFT_BRACKET;}
{symbol_right_bracket}		{yylval = T_RIGHT_BRACKET; return T_RIGHT_BRACKET;}
{symbol_left_brace}			{yylval = T_LEFT_BRACE; return T_LEFT_BRACE;}
{symbol_right_brace}		{yylval = T_RIGHT_BRACE; return T_RIGHT_BRACE;}
{symbol_define}				{yylval = T_DEFINE; return T_DEFINE;}
{symbol_equal}				{yylval = T_EQUAL; return T_EQUAL;}
{symbol_not_equal}			{yylval = T_NOT_EQUAL; return T_NOT_EQUAL;}
{symbol_large}				{yylval = T_LARGE; return T_LARGE;}
{symbol_less}				{yylval = T_LESS; return T_LESS;}
{symbol_large_equal}		{yylval = T_LARGE_EQUAL; return T_LARGE_EQUAL;}
{symbol_less_equal}			{yylval = T_LESS_EQUAL; return T_LESS_EQUAL;}
{symbol_add}				{yylval = T_ADD; return T_ADD;}
{symbol_sub}				{yylval = T_SUB; return T_SUB;}
{symbol_div}				{yylval = T_DIV; return T_DIV;}
{symbol_mul}				{yylval = T_MUL; return T_MUL;}
{symbol_mod}				{yylval = T_MOD; return T_MOD;}
{symbol_not}				{yylval = T_NOT; return T_NOT;}
{symbol_and}				{yylval = T_AND; return T_AND;}
{symbol_or}					{yylval = T_OR; return T_OR;}
{symbol_true}				{yylval = T_BOOL_TRUE; return T_BOOL_TRUE;}
{symbol_false}				{yylval = T_BOOL_FALSE; return T_BOOL_FALSE;}
{symbol_singal_row_comment}	{yylval = T_SINGAL_ROW_COMMENT; return T_SINGAL_ROW_COMMENT;}
{symbol_left_multi_row_comment}		{yylval = T_LEFT_MULTI_ROW_COMMENT; return T_LEFT_MULTI_ROW_COMMENT;}
{symbol_right_multi_row_comment}	{yylval = T_RIGHT_MULTI_ROW_COMMENT; return T_RIGHT_MULTI_ROW_COMMENT;}
{symbol_delimiter}			{yylval = T_DELIMITER; return T_DELIMITER;}
{ident}						{yylval = T_IDENT; return T_IDENT;}
{dec_const}					{yylval = T_DEC_CONST; return T_DEC_CONST;}
{oct_const}					{yylval = T_OCT_CONST; return T_OCT_CONST;}
{hex_const}					{yylval = T_HEX_CONST; return T_HEX_CONST;}
{symbol_newline}			{yylval = T_NEWLINE; return T_NEWLINE;}
{ws}						{;}
.							{yylval = T_ERRORCHAR; return T_ERRORCHAR;}

%%

void writeout(int c){
	switch(c){
		case T_DEC_CONST: fprintf(yyout, "(DEC_CONST, \"%s\") ",yytext);break;
		case T_OCT_CONST: fprintf(yyout, "(OCT_CONST, \"%s\") ",yytext);break;
		case T_HEX_CONST: fprintf(yyout, "(HEX_CONST, \"%s\") ",yytext);break;
		case T_INT: fprintf(yyout, "(T_INT, \"%s\") ",yytext);break;
		case T_VAR: fprintf(yyout, "(T_VAR, \"%s\") ",yytext);break;
		case T_VOID: fprintf(yyout, "(T_VOID, \"%s\") ",yytext);break;
		case T_CONST: fprintf(yyout, "(T_CONST, \"%s\") ",yytext);break;
		case T_WHILE: fprintf(yyout, "(T_WHILE, \"%s\") ",yytext);break;
		case T_BREAK: fprintf(yyout, "(T_BREAK, \"%s\") ",yytext);break;
		case T_CONTINUE: fprintf(yyout, "(T_CONTINUE, \"%s\") ",yytext);break;
		case T_DO: fprintf(yyout, "(T_DO, \"%s\") ",yytext);break;
		case T_RETURN: fprintf(yyout, "(T_RETURN, \"%s\") ",yytext);break;
		case T_IF: fprintf(yyout, "(T_IF, \"%s\") ",yytext);break;
		case T_FOR: fprintf(yyout, "(T_FOR, \"%s\") ",yytext);break;
		case T_ELSE: fprintf(yyout, "(T_ELSE, \"%s\") ",yytext);break;
		case T_LEFT_PARENTHESIS: fprintf(yyout, "(T_LEFT_PARENTHESIS, \"%s\") ",yytext);break;
		case T_RIGHT_PARENTHESIS: fprintf(yyout, "(T_RIGHT_PARENTHESIS, \"%s\") ",yytext);break;
		case T_LEFT_BRACKET: fprintf(yyout, "(T_LEFT_BRACKET, \"%s\") ",yytext);break;
		case T_RIGHT_BRACKET: fprintf(yyout, "(T_RIGHT_BRACKET, \"%s\") ",yytext);break;
		case T_LEFT_BRACE: fprintf(yyout, "(T_LEFT_BRACE, \"%s\") ",yytext);break;
		case T_RIGHT_BRACE: fprintf(yyout, "(T_RIGHT_BRACE, \"%s\") ",yytext);break;
		case T_DEFINE: fprintf(yyout, "(T_DEFINE, \"%s\") ",yytext);break;
		case T_EQUAL: fprintf(yyout, "(T_EQUAL, \"%s\") ",yytext);break;
		case T_NOT_EQUAL: fprintf(yyout, "(T_NOT_EQUAL, \"%s\") ",yytext);break;
		case T_LARGE: fprintf(yyout, "(T_LARGE, \"%s\") ",yytext);break;
		case T_LESS: fprintf(yyout, "(T_LESS, \"%s\") ",yytext);break;
		case T_LARGE_EQUAL: fprintf(yyout, "(T_LARGE_EQUAL, \"%s\") ",yytext);break;
		case T_LESS_EQUAL: fprintf(yyout, "(T_LESS_EQUAL, \"%s\") ",yytext);break;
		case T_ADD: fprintf(yyout, "(T_ADD, \"%s\") ",yytext);break;
		case T_SUB: fprintf(yyout, "(T_SUB, \"%s\") ",yytext);break;
		case T_MUL: fprintf(yyout, "(T_MUL, \"%s\") ",yytext);break;
		case T_DIV: fprintf(yyout, "(T_DIV, \"%s\") ",yytext);break;
		case T_MOD: fprintf(yyout, "(T_MOD, \"%s\") ",yytext);break;
		case T_NOT: fprintf(yyout, "(T_NOT, \"%s\") ",yytext);break;
		case T_AND: fprintf(yyout, "(T_AND, \"%s\") ",yytext);break;
		case T_OR: fprintf(yyout, "(T_OR, \"%s\") ",yytext);break;
		case T_BOOL_TRUE: fprintf(yyout, "(T_BOOL_TRUE, \"%s\") ",yytext);break;
		case T_BOOL_FALSE: fprintf(yyout, "(T_BOOL_FALSE, \"%s\") ",yytext);break;
		case T_SINGAL_ROW_COMMENT: fprintf(yyout, "(T_SINGAL_ROW_COMMENT, \"%s\") ",yytext);break;
		case T_LEFT_MULTI_ROW_COMMENT: fprintf(yyout, "(T_LEFT_MULTI_ROW_COMMENT, \"%s\") ",yytext);break;
		case T_RIGHT_MULTI_ROW_COMMENT: fprintf(yyout, "(T_RIGHT_MULTI_ROW_COMMENT, \"%s\") ",yytext);break;
		case T_DELIMITER: fprintf(yyout, "(T_DELIMITER, \"%s\") ",yytext);break;
		case T_NEWLINE: fprintf(yyout, "(T_NEWLINE, \"%s\") ",yytext);break;
		case T_ERRORCHAR: fprintf(yyout, "(T_ERRORCHAR, \"%s\") ",yytext);break;
		case T_IDENT: fprintf(yyout, "(T_IDENT, \"%s\") ",yytext);break;
		case T_INTEGER_CONST: fprintf(yyout, "(T_INTEGER_CONST, \"%s\") ",yytext);break;
		case T_ARRAY: fprintf(yyout, "(T_ARRAY, \"%s\") ",yytext);break;
		default: printf("[WRONG] Unreachable!"); break;				  
	}
	return ;
}

void usage(){
	printf("Usage:\n");
	printf("lex [srcFile] [-o dstFile]\n");
}

void start_parse(){
	int  c = 0;
	while(c = yylex()){
		writeout(c);
	}
}

int yywrap() {
	return 1;
}

int main(int argc, char** argv){
	int c,j = 0;
	if(argc >= 2){
		if((yyin = fopen(argv[1], "r")) == NULL){
			printf("Can't open file %s\n", argv[1]);
			return 1;
		}
		if(argc >= 3){
			yyout = fopen(argv[2], "w");
		}
	}

	while(c = yylex()){
		writeout(c);
	}
	if(argc >= 2){
		fclose(yyin);
		if(argc >= 3){
			fclose(yyout);
		}
	}
	return 0;
}


