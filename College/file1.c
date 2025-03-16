#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char str[100];
    fp = fopen("myfile.txt","w+");
    if(fp==NULL){
        printf("File cannot be opened");
        exit(0);
    }
    printf("Enter some data: ");
    scanf("%s",str);
    fputs(str, fp);
    rewind(fp);
    printf("\nData from file: ");
    fgets(str,100,fp);
    puts(str);
    fclose(fp);
    return 0;
}