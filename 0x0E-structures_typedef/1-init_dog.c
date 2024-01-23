#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct variable
 * @d: Memory address of the struct variable
 * @nane: Name
 * @afe: Age
 * @owner: Owners Name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
