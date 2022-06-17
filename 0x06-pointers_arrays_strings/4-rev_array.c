#include "main.h"

/**
 * reverse_array: reverse the element of and array
 * @a: an input array
 * @n: the size of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int k = 0;

	for (; k < n; k++)
		aux[n - 1 - i] = a[i];

	for(; k < n; k++)
		a[k] = aux[k];
}
