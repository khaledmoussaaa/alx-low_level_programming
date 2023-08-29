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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == 0)
		{
			return (haystack);
		}
	}
	return (0);
}
