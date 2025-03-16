// Q.24 WAP to find max of 2 numbers using conditional operator.
#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    max = (a>=b)? a : b;
    printf("The maximum number is %d\n",max);
    return 0;
}