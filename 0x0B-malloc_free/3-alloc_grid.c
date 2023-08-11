#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width(rows) of the array
 * @height: height(columns) of the array
 * Return: pointer to the 2D on success, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array_ptr; /* Pointer to an array of pointers to integers */
	int i, j;

	/* Returns NULL if width and height of the array is 0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	/**
	 * Memory is allocated for the 2D array by multiplying the
	 * inner array pointer size by the number of inner arrays to be created.
	 */
	array_ptr = malloc(sizeof(*array_ptr) * height);

	if (array_ptr == NULL)
		return (NULL);

	/* Outer loop iterates through the cols of the array */
	for (i = 0; i < height; i++)
	{
		/* Memory is allocated for the inner array */
		array_ptr[i] = malloc(sizeof(int) * width);

		/* Frees memory if allocation for each index of the inner array fails */
		if (array_ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array_ptr[i]);
			free(array_ptr);
			return (NULL);
		}

		/* Inner loop iterates through the rows of the array */
		for (j = 0; j < width; j++)
		{
			/* Every index of the inner array is initialized to 0 */
			array_ptr[i][j] = 0;
		}
	}

	return (array_ptr);
}
