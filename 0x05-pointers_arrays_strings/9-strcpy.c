#include "main.h"

/**
 * _strcpy - prints n elements of an array of integers, followed by a new line.
 *
 *@src: input function
 *@dest: input function
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

