#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int recursive(int n)
{
    return (n == 0 || n == 1) ? 1 : n * recursive(n - 1);
}
int main()
{
    int z = 0, a[100], i = 0;
    while (1)
    {
        printf("Enter the %dth integer or Enter 0 to exit : ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break;
        }
        else
        {
            z++;
            i++;
        }
    }
    printf("Sn.\t\t\tNumbers\t\t\tFactorials\n");
    for (int i = 0; i < z; i++)
    {
        printf("%d\t\t\t%d\t\t\t%d\n", i + 1, a[i], recursive(a[i]));
    }
    return 0;
}
