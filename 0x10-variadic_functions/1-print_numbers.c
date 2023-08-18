#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of args to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param_list;
	unsigned int i = 0;

	va_start(param_list, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(param_list, int));
		if (i < (n - 1))
		{
			/* Prints ', ' as long as the loop index < number of args */
			printf("%s", separator);
		}
	}
	printf("\n");
}
