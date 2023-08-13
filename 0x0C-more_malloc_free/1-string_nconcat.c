#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes of s2 to add to s1
 * Return: pointer to new s1, NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, nums, len = 0, len2 = 0;
	char *str_ptr;

	nums = n;

	/* Treats s1 and s2 as empty strings if NULL is passed */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of s1 and s2 and save in len and len2 respectively */
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	/* Allocates memory for the new string */
	str_ptr = malloc((len + n + 1) * sizeof(*str_ptr));

	/* Returns NULL if malloc fails */
	if (str_ptr == NULL)
		return (NULL);

	/* Uses source string if num of bytes to concat >= len of dest string */
	if (nums >= len2)
		n = len2;

	/* Concats elements of s1 to new string in memory */
	for (i = 0; i < len; i++)
		str_ptr[i] = s1[i];

	/* Concats n elements of s2 to new string from the end of the new string */
	for (j = 0; j < nums; j++)
		str_ptr[len + j] = s2[j];

	/* Adds terminating null character at the end of the new string */
	str_ptr[len + n] = '\0';

	return (str_ptr);
}
