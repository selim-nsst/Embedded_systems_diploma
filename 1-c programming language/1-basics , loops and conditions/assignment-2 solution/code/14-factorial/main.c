#include <stdio.h>

int main()
{
	int n;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	if (n < 0) printf("Error!! Factorial of negative number doesn't exist.");
	else if (n <= 1) printf ("Factorial = %d", 1);
	else{
		long long i,fac = 1;
		for (i = 1; i <= n ;++i){
			fac *= i;
		}
		printf ("Factorial = %d", fac);
	}

	return 0;
}

