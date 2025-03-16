// WAP to make strlen function without using string handling function.
#include<stdio.h>
int len(char str[100]);
int main(){
    char str[100],rev[100],i=0;
    int l;
    printf("Enter a string: ");
    scanf("%s",str);
    l=len(str);
    printf("The length of given string is %d\n",l);
    while(str[i]!='\0'){
        rev[i] = str[l-1-i];
        i++;
    }
    printf("The reversed string is : ");
    for(i=0;i<l;i++){
        printf("%c",rev[i]);
    }
    printf("\n");
    return 0;
}
int len(char str[100]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
