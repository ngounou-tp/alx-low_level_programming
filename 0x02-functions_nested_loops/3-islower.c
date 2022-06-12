#include "main.h"

/**
 * _islower -check if a character is in lower case
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: if true return 1 and 0 if false
 */

int _islower(int c)
{
	char s;
	int t = 0;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == c)
			t = 1;
	}

	return (t);
}
