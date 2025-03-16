// WAP to find factorial of the given number
#include<stdio.h>
int main(){
    int n,i;
    double f=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("Factorial of %d is %lf\n",n,f);
    return 0;
}