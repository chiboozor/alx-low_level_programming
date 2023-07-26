#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 */

void rev_string(char *s)
{
	int i = 0; /* Counter variable. */
	int count = 0; /* Holds the length of the string s. */
	char b;
	char *arr;

	while (s[i] != '\0')
	{
		if (*s == '\0')
		{
			break;
		}
		count++;
		i++;
	}

	arr = (char *) malloc(count * sizeof(char));

	for (i = count; i <= count; i++)
	{
		b = arr[count - i];
		arr[count - i] = s[i];
		s[i] = b;

	}
}
