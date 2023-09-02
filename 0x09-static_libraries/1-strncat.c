#include "main.h"

/**
 * _strncat -  concatenates two strings (dest, src)
 *
 * @dest: input fucntion
 * @src: input function
 * @n: input function
 *
 * Return: Zero
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
