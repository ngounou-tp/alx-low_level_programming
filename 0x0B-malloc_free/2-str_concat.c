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
	int i = 0, j = 0, k = 0, w;
	char *b = s1, *c = s2, *p, *e;

	if (s1 == NULL)
		s1 = "";
	while (*s1++)
		i++;
	s1 = b;
	if (s2 == NULL)
		s2 = "";
	while (*s2++)
		j++;
	s2 = c;
	j++;
	k = i + j;
	p = malloc(sizeof(char) * k);
	e = p;
	if (p)
	{
		for (w = 0; w < k; k++)
		{
			if (i < k)
			{
				p[w] = *s1;
				s1++;
			}
			else
			{
				p[w] = *s2;
				s2++;
			}
		}
		return (e);
	}
	return (NULL);
	free(p);
}
