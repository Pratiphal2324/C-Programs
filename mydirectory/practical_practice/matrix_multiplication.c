#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    //WAP to ask for two 3*3 matrices and multiply them.
    int arr1[3][3], arr2[3][3], product[3][3], c = 0;
    printf("For First Matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the number in place [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("For Second Matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the number in place [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product[i][j] = product[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}