#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
using namespace std;

enum FourTupleExpType{
    
};

class FourTupleExp{
public:
    string type;
    string ident_name;
    string str_val;
    string res;
    int number_val;
};

class AsmTranslator{
public:
    vector<FourTupleExp*> table;
    int offset = 0;
    void enter(string ident, string type, string val){
        FourTupleExp fourTupleExp = new FourTupleExp();
        fourTupleExp->type =type;
        fourTupleExp->ident = ident;
        fourTupleExp->str_val = val;
        table.push_back(fourTupleExp);
    }

    void enter(string ident, string type, int val){
        FourTupleExp fourTupleExp = new FourTupleExp();
        fourTupleExp->type =type;
        fourTupleExp->ident = ident;
        fourTupleExp->number_val = val;
        table.push_back(fourTupleExp);
    }

};