#include "main.h"

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * is_palindrome - check if a string is a palyndrome
 * @s: input string
 * Description: check if a string is a palyndrome
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * _strlen_recursion - A function to obtain the length of the string s
 * @s: A string to calculate length
 * Description: string length
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * helper_palindrome - A function with a revesed string
 * @s: An input string
 * @len: the length of the string s
 * Description: help to check a palindrome
 * Return: A reverse string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		return (helper_palindrome(s + 1, len - 2));
	return (0);
}
