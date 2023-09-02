#include "main.h"

/**
* _strchr - locates a character in a string.
*@s: input fnction
*@c: input function
*
*Return: zero
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
