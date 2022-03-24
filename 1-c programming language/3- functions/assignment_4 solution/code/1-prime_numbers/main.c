/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include "stdio.h"
#include "stdbool.h"

bool is_prime(int n);

int main()
{
	int start, end;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &start, &end);
	int i;
	printf("Prime numbers between %d and %d are: ", start, end);
	for (i = start; i <= end; ++i){
		if(is_prime(i)){
			printf("%d ", i);
		}
	}
	return 0;
}

bool is_prime(int n){
	int i;
	for (i = 2; i < n/2; ++i){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}


