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
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
