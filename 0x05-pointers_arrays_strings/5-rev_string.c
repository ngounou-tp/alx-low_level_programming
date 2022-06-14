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
	char a;
	char *r;

	i = 0;
	a = s[0];
	while (a != '\0')
	{
		i++;
		a = s[i];
	}
	k = 0;

	for (j = i - 1; j >= 0; --j)
	{
		r[k] = s[j];
		k++;
	}
	*s = *r;
}
