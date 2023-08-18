#include "main.h"

/**
 * print_numbers - prints num from 0 to 9
 *
 * Return: 1
 */

void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar(c + 48);
		c++;
	}
	_putchar('\n');
}
