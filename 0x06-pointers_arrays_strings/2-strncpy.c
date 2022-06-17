#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;
	char *c = dest;

	for (; i < n ; i++)
	{
		if (*src)
		{
			*dest++ = *src++;
			k++;
		}
	}

	while (k < n)
	{
		*dest++ = '\0';
		k++;
	}

	return (c);
}

