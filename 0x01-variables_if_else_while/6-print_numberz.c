#include <stdio.h>

/**
 * main - program entry point.
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		/* '0' is added to get the ASCII value of the numbers. */
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
