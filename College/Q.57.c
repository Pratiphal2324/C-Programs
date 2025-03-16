// WAP to generate fibonacci series upto n terms.
#include<stdio.h>
int fib(int n);
int main(){
    int n,a,b,c;
    printf("Enter no. of terms to be printed in the Fibonacci Series: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("%d\t%d\t",a,b);
    for (int i=0; i<n-2; i++){
        c = a+b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}