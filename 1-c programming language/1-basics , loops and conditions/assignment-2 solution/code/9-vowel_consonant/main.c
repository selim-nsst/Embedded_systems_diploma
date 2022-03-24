/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */

#include <stdio.h>

int main()
{
	char letter;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &letter);
	if (letter == 'i' || letter == 'e' || letter == 'o' || letter == 'a' || letter == 'u'){
		printf("%c is vowel.", letter);
	}
	else{
		printf("%c is consonant.", letter);
	}

	return 0;
}

