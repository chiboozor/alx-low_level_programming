#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory used in a function
 * @d: pointer to the memory to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
