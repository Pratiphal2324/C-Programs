// Q.20 WAP to find real roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,x,y;
    printf("In ax^2 + bx + c = 0,\n");
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    x = (-b+sqrtf(b*b-4*a*c))/2*a;
    y = (-b-sqrtf(b*b-4*a*c))/2*a;
    printf("The real roots are %f and %f.",x,y);
    return 0;
}