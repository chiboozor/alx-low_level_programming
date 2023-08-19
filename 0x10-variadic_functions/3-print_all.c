#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i;
	char *s; /* To store an array of characters (Strings, if you may) */
	char *separator; /* Separator variable */

	i = 0;
	separator = "";

	va_start(arg_list, format);

	while (format && format[i])
	{
		switch  (format[i])
		{
			case 'c':
				/* See README for explanation for double promo argument */
				printf("%s%c", separator, va_arg(arg_list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg_list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg_list, double));
				break;
			case 's':
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", separator, va_arg(arg_list, char *));
				break;
			default:
				i++;
				continue;
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(arg_list);
	printf("\n");
}
