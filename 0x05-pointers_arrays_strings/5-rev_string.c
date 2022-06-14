#include "main.h"

/**
 * rev_string - tested by main.c file
 * @s: pointer to a string
 * Description: reverses a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	char a, b;

	i = 0;
	a = s[0];
	while (a != '\0')
	{
		i++;
		a = s[i];
	}
	k = 0;
	while (k < i--)
	{
		b = s[k];
		s[k++] = s[i];
		s[i] = b;
	}
	
}
