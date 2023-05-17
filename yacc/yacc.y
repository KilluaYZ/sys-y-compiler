%{  
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
%}  

/*lex里要return的记号的声明 
用token后加一对<member>来定义记号，旨在用于简化书写方式。 
假定某个产生式中第1个终结符是记号OPERATOR，则引用OPERATOR属性的方式： 
1-如果记号OPERATOR是以普通方式定义的，如%token OPERATOR，则在动作中要写$1.m_cOp，以指明使用YYSTYPE的哪个成员 
2-用%token<m_cOp>OPERATOR方式定义后，只需要写$1，yacc会自动替换为$1.m_cOp 
另外用<>定义记号后，非终结符如file, tokenlist，必须用%type<member>来定义(否则会报错)，以指明它们的属性对应YYSTYPE中哪个成员，这时对该非终结符的引用，如
，会自动替换为
.member*/  

%token<y_id>T_NULL T_INT T_VOID T_CONST T_WHILE T_BREAK T_CONTINUE T_DO T_RETURN T_IF T_FOR T_ELSE T_VAR T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS T_LEFT_BRACKET T_RIGHT_BRACKET T_LEFT_BRACE T_RIGHT_BRACE T_DEFINE T_NOT T_BOOL_TRUE T_BOOL_FALSE T_DELIMITER T_NEWLINE T_ERRORCHAR T_IDENT T_COMMA

%token<y_int>T_INTEGER_CONST T_HEX_CONST T_DEC_CONST T_OCT_CONST

%type<y_node>CompUnit  FuncDef  Decl  Block  constDecl constDeclRepeat ConstDef ConstDefRepeat ConstInitVal ConstInitValRepeat VarDecl VarDeclRepeat VarDef VarDefRepeat InitVal InitValRepeat FuncFParams FuncFParamsRepeat FuncFParam FuncFParamRepeat  BlockRepeat BlockItem Stmt Exp Cond LVal LValRepeat PrimaryExp Number UnaryExp UnaryOp FuncRParams FuncRParamsRepeat MulExp AddExp RelExp EqExp LAndExp LOrExp ConstExp CompRoot 

%left<y_id> T_ADD T_SUB
%left<y_id> T_MUL T_DIV
%left<y_id> T_MOD

%nonassoc<y_id> T_EQUAL T_NOT_EQUAL T_LARGE T_LESS T_LARGE_EQUAL T_LESS_EQUAL

%left<y_id> T_OR
%left<y_id> T_AND


%%  
CompRoot:
    CompUnit
    {
        tree.rootNode = $1;
    }

