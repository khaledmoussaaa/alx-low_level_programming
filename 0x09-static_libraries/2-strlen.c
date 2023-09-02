#include "main.h"

/**
 *_strlen - takes a pinter and update to 98 integer
 *
 *@s: input function
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
