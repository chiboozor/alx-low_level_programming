#include "main.h"
/**
 * _puts - prints a string to the stdout using the _putchar function.
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	/* variable i is used for the looping and counter incrememntation */
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
