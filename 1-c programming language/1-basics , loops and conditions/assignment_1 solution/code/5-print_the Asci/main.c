/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main(){
	char x;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x);
	printf("ASCII value of: %c = %d", x ,x);
	return 0;
}



