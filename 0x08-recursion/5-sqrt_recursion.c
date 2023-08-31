#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: input function
 *Return: factorial
*/

int _sqrt_recursion(int n)
{
	return (squareRoot(n, 1));
}

/**
 *squareRoot - returns square root or -1 if not hava square
 *@n: input function
 *@v: input function
 *Return: root
*/

int squareRoot(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (squareRoot(n, v + 1));
	else
		return (-1);
}
