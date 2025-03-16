// Q.30 A company pays its employees on hourly basis. Employees get Rs. 100 per hour for 8   hours and Rs. 120 per hour if it exceeds 8 hours. Calculate the total salary of an employee if the working hours is provided by the user.
#include<stdio.h>
int main(){
    float hrs, result;
    printf("Enter your working hours: ");
    scanf("%f",&hrs);
    if(hrs<=8.0){
        result = 100*hrs;
    }
    else{
        result = 100*8 + 120*(hrs-8);
    }
    printf("Your total salary is Rs. %f\n",result);
}