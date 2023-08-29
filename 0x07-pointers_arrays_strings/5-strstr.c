#include "main.h"

/**
* _strstr - searches a string for any of a set of bytes.
*@haystack: input fnction
*@needle: input function
*
*Return: zero
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (*needle == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
