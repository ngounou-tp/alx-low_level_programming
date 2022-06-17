#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @src: an input string
 * @n: an input integer
 * Description: a function that concatenates two strings
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
