#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to string to be printed.
 */

void print_rev(char *s)
{
	int i = 0; /* Loop counter. */
	int count = 0; /* Holds the string length. */


	/* A while loop is used to get the length of the string. */
	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	/* Returns if string is < 0 (empty). */
	if (count < 0)
	{
		return;
	}

	/* For loop is used to iterate through the length of the string. */
	for (i = count; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
