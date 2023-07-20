#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4.
 */

void print_most_numbers(void)
{
	/* Initialization of a counter variable. */
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || 2 == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
