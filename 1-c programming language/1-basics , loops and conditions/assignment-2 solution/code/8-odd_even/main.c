/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: FreeComp
 */

#include <stdio.h>

int main()
{
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	if (num == 0){
		printf("The number you entered is Zero");
	}
	else if(num % 2 == 0){
		printf("%d is even", num);
	}
	else{
		printf("%d is odd", num);
	}

	return 0;
}

