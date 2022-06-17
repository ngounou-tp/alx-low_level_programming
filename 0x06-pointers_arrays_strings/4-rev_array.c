#include "main.h"

/**
 * reverse_array: reverse the element of and array
 * @a: an input array
 * @n: the size of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;
	
	while(k < n - 1)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
