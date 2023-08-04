#include "main.h"
#include <stddef.h>

/**
 * _strstr - function to locate a substr in a string
 * @haystack: string to be searched
 * @needle: string to search for
 * Return: pointer to the needle string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (needle[i] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
