/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include "stdio.h"

long calculate_factorial(int n);

int main(){
	int n;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	printf("Factorial of %d = %lu", n, calculate_factorial(n));
	return 0;
}

long calculate_factorial(int n){
	if (n <= 1){
		return 1;
	}
	return n * calculate_factorial(n - 1);
}


