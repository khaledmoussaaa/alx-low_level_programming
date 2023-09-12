#include "dog.h"

/**
 * init_dog - prototype
 * @d: input function
 * @name: input function
 * @age: input function
 * @owner: input function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
