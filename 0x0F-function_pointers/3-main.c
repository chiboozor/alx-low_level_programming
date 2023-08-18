#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments passed to program
 * @argv: arguments passed to program
 * Return: 0 on success; 98, 99, 100 on failure
 */

int main(int argc, char *argv[])
{
	char op_symbol;
	int result; /* Store result of the operation */
	int num1, num2; /* Hold the numbers to be operated on */

	/**
	 * Function pointer to the operation to be performed.
	 * Takes two integers as parameters.
	 */
	int (*func_ptr)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert the numbers passed to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (!func_ptr) /* If symbol passed != any of the specified symbols */
	{
		printf("Error\n");
		exit(99);
	}

	op_symbol = *argv[2]; /* Stores operation symbol */

	/* Checks if num2 = 0, and operations are either division or modulo */
	if ((op_symbol == '/' || op_symbol == '%') && num2 ==  0)
	{
		printf("Error\n");
		exit(100);
	};

	result = func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
