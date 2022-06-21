#include "main.h"
#include<stdio.h>

/**
 * _strspn - count the number of character of a given string
 * @s: input string to do the test
 * @accept: input string conatining characters to be tested
 * Description: counts number of characters of accept that are in s
 * Return: interger
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	char *a = accept;

	while (*s)
	{
		j = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				i++;
				j = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = a;
		if (j == 0)
			break;
	}
	return (i);
}
