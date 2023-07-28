#include "main.h"

/**
 * _strncpy - copies n elements of a source string
 * into a destination string.
 * @src: pointer to the source string.
 * @dest: pointer to the destination string.
 * @n: number of elements to be copied.
 * Return: pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* Loop variable. */
	int i;

	/**
	 * len = length of source string (src).
	 * len2 = length of destination string (dest).
	 */
	int len = 0;
	int len2 = 0;

	/* Checks if src and dest strings are empty. */
	if (*src == '\0' && *dest == '\0')
	{
		return (dest);
	}

	/* Loop to get length of src string.*/
	for (i = 0; src[i] != '\0'; i++)
		len++;

	/* Loop to get length of dest string. */
	for (i = 0; dest[i] != '\0'; i++)
		len2++;

	/* Loop to copy n elements of src into dest string. */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
