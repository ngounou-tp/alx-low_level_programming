#include "main.h"
#include <stdio.h>

/**
 * print_array - tested by the main.c file
 * @a: a pointer to the first element of the array
 * @n: number of element in the array
 * Description: rints the element of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	_putchar('\n');
}
