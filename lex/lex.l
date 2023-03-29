%{

#include<stdio.h>
#include<unistd.h>
#include<string.h>


//DEBUG打印
#ifndef DEBUG
    #define ASSERT(condition, errMsg) \
        do { \
            if(!(condition)) {\
                fprintf(stderr,"ASSERT failed! %s:%d In function %s(): %s\n",\
                __FILE__, __LINE__, __func__, errMsg);\
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
        fprintf(stderr,"NOT_REACHED: %s:%d In function %s()\n",\
        __FILE__, __LINE__, __func__);\
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



int yylval;
int row = 1, col = 1;

//定义install函数
#define DEFINE_INSTALL_FUNCTION(ttype) \
	int ttype##_installer(){ \
		col += yyleng; \
		return ttype; \
	} 

#define PRINT_TYPE_1(tType, showType) \
	case tType: \ 
	fprintf(yyout, "(%s, \"%s\", %d, %d) \n",showType, yytext, row, col);break;

#define PRINT_TYPE_2(tType, showType) \
	case tType: fprintf(yyout, "%s : %s, (%d, %d) \n",yytext, showType, row, col);break;
 

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

{keyword_var}				{yylval =  T_VAR_installer(); return T_VAR;}
{keyword_int}				{yylval =  T_INT_installer(); return T_INT;}
{keyword_void}				{yylval =  T_VOID_installer(); return T_VOID;}
{keyword_const}				{yylval =  T_CONST_installer(); return T_CONST;}
{keyword_while}				{yylval =  T_WHILE_installer(); return T_WHILE;}
{keyword_break}				{yylval =  T_BREAK_installer(); return T_BREAK;}
{keyword_continue}			{yylval =  T_CONTINUE_installer(); return T_CONTINUE;}
{keyword_do}				{yylval =  T_DO_installer(); return T_DO;}
{keyword_return}			{yylval =  T_RETURN_installer(); return T_RETURN;}
{keyword_if}				{yylval =  T_IF_installer(); return T_IF;}
{keyword_for}				{yylval =  T_FOR_installer(); return T_FOR;}
{keyword_else}				{yylval =  T_ELSE_installer(); return T_ELSE;}
{symbol_left_parenthesis}	{yylval =  T_LEFT_PARENTHESIS_installer(); return T_LEFT_PARENTHESIS;}
{symbol_right_parenthesis}	{yylval =  T_RIGHT_PARENTHESIS_installer(); return T_RIGHT_PARENTHESIS;}
{symbol_left_bracket}		{yylval =  T_LEFT_BRACKET_installer(); return T_LEFT_BRACKET;}
{symbol_right_bracket}		{yylval =  T_RIGHT_BRACKET_installer(); return T_RIGHT_BRACKET;}
{symbol_left_brace}			{yylval =  T_LEFT_BRACE_installer(); return T_LEFT_BRACE;}
{symbol_right_brace}		{yylval =  T_RIGHT_BRACE_installer(); return T_RIGHT_BRACE;}
{symbol_define}				{yylval =  T_DEFINE_installer(); return T_DEFINE;}
{symbol_equal}				{yylval =  T_EQUAL_installer(); return T_EQUAL;}
{symbol_not_equal}			{yylval =  T_NOT_EQUAL_installer(); return T_NOT_EQUAL;}
{symbol_large}				{yylval =  T_LARGE_installer(); return T_LARGE;}
{symbol_less}				{yylval =  T_LESS_installer(); return T_LESS;}
{symbol_large_equal}		{yylval =  T_LARGE_EQUAL_installer(); return T_LARGE_EQUAL;}
{symbol_less_equal}			{yylval =  T_LESS_EQUAL_installer(); return T_LESS_EQUAL;}
{symbol_add}				{yylval =  T_ADD_installer(); return T_ADD;}
{symbol_sub}				{yylval =  T_SUB_installer(); return T_SUB;}
{symbol_div}				{yylval =  T_DIV_installer(); return T_DIV;}
{symbol_mul}				{yylval =  T_MUL_installer(); return T_MUL;}
{symbol_mod}				{yylval =  T_MOD_installer(); return T_MOD;}
{symbol_not}				{yylval =  T_NOT_installer(); return T_NOT;}
{symbol_and}				{yylval =  T_AND_installer(); return T_AND;}
{symbol_or}					{yylval =  T_OR_installer(); return T_OR;}
{symbol_true}				{yylval =  T_BOOL_TRUE_installer(); return T_BOOL_TRUE;}
{symbol_false}				{yylval =  T_BOOL_FALSE_installer(); return T_BOOL_FALSE;}
{single_row_comment}		{yylval =  T_SINGAL_ROW_COMMENT_installer(); return T_SINGAL_ROW_COMMENT;}
{multi_row_comment}			{yylval =  T_MULTI_ROW_COMMENT_installer(); return T_MULTI_ROW_COMMENT;}
{symbol_delimiter}			{yylval =  T_DELIMITER_installer(); return T_DELIMITER;}
{ident}						{yylval =  T_IDENT_installer(); return T_IDENT;}
{dec_const}					{yylval =  T_DEC_CONST_installer(); return T_DEC_CONST;}
{oct_const}					{yylval =  T_OCT_CONST_installer(); return T_OCT_CONST;}
{hex_const}					{yylval =  T_HEX_CONST_installer(); return T_HEX_CONST;}
{symbol_newline}			{yylval =  T_NEWLINE_installer(); return T_NEWLINE;}
{ws}						{col += yyleng;}
.							{yylval =  T_ERRORCHAR_installer(); return T_ERRORCHAR;}

%%

DEFINE_INSTALL_FUNCTION(T_VAR);
DEFINE_INSTALL_FUNCTION(T_INT);
DEFINE_INSTALL_FUNCTION(T_VOID);
DEFINE_INSTALL_FUNCTION(T_CONST);
DEFINE_INSTALL_FUNCTION(T_WHILE);
DEFINE_INSTALL_FUNCTION(T_BREAK);
DEFINE_INSTALL_FUNCTION(T_CONTINUE);
DEFINE_INSTALL_FUNCTION(T_DO);
DEFINE_INSTALL_FUNCTION(T_RETURN);
DEFINE_INSTALL_FUNCTION(T_IF);
DEFINE_INSTALL_FUNCTION(T_FOR);
DEFINE_INSTALL_FUNCTION(T_ELSE);
DEFINE_INSTALL_FUNCTION(T_LEFT_PARENTHESIS);
DEFINE_INSTALL_FUNCTION(T_RIGHT_PARENTHESIS);
DEFINE_INSTALL_FUNCTION(T_LEFT_BRACKET);
DEFINE_INSTALL_FUNCTION(T_RIGHT_BRACKET);
DEFINE_INSTALL_FUNCTION(T_LEFT_BRACE);
DEFINE_INSTALL_FUNCTION(T_RIGHT_BRACE);
DEFINE_INSTALL_FUNCTION(T_DEFINE);
DEFINE_INSTALL_FUNCTION(T_EQUAL);
DEFINE_INSTALL_FUNCTION(T_NOT_EQUAL);
DEFINE_INSTALL_FUNCTION(T_LARGE);
DEFINE_INSTALL_FUNCTION(T_LESS);
DEFINE_INSTALL_FUNCTION(T_LARGE_EQUAL);
DEFINE_INSTALL_FUNCTION(T_LESS_EQUAL);
DEFINE_INSTALL_FUNCTION(T_ADD);
DEFINE_INSTALL_FUNCTION(T_SUB);
DEFINE_INSTALL_FUNCTION(T_DIV);
DEFINE_INSTALL_FUNCTION(T_MUL);
DEFINE_INSTALL_FUNCTION(T_MOD);
DEFINE_INSTALL_FUNCTION(T_NOT);
DEFINE_INSTALL_FUNCTION(T_AND);
DEFINE_INSTALL_FUNCTION(T_OR);
DEFINE_INSTALL_FUNCTION(T_BOOL_TRUE);
DEFINE_INSTALL_FUNCTION(T_BOOL_FALSE);
DEFINE_INSTALL_FUNCTION(T_SINGAL_ROW_COMMENT);
DEFINE_INSTALL_FUNCTION(T_MULTI_ROW_COMMENT);
DEFINE_INSTALL_FUNCTION(T_DELIMITER);
DEFINE_INSTALL_FUNCTION(T_IDENT);
DEFINE_INSTALL_FUNCTION(T_DEC_CONST);
DEFINE_INSTALL_FUNCTION(T_OCT_CONST);
DEFINE_INSTALL_FUNCTION(T_HEX_CONST);
DEFINE_INSTALL_FUNCTION(T_ERRORCHAR);

int T_NEWLINE_installer(){
	row++;
	col = 1;
	return T_NEWLINE;
}

void writeout_1(int c){
	switch(c){
		PRINT_TYPE_1(T_INT, "T_INT");
		PRINT_TYPE_1(T_VOID, "T_VOID");
		PRINT_TYPE_1(T_CONST, "T_CONST");
		PRINT_TYPE_1(T_WHILE, "T_WHILE");
		PRINT_TYPE_1(T_BREAK, "T_BREAK");
		PRINT_TYPE_1(T_CONTINUE, "T_CONTINUE");
		PRINT_TYPE_1(T_DO, "T_DO");
		PRINT_TYPE_1(T_RETURN, "T_RETURN");
		PRINT_TYPE_1(T_IF, "T_IF");
		PRINT_TYPE_1(T_FOR, "T_FOR");
		PRINT_TYPE_1(T_ELSE, "T_ELSE");
		PRINT_TYPE_1(T_LEFT_PARENTHESIS, "T_LEFT_PARENTHESIS");
		PRINT_TYPE_1(T_RIGHT_PARENTHESIS, "T_RIGHT_PARENTHESIS");
		PRINT_TYPE_1(T_LEFT_BRACKET, "T_LEFT_BRACKET");
		PRINT_TYPE_1(T_RIGHT_BRACKET, "T_RIGHT_BRACKET");
		PRINT_TYPE_1(T_LEFT_BRACE, "T_LEFT_BRACE");
		PRINT_TYPE_1(T_RIGHT_BRACE, "T_RIGHT_BRACE");
		PRINT_TYPE_1(T_DEFINE, "T_DEFINE");
		PRINT_TYPE_1(T_EQUAL, "T_EQUAL");
		PRINT_TYPE_1(T_NOT_EQUAL, "T_NOT_EQUAL");
		PRINT_TYPE_1(T_LARGE, "T_LARGE");
		PRINT_TYPE_1(T_LESS, "T_LESS");
		PRINT_TYPE_1(T_LARGE_EQUAL, "T_LARGE_EQUAL");
		PRINT_TYPE_1(T_LESS_EQUAL, "T_LESS_EQUAL");
		PRINT_TYPE_1(T_ADD, "T_ADD");
		PRINT_TYPE_1(T_SUB, "T_SUB");
		PRINT_TYPE_1(T_MUL, "T_MUL");
		PRINT_TYPE_1(T_DIV, "T_DIV");
		PRINT_TYPE_1(T_MOD, "T_MOD");
		PRINT_TYPE_1(T_NOT, "T_NOT");
		PRINT_TYPE_1(T_AND, "T_AND");
		PRINT_TYPE_1(T_OR, "T_OR");
		PRINT_TYPE_1(T_BOOL_TRUE, "T_BOOL_TRUE");
		PRINT_TYPE_1(T_BOOL_FALSE, "T_BOOL_FALSE");
		PRINT_TYPE_1(T_SINGAL_ROW_COMMENT, "T_SINGAL_ROW_COMMENT");
		PRINT_TYPE_1(T_LEFT_MULTI_ROW_COMMENT, "T_LEFT_MULTI_ROW_COMMENT");
		PRINT_TYPE_1(T_RIGHT_MULTI_ROW_COMMENT, "T_RIGHT_MULTI_ROW_COMMENT");
		PRINT_TYPE_1(T_MULTI_ROW_COMMENT, "T_MULTI_ROW_COMMENT");
		PRINT_TYPE_1(T_DELIMITER, "T_DELIMITER");
		PRINT_TYPE_1(T_NEWLINE, "T_NEWLINE");
		PRINT_TYPE_1(T_ERRORCHAR, "T_ERRORCHAR");
		PRINT_TYPE_1(T_IDENT, "T_IDENT");
		PRINT_TYPE_1(T_INTEGER_CONST, "T_INTEGER_CONST");
		PRINT_TYPE_1(T_DEC_CONST, "T_DEC_CONST");
		PRINT_TYPE_1(T_OCT_CONST, "T_OCT_CONST");
		PRINT_TYPE_1(T_HEX_CONST, "T_HEX_CONST");
		PRINT_TYPE_1(T_ARRAY, "T_ARRAY");

		default: NOT_REACHED(); break;				  
	}
	return ;
}

void writeout_2(int c){
	switch(c){
		PRINT_TYPE_2(T_INT,"K");
		PRINT_TYPE_2(T_VOID,"K");
		PRINT_TYPE_2(T_CONST,"K");
		PRINT_TYPE_2(T_WHILE,"K");
		PRINT_TYPE_2(T_BREAK,"K");
		PRINT_TYPE_2(T_CONTINUE,"K");
		PRINT_TYPE_2(T_DO,"K");
		PRINT_TYPE_2(T_RETURN,"K");
		PRINT_TYPE_2(T_IF,"K");
		PRINT_TYPE_2(T_FOR,"K");
		PRINT_TYPE_2(T_ELSE,"K");
		PRINT_TYPE_2(T_VAR,"K");
		PRINT_TYPE_2(T_LEFT_PARENTHESIS,"D");
		PRINT_TYPE_2(T_RIGHT_PARENTHESIS,"D");
		PRINT_TYPE_2(T_LEFT_BRACKET,"D");
		PRINT_TYPE_2(T_RIGHT_BRACKET,"D");
		PRINT_TYPE_2(T_LEFT_BRACE,"D");
		PRINT_TYPE_2(T_RIGHT_BRACE,"D");
		PRINT_TYPE_2(T_DEFINE,"O");
		PRINT_TYPE_2(T_EQUAL,"O");
		PRINT_TYPE_2(T_NOT_EQUAL,"O");
		PRINT_TYPE_2(T_LARGE,"O");
		PRINT_TYPE_2(T_LESS,"O");
		PRINT_TYPE_2(T_LARGE_EQUAL,"O");
		PRINT_TYPE_2(T_LESS_EQUAL,"O");
		PRINT_TYPE_2(T_ADD,"O");
		PRINT_TYPE_2(T_SUB,"O");
		PRINT_TYPE_2(T_MUL,"O");
		PRINT_TYPE_2(T_DIV,"O");
		PRINT_TYPE_2(T_MOD,"O");
		PRINT_TYPE_2(T_NOT,"O");
		PRINT_TYPE_2(T_AND,"O");
		PRINT_TYPE_2(T_OR,"O");
		PRINT_TYPE_2(T_BOOL_TRUE,"K");
		PRINT_TYPE_2(T_BOOL_FALSE,"K");
		PRINT_TYPE_2(T_SINGAL_ROW_COMMENT,"T");
		PRINT_TYPE_2(T_LEFT_MULTI_ROW_COMMENT,"T");
		PRINT_TYPE_2(T_RIGHT_MULTI_ROW_COMMENT,"T");
		PRINT_TYPE_2(T_MULTI_ROW_COMMENT,"T");
		PRINT_TYPE_2(T_DELIMITER,"D");
		PRINT_TYPE_2(T_NEWLINE,"T");
		PRINT_TYPE_2(T_ERRORCHAR,"T");
		PRINT_TYPE_2(T_IDENT,"I");
		PRINT_TYPE_2(T_INTEGER_CONST,"C");
		PRINT_TYPE_2(T_DEC_CONST,"C");
		PRINT_TYPE_2(T_OCT_CONST,"C");
		PRINT_TYPE_2(T_HEX_CONST,"C");
		PRINT_TYPE_2(T_ARRAY,"T");
		default: NOT_REACHED(); break;				  
	}
}

void usage(){
	printf("Usage:\n");
	printf("lex [srcFile] [-o dstFile]\n");
}

void start_parse(){
	int  c = 0;
	while(c = yylex()){
		writeout_2(c);
	}
}

int yywrap(){
	return 1;
}

int main(int argc, char** argv){
	char dst_file_name[256];
	char src_file_name[256];
	memset(dst_file_name,0,256);
	memset(src_file_name,0,256);
	
	//printf("[DEBUG] argc = %d\n",argc);
	if(argc == 1){
		//开启命令行模式
		start_parse();
	}else if(argc >= 2){
		//输出文件为lex.out
		strcpy(dst_file_name,"lex.out");
		strcpy(src_file_name, argv[1]);
		if(argc >= 3){
			strcpy(dst_file_name,argv[2]);
		}
		if((yyin = fopen(src_file_name, "r")) == NULL){
			printf("Can't open file %s\n", argv[1]);
			return 1;
		}
		if((yyout = fopen(dst_file_name, "w")) == NULL){
			printf("Cant't write file %s\n", argv[2]);
			return 1;
		}
		start_parse();
		fclose(yyin);
		fclose(yyout);
	}

	return 0;
}


