// Q.4 WAP to find area and perimeter of circle
#include <stdio.h>
int main(){
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    perimeter = 3.14 * radius * 2;
    printf("Area = %f \nPerimeter = %f\n",area, perimeter);
    return 0;
}