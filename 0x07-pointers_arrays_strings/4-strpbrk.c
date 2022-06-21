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
	int i;
	char *a = accept, *b = NULL;

	while (*s)
	{
		i = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				b = s;
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		if (i == 1)
			break;
	}

	return (b);
}
