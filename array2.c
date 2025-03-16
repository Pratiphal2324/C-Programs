#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    int i,arr[100000],n=1,o=0,p=0;
    float a;
    while (1)
    {
        printf("Enter '0' to display the result and quit.\n");
        printf("Enter the number %d element : ",n);
        scanf("%d",arr[o]);
        switch (arr[o])
        {
        case 0:
            goto end;
            break;

        default:
            break;
        }
        p=p+arr[o];
        n++;
        o++;
    }
    end:
    a=o;
    printf("The sum of all the numbers is %d",p);
    printf("The average of all the numbers is %f",p/a);
    return 0;
}