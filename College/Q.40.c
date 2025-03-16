// Q.40 WAP to find whether an entered year is leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if((year%4 == 0 && year%100 != 0) || year%400 ==0){
        printf("Leap year!\n");
    }
    else{
        printf("Not Leap year!\n");
    }
    return 0;
}