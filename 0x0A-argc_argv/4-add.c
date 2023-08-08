#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	/* Program that adds postitive numbers. */


	/**
	 * i - counter variable
	 * sum - holds the sum of all numbers
	 */
	int i;
	int sum = 0;

	/* Prints 0 and returns 1 if arguments passed < 2 */
	if (argc < 2)
	{
		printf("%d\n", argc - 1);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		/* Checks if the argument passed is not a digit */
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			/* Converts the arg into an integer */
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
