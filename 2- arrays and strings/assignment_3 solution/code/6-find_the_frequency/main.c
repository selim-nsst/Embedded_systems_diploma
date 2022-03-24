/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main ()
{
	char text[100];
	char c;
	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	int i, count = 0;
	for(i = 0; text[i] != 0; ++i){
		if (text[i] == c){
			count++;
		}
	}
	printf("Frequency of %c = %d ", c, count);

	return 0;
}


