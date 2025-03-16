// Q.28 WAP to find if the entered number is even or odd.
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Even number!\n");
    }
    else{
        printf("Odd number!\n");
    }
    return 0;
}