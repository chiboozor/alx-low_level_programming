#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string.
 * Return: pointer to the string.
 *
 * See README for more info.
 */

char *rot13(char *s)
{
	/* Loop counters. */
	int i, j;

	/**
	 * a = the alphabets.
	 * b = corresponding 13th character if rotated.
	 */
	char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char b[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				/* Break out of inner loop once condition is met. */
				break;
			}
		}
	}
	return (s);
}
