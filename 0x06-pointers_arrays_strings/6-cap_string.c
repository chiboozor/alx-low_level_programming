#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to the string.
 * Return: pointer to the string.
 */

char *cap_string(char *s)
{
	int i = 0;

	/* Loops through the string. */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == '\0')
		{
			break;
		}
		/**
		 * Checks if the character at the ith index is any of the
		 * separators below.
		 */

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '"'
				|| s[i] == ','  || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			/**
			 * Checks if the next character after the separator is
			 * a lowercase letter then changes it to uppercase.
			 */

			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
			continue;
		}
	}
	return (s);
}
