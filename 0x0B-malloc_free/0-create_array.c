#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array dynamically, and
 *		initializes it with a specific character.
 * @size: size of the array
 * @c: character to fill the array with
 *
 * Return: pointer to the array, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *ptr; /* Pointer to the array. */
	unsigned int i; /* Counter variable */

	/* Returns NULL if size of the array is 0 */
	if (size == 0)
	{
		return (NULL);
	}

	/* Dynamically allocates memory using the size of the character passed */
	ptr = malloc(size * sizeof(c));

	/* Checks if memory allocated is empty */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initializes counter variable to 0 */
	i = 0;

	/* Loops through the size of the memory allocated */
	while (i < size)
	{
		/* Assigns character stored in c to the ith index of the array created */
		ptr[i] = c;
		i++;
	}

	/* Returns a pointer to the array */
	return (ptr);
}
