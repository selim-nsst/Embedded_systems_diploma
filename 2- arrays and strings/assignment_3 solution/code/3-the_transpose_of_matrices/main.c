/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main()
{
	int m[100][100], trans[100][100];
	int r, c;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &r, &c);
	printf("Enter elements of matrix:\n");
	int i, j;
	for (j = 0; j < r; ++j){
		for(i = 0; i < c; ++i){
			printf("Enter elements a%d%d: ", j+1, i+1);
			fflush(stdin);fflush(stdout);
			scanf("%d", &m[j][i]);
		}
	}
	printf("Entered Matrix:\n");
	for (j = 0; j < r; ++j){
		for(i = 0; i < c; ++i){
			printf("%d ", m[j][i]);
		}
		printf("\n");
	}

	for (j = 0; j < r; ++j){
		for(i = 0; i < c; ++i){
			trans[i][j] = m[j][i];
		}
	}
	printf("Transpose of Matrix:\n");
	for (j = 0; j < c; ++j){
		for(i = 0; i < r; ++i){
			printf("%d ", trans[j][i]);
		}
		printf("\n");
	}
	return 0;
}


