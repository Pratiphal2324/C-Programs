#include <stdio.h>
char pst(int a, int i, int j)
{
    char c;
    if (i >= 2 && i <= a)
        c = (j == (a + 1) - i || j == (a - 1) + i) ? '*' : ' ';
    if (i >= a + 1 && i <= 2 * a - 2)
        c = (j == i - (a - 1) || j == (3 * a - 1) - i) ? '*' : ' ';
    if (i == 1 || i == 2 * a - 1)
        c = (j == a) ? '*' : ' ';
    return c;
}
int main()
{
    int a;
    printf("Enter no. of rows in the upper triangle: ");
    scanf("%d", &a);
    for (int i = 1; i <= 2 * a - 1; i++)
    {
        for (int j = 1; j <= 2 * a - 1; j++)
        {
            printf("%c", pst(a, i, j));
        }
        printf("\n");
    }
    return 0;
}
