#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1, k, n;

	printf("%d", i);
	putchar(',');
	putchar(' ');
	printf("%d", j);
	putchar(',');
	putchar(' ');
	k = 2;
	while (k <= 50)
	{
		n = i + j;
		i = j;
		j = n;
		k++;
		printf("%d", n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
