#include "main.h"

/**
 * _memset - function to fill a memory with a constant byte
 * @s: pointer to string to be filled
 * @b: variable to fill s with
 * @n: number of times to fill s with b
 * Return: pointer to the string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
