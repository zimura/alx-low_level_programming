#include "dog.h"
#include <stdlib.h>

/**
* free_dog - it frees dogs
* @d: the dog that is to be freed
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
