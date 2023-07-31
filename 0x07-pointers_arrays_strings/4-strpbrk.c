#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string to search.
 * @accept: set of bytes to search for in s.
 * Return: pointer to the first byte in 's' found in 'accept'.
 */

char *_strpbrk(char *s, char *accept)
{
	/* Loop variables. */
	int i, j;

	/* Outer loop to run through the string 's' */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Inner loop to run through 'accept' */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* Character comparison between ith and jth characters of each string */
			if (s[i] == accept[j])
			{
				/* Returns the first character in 's' found in 'accept' */
				return (s + i);
			}
		}
		/* Breaks out of the outer loop and returns NULL if 's' is empty. */
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (NULL);
}
