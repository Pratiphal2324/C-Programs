/* Q.36 WAP to read the temperature in Fahrenheit and display the messages as:
    "Nice Day!" : temperature>60 && temperature<80
    "Cold Day!" : temperature<=60
    "Hot day!"  : temperature>=80
*/
#include<stdio.h>
int main(){
    float fa;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fa);
    if(fa>60 && fa<=80){
        printf("Nice Day!");
    }
    else if(fa>80){
        printf("Hot Day!");
    }
    else{
        printf("Cold day!");
    }
    return 0;
}