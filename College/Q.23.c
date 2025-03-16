// Q.23 WAP to ask for your height in feet and inches and your weight in kg. Then, convert your height in feet and inches to your height in inches. Then, convert your height in inches to meter by multiplying it with 0.0254. Now, divide your weight by square of your height in meter and finally assign the output to variable ratio. Use symbolic constant to represent various conversion factors.
#include<stdio.h>
#define feetToInches 12
#define inchToMeter 0.0254
int main(){
    float infeet, ininch, inweight, heightInMeter, BMI;
    printf("Enter your height in feet and inches: ");
    scanf("%f %f",&infeet,&ininch);
    printf("Enter your weight in kg: ");
    scanf("%f",&inweight);
    heightInMeter = (infeet*feetToInches + ininch)*inchToMeter;
    BMI = inweight/(heightInMeter*heightInMeter);
    printf("Your BMI is %f\n",BMI);
    return 0;
}