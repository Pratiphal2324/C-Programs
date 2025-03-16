/* Q.37 WAP to read the annual salary of an employee and decide tax as follows:
    upto 1 lakh : tax = 0%
    upto 1 lakh 50 thousand : tax = 15%
    above 1 lakh 50 thousand : tax = 25%
*/
#include<stdio.h>
int main(){
    double salary;
    float tax;
    printf("Enter your salary: ");
    scanf("%lf",&salary);
    if(salary<=100000){
        tax = 0;
    }
    else if(salary>100000 && salary<=150000){
        tax = 0.15*salary;
    }
    else{
        tax = salary*0.25;
    }
    printf("Your tax is Rs. %f",tax);
    return 0;
}