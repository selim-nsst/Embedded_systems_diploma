/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: FreeComp
 */

#include <stdio.h>
#include "string.h"

int main ()
{
	char text[100];
	char reversed[100];
	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	int l = strlen(text);
	int i, j;
	for (i = l - 1, j = 0; i >= 0; --i, ++j){
		reversed[j] = text[i];
	}
	reversed[j] = '\0';
	printf("Reversed string is: %s", reversed);


	return 0;
}

