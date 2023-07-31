#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string.
 * @c: character to be located.
 * Return: pointer to first occurrence of c in s.
 */

char *_strchr(char *s, char c)
{
	/* Loop variable. */
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	/* Checks if the c is the terminating null byte. */
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}
