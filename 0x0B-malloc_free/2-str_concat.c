#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - concatenate two given string
 * @s1: first input string
 * @s2: second input string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *b = s1, *c = s2, *p, *e;

	if (s1 == NULL)
		i = 1;
	if (s2 == NULL)
		j = 1;
	while (*s1)
	{
		i++;
		s1++;
	}
	i++;
	s1 = b;
	while (*s2)
	{
		j++;
		s2++;
	}
	s2 = c;
	j++;
	k = i + j;
	p = malloc(sizeof(char) * k);
	e = p;
	if (p)
	{
		while (*s1)
		{
			*p = *s1;
			p++;
			s1++;
		}
		while (*s2)
		{
			*p++ = *s2;
			s2++;
		}
		return (e);
	}
	return (NULL);
	free(p);
}


