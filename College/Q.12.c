// Q.12 WAP to calculate area of triangle where three sides are given
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter three sides: ");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is %f",area);
    return 0;
}