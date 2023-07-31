#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to smemory area.
 * @b: constant byte to fill s with.
 * @n: number of times to fill s with b.
 * Return: pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * Loop variable of type unsigned int
	 * to match the variable(n) that says
	 * how many times b is used to fill s.
	 */
	unsigned int i;

	/* Loop through the number of times to fill s. */
	for (i = 0; i < n; i++)
	{
		/* Fill the buffer s with b. */
		s[i] = b;
	}
	return (s);
}
