#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*array_range - fcreallocates a memory block
*@ptr: input function
*@old_size: input function
*@new_size: input function
*Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		return (newPtr);
	}
	if (new_size > old_size)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		for (i = 0; i < new_size && i < old_size; i++)
			*((char *)newPtr + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (newPtr);
}
