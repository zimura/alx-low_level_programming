#include "dog.h"
#include <stdlib.h>

/**
* init_dog - this initializes a variable of typedef struct dog
* @d: the dog to be initialized
* @name: the dog name
* @age: the dog age
* @owner: the dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
