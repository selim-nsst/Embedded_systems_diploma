/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main ()
{
	int arr[100];
	int new_arr[100];
	int n, inserted, loc;

	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; ++i){
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\nEnter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &inserted);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &loc);

	for (i = 0, j = 0; i < n; ++i, ++j){
		if( loc - 1 == i){
			new_arr[j] = inserted;
			++j;
		}
		new_arr[j] = arr[i];
	}
	for (i = 0; i < n + 1; ++i){
		printf("%d ", new_arr[i]);
	}


	return 0;
}


