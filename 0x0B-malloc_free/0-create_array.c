#include "main.h"

/**
 * create_array - creates an array of chars, and initialize it.
 * @size: input function
 * @c: input function
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (0);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
