#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int calcFactorial(int num)
{
    return (num == 1) ? 1 : num * calcFactorial(num - 1);
}
int main()
{
    int arr[100], factorials[100], i = 1;
    printf("Enter the numbers(Press '0' to exit): \n");
    while (1)
    {
        printf("%d. ", i);
        scanf("%d", &arr[i - 1]);
        if (arr[i - 1] == 0)
            break;
        i++;
    }
    printf("Numbers\tFactorials\n");
    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("%d\t%d\n", arr[i], calcFactorial(arr[i]));
    }
    return 0;
}