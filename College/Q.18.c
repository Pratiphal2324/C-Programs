// Q.18 WAP to input salary of employee and calculate daily allowance(DA), travelling allowance (TA), and tax. Given that DA = 10%, TA = 12% and tax is 5%. Also calculate the net salary
#include <stdio.h>
int main(){
    float salary, net, da, ta, tax;
    printf("Enter your salary: ");
    scanf("%f",&salary);
    da = (0.1)*salary;
    ta = (0.12)*salary;
    tax = (0.05)*salary;
    net = salary - da - ta - tax;
    printf("Net salary is %f",net);
}