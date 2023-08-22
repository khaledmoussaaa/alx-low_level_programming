#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line.
 *
 *@str: input function
 *
 *Description: prints half of a string, followed by a new line.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		putchar(str[i] + 0);
	}
	putchar('\n');
}
