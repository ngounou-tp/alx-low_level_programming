#include "variadic_functions.h"
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to a charactar seperator
 * @n: number of int
 * @...: other arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, c;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, int);
		printf("%d", c);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
