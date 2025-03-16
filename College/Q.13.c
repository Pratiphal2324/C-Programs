// Q.13 WAP to calculate area and volume of sphere (use the concept of symbolic constant)
#include <stdio.h>
#define pi 3.14
int main(){
    float r, area, volume;
    printf("Enter the radius of sphere: ");
    scanf("%f",&r);
    area = 4*pi*r*r;
    volume = 4*pi*r*r*(r/3);
    printf("Area = %f\nVolume = %f",area,volume);
    return 0;
} 