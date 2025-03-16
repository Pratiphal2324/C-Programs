// Q.17 WAP to use sizeof() function operator to find memory allocated by different data types
#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    char d;
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(b));
    printf("%ld\n", sizeof(c));
    printf("%ld\n", sizeof(d));
}