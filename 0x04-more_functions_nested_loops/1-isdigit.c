#include "main.h"

/**
 * _isdigit - tested by main.c file
 * @c: input interger
 * Description: verifier if a given interger is a digit
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	int j, k =0;

	for (j = 0; j <= 9; j++)
	{
		if (c == j)
			k = 1;
	}

	return (k);
}
		
