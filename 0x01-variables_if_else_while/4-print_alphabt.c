#include <stdio.h>

/**
 * main - program entry point.
 * Return: 0.
 */

int main(void)
{
	int i;

	/* Prints the alphabet in lowercase except 'q' and 'e'. */
	for (i = 'a'; i <= 'z'; i++)
	{
		/* Checks for 'q' and 'e'. */
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
