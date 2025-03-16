#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // WAP to input 10 numbers and print them in ascending order.
    int arr[10], temp;
    char check;
    printf("Enter 'a' if you want ascending order and 'd' if you want descending order: ");
    scanf("%c", &check);
    for (int i = 0; i < 10; i++)
    {
        printf("Enter no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (check == 'd' ? arr[j] < arr[j + 1] : arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}