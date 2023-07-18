#include "main.h"

/**
 * _isalpha - fxn to check if a character is a letter, lowercase or uppercase.
 * @c: character to be checked.
 * Return: 1 if @c is a letter, lowercase, uppercase; 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
