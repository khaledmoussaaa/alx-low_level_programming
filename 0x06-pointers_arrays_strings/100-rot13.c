#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 *
 * @a: input function
 *
 * Return: 0
 */

char *rot13(char *a)
{
	char small[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char capital[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = a;
	int i, j;

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (a[i] == small[j])
			{
				a[i] = capital[j];
				break;
			}
		}
		i++;
	}
	return (p);
}
