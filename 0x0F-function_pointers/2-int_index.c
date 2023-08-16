#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of numbers to search through
 * @size: size of the array
 * @cmp: pointer to function
 * Return: index of first element for which cmp does
 *		not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	/** 
	 * index is set to -1 since it is not a valid index
	 * and to avoid ambiguity i.e setting index to 0 is
	 * ambigous because 0 is a valid index
	 */

	int index = -1;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		/**
		 * Checks if the return value of cmp is > 0.
		 * Because cmp is a function that returns an
		 * integer. (See TEST FILE 2-main.c)
		 */
		if (cmp(array[j]) > 0)
		{
			/* If the return value of cmp > 0 */
			index = j;
			break;
		}
	}
	return (index);
}
