#include<stdio.h>

int main(){
    float l,b,area;
    printf("Enter length:\n>");
    scanf("%f",&l);
    printf("Enter Breadth:\n>");
    scanf("%f", &b);
    area = l * b;
    printf("The area is: %f\n", area);
    return 0 ;
}