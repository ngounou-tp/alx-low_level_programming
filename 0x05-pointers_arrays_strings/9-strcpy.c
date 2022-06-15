#include "main.h"

/**
 * _strcpy - to be tested by main.c
 * @dest: array of characters
 * @src: array of characters
 * Description: copies the first string to the second string
 * Return: pointer to the first string
 */
char* _strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src)
		*dest++ = *src;

	return (c);
}
