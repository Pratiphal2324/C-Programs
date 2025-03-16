// Q.14 WAP to input weight in gram and convert it to kg and gram
#include <stdio.h>
int main(){
    int g, kg, grams;
    printf("Enter weight in gram: ");
    scanf("%d",&g);
    kg = g/1000;
    grams = g % 1000;
    printf("The weight is %d kg and %d grams.",kg, grams);
    return 0;
}