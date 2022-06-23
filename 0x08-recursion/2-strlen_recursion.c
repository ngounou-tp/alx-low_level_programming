#include "main.h"

/**
 * _strlen_recursion - calcult thre length of a string
 * @s: input string
 * Description: calculte string length of s
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}

	return (i);
}
