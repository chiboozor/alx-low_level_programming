#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string from the buffer pointed to
 * by src into the buffer pointed to by  dest.
 * @src: pointer to source string.
 * @dest: pointer to destination string.
 * Return: pointer to destination string.
 */

char *_strcpy(char *dest, char *src)
{
	/* Loop variable. */
	int i;
	int len = 0;

	/* Get the length of src string. */
	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	/**
	 * Loops through the len of src, adds 1 for
	 * the terminating null byte, and then copies
	 * the characters in src into dest.
	 */
	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
