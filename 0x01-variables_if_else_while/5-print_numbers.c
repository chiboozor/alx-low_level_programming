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
		/* To get the ASCII value of the number, add '0'. */
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
