#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of strings passed to function
 * @...: various arguments to be printed
 *
 * If separator is NULL, it is not printed
 * If one of the strings is NULL, (nil) is
 *	printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	char *string; /* Pointer to an array of characters */
	unsigned int i;

	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
		/**
		 * va_arg takes a char * because the functions prints
		 * strings and not characters. And char * is used to
		 * represent strings as array of characters
		 *
		 * string is updated on every iteration
		 */
		string = va_arg(string_list, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		/**
		 * (i != (n-1)) determines whether to print the separator
		 * by checking if the current string is\not the last string.
		 */
		if ((i != (n - 1) && separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(string_list);

	printf("\n");
}
