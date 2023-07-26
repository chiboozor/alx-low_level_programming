#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to 1st integer.
 * @b: pointer to 2nd integer.
 */

void swap_int(int *a, int *b)
{
	/**
	 * When the function is called, the pointers are
	 * dereferenced and then mapped to each other.
	 */

	int i;

	i = *a;
	*a = *b;
	*b = *a;
	*a = i;
}
