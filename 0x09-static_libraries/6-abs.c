#include "main.h"
/**
 * _abs - prints the absolute of a given number
 * @a: parameter
 * Return: a on success
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
