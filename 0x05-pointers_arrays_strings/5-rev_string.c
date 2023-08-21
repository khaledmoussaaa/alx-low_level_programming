#include "main.h"

/**
 *rev_string - reverses a string.
 *
 *@s: input function
 *
 * Return: null
 */

void rev_string(char *s)
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
