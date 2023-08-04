#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string to be copied to
 * @src: source string to be copied
 * @n: number of characters to be copied fom src to dest
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
