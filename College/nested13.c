/*
    0 1 1 1 1
    2 0 2 2 2
    3 3 0 3 3
    4 4 4 0 4
    5 5 5 5 0
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==j){
                printf("0\t");
                continue;
            }
            printf("%d\t",i);
        }
        printf("\n");
    }
    return 0;
}