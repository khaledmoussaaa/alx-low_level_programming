#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - prototype
 * @d: input function
 * Return: pointer
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
