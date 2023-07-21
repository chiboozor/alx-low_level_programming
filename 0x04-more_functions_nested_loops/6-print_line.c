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
	for (i = 0; i < n; i++)
	{
		/* Prints a new line if n <= 0. */
		if (n <= 0)
		{
			/* 10 is decimal value for newline in the ASCII table. */
			_putchar(10);
		}
		/* 95 is the decimal value of '_' in the ASCII table. */
		_putchar(95);

	}
	_putchar('\n');
}
