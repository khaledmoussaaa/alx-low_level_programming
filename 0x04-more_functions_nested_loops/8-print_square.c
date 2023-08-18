#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: input function
 *
 * Return: 0
 */

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar('#');
		_putchar('\n');
	}
}
