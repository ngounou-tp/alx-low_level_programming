#include "main.h"

/**
 * swap_int - tested by the main.c file
 * @a: pointer to and integer
 * @b: pointer to and interger
 * Description: swaps thw value of two given interger
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
