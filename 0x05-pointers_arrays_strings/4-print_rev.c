#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *
 *@s: input function
 *
 * Return: null
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	while (len--)
	{
		putchar(s[len] + 0);
	}
	putchar('\n');
}
