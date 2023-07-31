#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates the first occurrence of a substring in a string.
 * @haystack: string to be searched.
 * @needle: string to search for.
 * Return: pointer to needle, NULL otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	/* Loop variables. */
	int i, j;
	int len, len2;

	len = len2 = 0;

	for (i = 0; haystack[i] != '\0'; i++)
		len++;

	for (j = 0; needle[j] != '\0'; j++)
		len2++;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len2 - 1; j++)
		{
			if (needle[j] == haystack[i])
			{
				/**
				 * Returns the entire substring if it matches any
				 * string of characters in haystack.
				 */
				return (needle);
			}
		}
		if (haystack[i] == '\0')
		{
			break;
		}
	}
	return (NULL);
}
