// WAP to input a string to a file and print it after reading from the file.
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char str[100],str1[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    fp = fopen("myFile.txt","w+");
    if(fp==NULL){
        printf("File cannot be opened\n");
        exit(0);
    }
    fputs(str,fp);
    rewind(fp);
    fgets(str1,100,fp);
    printf("%s",str1);
    fclose(fp);
    return 0;
}