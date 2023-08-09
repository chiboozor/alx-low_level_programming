#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: pointer to string passed as parameter.
 * Return: pointer to str on success; NULL on failure.
 */

char *_strdup(char *str)
{
	char *str2; /* Pointer to the destination string */
	int i, len; /* i = counter var; len = length of source string */

	/* Return NULL if source string is empty */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Else, initialize counter variable and length of string */
	len = 0;
	i = 0;

	while (str[i] != '\0')
	{
		len++; /* Increment length while str != terminating byte */
		i++; /* Increment loop variable */
	}

	/* Allocate space for destination string. */
	str2 = malloc((len * sizeof(char)) + 1);

	/* Return NULL if destination string is NULL */
	if (str2 == NULL)
	{
		return (NULL);
	}

	/* initialize counter variable and loop through length of source string */
	i = 0;

	while (i < len)
	{
		str2[i] = str[i]; /* Assign source string to destination string */
		i++;
	}
	str2[i] = '\0';

	return (str2);
}
