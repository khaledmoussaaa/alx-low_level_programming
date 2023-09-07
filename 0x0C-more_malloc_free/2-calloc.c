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
	void *mall;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mall = malloc(sizeof(int) * nmemb);
	if (mall == 0)
		return (NULL);

	memset(mall, 0, sizeof(int) * nmemb);

	return (mall);
}
