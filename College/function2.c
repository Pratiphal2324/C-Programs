#include<stdio.h>
int fib(int);
int n,a=0,b=1,c;
int main(){
    printf("How many terms? ");
    scanf("%d",&n);
    if(n==1){
        printf("0\n");
    }else if(n==2){
        printf("1\n");
    }else{
        printf("%d %d ",a,b);
        for(int i=0;i<n-2;i++){
            printf("%d ",fib(i));
        }
    }
    printf("\n");
    return 0;
}
int fib(int num){
        c=a+b;
        a = b;
        b = c;
        return c;
}