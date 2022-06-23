#include "main.h"

/**
 * factorial - a function that returns the factorial
 * @n: input interger
 * Description: a function that returns
 * the factorial of a given number
 * Return: interger
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	if (n > 1)
		return(n * factorial(n - 1));
}
