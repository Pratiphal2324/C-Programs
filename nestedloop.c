#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    int i,j;
    for (i = 5; i >= 1; i--)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");    
    }
    return 0;
}