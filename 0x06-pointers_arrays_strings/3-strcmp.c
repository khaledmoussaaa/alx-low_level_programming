#include "main.h"

/**
 * _strcmp - compares  two strings (dest, src)
 *
 * @s1: input fucntion
 * @s2: input function
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = ((int)s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
		i++;
	}
	return (result);
}
