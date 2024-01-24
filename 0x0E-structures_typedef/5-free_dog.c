#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dynalic mem of a strucy var
 * @d: Struct variable
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(98);
	if (d->name == NULL || d->owner == NULL)
		exit(98);
	free(d->name);
	free(d->owner);
	free(d);
}
