#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    // WAP to count all the alphabet, number and symbols from a sentence or string.
    char string[100];
    int alphabets = 0, numbers = 0, symbols = 0;
    printf("Enter a string: ");
    gets(string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (isalpha(string[i]))
        {
            alphabets++;
        }
        else if (isdigit(string[i]))
        {
            numbers++;
        }
        else if (!isspace(string[i]))
        {
            symbols++;
        }
    }
    printf("Aplhabets : %d\nNumbers : %d\nSymbols : %d", alphabets, numbers, symbols);
    return 0;
}