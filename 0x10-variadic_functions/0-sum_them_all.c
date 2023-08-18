#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters passed to it
 * @n: number of parameters passed
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param_list; /* List to hold the variable args */

	unsigned int i = 0;
	int result; /* Hold the result of the summation */

	va_start(param_list, n);

	result = 0;

	while (i < n)
	{
		if (n == 0)
		{
			return (0);
		}
		/* Adds the args to the value of result */
		result += va_arg(param_list, int);
		i++;
	}

	va_end(param_list);

	return (result);
}
