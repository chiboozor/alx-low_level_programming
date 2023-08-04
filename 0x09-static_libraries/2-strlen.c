#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: variable containing the string
 * Return: len of the string
 */

int _strlen(char *s)
{
	int i;
	/* count var that holds the count of the chars */
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
