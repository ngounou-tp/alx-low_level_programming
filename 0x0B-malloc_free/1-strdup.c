#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - creates a copy of a string
 * @str: input string
 * Return: pointer to the string duplicated
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *b = str, *c, *p;
	
	if (str == NULL)
		return (NULL);
	while (str)
	{
		i++;
		str++;
	}
	str = b;
	p = malloc(sizeof(char) * i);
	c = p;
	for (j = 0; j < i; j++)
	{
		if (p)
		{
			*p = *str;
			p++;
			str++;
		}
		else
			return (NULL);
	}
	return (c);
	free(p);
}

