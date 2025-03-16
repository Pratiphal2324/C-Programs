#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    char c;
    int a;
    printf("Enter side of square: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            c = ((i == 1 || i == a) || (j == 1 || j == a)) ? '*' : ' ';
            printf("%c\t", c);
        }
        printf("\n\n\n");
    }
    return 0;
}