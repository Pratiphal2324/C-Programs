#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char word[20];
	printf("Enter a word: ");
	scanf("%s",word);
	puts(strrev(word));
	return 0;
}

