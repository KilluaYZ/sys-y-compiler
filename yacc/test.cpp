#include "DotDrawer.hpp"
#include "Format.hpp"
int main(){
    // Tree tree;
    // DotDrawer drawer;
    // drawer.genarateDot(tree);

    cout<<util::Format("hi this is {}~","dte")<<endl;
}

// BType -> T_INT 
// VarDef1 -> 
// Number -> T_INTEGER_CONST 
// PrimaryExp -> Number 
// UnaryExp -> PrimaryExp 
// MulExp -> UnaryExp
// AddExp -> MulExp
// Exp -> AddExp 
// InitVal -> Exp
// VarDef -> T_IDENT VarDef1 T_DEFINE InitVal 
// VarDecl1 ->  
// VarDecl -> BType VarDef VarDecl1 T_DELIMITER 
// Decl -> VarDecl
// CompUnit1 -> Decl
// CompUnit -> CompUnit1