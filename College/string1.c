// WAP to make strlen function without using string handling function.
#include<stdio.h>
int len(char str[100]);
int main(){
    char str[100],temp;
    int l,range,i;
    printf("Enter a string: ");
    scanf("%s",str);
    l=len(str);

    printf("The length of given string is %d\n",l);
    if(l%2==0){
        range = l/2;
    }
    else{
        range = (l/2)+1;
    }
    for(i=0;i<range-1;i++){
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
        i++;
    }
    printf("The reversed string : ");
    i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
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
