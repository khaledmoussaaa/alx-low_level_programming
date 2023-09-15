#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @n: input function
 * @separator: input function
 * @...: integers
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list array;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(array, n);
	while (i--)
	{
		printf("%s%s", (s = va_arg(array, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(array);
}
