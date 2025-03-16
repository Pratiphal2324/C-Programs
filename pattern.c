#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*To print the following pattern :
    1
    3 5
    7 9 11
    13 15 17 19
    21 23 25 27 29
    */
int main()
{
    int c=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", c);
            c+=2;
        }
        printf("\n");
    }
    return 0;
}