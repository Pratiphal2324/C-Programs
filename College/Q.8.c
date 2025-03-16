// Q.8 WAP to input graphic character from keyboard and print its equivalent ASCII code
#include <stdio.h>
int main(){
    char c;
    printf("Enter any graphic character: ");
    scanf("%c",&c);
    printf("The equivalent ASCII value of '%c' = %d\n",c,c);
    return 0;
}