#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    char word[100], temp;
    // printf("\n%d\n", strlen(word));
    printf("Enter a word or sentence : ");
    gets(word);
    // printf("%d", strlen(word));
    for (int i = 0; i < strlen(word) - 1; i++)
    {
        for (int j = 0; j < strlen(word) - 1; j++)
        {
            if (word[j] > word[j + 1])
            {
                temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }
    puts(word);
    return 0;
}