#include <stdio.h>

/**
* main - entry point
*
* Description: check lowercase
*
* Return: 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			int i1 = i / 10;
			int i2 = i % 10;
			int j1 = j / 10;
			int j2 = j % 10;

			if (i <= j)
			{
				putchar(i1 + '0');
				putchar(i2 + '0');
				putchar(' ');
				putchar(j1 + '0');
				putchar(j2 + '0');
				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	puthcar('\n');
	return (0);
}
