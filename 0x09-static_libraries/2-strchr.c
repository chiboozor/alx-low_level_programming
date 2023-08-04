#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a xter in a string
 * @s: pointer to the string
 * @c: character to be located in string s
 * Return: pointer to the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	/* checks for c at the end of the string */
	if (s[i] == c)
		return (s + i);

	return (NULL);
}
