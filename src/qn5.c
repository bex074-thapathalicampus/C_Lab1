#include<stdio.h>

int main(){
    int f,s,_tmp;
    printf("Enter a number");
    scanf("%d", &f);
    printf("Enter another number");
    scanf("%d", &s);
    _tmp =f;
    f =s ;
    s = _tmp;
    printf("First number = %d and Second number = %d\n",f,s);
    return 0;
}