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

	/* Length of s. */
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
