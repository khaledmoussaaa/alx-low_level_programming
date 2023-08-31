#include "main.h"

/**
 *_strlen_recursion - get length of string.
 *@s: input function
 *Return: count
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
		count = count _strlen_recursion(s + 1) + 1;
	return (count);
}
