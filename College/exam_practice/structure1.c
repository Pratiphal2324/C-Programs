#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int age;
    float per;
    char add[20];
};
int main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter age: ");
        scanf("%d",&s[i].age);
        printf("Enter percentage: ");
        scanf("%f",&s[i].per);
        printf("Enter address: ");
        scanf("%s",s[i].add);
    }
    for(int i=0;i<5;i++){
        if(strcmp(s[i].name,"Ram")==0){
            printf("\nThe Required Record is:\n");
            printf("Name: %s\nAge: %d\nPercentage: %f\nAddress: %s\n",s[i].name,s[i].age,s[i].per,s[i].add);
        }
    }
    return 0;
}