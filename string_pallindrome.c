#include<stdio.h>
int main(){
    char str[100],i,c=0,isPallindrome=1;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        c++;
    }
    for(i=0;i<c/2;i++){
        if(str[i] != str[c-1-i]){
            isPallindrome = 0;
            break;
        }
    }
    if(isPallindrome){
        printf("Pallindrome string\n");
    }
    else{
        printf("Not Pallindrome string\n");
    }
    return 0;
}