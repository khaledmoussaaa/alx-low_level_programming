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
	int len;

	len = strlen(s);
	while (len--)
	{
		if (*s != '\0')
			putchar(*s + 0);
	}
	putchar('\n');
