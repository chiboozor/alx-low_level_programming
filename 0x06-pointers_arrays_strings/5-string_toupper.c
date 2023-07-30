#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to
 * uppercase.
 * @a: pointer to the string.
 * Return: pointer to the function.
 */

char *string_toupper(char *a)
{
	int i = 0;

	/**
	 * The while loop traverses through the string,
	 * and simultaneously changes any lowercase
	 * character into an uppercase character using
	 * the if statement.
	 */

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			/**
			 * Case conversion occurs here.
			 * 32 is subtracted from the ASCII
			 * values of lowercase letters to
			 * get their corresponding ASCII
			 * values in uppercase.
			 * 97 for 'a', 98 'b',..., 12 for 'z'.
			 */

			a[i] = a[i] - 32;
		}
		/* Loop increment. */
		i++;
	}
	/* A pointer to the string is returned. */
	return (a);
}
