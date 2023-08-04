#include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 * @s: string to check for substring
 * @accept: substring to check against s
 * Return: number of bytes in initial segment of s consisting from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}

		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (l);
}
