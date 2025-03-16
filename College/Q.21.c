// Q.21 WAP to find whether the entered number is odd or even using conditional operator
#include<stdio.h>
int main(){
    int a;
    printf("Enter any integer: ");
    scanf("%d",&a);
    (a%2==0)? printf("Even\n"):printf("Odd\n");
    return 0;
}