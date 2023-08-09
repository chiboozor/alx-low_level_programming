#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to source string
 * @s2: pointer to destination string
 * Return: pointer to newly allocated space in memory; NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	/* Unsigned int because none of the variables would be acnegative */
	unsigned int i, j, len1, len2, sumlen;

	/* Treats s1 and s2 as empty strings if NULL is passed */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Loop to get length of s1 */
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	/* Loop to get length of s2 */
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	sumlen = len1 + len2;
	str = malloc((sumlen * sizeof(char)) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[len1 + j] = s2[j];

	str[len1 + j] = '\0';

	return (str);
}
