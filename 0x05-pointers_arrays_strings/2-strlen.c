#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to string variable.
 * Return: length of s.
 */

int _strlen(char *s)
{
	/**
	 * i = Loop variable through s.
	 * count = variable to hold the length of s.
	 */

	int i;
	int count = 0;

	/**
	 * Loop explained:
	 * i is set to 0 (initialization).
	 * s[i] != 0 (condition): ith character
	 * of s is not a newline character.
	 * if condition == True, increment count by 1.
	 * i++ (loop increment): increment the loop by
	 * 1 until it hits a newline character, then
	 * terminate loop, and return the count.
	 */

	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
