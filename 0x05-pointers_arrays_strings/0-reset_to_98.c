#include "main.h"

/**
 * reset_to_98 - updates to 98 the value n points to.
 * @n: pointer to a variable.
 */

void reset_to_98(int *n)
{
	/**
	 * When the function is called in main,
	 * power is given to this function in
	 * which the value n (pointer) points to
	 * is dereferenced and then updated by
	 * the line of code below.
	 */

	*n = 98;
}
