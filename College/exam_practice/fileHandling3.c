// WAP to create a structure called student with name, roll, faculty.Input the information of student and write it to a file student.dat and display the information after reading from file.
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[20];
    int roll;
    char faculty[50];
};
int main(){
    struct student s;
    struct student p;
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enter roll no: ");
    scanf("%d",&s.roll);
    printf("Enter faculty: ");
    scanf("%s",s.faculty);
    FILE *fp;
    fp = fopen("student.dat","wb+");
    if(fp==NULL){
        printf("File cannot be opened\n");
        exit(0);
    }
    fwrite(&s,sizeof(s),1,fp);
    rewind(fp);
    fread(&p,sizeof(p),1,fp);
    printf("The data from file is:\n");
    printf("Name : %s, Roll : %d, Faculty : %s",p.name,p.roll,p.faculty);
    fclose(fp);
    return 0;
}