#include "main.h"

/**
 * _isalpha - check for alphaphetic character
 * @c: An input character
 * Description: check if a given character is an alphabetique character
 * Return: 1 if alphabetics and 0 if not
 */

int _isalpha(int c)
{
	char s;
	char v;
	int t = 0;

	for (s = 'A'; s <= 'Z'; s++)
	{
		for (v = 'a'; v <= 'z'; v++)
		{
			if (c == s || c == v)
				t = 1;
		}
	}

	return (t);
}
