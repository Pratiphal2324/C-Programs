#include<stdio.h>
int main(){
    int num,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        c=(num%i==0)?c+1:c;
        break;
    }
    if(c==0){
        printf("%d is prime number\n",num);
    }
    else{
        printf("%d is not prime number\n",num);
    }
    return 0;
}