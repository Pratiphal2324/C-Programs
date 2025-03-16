#include<stdio.h>
void fib(int);
int main(){
    int num;
    printf("Upto how many terms? ");
    scanf("%d",&num);
    fib(num);
    return 0;
}
void fib(int n){
    int a=0,b=1,c,i;
    if(n==1){
        printf("0\n");
    }
    else{
        printf("%d\t%d\t",a,b);
        for(i=0;i<n-2;i++){
            c = a+b;
            printf("%d\t",c);
            a=b;
            b=c;
        }
    }
}