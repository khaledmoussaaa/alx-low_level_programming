#include "main.h"

/**
* times_table  -  prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num, rows, aski;

	for (num = 0, num <= 9; num++)
	{
		_putchar('0');
		for (rows = 1; rows <= 9; rows++)
		{
			_putchar(',');
			_putchar(' ');

			aski = num * rows;

			if (aski <= 9)
				_putchar(' ');
			else
				_putchar((aski / 10) + 48);
			_putchar((aski % 10) + 48);
		}
		_putchar('\n');
	}
}
