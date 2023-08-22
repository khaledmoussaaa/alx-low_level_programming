#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line.
 *
 *@str: input function
 *
 * Return: null
 */

void puts_half(char *str)
{
	int i;

	while (str[i])
	{
		i++;
	}
	for (i = i / 2; str[i] != '\0'; i++)
	{
		putchar(str[i] + 0);
	}
	putchar('\n');
}
