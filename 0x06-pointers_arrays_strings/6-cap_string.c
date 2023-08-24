#include "main.h"

/**
 * isDeli - check delimater for char.
 *
 * @c: input function
 * Return: 0 or 1
 */

int isDeli(char c)
{
	int  i = 0;
	char deli[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == deli[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: input function
 * Return: pointer
 */

char *cap_string(char *s)
{
	int i = 0;
	int found = 1;
	char *p = s;

	while (s[i] != '\0')
	{
		if (isDeli(s[i]))
			found = 1;
		else if (s[i] >= 97 && s[i] <= 122 && found)
		{
			s[i] = s[i] - 32;
			found = 0;
		}
		else
		{
			found = 0;
		}
		i++;
	}
	return (p);
}
