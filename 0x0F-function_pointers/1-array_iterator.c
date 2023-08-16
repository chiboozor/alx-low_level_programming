#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *		as a parameter on each element of an array.
 *
 * @array: pointer to an array of functions.
 * @size: size of the array.
 * @action: function pointer to the function to be used.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Counter variable of same signedness as array size */
	size_t i;

	if (array == NULL || action == NULL)
		return;

	/**
	 * The function takes an array pointer, array size, and a function
	 * pointer as args.
	 *
	 * The function (action) is called on every element of the array
	 * being pointed to (hence (*action)(int)) as the loop iterates
	 * through the elements of the array until the end of the array.
	 *
	 * It is worth noting that to calculate the size of the array, the
	 * entire array (*array) was divided by the size of its first element
	 * (array[0]); although it will be passed as a param when calling this
	 * function.
	 */

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
