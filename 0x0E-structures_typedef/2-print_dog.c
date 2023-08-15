#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to variable d of type struct dog
 *
 * One of the elements in the test file has been
 * set to NULL for test cases.
 */

void print_dog(struct dog *d)
{
	/* If the variable of type struct dog is NULL, function returns */
	if (d == NULL)
		return;

	/**
	 * If either the 'name' or 'owner' of the variable d
	 * is NULL, it sets the value to (nil) and prints it.
	 */
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	/* Prints the values of the corresponding elements d is pointing to */
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
