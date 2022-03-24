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
	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	int i;
	for (i = 0; text[i] != 0; ++i);
	printf("Length of string: %d", i);


	return 0;
}


