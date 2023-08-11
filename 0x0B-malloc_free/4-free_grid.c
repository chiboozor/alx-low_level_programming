#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees memory created for a 2D array
 * @grid: pointer to a pointer of array of integers
 * @height: height (column) of the 2D array to be freed
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
