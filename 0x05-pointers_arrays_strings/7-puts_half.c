#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: pointer to string to be printed.
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int n = (len / 2);

	while (str[i] != '\0')
	{
		if (*str == '\0')
		{
			break;
		}
		len += 1;
		i++;
	}

	/**
	 * Checks if str is even or odd then loops
	 * through the half of the string and prints
	 * the characters.
	 */

	if ((len % 2) == 0)
	{
		for (i = (len / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if ((len % 2) != 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
