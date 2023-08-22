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
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (*src != '\0');

	return (dest);
}
