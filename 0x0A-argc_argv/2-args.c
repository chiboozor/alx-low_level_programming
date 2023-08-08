#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/* Counter variable */
	int i;

	/**
	 * Loops through the arg vector array, and
	 * prints the argument at the ith index on
	 * a new line.
	 */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
