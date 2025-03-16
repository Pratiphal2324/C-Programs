#include<stdio.h>
#include <string.h>
int main(){
    char a[20];
    printf("Enter your name: ");
    scanf("%s",&a);
    strlwr(a);
    if(strcmp(a,"animesh")==0){
        printf("You are a Pedophile\n");
    }
    else{
        printf("Great name!\n");
    }
    return 0;
}