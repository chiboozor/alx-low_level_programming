#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of args to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums_list;
	unsigned int i;

	va_start(nums_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums_list, int));
		/* Prints the numbers without the separator if it is NULL */
		if (i < (n - 1) && separator != NULL)
		{
			/* Prints the separator  as long as the loop index < number of args */
			printf("%s", separator);
		}
	}

	va_end(nums_list);

	printf("\n");
}
