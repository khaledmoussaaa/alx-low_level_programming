#include "main.h"

/**
 *is_prime_number - returns the natural square root of a number.
 *@n: input function
 *@v: input function
 *Return: factorial
*/
int checkPrime(int n, int v);
int is_prime_number(int n)
{
	return (checkPrime(n, 2));
}

/**
 *checkPrime - check prime number
 *@n: input function
 *@v: input function
 *Return: root
*/

int checkPrime(int n, int v)
{
	if (v >= n && n >= 2)
		return (1);
	else if (n % v == 0 || n <= 1)
		return (0);
	else
		return (checkPrime(n, v + 1));
}
