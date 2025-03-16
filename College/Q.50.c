// WAP to find sum of all odd and even numbers upto n terms using do while loop
#include<stdio.h>
int main(){
    int n, i = 1, os = 0, es = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    do{
        if(i%2==0){
            es+=i;
        }
        else{
            os+=i;
        }
        i++;
    }while(i<=n);
    printf("Sum of %d even numbers = %d\nSum of %d odd numbers = %d\n",n,es,n,os);
    return 0;
}