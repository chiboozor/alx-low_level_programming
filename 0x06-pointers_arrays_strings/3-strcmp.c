#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: nonzero if they are not
 * the same, and 0 if they are.
 */

int _strcmp(char *s1, char *s2)
{
	/* Loop variable. */
	int i;

	/**
	 * The loop checks if the character at index i of
	 * s1 or s2 are not terminating null bytes.
	 * If it isn't, a conditional statement is triggered
	 * that checks if the character at the ith index of
	 * s1 is the same as that of s2, at which point it
	 * returns th
	 */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
