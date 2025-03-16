// WAP to print sum of n natural numbers using do while loop
#include<stdio.h>
int main(){
    int i = 1, n, s=0;
    printf("Enter n: ");
    scanf("%d",&n);
    do{
        s+=i;
        i++;
    }while(i<=n);
    printf("Sum is %d\n",s);
    return 0;
}