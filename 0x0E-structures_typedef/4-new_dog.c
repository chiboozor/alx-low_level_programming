#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * length - returns the length of a string
 * @str: pointer to string to be evaluated.
 * Return: length of the string
 *
 * The function below calculates the length
 * of a string.
 */

int length(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * str_cpy - copies the content of a source string to a destination string
 * @dest: destination string
 * @src: source string
 * Return: pointer to the destination string
 */

char *str_cpy(char *dest, char *src)
{
	unsigned int i, len;

	len = length(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog of type dog_t
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog created with a
 * copy of its name and owner's name
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len1, len2;
	dog_t *dog_new;

	/* Memory allocation of new_dog variable */
	dog_new = malloc(sizeof(dog_t));
	if (dog_new ==  NULL)
		return (NULL);

	if (name != NULL)
	{
		/* Calculates the length and allocates memory for new dog's element (name) */
		len1 = length(name);
		dog_new->name = malloc(sizeof(char) * (len1 + 1));
		/* If memory allocation fails */
		if (dog_new->name == NULL)
		{
			free(dog_new->name);
			free(dog_new);
			return (NULL);
		}
		str_cpy(dog_new->name, name);
	}

	if (owner != NULL)
	{
		len2 = length(owner);
		dog_new->owner = malloc(sizeof(char) * (len2 + 1));
		if (dog_new->owner == NULL)
		{
			free(dog_new->owner);
			free(dog_new->name);
			free(dog_new);
			return (NULL);
		}
		str_cpy(dog_new->owner, owner);
	}

	dog_new->age = age;

	return (dog_new);
}
