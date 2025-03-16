#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // WAP to count 'd' or 'b' from a word or a sentence.
    char string[100];
    int c = 0;
    printf("Enter a sentence: ");
    scanf("%s",string);
    for (int i = 0; i < strlen(string) - 1; i++)
    {
        switch (string[i])
        {
        case 'd':
        case 'b':
            c++;
            break;
        default:
            break;
        }
    }
    printf("%d", c);
    return 0;
}