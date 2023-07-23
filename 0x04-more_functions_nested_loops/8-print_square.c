#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size - size of the square.
 */

void print_square(int size)
{
	/* Initialize counter variable(s). */
	int i, j;

	/* Functions prints a new line and exits if size <= 0. */
	if (size <= 0)
	{
		_putchar('\n');
	}

	/* Outer loop for height of square. */
	for (i = 0; i < size; i++)
	{
		/* Inner loop for width of square. */
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
