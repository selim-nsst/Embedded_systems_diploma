/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */

#include <stdio.h>

int main()
{
	float a;
	printf("Enter a numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);

	if(a == 0) printf ("You entered zero.");
	else if (a > 0) printf("%.6g is positive", a);
	else printf("%.6g is negative", a);

	return 0;
}

