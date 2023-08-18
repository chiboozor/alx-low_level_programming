#include "3-calc.h"

/**
 * get_op_func - performs any of the associated operation
 *	on two integers
 *
 * @s: string to hold operation symbol
 * Return: pointer to operation function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		/* Compares the character passed to that in the ops struct */
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
