#include<stdio.h>

int add(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int b[10][10][10],a;
    b[2][2][2]=10;
    a=b[2][2][2];
    while(a>0){
        a=a-1;
        if(a==5)
            break;
    }
    printf("%d\n",a);
    return 0;
}