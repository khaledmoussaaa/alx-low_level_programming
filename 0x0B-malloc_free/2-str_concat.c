#include "main.h"

/**
 * getSize - return size of string
 * @s: input function
 * Return: integer
 */

int getSize(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * str_concat - return concatenates two strings.
 * @s1: input function
 * @s2: input function
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, size, size1 = getSize(s1), size2 = getSize(s2);
	char *s;

	size = size1 + size2;
	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	s = malloc((size1 + size2) * sizeof(char) + 1);

	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i <= size; i++)
	{
		if (i < size1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[i - size1];
		}
	}
	s[i] = '\0';
	return (s);
}
