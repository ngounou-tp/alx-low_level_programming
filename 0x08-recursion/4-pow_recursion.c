#include "main.h"

/**
 * _pow_recursion - raise x to the power y
 * @x: input integer
 * @y: input integer
 * Description: returns the value
 * of x raised to the power of y
 * Return: interger
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
