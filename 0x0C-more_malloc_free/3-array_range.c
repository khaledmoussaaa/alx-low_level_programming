#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*array_range - creates an array of integers.
*@min: input function
*@max: input function
*Return: pointer
*/
int *array_range(int min, int max)
{
	int i, size;
	int *mall;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		mall[i] = min++;
	return (mall);
}
