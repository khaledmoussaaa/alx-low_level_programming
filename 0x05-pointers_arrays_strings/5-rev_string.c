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
	int i, j;
	char temp;
	int length = strlen(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
