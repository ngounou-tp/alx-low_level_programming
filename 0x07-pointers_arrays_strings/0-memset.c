#include<stdio.h>
#include<stdlib.h>

/**
 * _memset - function assigning a constant byte to the adress
 * of a given pointer
 * @s: pointer to be assigned
 * @b: the constant byte to be assigned
 * @n: the n byte to be assigned
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, j = 1;
	char *c;

	while (*s)
		i++;
	if (n > i)
		n = i;
	c = s;
	*s = b;
	while (j < n)
	{
		*s++ = b;
		j++;
	}

	return (c);
}
