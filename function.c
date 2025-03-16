#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int hello(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The number is %d.",hello(n));
    return 0;
}
int hello(int n){
    return n;
}

