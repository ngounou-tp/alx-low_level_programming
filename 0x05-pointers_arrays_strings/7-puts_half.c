#include "main.h"

/**
 * puts_half - tested by main.c file
 * @s: array of character
 * Description: print half number of charater
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, k;
	char c;

	i = 0;
	c = s[0];
	while (c != '\0')
	{
		i++;
		c = s[i];
	}

	 if ( i % 2 == 0)
		 j = i / 2;
	 else
		 j = (i - 1) / 2;
	 for (k = 0; k < j; k++)
		 _putchar(s[k]);
	 _putchar('\n');
}

