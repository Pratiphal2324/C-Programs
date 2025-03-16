// WAP to read name, roll, address and age of students and write to a file student.txt and display the information after reading from file.
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char name[20],add[50];
    int roll,age;
    fp = fopen("students.txt","w+");
    if(fp==NULL){
        printf("Unable to open file\n");
    }
    printf("Enter name,roll,address,age: \n");
    scanf("%s%d%s%d",name,&roll,add,&age);
    fprintf(fp,"Name : %s, Roll : %d, Address : %s, Age : %d",name,roll,add,age);
    rewind(fp);
    printf("Data from file:\n");
    fscanf(fp,"%s%d%s%d",name,&roll,add,&age);
    printf("Name : %s, Roll : %d, Address : %s, Age : %d",name,roll,add,age);
    fclose(fp);
    return 0;
}   