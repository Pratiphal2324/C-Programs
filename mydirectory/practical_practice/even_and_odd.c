#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>
int main()
{
    // WAP to print even and odd numbers seperately from 10 input numbers.
    int arr[10], odd[10], even[10], e = 0, o = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        // arr[i] % 2 == 0 ? even[c + 1] = arr[i] : odd[c + 1] = arr[i];
        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }
    printf("\nThe even numbers are :\n");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nThe odd numbers are :\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}