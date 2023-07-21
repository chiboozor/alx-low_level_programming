#include "main.h"

/**
 * print_line - draws a straight line on the terminal using the '_' character.
 * @n: number of '_' characters to be printed.
 */

void print_line(int n)
{
	/* Initialize a counter variable to hold the value for n. */
	int i;

	/* A loop that runs n times. */
	for (i = 0; i <= n; i++)
	{
		/* Prints a new line if n <= 0. */
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
