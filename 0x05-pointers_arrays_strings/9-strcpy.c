#include "main.h"

/**
 * _strcpy - copies a string from src into dest.
 * @src: pointer to source string.
 * @dest: pointer to destination string.
 * Return: pointer to destination string.
 */

char *_strcpy(char *dest, char *src)
{
	/* Loop variable. */
	int i;

	/* Get the length of src string. */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);;
}
