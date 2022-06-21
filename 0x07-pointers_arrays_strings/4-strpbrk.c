#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - tested my main.c file
 * @s: input string
 * @accept: input string
 * Description:  function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = a;
	}

	return (NULL);
}
