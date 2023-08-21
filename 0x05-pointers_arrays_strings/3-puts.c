#include "main.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 *
 *@str: input function
 *
 * Return: null
 */

void _puts(char *str)
{
	int rev;

	rev = strlen(str);
	while (rev--)
	{
		if (str != '\0')
			putchar(str[rev] + 0);
	}
	putchar('\n');
}
