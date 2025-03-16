#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>
int main()
{
    int roll;
    char name[20], addr[20];
    // FILE *fptr;
    // fptr = fopen("std.txt", "w");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("for student %d: ", i + 1);
    //     printf("\nEnter roll number: ");
    //     scanf("%d", &roll);
    //     printf("\nEnter name: ");
    //     scanf("%s", name);
    //     printf("\nEnter address\n");
    //     scanf("%s", addr);
    //     fprintf(fptr, "%d\t%s\t%s\n", roll, name, addr);
    // }
    // fclose(fptr);
    FILE *file;
    file = fopen("std.txt", "r");
    while(fscanf(file, "%d %s %s", &roll, name, addr)!=EOF){
        printf("Roll no: %d Name: %s Address: %s", roll, name, addr);
        printf("\n");
    }
    fclose(file);
}
