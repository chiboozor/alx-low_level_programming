#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - initializes a variable of type 'struct dog'
 * @d: pointer to variable of type 'struct dog'.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * This function takes 4 args as seen, and maps the name,
 * age, and owner of the dog to the corresponding variables being
 * pointed to by d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
