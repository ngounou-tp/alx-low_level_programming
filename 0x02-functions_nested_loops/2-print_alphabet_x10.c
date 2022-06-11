#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++){
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
}
