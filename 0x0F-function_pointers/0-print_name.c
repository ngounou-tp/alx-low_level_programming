#include "function_pointers.h"
#include<stdlib.h>

/*
 * print_name - function that print a given name
 * @name: input string
 * @f: pointer to a given function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	char c;
	while (name)
	{
		c = *name;
		_putchar(c);
		name++;
	}

	(*f)(* char) = &print_name;
}
