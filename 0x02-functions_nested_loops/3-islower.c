#include "main.h"

/**
 * _islower - fxn that checks for lowercase character.
 * @c: character to be checked.
 * Return: 1 if true, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
