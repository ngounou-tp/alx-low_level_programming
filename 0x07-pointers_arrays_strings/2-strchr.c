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
	int i = 0, j = 0;

	while(*s != '\0')
	{
		i++;
		s++;
	}
	while (j <= i)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
		