CompUnit:
    CompUnit FuncDef
    {
        // cout << "CompUnit -> CompUnit FuncDef"<< endl;
        print_out("CompUnit -> CompUnit FuncDef");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
        tree.rootNode = p;
    }
    | CompUnit Decl
    {
        print_out("CompUnit -> CompUnit Decl");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    }
    | FuncDef
    {
        // cout << "CompUnit -> FuncDef" << endl;
        print_out("CompUnit -> FuncDef");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | Decl
    {
        // cout << "CompUnit -> Decl" << endl;
        print_out("CompUnit -> Decl");
        p = new TreeNode("CompUnit");
        p->childNodes.push_back($1);
        $$ = p;
    };

FuncDef:
    T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block
    {
        // cout << "FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block");
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        p->childNodes.push_back($6);
        $$ = p;
    }
    | T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block
    {
        // cout << "FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block");
        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        p->childNodes.push_back($6);
        $$ = p;
    }
    | T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block
    {
        // cout << "FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_VOID T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block");

        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    }
    | T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block
    {
        // cout << "FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block" << endl;
        print_out("FuncDef -> T_INT T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS Block");

        p = new TreeNode("FuncDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    };

Decl:
    constDecl
    {
        // cout << "Decl -> constDecl" << endl;
        print_out("Decl -> constDecl");
        p = new TreeNode("Decl");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | VarDecl
    {
        // cout << "Decl -> VarDecl" << endl;
        print_out("Decl -> VarDecl");
        p = new TreeNode("Decl");
        p->childNodes.push_back($1);
        $$ = p;
    }
constDecl:
    T_CONST T_INT ConstDef T_DELIMITER
    {
        // cout << "constDecl -> T_CONST T_INT ConstDef T_DELIMITER" << endl;
        print_out("constDecl -> T_CONST T_INT ConstDef T_DELIMITER");
        p = new TreeNode("constDecl");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    }
    | T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER
    {
        // cout << "constDecl -> T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER" << endl;
        print_out("constDecl -> T_CONST T_INT ConstDef T_COMMA ConstDef constDeclRepeat T_DELIMITER");
        p = new TreeNode("constDecl");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        p->childNodes.push_back($6);
        p->childNodes.push_back(new TreeNode($7));
        $$ = p;
    };

constDeclRepeat:
    {
        // cout << "constDeclRepeat -> " << endl;
        print_out("constDeclRepeat -> ");
        p = new TreeNode("constDeclRepeat");
        $$ = p;
    }
    | T_COMMA ConstDef constDeclRepeat
    {
        // cout << "constDeclRepeat -> T_COMMA ConstDef constDeclRepeat" << endl;
        print_out("constDeclRepeat -> T_COMMA ConstDef constDeclRepeat");
        p = new TreeNode("constDeclRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };
    
ConstDef:
    T_IDENT T_DEFINE ConstInitVal
    {
        // cout << "ConstDef -> T_IDENT T_DEFINE ConstInitVal" << endl;
        print_out("ConstDef -> T_IDENT T_DEFINE ConstInitVal");
        p = new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal
    {
        // cout << "ConstDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal" << endl;
        print_out("ConstDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat T_DEFINE ConstInitVal");
        p = new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        p->childNodes.push_back(new TreeNode($6));
        p->childNodes.push_back($7);
        $$ = p;
    };

ConstDefRepeat:
    {
        // cout << "ConstDefRepeat -> " << endl;
        print_out("ConstDefRepeat -> ");
        p = new TreeNode("ConstDefRepeat");
        $$ = p;
    }
    | T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat
    {
        // cout << "ConstDefRepeat -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat" << endl;
        print_out("ConstDefRepeat -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDefRepeat");
        p = new TreeNode("ConstDefRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };
    
ConstInitVal:
    ConstExp
    {
        // cout << "ConstInitVal -> ConstExp" << endl;
        print_out("ConstInitVal -> ConstExp");
        p = new TreeNode("ConstInitVal");
         p->childNodes.push_back($1);
        $$ = p;
    }
    | T_LEFT_BRACE T_RIGHT_BRACE
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE ConstInitVal T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    }
    | T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE
    {
        // cout << "ConstInitVal -> T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE" << endl;
        print_out("ConstInitVal -> T_LEFT_BRACE T_COMMA ConstInitVal ConstInitValRepeat T_RIGHT_BRACE");
        p = new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        $$ = p;
    };

ConstInitValRepeat:
    {
        // cout << "ConstInitValRepeat -> empty" << endl;
        print_out("ConstInitValRepeat -> empty");
        p = new TreeNode("ConstInitValRepeat");
        $$ = p;
    }
    | T_COMMA ConstInitVal ConstInitValRepeat
    {
        // cout << "ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat" << endl;
        print_out("ConstInitValRepeat -> T_COMMA ConstInitVal ConstInitValRepeat");
        p = new TreeNode("ConstInitValRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };


VarDecl:
    T_INT VarDef T_DELIMITER
    {
        // cout << "VarDecl -> T_INT VarDef T_DELIMITER" << endl;
        print_out("VarDecl -> T_INT VarDef T_DELIMITER");
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    }
    | T_INT VarDef T_COMMA VarDef VarDeclRepeat T_DELIMITER
    {
        // cout << "VarDecl -> T_INT VarDef VarDeclRepeat T_DELIMITER" << endl;
        print_out("VarDecl -> T_INT VarDef VarDeclRepeat T_DELIMITER");
        p = new TreeNode("VarDecl");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        p->childNodes.push_back($5);
        p->childNodes.push_back(new TreeNode($6));
        $$ = p;
    };

VarDeclRepeat:
    {      
        // cout << "VarDeclRepeat -> "; 
        print_out("VarDeclRepeat -> ");
        p = new TreeNode("VarDeclRepeat");  
        $$ = p;
    }
    | T_COMMA VarDef VarDeclRepeat
    {
        // cout << "VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat";
        print_out("VarDeclRepeat -> T_COMMA VarDef VarDeclRepeat");
        p = new TreeNode("VarDeclRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

VarDef:
    T_IDENT
    {
        // cout << "VarDef -> T_IDENT" << endl;
        print_out("VarDef -> T_IDENT");
        p = new TreeNode("VarDef");  
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_IDENT T_DEFINE InitVal
    {
        // cout << "VarDef -> T_IDENT T_DEFINE InitVal" << endl;
        print_out("VarDef -> T_IDENT T_DEFINE InitVal");
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat
    {
        // cout << "VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat" << endl;
        print_out("VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat");
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    }
    | T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal
    {
        // cout << "VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal" << endl;
        print_out("VarDef -> T_IDENT T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat T_DEFINE InitVal");
        p = new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        p->childNodes.push_back(new TreeNode($6));
        p->childNodes.push_back($7);
        $$ = p;
    };

VarDefRepeat:
    {
        cout << "VarDefRepeat -> " << endl;
        print_out("VarDefRepeat -> ");
        p = new TreeNode("VarDefRepeat");
        $$ = p;
    }
    | T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat
    {       
        // cout << "VarDefRepeat: -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat" << endl;
        print_out("VarDefRepeat: -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDefRepeat");
        p = new TreeNode("VarDefRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

InitVal:
    Exp
    {
        // cout << "InitVal -> Exp" << endl;
        print_out("InitVal -> Exp");
        p = new TreeNode("InitVal");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_LEFT_BRACE InitVal T_RIGHT_BRACE
    {
        // cout << "InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl" << endl;
        print_out("InitVal -> constDT_LEFT_BRACE InitVal T_RIGHT_BRACEecl");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    }
    | T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE
    {
        // cout << "InitVal -> T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE" << endl;
        print_out("InitVal -> T_LEFT_BRACE T_COMMA InitVal InitValRepeat T_RIGHT_BRACE");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        $$ = p;
    }
    | T_LEFT_BRACE T_RIGHT_BRACE
    {
        // cout << "InitVal -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("InitVal -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    };

InitValRepeat:
    {
        // cout << "InitValRepeat -> " << endl;
        print_out("InitValRepeat -> ");
        p = new TreeNode("InitValRepeat");
        $$ = p;
    }
    | T_COMMA InitVal InitValRepeat
    {
        // cout << "InitValRepeat -> T_COMMA InitVal InitValRepeat" << endl;
        print_out("InitValRepeat -> T_COMMA InitVal InitValRepeat");
        p = new TreeNode("InitValRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

FuncFParams:
    FuncFParam
    {
        // cout << "FuncFParams -> FuncFParam" << endl;
        print_out("FuncFParams -> FuncFParam");
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | FuncFParam T_COMMA FuncFParam FuncFParamsRepeat
    {
        // cout << "FuncFParams -> FuncFParam T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        print_out("FuncFParams -> FuncFParam T_COMMA FuncFParam FuncFParamsRepeat");
        p = new TreeNode("FuncFParams");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back($4);
        $$ = p;
    };

FuncFParamsRepeat:
    {
        // cout << "FuncFParamsRepeat -> " << endl;
        print_out("FuncFParamsRepeat -> ");
        p = new TreeNode("FuncFParamsRepeat");
        $$ = p;
    }
    | T_COMMA FuncFParam FuncFParamsRepeat
    {
        // cout << "FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat" << endl;
        print_out("FuncFParamsRepeat -> T_COMMA FuncFParam FuncFParamsRepeat");
        p = new TreeNode("FuncFParamsRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

FuncFParam:
    T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET 
    {
        // cout << "FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET " << endl;
        print_out("FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET T_RIGHT_BRACKET ");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    }
    | T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat
    {
        // cout << "FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat " << endl;
        print_out("FuncFParam -> T_INT T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat ");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        p->childNodes.push_back($6);
        $$ = p;
    }
    | T_INT T_IDENT
    {
        // cout << "FuncFParam -> T_INT T_IDENT" << endl;
        print_out("FuncFParam -> T_INT T_IDENT");
        p = new TreeNode("FuncFParam");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    };

FuncFParamRepeat:
    {
        // cout << "FuncFParamRepeat -> " << endl;
        print_out("FuncFParamRepeat -> ");
        p = new TreeNode("FuncFParamRepeat");
        $$ = p;
    }
    | T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat
    {
        // cout << "FuncFParamRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat" << endl;
        print_out("FuncFParamRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParamRepeat");
        p = new TreeNode("FuncFParamRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

Block:
    T_LEFT_BRACE T_RIGHT_BRACE
    {
        // cout << "Block -> T_LEFT_BRACE T_RIGHT_BRACE" << endl;
        print_out("Block -> T_LEFT_BRACE T_RIGHT_BRACE");
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE
    {
        // cout << "Block -> T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE" << endl;
        print_out("Block -> T_LEFT_BRACE BlockItem BlockRepeat T_RIGHT_BRACE");
        p = new TreeNode("Block");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    };

BlockRepeat:
    {
        // cout << "BlockRepeat -> " << endl;
        print_out("BlockRepeat -> ");
        p = new TreeNode("BlockRepeat");
        $$ = p;
    }
    | BlockItem BlockRepeat
    {
        // cout << "BlockRepeat -> BlockItem BlockRepeat" << endl;
        print_out("BlockRepeat -> BlockItem BlockRepeat");
        p = new TreeNode("BlockRepeat");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

BlockItem:
    Decl
    {
        // cout << "BlockItem -> Decl" << endl;
        print_out("BlockItem -> Decl");
        p = new TreeNode("BlockItem");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | Stmt
    {
        // cout << "BlockItem -> Stmt" << endl;
        print_out("BlockItem -> Stmt");
        p = new TreeNode("BlockItem");
        p->childNodes.push_back($1);
        $$ = p;
    };

Stmt:
    LVal T_DEFINE Exp T_DELIMITER
    {
        // cout << "Stmt -> LVal T_DEFINE Exp T_DELIMITER" << endl;
        print_out("Stmt -> LVal T_DEFINE Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    }
    | T_DELIMITER
    {
        // cout << "Stmt -> T_DELIMITER" << endl;
        print_out("Stmt -> T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | Exp T_DELIMITER
    {
        // cout << "Stmt -> Exp T_DELIMITER" << endl;
        print_out("Stmt -> Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    } 
    | Block
    {
        // cout << "Stmt -> Block" << endl;
        print_out("Stmt -> Block");
        p = new TreeNode("Stmt");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt 
    {
        // cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt" << endl;
        print_out("Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    }
    | T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt T_ELSE Stmt
    {
        // cout << "Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt1 T_ELSE Stmt" << endl;
        print_out("Stmt -> T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt1 T_ELSE Stmt");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        p->childNodes.push_back(new TreeNode($6));
        $$ = p;
    }
    | T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt
    {
        cout << "Stmt -> T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt" << endl;
        print_out("Stmt -> T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    }
    | T_BREAK T_DELIMITER 
    {
        // cout << "Stmt -> T_BREAK T_DELIMITER" << endl;
        print_out("Stmt -> T_BREAK T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_CONTINUE T_DELIMITER
    {
        // cout << "Stmt -> T_CONTINUE T_DELIMITER" << endl;
        print_out("Stmt -> T_CONTINUE T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_RETURN T_DELIMITER
    {
        // cout << "Stmt -> T_RETURN T_DELIMITER" << endl;
        print_out("Stmt -> T_RETURN T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_RETURN Exp T_DELIMITER
    {
        // cout << "Stmt -> T_RETURN Exp T_DELIMITER" << endl;
        print_out("Stmt -> T_RETURN Exp T_DELIMITER");
        p = new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    };

Exp:
    AddExp
    {
        // cout << "Exp -> AddExp" << endl;
        print_out("Exp -> AddExp");
        p = new TreeNode("Exp");
        p->childNodes.push_back($1);
        $$ = p;
    };

Cond:
    LOrExp
    {
        // cout << "Cond -> LOrExp" << endl;
        print_out("Cond -> LOrExp");
        p = new TreeNode("Cond");
        p->childNodes.push_back($1);
        $$ = p;
    };

LVal:
    T_IDENT
    {
        // cout << "LVal -> T_IDENT" << endl;
        print_out("LVal -> T_IDENT");
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat
    {
        // cout << "LVal -> T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat" << endl;
        print_out("LVal -> T_IDENT T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat");
        p = new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    };

LValRepeat:
    {
        // cout << "LValRepeat -> empty" << endl;
        print_out("LValRepeat -> empty");
        p = new TreeNode("LValRepeat");
        $$ = p;
    }
    | T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat
    {
        // cout << "LValRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat" << endl;
        print_out("LValRepeat -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LValRepeat");
        p = new TreeNode("LValRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

PrimaryExp:
    T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS
    {
        // cout << "PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS" << endl;
        print_out("PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    }
    | LVal
    {
        // cout << "PrimaryExp -> LVal" << endl;
        print_out("PrimaryExp -> LVal");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | Number
    {
        // cout << "PrimaryExp -> Number" << endl;
        print_out("PrimaryExp -> Number");
        p = new TreeNode("PrimaryExp");
        p->childNodes.push_back($1);
        $$ = p;
    };

Number:
    T_INTEGER_CONST
    {
        // cout << "Number -> T_INTEGER_CONST "<< endl;
        print_out("Number -> T_INTEGER_CONST ");
        p = new TreeNode("Number");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

UnaryExp:
    PrimaryExp
    {
        // cout << "UnaryExp -> PrimaryExp" << endl;
        print_out("UnaryExp -> PrimaryExp");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS
    {
        // cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS" << endl;
        print_out("UnaryExp -> T_IDENT T_LEFT_PARENTHESIS T_RIGHT_PARENTHESIS");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    }
    | T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS
    {
        // cout << "UnaryExp -> T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS" << endl;
        print_out("UnaryExp -> T_IDENT T_LEFT_PARENTHESIS FuncRParams T_RIGHT_PARENTHESIS");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    }
    | UnaryOp UnaryExp
    {
        // cout << "UnaryExp -> UnaryOp UnaryExp" << endl;
        print_out("UnaryExp -> UnaryOp UnaryExp");
        p = new TreeNode("UnaryExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

UnaryOp:
    T_ADD
    {
        // cout << "UnaryOp -> T_ADD" << endl;
        print_out("UnaryOp -> T_ADD");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_SUB
    {
        // cout << "UnaryOp -> T_SUB" << endl;
        print_out("UnaryOp -> T_SUB");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_NOT
    {
        // cout << "UnaryOp -> T_NOT" << endl;
        print_out("UnaryOp -> T_NOT");
        p = new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

FuncRParams:
    Exp
    {
        // cout << "FuncRParams -> Exp";
        print_out("FuncRParams -> Exp");
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | Exp T_COMMA Exp FuncRParamsRepeat
    {
        // cout << "FuncRParams -> T_COMMA Exp FuncRParamsRepeat" << endl;
        print_out("FuncRParams -> T_COMMA Exp FuncRParamsRepeat");
        p = new TreeNode("FuncRParams");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back($4);
        $$ = p;
    };

FuncRParamsRepeat:
    {
        // cout << "FuncRParamsRepeat -> " << endl;
        print_out("FuncRParamsRepeat -> ");
        p = new TreeNode("FuncRParamsRepeat");
        $$ = p;
    }
    | T_COMMA Exp FuncRParamsRepeat
    {
        // cout << "FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat" << endl;
        print_out("FuncRParamsRepeat -> T_COMMA Exp FuncRParamsRepeat");
        p = new TreeNode("FuncRParamsRepeat");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

MulExp:
    UnaryExp
    {
        // cout << "MulExp -> UnaryExp" << endl;
        print_out("MulExp -> UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | MulExp T_MUL UnaryExp
    {
        // cout << "MulExp -> MulExp T_MUL UnaryExp" << endl;
        print_out("MulExp -> MulExp T_MUL UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | MulExp T_DIV UnaryExp
    {
        // cout << "MulExp -> MulExp T_DIV UnaryExp" << endl;
        print_out("MulExp -> MulExp T_DIV UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | MulExp T_MOD UnaryExp
    {
        // cout << "MulExp -> MulExp T_MOD UnaryExp" << endl;
        print_out("MulExp -> MulExp T_MOD UnaryExp");
        p = new TreeNode("MulExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

AddExp:
    MulExp
    {
        // cout << "AddExp -> MulExp" << endl;
        print_out("AddExp -> MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | AddExp T_ADD MulExp
    {
        // cout << "AddExp -> AddExp T_ADD MulExp" << endl;
        print_out("AddExp -> AddExp T_ADD MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | AddExp T_SUB MulExp
    {
        // cout << "AddExp -> AddExp T_SUB MulExp" << endl;
        print_out("AddExp -> AddExp T_SUB MulExp");
        p = new TreeNode("AddExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

RelExp:
    AddExp
    {
        // cout << "RelExp -> AddExp" << endl;
        print_out("RelExp -> AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | RelExp T_LESS AddExp
    {
        // cout << "RelExp -> RelExp T_LESS AddExp" << endl; 
        print_out("RelExp -> RelExp T_LESS AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;  
    }
    | RelExp T_LARGE AddExp
    {
        // cout << "RelExp -> RelExp T_LARGE AddExp" << endl;
        print_out("RelExp -> RelExp T_LARGE AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | RelExp T_LESS_EQUAL AddExp
    {
        // cout << "RelExp -> RelExp T_LESS_EQUAL AddExp" << endl;
        print_out("RelExp -> RelExp T_LESS_EQUAL AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | RelExp T_LARGE_EQUAL AddExp
    {
        // cout << "RelExp -> RelExp T_LARGE_EQUAL AddExp" << endl;
        print_out("RelExp -> RelExp T_LARGE_EQUAL AddExp");
        p = new TreeNode("RelExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

EqExp:
    RelExp
    {
        // cout << "EqExp -> RelExp" << endl;
        print_out("EqExp -> RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | EqExp T_EQUAL RelExp
    {
        // cout << "EqExp -> EqExp T_EQUAL RelExp" << endl;
        print_out("EqExp -> EqExp T_EQUAL RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    }
    | EqExp T_NOT_EQUAL RelExp
    {
        // cout << "EqExp -> EqExp T_NOT_EQUAL RelExp" << endl;
        print_out("EqExp -> EqExp T_NOT_EQUAL RelExp");
        p = new TreeNode("EqExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

LAndExp:
    EqExp
    {
        // cout << "LAndExp -> EqExp" << endl;
        print_out("LAndExp -> EqExp");
        p = new TreeNode("LAndExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | LAndExp T_AND EqExp
    {
        // cout << "LAndExp -> LAndExp T_AND EqExp" << endl;
        print_out("LAndExp -> LAndExp T_AND EqExp");
        p = new TreeNode("LAndExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

LOrExp:
    LAndExp
    {
        // cout << "LOrExp -> LAndExp" << endl;
        print_out("LOrExp -> LAndExp");
        p = new TreeNode("LOrExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | LOrExp T_OR LAndExp
    {
        // cout << "LOrExp -> LOrExp T_OR LAndExp" << endl;
        print_out("LOrExp -> LOrExp T_OR LAndExp");
        p = new TreeNode("LOrExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

ConstExp:
    AddExp
    {
        // cout << "ConstExp -> AddExp" << endl;
        print_out("ConstExp -> AddExp");
        p = new TreeNode("ConstExp");
        p->childNodes.push_back($1);
        $$ = p;
    };

%%  

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

