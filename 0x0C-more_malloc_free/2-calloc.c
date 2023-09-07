#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_calloc - memory for an array, using malloc.
*@nmemb: input function
*@size: input function
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mall;
	int sizeOf;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mall = malloc(nmemb * sizeof(int));
	if (mall == 0)
		return (NULL);
	sizeOf = sizeof(int) * nmemb;
	memset(mall, 0, sizeOf);

	return (mall);
}
