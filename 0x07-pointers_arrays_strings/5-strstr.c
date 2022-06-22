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
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
