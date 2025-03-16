#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
// const int M = 3, N = 3;
void sum(int arr1[][3], int arr2[][3])
{
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nThe sum is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    // WAP to ask two 3*3 matrices and add them.
    int arr1[3][3], arr2[3][3];
    printf("For First Matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the number is place [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nFor Second Matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the number is place [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    sum(arr1, arr2);
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nThe sum is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}