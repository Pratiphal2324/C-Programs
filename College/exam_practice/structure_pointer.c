//WAP to create a structure called student with name, roll, percentage. Input a record of student and display it using pointer.
#include<stdio.h>
struct student{
    char name[20];
    int roll;
    float per;
};
int main(){
    struct student s;
    struct student *ptr;
    ptr = &s;
    printf("Enter name, roll, percentage: \n");
    scanf("%s%d%f",ptr->name,&ptr->roll,&ptr->per);
    printf("\nThe input Record is:\n");
    printf("Name: %s\nRoll no: %d\nPercentage: %f",ptr->name,ptr->roll,ptr->per);
    return 0;
}