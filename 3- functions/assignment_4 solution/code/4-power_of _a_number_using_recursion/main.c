/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include "stdio.h"
#include "string.h"

long calculate_power(int n, int p);

int main()
{
	int n, p;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &p);
	printf("%d^%d = %lu", n, p, calculate_power(n, p));
	return 0;
}

long calculate_power(int n, int p){
	if(p == 1) return n;
	return n * calculate_power(n, p - 1);
}


