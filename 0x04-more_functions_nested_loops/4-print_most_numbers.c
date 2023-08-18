#include "main.h"

/**
 * print_most_numbers - prints num from 0 to 9
 *
 * Return: 1
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
			_putchar(c + 48);
	}
	_putchar('\n');
}
