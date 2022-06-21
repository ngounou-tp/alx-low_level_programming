#include "main.h"
#include<stddef.h>

/**
 * _strchr - find a character in a string
 * @s: input string
 * @c: input character to look for
 * Description: find the first occcurence of c in s
 * Return: a poiner to that first  occurence
 */
char *_strchr(char *s, char c)
{
	while(*s)
	{
		if (c == *s)
			return (s);
		s++;
	}

	if (c == *s)
		return (s);
	return (NULL);
}

