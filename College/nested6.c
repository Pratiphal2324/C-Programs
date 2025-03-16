/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d\t",i+1);
            if(j==i) break;
        }
        printf("\n");
    }
    return 0;
}