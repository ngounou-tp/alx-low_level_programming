#include "main.h"
#include <stddef.h>

/**
 * _strstr - tested  in main.c
 * @haystack: input string
 * @needle: input string
 * Description: function finds the first occurrence of the substring 
 * Return: a pointer to the first element of that substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k = 0;
	char *c = needle, *m = needle, *n = haystack, *s;

	while (*needle)
	{
		j++;
		needle++;
	}
	needle = c;

	while (*haystack)
	{
		i = 0;
		s = haystack;
		while(k < j)
		{
			if (*m == *n)
			{
				while (*m == *n)
				{
					i++;
					m++;
					n++;
				}
			}
			if (i == j)
			{
				return (s);
				break;
			}
			k++;
		}
		haystack++;
		m = needle;
		n = haystack;
	}

	return (NULL);
}


