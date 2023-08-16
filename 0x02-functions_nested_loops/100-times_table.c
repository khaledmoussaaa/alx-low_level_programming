#include "main.h"

/**
* print_times_table-  prints tables
*
* @n: input function
*/

void print_times_table(int n)
{
	int num, rows, aski;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (rows = 1; rows <= n; rows++)
			{
				_putchar(',');
				_putchar(' ');
				aski = num * rows;

				if (aski <= 9)
					_putchar(' ');
				if (aski <= 99)
					_putchar(' ');
				if (aski >= 100)
				{
					_putchar((aski / 100) + 48);
					_putchar((aski / 10) % 10 + 48);
				}
				else if (aski <= 99 && aski >= 10)
					_putchar((aski / 10) + 48);
				_putchar((aski % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
