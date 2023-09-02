#include "main.h"

/**
* _memset - memory with a constant byte.
*@s: input function
*@b: input fnction
*@n: input function
*
*Return: zero
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++,  n--)
	{
		s[i] = b;
	}
	return (s);
}
