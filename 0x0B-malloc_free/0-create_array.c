#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - create and array
 * @size:input unsigned integer
 * @c: input char
 * Return: pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *p, *r;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p)
	{
		r = p;
		for (i = 0; i < size; i++)
		{
			*p = c;
			p++;
		}
		return (r);
	}
	return (NULL);

	free(p);
}
