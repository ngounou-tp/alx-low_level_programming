#include "main.h"

/**
 * _isdigit - tested by main.c file
 * @c: input interger
 * Description: verifier if a given interger is a digit
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	int k = 0;
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
		{
			k = 1;
			break;
		}
	}

	return (k);
}

