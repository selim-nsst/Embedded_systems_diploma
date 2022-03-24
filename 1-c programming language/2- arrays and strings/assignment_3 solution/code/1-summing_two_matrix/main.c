/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */

#include <stdio.h>

int main()
{
	float m1[2][2], m2[2][2];
	printf("Enter the elements of 1st matrix\n");
	int i, j;
	for(j = 0; j < 2; ++j){
		for(i = 0; i <2; ++i){
			printf("Enter a%d%d: ", j+1, i+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &m1[j][i]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(j = 0; j < 2; ++j){
		for(i = 0; i <2; ++i){
			printf("Enter b%d%d: ", j+1, i+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &m2[j][i]);
		}
	}

	printf("Sum Of Matrix\n");
	for(j = 0; j < 2; ++j){
		for(i = 0; i <2; ++i){
			printf("%.2f   ", m1[j][i] + m2[j][i]);
		}
		printf("\n");
	}

	return 0;
}

