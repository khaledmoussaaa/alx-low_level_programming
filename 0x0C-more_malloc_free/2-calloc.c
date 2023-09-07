#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_calloc - memory for an array, using malloc.
*@nmemb: input function
*@size: input functioin
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mall;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mall = malloc(size * nmemb);
	if (mall == 0)
		return (NULL);

	memset(mall, 0, size * nmemb);

	return (mall);
}
