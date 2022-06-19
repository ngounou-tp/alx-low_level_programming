#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1, n = 0;

	printf("%d", i);
	putchar(',');
	putchar(' ');
	putchar("%d", j);
	putchar(',');
	putchar(' ');
	while (n >= 2 && n <= 50)
	{
		n = i + j;
		printf("%d", n);
		putchar(',');
		putchar(' ');
		i = j;
		j = n;
	}
	putchar('\n');

	return (0);
}
