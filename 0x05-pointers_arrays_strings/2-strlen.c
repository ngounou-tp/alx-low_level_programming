#include "main.h"

/**
 * _strlen - tested by the main.c
 * @s: pointer to a string
 * Description: calculate the length of a string
 * Return: interger
 */

int _strlen(char *s)
{
	char c;
	int i = 0;

	 c = s[0];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}
	 
	return (i);
}
