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
		for (j = i; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
		}
	}
	return (0);
}
