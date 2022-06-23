#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 * Description: prints a string in reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{	
	char *c;

	if (*s != '\0')
	{
		_print_rev_recursion(s);
		s++;
	}
	c = s;
	c--;
	_putchar(*c);	
}
