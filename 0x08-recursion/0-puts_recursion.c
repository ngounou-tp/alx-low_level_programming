#include<main.h>

/**
 * _puts_recursion - write a string
 * @s: input string
 * Description: write a string using putchar followed by a newline
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	_putchar(*s);
	_puts_recursion(s++);
}
