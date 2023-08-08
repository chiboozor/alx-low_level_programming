#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 if one argument; 0 on success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	/**
	 * Prints "Error" and returns 1 if arguments passed
	 * is less than or equal to 2.
	 */
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	/**
	 * Converts the arguments passed to integers before
	 * multiplying them together.
	 */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
