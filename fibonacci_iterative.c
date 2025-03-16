#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int sum(int a, int b);
int main()
{
    int a, b, c;
    a = 1;
    b = 1;
    printf("%d, %d, ", a, b);
    for (int i = 1; i <= 10; i++)
    {
        c = sum(a, b);
        printf("%d, ", c);
        a = b;
        b = c;
    }
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
