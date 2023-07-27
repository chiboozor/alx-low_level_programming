#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of n elements.
 * @a: pointer to integer variable;
 * @n: number of elements to be printed.
 */

void print_array(int *a, int n)
{
	/* Declare a loop variable. */
	int i;

	/**
	 * The condition checks if i < n (elements to
	 * be printed), if yes, it enters the loop.
	 * Inside the loop, the program checks if
	 * ith index != (n - 1), at which point it prints n
	 * with a comma followed by a space, and prints
	 * n without a comma and a space if i == (n - 1).
	 */

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
