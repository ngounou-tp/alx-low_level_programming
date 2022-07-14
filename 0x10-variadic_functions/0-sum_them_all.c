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
	var_list ap;

	var_start(ap, n);
	for (i = 0; i < n; i++)
		sum += var_arg(ap, int);
	var_end(ap);
	return (sum);
}
