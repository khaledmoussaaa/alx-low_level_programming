#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: input function
 * @...: integers
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum;
	va_list array;

	if (n == 0)
		return (0);
	va_start(array, n);
	sum = 0;
	while (i--)
		sum += va_arg(array, int);
	va_end(array);
	return (sum);
}
