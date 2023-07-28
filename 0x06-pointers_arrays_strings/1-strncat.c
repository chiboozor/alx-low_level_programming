#include "main.h"

/**
 * _strncat - concatenates n elements of the
 * src string to the dest string.
 * @src: pointer to the source string.
 * @dest: pointer to destination string.
 * @n: number of elements of src string to
 * append to dest string.
 * Return: pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	/* Loop variable. */
	int i;

	/* Length of strings. */
	int len = 0;
	int len2 = 0;

	if (*src == '\0' && *dest == '\0')
	{
		return (dest);
	}

	/* Length of src string. */
	for (i = 0; src[i] != '\0'; i++)
		len++;

	/* Length of dest string. */
	for (i = 0; dest[i] != '\0'; i++)
		len2++;

	for (i = 0; i < n; i++)
	{
		dest[len2 + i] = src[i];
	}

	return (dest);
}
