#include<stdio.h>
#include<stdlib.h>
int c = 0;
void count(){
    c++;
}
int main(){
    count();
    printf("%d", c);
    return 0;
}