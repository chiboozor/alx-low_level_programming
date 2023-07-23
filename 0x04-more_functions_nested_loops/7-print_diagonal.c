#include "main.h"

/**
 * print_diagonal - prints a diagonal line using '\'.
 * @n: n times \ is printed.
 */

void print_diagonal(int n)
{
	/* Initialize a variable to hold the value of n. */
	int i;
	int j; /* To hold the value of i. */

	/* Prints a newline if n <= 0. */
	if (n <= 0)
	{
		_putchar('\n');
	}

	/* Loop to print the diagonals. */
	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
