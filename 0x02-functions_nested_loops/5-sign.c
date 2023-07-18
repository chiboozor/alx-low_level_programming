#include "main.h"

/**
 * print_sign - fxn to print the sign of a number n.
 * @n: number to be checked for sign.
 * Return: 1, 0, -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
