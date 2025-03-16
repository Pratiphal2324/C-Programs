/*
    3 2 1
    3 2 1
    3 2 1
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=3; i>=1; i--){
        for(j=3; j>=1; j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}