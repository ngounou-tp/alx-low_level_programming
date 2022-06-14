#include "main.h"

/**
 * puts2 - tested by main.c file
 * @s: array of character
 * Description: prints non consecutif charaters of a string
 * Return: mothing
 */
void puts2(char *s)
{
	int i, j;
	char c;

	c = s[0];
	i = 0;
	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	j = 0;
	while (j < i - 1)
	{
		c = s[j];
		_putchar(c);
		j = j + 2;
	}
	_putchar('\n');
}
		 
