/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: FreeComp
 */

#include "stdio.h"
#include "string.h"

void revesrse_sentence(char s[100], int l);

int main()
{
	char s[100];
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(s);
	revesrse_sentence(s, strlen(s));
	return 0;
}

void revesrse_sentence(char s[100], int l){
	if(l == 0){
		return;
	}
	printf("%c",s[--l]);
	revesrse_sentence(s, l);
}

