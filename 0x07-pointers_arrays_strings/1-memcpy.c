#include "main.h"

/**
 * _memcpy - copies a memory area.
 * @src: copy source.
 * @dest: copy destination.
 * @n: number of bytes of src to be copied.
 * Return: pointer to the copy destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Loop variable. */
	unsigned int i;

	/* Variable to hold copy source temporarily. */
	char tmp;

	/**
	 * In the loop, tmp holds the value of src[i]
	 * then assigns to dest[i] that value. It
	 * does this until it gets to n bytes of src[i]
	 * to copy.
	 */
	for (i = 0; i < n; i++)
	{
		tmp = src[i];
		dest[i] = src[i];
		src[i] = tmp;
	}
	return (dest);
}
