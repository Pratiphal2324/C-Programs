// Q.32 WAP to find whether the entered number is exactly divisible by 5, but not by 11.
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%5==0 && a%11!=0){
        printf("%d is exactly divisible by 5, but not by 11.\n",a);
    }
    else{
        printf("%d is not exactly divisible by 5 but not by 11\n",a);
    }
    return 0;
}