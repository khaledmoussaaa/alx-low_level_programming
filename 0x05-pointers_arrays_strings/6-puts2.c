#include "main.h"

/**
 *puts2 - reverses a string.
 *
 *@str: input function
 *
 * Return: null
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		if (str[i] % 2 == 0)
		{
			putchar(str[i] + 0);
		}
	}
	putchar('\n');
}
