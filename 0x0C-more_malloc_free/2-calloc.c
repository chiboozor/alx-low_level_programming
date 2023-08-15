#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements to allocate memory for
 * @size: size of each nmemb
 * Return: pointer to newly allocated space in memory; NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str_ptr = calloc(nmemb, size);

	if (str_ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((char *)(str_ptr) + i) = 0;
	return (str_ptr);
}
