#include "main.h"

/**
 * _strlen_recursion - calcult thre length of a string
 * @s: input stiring
 * Description: calculte string length of s
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
		i = 1 + _strlen_recursion(s + 1);
	else
		i = 0;

	return (i);
}
