/*
15.
Write a program that computes the factorial of a positive integer:
Enter a positive integer: 6
Factorial of 6: 720
(a) Use a short variable to store the value of the factorial. What is the largest value of n
for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using a long long variable instead (if your compiler supports the
long long type).
(e) Repeat part (a), using a float variable instead.
(f) Repeat part (a), using a double variable instead.
(g) Repeat part (a), using a long double variable instead.
In cases (e)–(g), the program will display a close approximation of the factorial, not neces-
sarily the exact value.
*/

#include <stdio.h>

int main(void)
{
	unsigned long n, i;

	// a) short
	short int factorial;

	// b) int
	//int factorial;

	// c) long
	//long factorial;

	// d) long long
	//long long factorial;

	// e) float
	//float factorial;

	// f) double
	//double factorial;

	// g) long double
	//long double factorial;

	printf("Enter a positive number: ");
	scanf("%lu", &n);

    while(n != 0)
	{
		factorial = 1.0L;

		for(i = n; i > 0; i--)
		{
			factorial *= i;
		}

		// a) short
		printf("Factorial of %lu: %hd\n", n, factorial);

		// b) int
		//printf("Factorial of %lu: %d\n", n, factorial);

		// c) long
		//printf("Factorial of %lu: %ld\n", n, factorial);

		// d) long long
		//printf("Factorial of %lu: %lld\n", n, factorial);

		// e) float
		//printf("Factorial of %lu: %f\n", n, factorial);

		// f) double
		//printf("Factorial of %lu: %f\n", n, factorial);

		// g) long double
		//printf("Factorial of %lu: %Lf\n", n, factorial);

		printf("\nEnter a positive number: ");
		scanf("%lu", &n);
	}

	return 0;
}

/**
 *
 * a) For a short, the largest value of n = 7
 *
 * b) For a int, the largest value of n = 12
 *
 * c) For a long, the largest value of n = 12
 * Note: long and int have the same size of 4 bytes on my machine :)
 *
 * d) For a long long, the largest value of n = 20
 *
 * e) For a float, the largest value of n = 34
 *
 * f) For a double, the largest value of n = 170
 *
 * g) For a long double, the largest value of n = 1754
 *
 *
 */
