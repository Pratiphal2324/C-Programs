/*
    5 4 3 2 1 
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=0 ; i<5 ; i++){
        for(j=5 ; j>=1 ; j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
}