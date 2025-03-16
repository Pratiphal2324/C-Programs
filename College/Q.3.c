// Q.3 WAP to find the difference of two entered numbers by user.
#include <stdio.h>
int main(){
    int a,b,diff;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    diff = a-b;
    printf("The difference is %d\n",diff);
    return 0;
}