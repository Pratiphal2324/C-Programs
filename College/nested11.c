/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/
#include<stdio.h>
int main(){
    int i,j, a=1;
    for (i=1 ; i<=5 ; i++){
        for(j=1; j<=i; j++){
            printf("%d\t",a);
            a = (a==0)? 1 : 0;
        }
        printf("\n");
        a = (i%2==0)? 1 : 0;
    }
    return 0;
}