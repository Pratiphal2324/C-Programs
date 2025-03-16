#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>
int main ()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("The quotient of %d/%d is %f.",a,b,a/b);
    printf("The remainder of %d/%d is %f.",a,b,a%b);
    return 0;
}