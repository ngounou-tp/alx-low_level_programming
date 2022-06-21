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
	int i = 0, j = 0, k =0, r, d;

	while (*s)
		i++;
	while(*accept)
		j++;
	if (s[0] == '\0' && accept[0] == '\0')
	{
		i++;
		return (i);
	}
	else
	{
		for (r = 0; r < i; r++)
		{
			for (d = 0; d < j; d++)
			{
				if (accept[d] == s[r])
					k++;
			}
		}
	}
	
	k++;
	return (k);
}

