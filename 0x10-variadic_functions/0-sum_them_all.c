#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * variadic_functions.h - calculate the sum of parameters
 * @n: input interger ,number of argument
 * @...: other arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
