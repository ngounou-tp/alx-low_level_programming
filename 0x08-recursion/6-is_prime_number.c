#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 * @n: input integer
 * Description: check if n is prime or not
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (is_factor(2, n));
}

/**
 * is_factor - check if prev is a fator of n
 * @prev: input integer
 * @n: input integer
 * Description: verify is it is a factor
 * Return: 0 if true  and 1 if false
 */
int is_factor(int prev, int n)
{
	if (prev > n / 2)
		return (1);
	if (n % prev == 0)
		return (0);
	return (is_factor(prev + 1, n));
}
