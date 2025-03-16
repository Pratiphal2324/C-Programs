#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int num1, num2, i, hcf, lcm, smaller;
/*printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
for (i = 0; i <= num1; i++)
{
    if (num1 % i == 0 && num2 % i == 0)
    {
        hcf = i;
    }
}
lcm = (num1 * num2) / hcf;
printf("%d", hcf);*/
int calculateHCF(int num1, int num2)
{
    int smaller = (num1 < num2) ? num1 : num2;
    int hcf = 1;

    for (int i = 1; i <= smaller; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    return hcf;
}
int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculateHCF(num1, num2);

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}