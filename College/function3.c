#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Undefined\n");
    }else{
    printf("%d! = %d\n",n,fact(n));
    }
    return 0;
}
int fact(int num){
    if(num==1){
        return 1;
    }else{
        return num*fact(num-1);
    }
}