#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    int arr[10],i;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the number %d element in the list : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Your List is as follows : \n");
    for (int j = 1; j <= 10; j++)
    {
        printf("%d. %d\n",j,arr[j]);
    }
    return 0;
}