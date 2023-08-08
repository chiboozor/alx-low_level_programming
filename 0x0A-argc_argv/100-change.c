#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins required to make a change.
 * @argc: number of args
 * @argv: array of pointer to the args
 * Return: 1 on failure, 0 on success
 */

int main(int argc, char *argv[])
{
	int i, cents; /* Cents = amount of change to give back */
	int count = 0; /* Min number of cents required to make change */

	if (argc != 2) /* Checks if the exact number of args passed is 2 */
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]); /* Converts the argument to integer */
	for (i = 0; cents > 0; i++)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			count++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			count++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			count++;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			count++;
		}
	}
	printf("%d\n", count);

	return (0);
}
