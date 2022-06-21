#include "main.h"
#include<stdio.h>

/**
 * _strspn - count the number of character of a given string
 * @s: input string to do the test
 * @accepted: input string conatining characters to be tested
 * Description: counts number of characters of accept that are in s
 * Return: interger
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	if (*s == '\0' && *s == '\0')
		return (i++)
	else
	{
		while (*s)
		{
			while (*accept)
			{
				if (*s == *accept)
					i++;
				accept++;
			}
			s++;
		}
	}
	i++;
	return (i);
}
