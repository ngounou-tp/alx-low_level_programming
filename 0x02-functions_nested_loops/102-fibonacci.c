#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1, k =0, n;
	while (k <= 50)
	{
		if (k == 50)
			printf("%d", n);
		else
		{
			n = i + j;
			i = j;
			j = n;
			k++;
			printf("%d", n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
