#include "main.h"

/**
 * print_rev - tested by main.c file
 * @s: pointer to a string
 * Description: prints a string in reverse order
 * followed by a new line
 * Return: nothing
 */

void print_rev(char *s)
{
	char c;
	char a;
	int i;
	int j;

	c = s[0];
	i = 0;
	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	a = s[i + 1];

	for (j = i; j >= 0; j--)
	{
		_putchar(a);
		a = s[j];
	}
	_putchar('\n');
}

