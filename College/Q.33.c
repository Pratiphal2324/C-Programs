// Q.33 WAP to find the maximum of three numbers using nested if else.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is maximum.",a);
        }
        else{
            printf("%d is maximum.",c);
        }
    }
    else{
        if(b>c){
            printf("%d is maximum.",b);
        }
        else{
            printf("%d is maximum.",c);
        }
    }
    return 0;
}