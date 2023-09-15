#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: input function
 * @separator: input function
 * @...: integers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list array;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(array, n);
	while (i--)
		printf("%d%s", va_arg(array, int), i ? (separator ? separator : "") : "\n");
	va_end(array);
}
