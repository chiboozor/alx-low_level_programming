#include <stdio.h>

/**
 * main - program entry point.
 * Return: 0.
 */

int main(void)
{
	int i;

	/* Prints the alphabet in lowercase. */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* Prints the alphabet in uppercase. */
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	/* Prints a new line. */
	putchar('\n');

	return (0);
}
