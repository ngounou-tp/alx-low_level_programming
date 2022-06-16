#include<stdio.h>
#include "main.h"

/**
 * _strcat - tested by main.c file
 * @dest: first input string
 * @src: second input string
 * Description: concatenate two string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, n;
	char a, b;
	char *con, *c;

	i = 0;
	j = 0;
	k = 0;
	a = dest[0];
	b = src[0];

	while (a != '\0')
	{
		i++;
		a = dest[i];
	}

	while (b != '\0')
	{
		j++;
		b = src[j];
	}

	con = des[0];
	c = &con;

	for (k = 1; k < i; k++)
		*con++ = des[k];
	for(n = 0; n < j; n++)
		*con++ = src[n];
	*con++ = '\0';

	return (c);

