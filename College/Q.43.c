// Q.43 WAP to print your name n times, where value of n is provided by user
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i = 0;
    while(i<n){
        printf("My name is Pratiphal\n");
        i++;
    }
    return 0;
}