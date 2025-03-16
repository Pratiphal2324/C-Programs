// Q.15 WAP to input age in years, months and days and convert into total no. of days
#include <stdio.h>
int main(){
    int years, months, days, total;
    printf("No. of years: ");
    scanf("%d",&years);
    printf("No. of months: ");
    scanf("%d",&months);
    printf("No. of days: ");
    scanf("%d",&days);
    total = years*365 + months * 30 + days;
    printf("You are %d days old.",total);
    return 0;
}