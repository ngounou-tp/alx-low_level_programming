#include "main.h"

/**
 * _isupper - test for upper case letter
 * @c: input character
 * Description: function to test for upper case letter
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	int i = 0;
	char w;

	for (w = 'A'; w <= 'Z'; w++)
	{
		if (c == w)
			i = 1;
	}

	return (i);
}
