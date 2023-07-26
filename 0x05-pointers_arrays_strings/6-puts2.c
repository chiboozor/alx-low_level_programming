#include "main.h"

/**
 * puts2 - prints characters of a string in steps of 2.
 * @str: pointer to string.
 */

void puts2(char *str)
{
	int i = 0; /* Loop counter. */
	int count = 0; /* Holds the length of the string. */

	while (str[i] != '\0')
	{
		if (*str == '\0')
		{
			break;
		}
		count++;
		i++;
	}

	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
