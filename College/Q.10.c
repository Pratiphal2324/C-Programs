// Q.10 WAP to calculate (cb^2)/d^3 using suitable data type (where c, b and d values are provided by user)
#include <stdio.h>
int main(){
    float c, b, d, a;
    printf("Enter c: ");
    scanf("%f",&c);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter d: ");
    scanf("%f",&d);
    a = (c*b*b)/(d*d*d);
    printf("The result is %f",a);
    return 0;
}