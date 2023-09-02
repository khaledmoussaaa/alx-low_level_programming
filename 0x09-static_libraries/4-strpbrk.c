#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
*@s: input fnction
*@accept: input function
*
*Return: zero
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
