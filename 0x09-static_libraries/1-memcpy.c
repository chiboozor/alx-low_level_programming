#include "main.h"

/**
 * _memcpy - function to copy a memory area.
 * @dest: pointer to the destination string
 * @src: pointer to src string
 * @n: number of times to copy src to dest
 * Return: pointer to the dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
