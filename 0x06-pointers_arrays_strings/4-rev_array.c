#include "main.h"

/**
 * reverse_array: reverse the element of and array
 * @a: an input array
 * @n: the size of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, k = 0;

	for (i = n - 1; i >= 0; i--)
	{
		a[k] = a[i];
		k++;
	}
}
