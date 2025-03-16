// Q.6 WAP to convert temperature in celsius to temperature in fahrenheit.
#include <stdio.h>
int main(){
    float c, f;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&c);
    f = c * 1.8 + 32;
    printf("Temperature in Fahrenheit is %f degrees.\n",f);
    return 0;
}