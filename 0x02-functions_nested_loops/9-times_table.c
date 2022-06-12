#include "main.h"

/**
 * times_table - print times table of  9
 * input: none
 *
 * Return: void
 */

void times_table(void)
{
	int s;
	int d;
	int t = 0;

	for (s = 0; s <= 9; s++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (s == 0)
				_putchar('0');
			else
				if (s == 1)
					_putchar(d);
				else
				{
					_putchar(t);
					t = t + s;
				}
		}
		_putchar('\n');
	}
}

				
				
 
