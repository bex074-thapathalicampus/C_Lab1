#include<stdio.h>
#include<math.h>

int main(){
    int x,n,result;
    printf("Enter the value of n\n>");
    scanf("%d", &n);
    printf("Enter the value of x\n>");
    scanf("%d",&x);
    result = pow(n,x);
    printf("The result if %d\n", result);
    return 0;
}