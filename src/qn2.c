#include<stdio.h>

int main(){
    int num1, num2, sum;
    printf("Enter the first number: \n>");
    scanf("%d", &num1);
    printf("Enter another number:\n>");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
    return 0;
}