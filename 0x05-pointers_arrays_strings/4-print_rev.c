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

	while (*s != '\0')
	{
		len++;
	}
	while (len--)
	{
		putchar(*s + 0);
	}
	putchar('\n');
}
