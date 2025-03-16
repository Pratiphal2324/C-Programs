#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // WAP to print input word in reverse order.
    char word[20], temp[20];
    int c = 0, j;
    printf("Enter a word: ");
    scanf("%s", word);
    // printf("%c", word[strlen(word) - 1]);
    strcpy(temp, word);
    // puts(temp);
    strrev(word);
    // puts(word);
    printf((strcmp(word, temp) == 0) ? "Pallindrome" : "Not Pallindrome");
    return 0;
}