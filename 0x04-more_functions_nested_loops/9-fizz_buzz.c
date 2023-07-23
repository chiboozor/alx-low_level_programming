#include <stdio.h>

/**
 * main - program entry point.
 * Return: 0.
 *
 * FizzBuzz program. Prints 1-100 followed by a new line, but
 * prints 'Fizz' for multiples of 3, 'Buzz' for multiples of 5,
 * and 'FizzBuzz' for multiples of both 3 and 5.
 */

int main(void)
{
	/* Variables initialization. */
	int i;

	/* Loop to print the numbers. */
	for (i = 1; i <= 100; i++)
	{
		/* Prints 'FizzBuzz' if i is a multiple of 3 and 5. */
		if ((i % 3) == 0 && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		/* Prints 'Fizz' if i is a multiple of 3. */
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		/* Prints 'Buzz' if i is a multiple of 5. */
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		/* Print the number. */
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
