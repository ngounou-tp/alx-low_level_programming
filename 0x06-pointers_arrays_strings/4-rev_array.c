#include "main.h"

/**
 * reverse_array - a function that reverse the element of and array
 * @a: an input array
 * @n: the size of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while(i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
