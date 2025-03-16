#include<stdio.h>
int armstrong(int n);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("%d is an armstrong number\n",num);
    }
    else{
        printf("%d is not an armstrong number\n",num);
    }
    return 0;
}
int armstrong(int n){
    int s=0,r,temp;
    temp = n;
    while(temp!=0){
        s+=(temp%10)*(temp%10)*(temp%10);
        temp=temp/10;
    }
    if(s==n){
        return 1;
    }
    else{
        return 0;
    }
}