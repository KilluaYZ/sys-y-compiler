%{
#include<stdio.h>
enum Type{
	K, I, C, O, D, T
};

%}

delim		[\t \n]
ws			{delim}+
K			
