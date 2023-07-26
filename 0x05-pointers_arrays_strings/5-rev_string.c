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

	while (s[count] != '\0')
	{
		if (*s == '\0')
		{
			break;
		}
		count++;
	}

	for (i = 0; i < count / 2; i++)
	{
		b = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = b;

	}
}
