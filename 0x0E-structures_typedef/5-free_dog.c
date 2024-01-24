#include "dog.h"
#include <stdlib.h>

/**
 * free_doog - Frees dynalic mem of a strucy var
 * @d: Struct variable
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
