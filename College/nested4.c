/*
    1 1 1
    2 2 2
    3 3 3
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t",i+1);
        }
        printf("\n");
    }
    return 0;
}