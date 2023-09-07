#include "main.h"

/**
*malloc_checked - allocates memory using malloc.
*@b: input function
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *check = malloc(b);

	if (check == 0)
		exit(98);
	return (check);
}
