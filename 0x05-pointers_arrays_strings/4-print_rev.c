#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to string to be printed.
 */

void print_rev(char *s)
{
	int i = 0; /* Loop counter. */
	int count = 0; /* Holds the string length. */

	/* Returns if the string being pointed to by *s is empty. */
	if (*s == '\0')
	{
		return;
	}

	/* While loop is used to get the length of the string. */
	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	/* For loop is used to iterate over known length of string. */
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
