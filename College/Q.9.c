// Q.9 WAP to input ASCII code and print its equivalent character
#include <stdio.h>
int main(){
    int c;
    printf("Enter any ASCII code: ");
    scanf("%d",&c);
    printf("The equivalent character of %d = %c\n",c,c);
    return 0;
}