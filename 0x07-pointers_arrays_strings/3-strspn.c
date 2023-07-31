#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a string.
 * @accept: bytes to scan through.
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	/* Loop variables. */
	int i, j;

	/**
	 * Variable to hold length of the string
	 * at which point the characters in s do
	 * not match any of the characters in
	 * accept.
	 */

	int len = 0;

	/* Outer loop to run through the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Inner loop to run through the acceptable bytes */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* Comparison between characters in s and accept. */
			if (s[i] == accept[j])
			{
				/* Increase length */
				len++;

				/* Break out of inner loop to avoid unnecessary iterations */
				break;
			}
		}
		if (accept[j] == '\0')
		{
			/* Break out of outer loop if accept[j] is terminating null byte. */
			break;
		}
	}
	return (len);
}
