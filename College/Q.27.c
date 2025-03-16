// Q.27 WAP to find max of 2 entered numbers.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is the max.",a);
    }
    else{
        printf("%d is the max.",b);
    }
    return 0;
}