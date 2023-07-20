#include "main.h"

/**
 * print_numbers - prints the numbers from 0-9 using _putchar.
 */

void print_numbers(void)
{
	/* Initialization of a counter variable. */
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
