/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main(){
	float a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);

	a = b + a;
	b = a - b;
	a = a - b;

	printf("After swapping, value of a = %g\n", a);
	printf("After swapping, value of b = %g", b);
	return 0;
}




