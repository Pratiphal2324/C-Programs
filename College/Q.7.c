// Q.7 WAP to convert temperature in fahrenheit to temperature in celsius.
#include <stdio.h>
int main(){
    float c, f;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&f);
    c = (f-32)/9*5;
    printf("Temperature in Celsius is %f degrees.\n",c);
    return 0;
}