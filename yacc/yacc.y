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

extern "C"//为了能够在C++程序里面调用C函数，必须把每一个需要使用的C函数，其声明都包括在extern "C"{}      
          //块里面，这样C++链接时才能成功链接它们。extern "C"用来在C++环境下设置C链接类型。  
{   //lex.l中也有类似的这段extern "C"，可以把它们合并成一段，放到共同的头文件main.h中  
    void yyerror(const char *s);  
    extern int yylex(void);//该函数是在lex.yy.c里定义的，yyparse()里要调用该函数，
                            //为了能编译和链接，必须用extern加以声明  
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

%token<y_id>T_NULL
%token<y_id>T_INT
%token<y_id>T_VOID
%token<y_id>T_CONST
%token<y_id>T_WHILE
%token<y_id>T_BREAK
%token<y_id>T_CONTINUE
%token<y_id>T_DO
%token<y_id>T_RETURN
%token<y_id>T_IF
%token<y_id>T_FOR
%token<y_id>T_ELSE
%token<y_id>T_VAR
%token<y_id>T_LEFT_PARENTHESIS
%token<y_id>T_RIGHT_PARENTHESIS
%token<y_id>T_LEFT_BRACKET
%token<y_id>T_RIGHT_BRACKET
%token<y_id>T_LEFT_BRACE
%token<y_id>T_RIGHT_BRACE
%token<y_id>T_DEFINE
%token<y_id>T_EQUAL
%token<y_id>T_NOT_EQUAL
%token<y_id>T_LARGE
%token<y_id>T_LESS
%token<y_id>T_LARGE_EQUAL
%token<y_id>T_LESS_EQUAL
%token<y_id>T_ADD
%token<y_id>T_SUB
%token<y_id>T_MUL
%token<y_id>T_DIV
%token<y_id>T_MOD
%token<y_id>T_NOT
%token<y_id>T_AND
%token<y_id>T_OR
%token<y_id>T_BOOL_TRUE
%token<y_id>T_BOOL_FALSE
%token<y_id>T_DELIMITER
%token<y_id>T_NEWLINE
%token<y_id>T_ERRORCHAR
%token<y_id>T_COMMA
%token<y_id>T_IDENT
%token<y_int>T_INTEGER_CONST
%token<y_int>T_DEC_CONST
%token<y_int>T_OCT_CONST
%token<y_int>T_HEX_CONST

%type<y_node>CompUnit  
%type<y_node>CompUnit1  
%type<y_node>Decl
%type<y_node>FuncDef
%type<y_node>ConstDecl
%type<y_node>ConstDecl1
%type<y_node>VarDecl
%type<y_node>BType
%type<y_node>ConstDef
%type<y_node>ConstDef1
%type<y_node>ConstExp
%type<y_node>ConstInitVal
%type<y_node>ConstInitVal2
%type<y_node>VarDef
%type<y_node>VarDecl1
%type<y_node>VarDef1
%type<y_node>InitVal
%type<y_node>InitVal1
%type<y_node>FuncType
%type<y_node>Exp
%type<y_node>FuncFParams
%type<y_node>Block
%type<y_node>FuncFParam
%type<y_node>FuncFParams1
%type<y_node>FuncFParam1
%type<y_node>FuncFParam2
%type<y_node>Block1
%type<y_node>BlockItem
%type<y_node>Stmt
%type<y_node>LVal
%type<y_node>Stmt1
%type<y_node>Cond
%type<y_node>ELSE_STMT
%type<y_node>AddExp
%type<y_node>LOrExp
%type<y_node>LVal1
%type<y_node>Number
%type<y_node>UnaryExp
%type<y_node>UnaryExp1
%type<y_node>FuncRParams
%type<y_node>UnaryOp
%type<y_node>FuncRParams1
%type<y_node>MulExp
%type<y_node>PrimaryExp
%type<y_node>MulExp1
%type<y_node>AddExp1
%type<y_node>RelExp
%type<y_node>RelExp1
%type<y_node>EqExp
%type<y_node>EqExp1
%type<y_node>LAndExp
%type<y_node>ConstInitVal1


%%  
CompUnit:
    CompUnit1
    {  
        cout<<"CompUnit -> CompUnit1"<<endl;
        p =  new TreeNode("CompUnit");
        p->childNodes.push_back($1);
        $$ = p;
        tree.rootNode = p;
    }
    | CompUnit CompUnit1
    {
        cout<<"CompUnit -> CompUnit CompUnit1"<<endl;
        p =  new TreeNode("CompUnit");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

CompUnit1:
    Decl
    {
        cout<<"CompUnit1 -> Decl"<<endl;
        p =  new TreeNode("CompUnit1");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | FuncDef
    {
        cout<<"CompUnit1 -> FuncDef"<<endl;
        p =  new TreeNode("CompUnit1");
        p->childNodes.push_back($1);
        $$ = p;
    };

Decl:
    ConstDecl
    {
        cout<<"Decl -> ConstDecl"<<endl;
        p =  new TreeNode("Decl");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | VarDecl
    {
        cout<<"Decl -> VarDecl"<<endl;
        p =  new TreeNode("Decl");
        p->childNodes.push_back($1);
        $$ = p;
    };

ConstDecl:
    T_CONST BType ConstDef ConstDecl1 T_DELIMITER
    {
        cout<<"ConstDecl -> T_CONST BType ConstDef ConstDecl1 T_DELIMITER"<<endl;
        p =  new TreeNode("ConstDecl");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        $$ = p;
    };

ConstDecl1:
    {
        cout<<"ConstDecl1 ->  "<<endl;
        // drawer.addEdge("ConstDecl1", "");
        p =  new TreeNode("ConstDecl1");
        $$ = p;

    }
    | T_COMMA ConstDef ConstDecl1
    {
        cout<<"ConstDecl1 -> T_COMMA ConstDef ConstDecl1"<<endl;
        p =  new TreeNode("ConstDecl1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

BType:
    T_INT
    {
        cout<<"BType -> T_INT "<<endl;
        p =  new TreeNode("BType");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

ConstDef:
    T_IDENT ConstDef1 T_DEFINE ConstInitVal
    {
        cout<<"ConstDef -> T_IDENT ConstDef1 T_DEFINE ConstInitVal "<<endl;
        p =  new TreeNode("ConstDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

ConstDef1:
    {
        cout<<"ConstDef1 ->  "<<endl;
        // drawer.addEdge("ConstDef1", "");
        p =  new TreeNode("ConstDef1");
        $$ = p;
    }
    | T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDef1
    {
        cout<<"ConstDef1 -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET ConstDef1 "<<endl;
        p =  new TreeNode("ConstDef1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

ConstInitVal:
    ConstExp
    {
        cout<<"ConstInitVal ->  ConstExp"<<endl;
        p =  new TreeNode("ConstInitVal");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_LEFT_BRACE ConstInitVal1 T_RIGHT_BRACE
    {
        cout<<"ConstInitVal ->  T_LEFT_BRACE ConstInitVal1 T_RIGHT_BRACE"<<endl;
        p =  new TreeNode("ConstInitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    };

ConstInitVal1:
    {
        cout<<"ConstInitVal1 ->  "<<endl;
        // drawer.addEdge("ConstInitVal1", "");
        p =  new TreeNode("ConstInitVal1");
        $$ = p;
    }
    | ConstInitVal ConstInitVal2
    {
        cout<<"ConstInitVal1 -> ConstInitVal ConstInitVal2 "<<endl;
        p =  new TreeNode("ConstInitVal1");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

ConstInitVal2:
    {
        cout<<"ConstInitVal2 ->  "<<endl;
        // drawer.addEdge("ConstInitVal2", "");
        p =  new TreeNode("ConstInitVal2");
        $$ = p;
    }
    | T_COMMA ConstInitVal ConstInitVal2
    {
        cout<<"ConstInitVal2 -> T_COMMA ConstInitVal ConstInitVal2 "<<endl;
        p =  new TreeNode("ConstInitVal2");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

VarDecl:
    BType VarDef VarDecl1 T_DELIMITER
    {
        cout<<"VarDecl -> BType VarDef VarDecl1 T_DELIMITER "<<endl;
        p =  new TreeNode("VarDecl");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    };

VarDecl1:
    {
        cout<<"VarDecl1 ->  "<<endl;
        // drawer.addEdge("VarDecl1", "");
        p =  new TreeNode("VarDecl1");
        $$ = p;
    }
    | T_COMMA VarDef VarDecl1
    {
        cout<<"VarDecl1 -> T_COMMA VarDef VarDecl1 "<<endl;
        p =  new TreeNode("VarDecl1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

VarDef:
    T_IDENT VarDef1
    {
        cout<<"VarDef -> T_IDENT VarDef1 "<<endl;
        p =  new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        $$ = p;
    }
    | T_IDENT VarDef1 T_DEFINE InitVal
    {
        cout<<"VarDef -> T_IDENT VarDef1 T_DEFINE InitVal "<<endl;
        p =  new TreeNode("VarDef");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

VarDef1:
    {
        cout<<"VarDef1 -> "<<endl;
        // drawer.addEdge("VarDef1", "");
        p =  new TreeNode("VarDef1");
        $$ = p;
    }
    | T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDef1
    {
        cout<<"VarDef1 -> T_LEFT_BRACKET ConstExp T_RIGHT_BRACKET VarDef1"<<endl;
        p =  new TreeNode("VarDef1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    } ;

InitVal:
    Exp
    {
        cout<<"InitVal -> Exp"<<endl;
        p =  new TreeNode("InitVal");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_LEFT_BRACE  T_RIGHT_BRACE
    {
        cout<<"InitVal -> T_LEFT_BRACE  T_RIGHT_BRACE"<<endl;
        p =  new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_LEFT_BRACE InitVal InitVal1 T_RIGHT_BRACE
    {
        cout<<"InitVal -> T_LEFT_BRACE InitVal InitVal1 T_RIGHT_BRACE"<<endl;
        p =  new TreeNode("InitVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    };

InitVal1:
    {
        cout<<"InitVal1 -> "<<endl;
        // drawer.addEdge("InitVal1", "");
        p =  new TreeNode("InitVal1");
        $$ = p;
    }
    | T_COMMA InitVal InitVal1
    {
        cout<<"InitVal1 -> T_COMMA InitVal InitVal1"<<endl;
        p =  new TreeNode("InitVal1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

FuncDef:
    FuncType T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block
    {
        cout<<"FuncDef -> FuncType T_IDENT T_LEFT_PARENTHESIS FuncFParams T_RIGHT_PARENTHESIS Block"<<endl;
        p =  new TreeNode("FuncDef");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        p->childNodes.push_back(new TreeNode($5));
        p->childNodes.push_back($6);
        $$ = p;
    };

FuncType:
    T_VOID
    {
        cout<<"FuncType -> T_VOID"<<endl;
        p =  new TreeNode("FuncType");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    } 
    | T_INT
    {
        cout<<"FuncType -> T_INT"<<endl;
        p =  new TreeNode("FuncType");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

FuncFParams:
    FuncFParam FuncFParams1
    {
        cout<<"FuncFParams -> FuncFParam FuncFParams1"<<endl;
        p =  new TreeNode("FuncFParams");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

FuncFParams1:
    {
        cout<<"FuncFParams1 ->  "<<endl;
        // drawer.addEdge("FuncFParams1", "");
        p =  new TreeNode("FuncFParams1");
        $$ = p;
    }   
    | T_COMMA FuncFParam FuncFParams1
    {
        cout<<"FuncFParams1 -> T_COMMA FuncFParam FuncFParams1 "<<endl;
        p =  new TreeNode("FuncFParams1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

FuncFParam:
    BType T_IDENT 
    {
        cout<<"FuncFParam -> BType T_IDENT  "<<endl;
        p =  new TreeNode("FuncFParam");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | BType T_IDENT FuncFParam1
    {
        cout<<"FuncFParam -> BType T_IDENT FuncFParam1  "<<endl;
        p =  new TreeNode("FuncFParam");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

FuncFParam1:
    T_LEFT_BRACKET T_RIGHT_BRACKET FuncFParam2
    {
        cout<<"FuncFParam1 -> T_LEFT_BRACKET T_RIGHT_BRACKET FuncFParam2 "<<endl;
        p =  new TreeNode("FuncFParam1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

FuncFParam2:
    {
        cout<<"FuncFParam2 ->   "<<endl;
        p =  new TreeNode("FuncFParam2");
        $$ = p;
    }
    | T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParam2
    {
        cout<<"FuncFParam2 -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET FuncFParam2"<<endl;
        p =  new TreeNode("FuncFParam2");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

Block:
    T_LEFT_BRACE Block1 T_RIGHT_BRACE
    {
        cout<<"Block ->  T_LEFT_BRACE Block1 T_RIGHT_BRACE "<<endl;
        p =  new TreeNode("Block");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    };

Block1:
    {
        cout<<"Block1 ->  "<<endl;
        p =  new TreeNode("Block1");
        $$ = p;
    }
    | BlockItem Block1
    {
        cout<<"Block1 ->  BlockItem Block1"<<endl;
        p =  new TreeNode("Block1");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

BlockItem:
    Decl
    {
        cout<<"BlockItem ->  Decl"<<endl;
        p =  new TreeNode("BlockItem");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | Stmt
    {
        cout<<"BlockItem ->  Stmt"<<endl;
        p =  new TreeNode("BlockItem");
        p->childNodes.push_back($1);
        $$ = p;
    };

Stmt:
    LVal T_DEFINE Exp T_DELIMITER 
    {
        cout<<"Stmt ->  LVal T_DEFINE Exp T_DELIMITER "<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    }
    | Stmt1 T_DELIMITER
    {
        cout<<"Stmt ->  Stmt1 T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | Block
    {
        cout<<"Stmt ->  Block"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt ELSE_STMT
    {
        cout<<"Stmt ->  T_IF T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt ELSE_STMT"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        p->childNodes.push_back($6);
        $$ = p;
    }
    | T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt
    {
        cout<<"Stmt ->  T_WHILE T_LEFT_PARENTHESIS Cond T_RIGHT_PARENTHESIS Stmt"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        p->childNodes.push_back($5);
        $$ = p;
    }
    | T_BREAK T_DELIMITER
    {
        cout<<"Stmt ->  T_BREAK T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_CONTINUE T_DELIMITER
    {
        cout<<"Stmt ->  T_CONTINUE T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        $$ = p;
    }
    | T_RETURN Stmt1 T_DELIMITER
    {
        cout<<"Stmt ->  T_RETURN Stmt1 T_DELIMITER"<<endl;
        p =  new TreeNode("Stmt");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    };

Stmt1:
    {
        cout<<"Stmt1 ->  "<<endl;
        p =  new TreeNode("Stmt1");
        $$ = p;
    }
    | Exp
    {
        cout<<"Stmt1 -> Exp Stmt1"<<endl;
        p =  new TreeNode("Stmt1");
        p->childNodes.push_back($1);
        $$ = p;
    };

ELSE_STMT:
    {
        cout<<"ELSE_STMT ->  "<<endl;
        // drawer.addEdge("ELSE_STMT", "");
        p =  new TreeNode("ELSE_STMT");
        $$ = p;
    }
    | T_ELSE Stmt
    {
        cout<<"ELSE_STMT -> T_ELSE Stmt "<<endl;
        p =  new TreeNode("ELSE_STMT");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        $$ = p;
    };

Exp:
    AddExp
    {
        cout<<"Exp -> AddExp "<<endl;
        p =  new TreeNode("Exp");
        p->childNodes.push_back($1);
        $$ = p;
    };

Cond:
    LOrExp
    {
        cout<<"Cond -> AddLOrExpExp "<<endl;
        p =  new TreeNode("Cond");
        p->childNodes.push_back($1);
        $$ = p;
    };

LVal:
    T_IDENT LVal1
    {
        cout<<"LVal -> T_IDENT LVal1 "<<endl;
        p =  new TreeNode("LVal");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        $$ = p;
    };

LVal1:
    {
        cout<<"LVal1 -> "<<endl;
        p =  new TreeNode("LVal1");
        $$ = p;
    }
    | T_LEFT_BRACKET Exp T_RIGHT_BRACKET LVal1
    {
        cout<<"LVal1 -> T_LEFT_BRACKET Exp T_RIGHT_BRACKET LVal1 "<<endl;
        p =  new TreeNode("LVal1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        p->childNodes.push_back($4);
        $$ = p;
    };

PrimaryExp:
    T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS
    {
        cout<<"PrimaryExp -> T_LEFT_PARENTHESIS Exp T_RIGHT_PARENTHESIS "<<endl;
        p =  new TreeNode("PrimaryExp");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back(new TreeNode($3));
        $$ = p;
    }
    | LVal
    {
        cout<<"PrimaryExp -> LVal "<<endl;
        p =  new TreeNode("PrimaryExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | Number
    {
        cout<<"PrimaryExp -> Number "<<endl;
        p =  new TreeNode("PrimaryExp");
        p->childNodes.push_back($1);
        $$ = p;
    };

Number:
    T_INTEGER_CONST
    {
        cout<<"Number -> T_INTEGER_CONST "<<endl;
        p =  new TreeNode("Number");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

UnaryExp:
    PrimaryExp
    {
        cout<<"UnaryExp -> PrimaryExp "<<endl;
        p =  new TreeNode("UnaryExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | T_IDENT T_LEFT_PARENTHESIS UnaryExp1 T_RIGHT_PARENTHESIS
    {
        cout<<"UnaryExp -> T_IDENT T_LEFT_PARENTHESIS UnaryExp1 T_RIGHT_PARENTHESIS "<<endl;
        p =  new TreeNode("UnaryExp");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        p->childNodes.push_back(new TreeNode($4));
        $$ = p;
    }
    | UnaryOp UnaryExp
    {
        cout<<"UnaryExp -> UnaryOp UnaryExp "<<endl;
        p =  new TreeNode("UnaryExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

UnaryExp1:
    {
        cout<<"UnaryExp1 ->  "<<endl;
        p =  new TreeNode("UnaryExp1");
        $$ = p;
    }
    | FuncRParams
    {
        cout<<"UnaryExp1 -> FuncRParams "<<endl;
        p =  new TreeNode("UnaryExp1");
        p->childNodes.push_back($1);
        $$ = p;
    };

UnaryOp:
    T_ADD
    {
        cout<<"UnaryOp -> T_ADD "<<endl;
        p =  new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_SUB
    {
        cout<<"UnaryOp -> T_SUB "<<endl;
        p =  new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_NOT
    {
        cout<<"UnaryOp -> T_NOT "<<endl;
        p =  new TreeNode("UnaryOp");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };  

FuncRParams:
    Exp FuncRParams1
    {
        cout<<"FuncRParams -> Exp FuncRParams1 "<<endl;
        p =  new TreeNode("FuncRParams");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        $$ = p;
    };

FuncRParams1:
    {
        cout<<"FuncRParams1 -> "<<endl;
        p =  new TreeNode("FuncRParams1");
        $$ = p;
    }
    | T_COMMA Exp FuncRParams1
    {
        cout<<"FuncRParams1 -> T_COMMA Exp FuncRParams1"<<endl;
        p =  new TreeNode("FuncRParams1");
        p->childNodes.push_back(new TreeNode($1));
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

MulExp:
    UnaryExp
    {
        cout<<"MulExp -> UnaryExp"<<endl;
        p =  new TreeNode("MulExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | MulExp MulExp1 UnaryExp
    {
        cout<<"MulExp -> MulExp MulExp1 UnaryExp"<<endl;
        p =  new TreeNode("MulExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

MulExp1:
    T_ADD
    {
        cout<<"MulExp1 -> T_ADD"<<endl;
        p =  new TreeNode("MulExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_DIV
    {
        cout<<"MulExp1 -> T_DIV"<<endl;
        p =  new TreeNode("MulExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_MOD
    {
        cout<<"MulExp1 -> T_MOD"<<endl;
        p =  new TreeNode("MulExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

AddExp:
    MulExp
    {
        cout<<"AddExp -> MulExp"<<endl;
        p =  new TreeNode("AddExp");
        p->childNodes.push_back($1);
        $$ = p;
    }   
    | AddExp AddExp1 MulExp
    {
        cout<<"AddExp -> AddExp AddExp1 MulExp"<<endl;
        p =  new TreeNode("AddExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

AddExp1:
    T_ADD
    {
        cout<<"AddExp1 -> T_ADD"<<endl;
        p =  new TreeNode("AddExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_SUB
    {
        cout<<"AddExp1 -> T_SUB"<<endl;
        p =  new TreeNode("AddExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

RelExp:
    AddExp
    {
        cout<<"RelExp -> AddExp"<<endl;
        p =  new TreeNode("RelExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | RelExp RelExp1 AddExp
    {
        cout<<"RelExp -> RelExp RelExp1 AddExp"<<endl;
        p =  new TreeNode("RelExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

RelExp1:
    T_LESS
    {
        cout<<"RelExp1 -> T_LESS"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_LARGE
    {
        cout<<"RelExp1 -> T_LARGE"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_LESS_EQUAL
    {
        cout<<"RelExp1 -> T_LESS_EQUAL"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_LARGE_EQUAL
    {
        cout<<"RelExp1 -> T_LARGE_EQUAL"<<endl;
        p =  new TreeNode("RelExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };

EqExp:
    RelExp
    {
        cout<<"EqExp -> RelExp"<<endl;
        p =  new TreeNode("EqExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | EqExp EqExp1 RelExp
    {
        cout<<"EqExp -> EqExp EqExp1 RelExp"<<endl;
        p =  new TreeNode("EqExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back($2);
        p->childNodes.push_back($3);
        $$ = p;
    };

EqExp1:
    T_EQUAL
    {
        cout<<"EqExp1 -> T_EQUAL"<<endl;
        p =  new TreeNode("EqExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    }
    | T_NOT_EQUAL
    {
        cout<<"EqExp1 -> T_NOT_EQUAL"<<endl;
        p =  new TreeNode("EqExp1");
        p->childNodes.push_back(new TreeNode($1));
        $$ = p;
    };  

LAndExp:
    EqExp
    {
        cout<<"LAndExp -> EqExp"<<endl;
        p =  new TreeNode("LAndExp");
        p->childNodes.push_back($1);
        $$ = p;
    } 
    | LAndExp T_AND EqExp
    {
        cout<<"LAndExp -> LAndExp T_AND EqExp"<<endl;
        p =  new TreeNode("LAndExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

LOrExp:
    LAndExp
    {
        cout<<"LOrExp -> LAndExp"<<endl;
        p =  new TreeNode("LOrExp");
        p->childNodes.push_back($1);
        $$ = p;
    }
    | LOrExp T_OR LAndExp
    {   
        cout<<"LOrExp -> LOrExp T_OR LAndExp"<<endl;
        p =  new TreeNode("LOrExp");
        p->childNodes.push_back($1);
        p->childNodes.push_back(new TreeNode($2));
        p->childNodes.push_back($3);
        $$ = p;
    };

ConstExp:
    AddExp
    {
        cout<<"ConstExp -> AddExp"<<endl;
        p =  new TreeNode("ConstExp");
        p->childNodes.push_back($1);
        $$ = p;
    };

// file:   //文件，由记号流组成  
//     tokenlist   //这里仅显示记号流中的ID  
//     {  
//         cout<<"all id:"<<$1<<endl;    //$1是非终结符tokenlist的属性，由于该终结符是
//         //用%type<m_sId>定义的，即约定对其用YYSTYPE的m_sId属性，$1相当于$1.m_sId，
//         //其值已经在下层产生式中赋值(tokenlist IDENTIFIER)  
//     };  
// tokenlist://记号流，或者为空，或者由若干数字、标识符、及其它符号组成  
//     {  
//     }  
//     | tokenlist INTEGER  
//     {  
//         cout<<"int: "<<$2<<endl;//$2是记号INTEGER的属性，由于该记号是用%token<m_nInt>定义的，
//                 //即约定对其用YYSTYPE的m_nInt属性，$2会被替换为yylval.m_nInt，已在lex里赋值  
//     }  
//     | tokenlist IDENTIFIER  
//     {  
//         $$+=" " + $2;//是非终结符tokenlist的属性，由于该终结符是用 $$.m_nId
//         //相当于$$.m_sId，这里把识别到的标识符串保存在tokenlist属性中，到上层产生式里可以拿出为用  

//         cout<<"id: "<<$2<<endl;//$2是记号IDENTIFIER的属性，由于该记号是用%token<m_sId>定义的，
//                      //即约定对其用YYSTYPE的m_sId属性，$2会被替换为yylval.m_sId，已在lex里赋值  
//     }  
//     | tokenlist OPERATOR  
//     {  
//         cout<<"op: "<<$2<<endl;//$2是记号OPERATOR的属性，由于该记号是用%token<m_cOp>定义的，
//                       //即约定对其用YYSTYPE的m_cOp属性，$2会被替换为yylval.m_cOp，已在lex里赋值  
//     };  

%%  

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

