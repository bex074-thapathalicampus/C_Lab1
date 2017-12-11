#include<stdio.h>
#include<math.h>

int main(){
    int num;
    float sq;
    printf("Enter a number");
    scanf("%d",&num);
    sq = sqrt(num);
    printf("The square root of %d is %f\n",num, sq);
    return 0;
}