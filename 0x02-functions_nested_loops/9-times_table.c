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
	int t;

	for (s = 0; s <= 9; s++)
	{
		for (d = 0; d <= 9; d++)
		{
			t = s * d;

			if ((t / 10) == 0)
			{
				if (d != 0)
					_putchar(' ');
				_putchar(t + '0');

				if (d == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				if (d == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}

			
		}
		_putchar('\n');
	}
}

				
				
 
