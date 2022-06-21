#include<stdio.h>
#include<stdlib.h>

/**
 * _memset - function assigning a constant byte to the adress
 * of a given pointer
 * @s: pointer to be assigned
 * @b: the constant byte to be assigned
 * @n: the n byte to be assigned
 * Description: assigned the n bits of s to b
 * Return: the adress of the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (c);
}
