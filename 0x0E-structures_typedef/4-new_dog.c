#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 * Return: struct dog (dog_t)
 *
 * A copy of 'name' and 'owner' is to
 * be stored.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Pointer to a variable of type dog_t */
	dog_t *dog_new;

	/* Memory allocation of new_dog variable */
	dog_new = malloc(sizeof(dog_t));

	if (dog_new ==  NULL)
		return (NULL);

	/* Elements assignment */
	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;

	free(dog_new);;

	return (dog_new);
}
