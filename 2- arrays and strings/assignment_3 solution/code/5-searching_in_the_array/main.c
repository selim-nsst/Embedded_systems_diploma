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
	int n, element;

	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; ++i){
		if (i == 0) arr[i] = 11;
		else arr[i] = 11 + arr [i -1];
		printf("%d ", arr[i]);
	}
	printf("\nEnter the elements to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);

	for (i = 0; i < n; ++i){
		if( element == arr[i]){
			printf("Number found at location: %d", i + 1);
			break;
		}
	}
	if (i == n) printf("Number is not located in the array.");
	return 0;
}


