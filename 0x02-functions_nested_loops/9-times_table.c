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
			{
				printf("%d", 0);
		       		_putchar(',');
				 _putchar(' ');
			}
			else
				if (s == 1)
				{
					printf("%d", d);
					 _putchar(',');
					  _putchar(' ');
				}
				else
				{
					printf("%d", t);
					t = t + s;
					 _putchar(',');
					  _putchar(' ');
				}
			if (d == 9)
			{
				t = s * 9;
				printf("%d", t);
			}
		}
		_putchar('\n');
	}
}

				
				
 
