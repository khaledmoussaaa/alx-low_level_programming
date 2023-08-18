#include "main.h"

/**
 * print_triangle - prints a square, followed by a new line
 *
 * @size: input function
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
