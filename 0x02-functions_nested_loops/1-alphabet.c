#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase using _putchar.
 */

void print_alphabet(void)
{
	int i; /* counter variable. */

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
