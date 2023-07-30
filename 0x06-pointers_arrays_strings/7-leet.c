#include "main.h"

/**
 * leet - encodes characters.
 * @s: pointer to string.
 * Return: pointer to the string.
 */

char *leet(char *s)
{
	int i, j;

	/**
	 * Array a = characters to check for.
	 * Array b = characters to replace characters in array a.
	 */

	char a[] = {"aAeEoOtTlL"};
	char b[] = {"4433007711"};

	/* Loop through the string to be checked. */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through array a. */
		for (j = 0; a[j] != '\0'; j++)
		{
			/**
			 * Checks if the character at s[i] is
			 * same as the character at a[j].
			 */
			if (s[i] == a[j])
			{
				/**
				 * Replacess the character at s[i] with the
				 * corresponding character of the jth index
				 * in array b.
				 */
				s[i] = b[j];
			}
		}
	}
	return (s);
}
