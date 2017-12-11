#include<stdio.h>

#define PI 3.14

int main(){
    float r, area;
    printf("Enter the value of radius");
    scanf("%f",&r);
    area = PI * r *r;
    printf("The area of given circle is %f\n", area);
    return 0;
}