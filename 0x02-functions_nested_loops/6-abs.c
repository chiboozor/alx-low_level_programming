#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: integer value.
 * Return: a.
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * (-1));
	} else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
