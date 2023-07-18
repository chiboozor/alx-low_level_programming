#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: number.
 * Return: last digit of @a.
 */

int print_last_digit(int a)
{
	int i;

	i = a % 10; /* To get the last digit of a. */

	/* Checks. */
	if (i > 0)
	{
		_putchar(i + '0');
	} else if (i < 0)
	{
		i = i * (-1);
		_putchar(i + '0');
	} else if (i == 0)
	{
		_putchar(i + '0');
	}
	return (i);
}
