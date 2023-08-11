#include <stdio.h>

/**
* main - entry point
*
*Description: git digit based 16
*
*Return: 0 (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit <= 57)
		{
			putchar(digit);

			if (digit >= 57)
			{
				digit += 40;
			}
		}
		else if (digit >= 97 && digit <= 102)
		{
			putchar(digit);
		}

		digit++;
	}

	return (0);
}
