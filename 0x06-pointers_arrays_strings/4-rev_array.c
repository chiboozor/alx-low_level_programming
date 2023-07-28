#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array of integers.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	/* Loop variable. */
	int i;

	/* Variable to store an element of the array temporarily. */
	int tmp;

	/** 
	 * The loop only runs through half of the array (n / 2)
	 * since we simply wants to swap the positions of each
	 * member up until the terminating null character.
	 */
	for (i = 0; i < n / 2; i++)
	{
		if (n <= 0)
		{
			break;
		}
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
