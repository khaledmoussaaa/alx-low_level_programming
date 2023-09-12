#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prototype
 * @d: input function
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->owner == NULL)
			printf("(nil)");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
