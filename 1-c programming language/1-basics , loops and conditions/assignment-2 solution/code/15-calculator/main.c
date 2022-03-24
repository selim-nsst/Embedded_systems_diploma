/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: FreeComp
 */
#include <stdio.h>

int main(){
	float a, b;
	char op;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &op);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a, &b);


	switch(op){
	case '+':
		printf("%.6g %c %.6g = %.6g", a, op, b ,a + b);
		break;
	case '-':
		printf("%.6g %c %.6g = %.6g", a, op, b ,a - b);
		break;
	case '*':
		printf("%.6g %c %.6g = %.6g", a, op, b ,a * b);
		break;
	case '/':
	{
		if(b == 0) printf("Error!! You cannot divide by zero");
		else printf("%.6g %c %.6g = %.6g", a, op ,b ,a / b);
	}
		break;
	default:
		printf("%c is not a supported operator", op);
	}

	return 0;
}


