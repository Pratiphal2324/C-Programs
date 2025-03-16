#include <stdio.h>
char pst(int i, int j)
{
    char c;
    if ((i == 1 && (j == 5 || j == 7)) || (i == 2 && j == 6))
        return '*';
    if (i == 1)
        c = (j == 2 || j == 10) ? '*' : ' ';
    if (i == 2 || i == 3)
        c = (j == 1 || j == 11) ? '*' : ' ';
    if (i >= 4 && i <= 7)
        c = (j == i - 2 || j == 14 - i) ? '*' : ' ';
    if (i == 8)
        c = (j == 6) ? '*' : ' ';
    return c;
}
int main()
{
    // int a;
    // printf("Enter the width of the heart: ");
    // scanf("%d", &a);
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            printf("%c", pst(i, j));
        }
        printf("\n");
    }
    return 0;
}