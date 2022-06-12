#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Description: print every minute of the day using the _putchar function nd a for loop
 * Return: void
 */

void jack_bauer(void)
{
	int r;
       	int s;

	for (r = 0; r < 24; r++)
	{
		for (s = 0; s < 60; s++)
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
