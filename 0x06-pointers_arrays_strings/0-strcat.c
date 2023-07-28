#include "main.h"

/**
 * _strcat - appends the src string to the dest string using
 * their pointers respectively.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	/* Declare loop variable. */
	int i;

	/* Variable to hold length of src and dest string. */
	int len = 0;
	int len2 = 0;

	/* Get the length of the src string. */
	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	/* Get the length of the dest string. */
	for (i = 0; dest[i] != '\0'; i++)
	{
		len2++;
	}

	/**
	 * Loop through the src string and append its
	 * characters to the end of the dest string.
	 */
	for (i = 0; i < len; i++)
	{
		dest[len2 + i] = src[i];
	}
	return (dest);
}
