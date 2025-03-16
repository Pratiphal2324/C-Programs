// WAP to create a stucture with records of n students of roll, name, address, faculty, dob. Save it to a file called student.dat and display the information of those students whose faculty is engineering.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dob{
    int year;
    int month;
    int day;
};
struct student{
    int roll;
    char name[20];
    char add[50];
    char faculty[50];
    struct dob d;
};
int main(){
    struct student s[100];
    int n;
    printf("How many students?: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Roll,Name,Address,Faculty,birth year,month,day: \n");
        scanf("%d%s%s%s%d%d%d",&s[i].roll,s[i].name,s[i].add,s[i].faculty,&s[i].d.year,&s[i].d.month,&s[i].d.day);
    }
    FILE *fp;
    fp = fopen("students.dat","wb+");
    if(fp==NULL){
        printf("File cannot be opened\n");
        exit(0);
    }
    for(int i=0;i<n;i++){
        fwrite(&s[i],sizeof(s[i]),1,fp);
    }
    rewind(fp);
    printf("The Required Record is:\n");
    for(int i=0;i<n;i++){
        if(strcmp(s[i].faculty,"Engineering")==0){
            fread(&s[i],sizeof(s[i]),1,fp);
            printf("Roll: %d, Name: %s, Address: %s, Faculty: %s, DOB: %d/%d/%d\n",s[i].roll,s[i].name,s[i].add,s[i].faculty,s[i].d.year,s[i].d.month,s[i].d.day);
        }
    }
    fclose(fp);
    return 0;
}