#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers, min and max inclusive
 * @min: min array element
 * @max: max array element
 * Return: pointer to new memory, NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr_ptr;
	int i;

	if (min > max)
		return (NULL);

	arr_ptr = malloc((max - min + 1) * sizeof(int));

	if (arr_ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr_ptr[i] = min + i;

	return (arr_ptr);
}
