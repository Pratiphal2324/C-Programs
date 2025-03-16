// Q.44. WAP to print n natural numbers.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i = 0;
    while(i<n){
        printf("%d\n",i+1);
        i++;
    }
    return 0;
}