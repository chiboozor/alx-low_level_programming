#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: number of arguments
 * @argv: array containing arguments passed
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
