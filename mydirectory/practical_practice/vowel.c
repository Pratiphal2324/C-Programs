#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    // WAP to count all the vowel letters of an input word or statement.
    char word[100];
    int c = 0;
    printf("Enter a word: ");
    gets(word);
    printf("%d", strlen(word));
    for (int i = 0; i < strlen(word); i++)
    {
        switch (word[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            c++;
            break;

        default:
            break;
        }
    }
    printf("There are %d vouwels in the word %s.", c, word);
    return 0;
}