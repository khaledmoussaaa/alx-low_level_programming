#include "main.h"

/**
 * _strncpy - copies two strings (dest, src)
 *
 * @dest: input fucntion
 * @src: input function
 * @n: input function
 *
 * Return: Zero
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
