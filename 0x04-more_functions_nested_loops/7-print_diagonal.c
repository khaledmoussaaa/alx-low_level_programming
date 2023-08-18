#include "main.h"

/**
 * print_diagonal - prints diagonal
 *
 * @n: input function
 *
 * Return: 1
 */

void print_diagonal(int n)
{
	int dSign, line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dSign = 1; dSign <= n; dSign++)
		{
			for (line = 1; line <= dSign; line++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
