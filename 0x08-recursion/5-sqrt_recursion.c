#include "main.h"

/**
 * _sqrt_recursion - calculate natural squqre root
 * @n: input integer
 * Description: a function that returns
 * the natural square root of a number.
 * Return: interger
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	if (prev * prev == root)
			return (prev);
	return (_sqrt(prev + 1, root));
}

