#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
int n,i;
i=1;
printf("Enter the number you want multiplication table of : \n");
scanf("%d",&n);
printf("Multiplication Table of %d : \n",n);
for (size_t i = 1; i <=10; i++)
{
    printf("%d * %d = %d\n\a",n,i,n*i);
}
return 0;
} 
