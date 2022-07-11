#include "main.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * sum_them_ - function that print the sum of it argument
 * @n: numer of arguments
 * @...: other paraters
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return sum;
}

