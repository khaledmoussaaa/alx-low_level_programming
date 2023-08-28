#include "main.h"

/**
* _memcpy - that copies memory area.
*@dest: input function
*@src: input fnction
*@n: input function
*
*Return: zero
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
