// Q.22 WAP to find whether the entered number is positive or negative using conditional operator.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    (num>=0)?printf("Positive\n"):printf("Negative\n");
    return 0;
}