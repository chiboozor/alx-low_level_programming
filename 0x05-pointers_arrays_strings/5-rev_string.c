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
	char b; /* Holds the value of s[i] initially. */
	char *arr; /* Dynamic declaration of pointer to array. */

	while (s[count] != '\0')
	{
		if (*s == '\0')
		{
			break;
		}
		count++;
	}

	/* Allocates space for array whose size is determined by the string length. */
	arr = (char *) malloc(count * sizeof(char));

	for (i = 0; i < s[count] / 2; i++)
	{
		b = s[i];
		s[i] = s[count];
		s[count--] = b;

	}
	free(arr);
}
