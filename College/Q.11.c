// Q.11 WAP to evaluate y^x using pow() function
#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z;
    printf("Enter y: ");
    scanf("%d",&y);
    printf("Enter x: ");
    scanf("%d",&x);
    z = pow(y,x);
    printf("The result is %d\n",z);
    return 0;
}