// Q.20 WAP to find real roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,x,y,d;
    printf("In ax^2 + bx + c = 0,\n");
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    d = b*b-4*a*c;  
    if(d>=0){
        x = (-b+sqrtf(d))/2*a;
        y = (-b-sqrtf(d))/2*a;
        printf("The real roots are %.2f and %.2f.\n",x,y);
    }
    else{
        x = -b/(2*a);
        y = sqrtf(-d)/(2*a);
        printf("The real roots are %.2f+%.2fi and %.2f-%.2fi.\n",x,y,x,y);
    }
    return 0;
}