#include "main.h"

/**
 * _puts - prints a string to the stdout.
 * @str: string to be printed.
 */

void _puts(char *str)
{
	int i = 0;

	/**
	 * I used a while loop because I did not know the number of
	 * character I will be looping through in the string. I simply
	 * know I want to print the characters of the string provided
	 * the character to be printed isn't a newline character.
	 *
	 * Loop explained:
	 *
	 * The While loop checks if the ith character of the string str
	 * is not the newline character, after which it prints the
	 * character if it isn't a newline character.
	 * After the loop terminates, a newline character is printed.
	 */

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
