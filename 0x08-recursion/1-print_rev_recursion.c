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
	
	s++;
	_print_rev_recursion(s);
	if (*s == '\0')
	{
		c = s--;
		_putchar(*c);
		c--;
	}	
}
