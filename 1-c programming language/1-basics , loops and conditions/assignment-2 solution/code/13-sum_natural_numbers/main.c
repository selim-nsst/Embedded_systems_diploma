/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main()

{
	int n;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	int i,sum = 0;
	for (i = 0; i <= n ;++i){
		sum += i;
	}
	printf ("sum = %d", sum);
	return 0;
}


