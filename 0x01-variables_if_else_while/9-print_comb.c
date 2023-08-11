#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit with dollar sign in the last.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);

		if (digit <= 56)
		{
			putchar(',');
		}
		digit++;
	}
	putchar(36);
	return (0);
}
