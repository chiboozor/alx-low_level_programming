#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - fxn to search a string for anu set of bytes
 * @s: string to be searched
 * @accept: set of bytes to search with
 * Return: pointer to bytes in s matching 1 byte in accept; NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
