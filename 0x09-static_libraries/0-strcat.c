#include "main.h"

/**
 * _strcat -  concatenates two strings (dest, src).
 *
 * @dest: input fucntion
 * @src: input function
 *
 * Return: Dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
