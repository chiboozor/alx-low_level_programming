#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0'); /* To get first digit of the hour. */
			_putchar(i % 10 + '0'); /* To get second digit of the hour. */
			_putchar(':');		/* Separator. */
			_putchar(j / 10 + '0'); /* To get the first digit of the minute. */
			_putchar(j % 10 + '0'); /* To get the second digit of the minute. */
			_putchar('\n');
		}
	}
}
