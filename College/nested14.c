/*
    *
    * *
    * * *
    * * * *
    * 
    * *
    * * *
    * * * *
    * 
    * 
    * 
*/
#include<stdio.h>
int main(){
    int i,j,c=0;
    do{
        for(i=1; i<=4; i++){
            for(j=0; j<i; j++){
                printf("* ");
            }
            printf("\n");
        }
        c++;
    }while(c<2);
    for(i=0; i<3; i++){
        printf("*\n");
    }
    return 0;
}