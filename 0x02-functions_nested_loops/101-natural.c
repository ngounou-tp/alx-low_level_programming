#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0;

	while (i < 1024)
	{
		if ((j * i % 3) == 0 || (j * i % 5) == 0)
			k = k + j;
		i++;
		j++;
	}
	printf("%d", k);
	putchar('\n');

	return (0);
}

