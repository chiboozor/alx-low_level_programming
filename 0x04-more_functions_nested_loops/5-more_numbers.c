#include "main.h"

/**
 * more_numbers - prints 0-14 ten times.
 */

void more_numbers(void)
{
	/* Initialize 2 counter variables. */
	int i, j;

	/* Outer loop for printing the numbers on 10 different lines. */
	for (i = 0; i < 10; i++)
	{
		/* Inner loop for printing the numbers 0-14 on a single line. */
		for (j = 0; j <= 14; j++)
		{
			/* Check if 'j' is > 9. */
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			/* Prints the number after the check. */
			_putchar((j % 10) + '0');
		}
		/* Prints a new line after printing each line of 0-14. */
		_putchar('\n');
	}
}
