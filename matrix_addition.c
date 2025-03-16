#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sum()
{
    int A[2][2], B[2][2], RES[2][2], a;
    printf("For Addition, type '1'.\nFor subtraction, type '2'.");
    scanf("%d", &a);
    char c;
    for (int i = 0; i < 2; i++)
    {
        c = !i?'A':'B';
        printf("For the elements of Matrix %c:\n", c);
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter the number in [%d][%d] position : ", j + 1, k + 1);
                scanf("%d", (i == 0) ? &A[j][k] : &B[j][k]);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a == 1 || a == 2)
                RES[i][j] = a == 1 ? A[i][j] + B[i][j] : A[i][j] - B[i][j];
                printf("%d\t", RES[i][j]);
        }
        printf("\n");
    }
}
    int main(){
        sum();
        return 0;
}