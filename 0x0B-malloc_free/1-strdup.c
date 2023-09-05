#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: input function
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	newStr = malloc(size * sizeof(*str) + 1);

	if (newStr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			newStr[i] = str[i];
		}
	}
	return (newStr);
}
