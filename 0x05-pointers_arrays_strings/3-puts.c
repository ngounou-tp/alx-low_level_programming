#include "main.h"

/**
 *  _puts - tested by main.c file
 *  @str: pointer to a string
 *  Description: prints a string
 *  Return: nothing
 */

void _puts(char *str)
{
	char c;
	int i;

	c = str[0];
	i = 0;

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = str[i];
	}
	_putchar('\n');
}
