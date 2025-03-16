#include<stdio.h>
int main(){
    int n, os = 0, es = 0, i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    do{
        if(i%2 == 0){
            es += i;
            i++;
        }
        else{
            os += i;
            i++;
        }
    }while(i<=n);
    printf("Sum of odd numbers = %d\nSum of even numbers = %d\n",os,es);
    return 0;
}