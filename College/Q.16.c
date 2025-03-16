// Q.16 WAP to input age in no. of days and convert into years, months and days
#include <stdio.h>
int main(){
    int total, years, months, days;
    printf("Enter age in no. of days: ");
    scanf("%d",&total);
    years = total/365;
    months = (total-years*365)/30;
    days = total-years*365-months*30;
    printf("%d years, %d months, %d days\n", years, months, days);
    return 0;
}s