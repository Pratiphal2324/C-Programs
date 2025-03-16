/*
    1 1 1 1
    1 1 1 1
    1 1 1 1
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("1\t");
        }
        printf("\n");
    }
    return 0;
}