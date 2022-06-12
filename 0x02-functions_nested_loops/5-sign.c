#include "main.h"

/**
 * print_sign - prints signs
 * @n: An input integer
 * Description: function uses _putchar function to print signs
 * Return: 1 if positif 0if equal to zero or -1 if negatif
 */
 
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else 
		if (n == 0)
		{
			_putchar('0');

			return (0);
		}
		else 
		{
			_putchar('-');

			return (-1);
		}
}
