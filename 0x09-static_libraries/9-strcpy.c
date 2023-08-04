#include "main.h"

/**
 * _strcpy - copies string pointed to by one pointer to another pointer
 * @dest: pointer destination of copied string
 * @src: pointer of string to copied
 * Return: char; pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i; /* counter variable */

	/* copy src[i] for every ith index into dest[i] */
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
