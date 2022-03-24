/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main(){
	float a[100];
	int n;
	printf("Enter the elements of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	int i;
	float sum = 0;
	for(i = 0; i < n; ++i){
		printf("%d. Enter number: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("Average = %f", sum / n);
	return 0;
}


