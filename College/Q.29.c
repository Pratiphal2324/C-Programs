// Q.29 WAP to find if the entered number is positive or negative.
#include<stdio.h>
int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a>=0){
        printf("Positive number!\n");
    }
    else{
        printf("Negative number!\n");
    }
    return 0;
}