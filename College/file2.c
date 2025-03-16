#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char name[100], address[100];
    int roll, age;
    fp = fopen("student.txt","w+");
    if(fp==NULL){
        printf("File cannot be opened");
        exit(0);
    }
    printf("Enter name, roll, address, age: ");
    scanf("%s%d%s%d",&name,&roll,&address,&age);
    fprintf(fp,"Name = %s\tAddress = %s\tRoll = %d\tAge = %d",name, address, roll, age);
    rewind(fp);
    printf("Data from file:\n");
    fscanf(fp,"%s%s%d%d",&name,&address,&roll,&age);
    printf("Name = %s\nAddress = %s\nRoll = %d\nAge = %d",name,address,roll,age);
    fclose(fp);
    return 0;
}