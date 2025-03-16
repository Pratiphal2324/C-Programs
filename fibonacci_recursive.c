#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the fibonacci number to be displayed");
    scanf("%d", &n);
    printf("The fibonacci number in %d place is %d.", n, sum(n));
    return 0;
}
int sum(int n)
{
    switch (n)
    {
    case 1:
        return 1;
        break;

    case 2:
        return 1;
        break;

    default:
        return sum(n - 1) + sum(n - 2);
        break;
    }
}
