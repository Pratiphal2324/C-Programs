/*
    Q.36 WAP to calculate the electricity bill consumed.
    1st 100 units = Rs.8/unit
    Next 200 units = Rs.12/unit
    Beyond 300 units = Rs.15/unit
    Meter charge = Rs.50
*/
#include<stdio.h>
int main(){
    float prev, curr, mcharge = 50, amount, unit;
    printf("Enter the previous unit: ");
    scanf("%f",&prev);
    printf("Enter the current unit: ");
    scanf("%f",&curr);
    unit = curr-prev;
    if(unit>=0 && unit<=100){
        amount = unit*8 + mcharge;
    }
    else if(unit>100 && unit<=300){
        amount = 800 + (unit-100)*12 + mcharge;
    }
    else{
        amount = 3200 + (unit-300)*15 + mcharge;
    }
    printf("The total electricity bill consumed is %f\n",amount);
    return 0;
}