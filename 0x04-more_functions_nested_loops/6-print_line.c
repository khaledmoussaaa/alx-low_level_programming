#include "main.h"

/**
 * print_line - prints num from 0 to 9
 *
 * @n: input function
 * Return: 1
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
