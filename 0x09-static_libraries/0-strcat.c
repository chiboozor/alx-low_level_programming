#include "main.h"

/**
 * _strcat - function to concatenate 2 strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		len1++;

	for (i = 0; src[i] != '\0'; i++)
		len2++;

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}
