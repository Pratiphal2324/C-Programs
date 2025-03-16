#include <stdio.h>
#include <stdlib.h>
int main()
{
    char n;
    printf("Input the subjects you have passed in ('m' for maths, 's' for science and 'ms' for both maths and science) : ");
    scanf("%c", &n);
    switch (n)
    {
    case "m":
        printf("Congratulations!!! You get $15 as a prize!! Keep it up!");
        break;
    case "s":
        printf("Congratulations!!! You get $15 as a prize!! Keep it up!");
        break;
    case "ms":
        printf("Congratulations!!! You get $45 as a prize!! Keep it up!");
        break;
    default:
        break;
    }
    return 0;
}