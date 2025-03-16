// WAP to make strlen function without using string handling function.
#include<stdio.h>
int len(char str[100]);
char rev(char str[100]);
int main(){
    char str[100],b[100];
    int l,flag=1,i;
    printf("Enter a string: ");
    scanf("%s",&str);
    l=len(str);
    for(i=0;i<l;i++){
        b[i] = str[l-1-i];
    }
    for(i=0;i<l;i++){
        if(b[i]!=str[i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Pallindrome\n");
    }
    else{
        printf("Not Pallindrome");
    }
    return 0;
}
int len(char str[100]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
