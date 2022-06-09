#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int c;
	char low;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (low = 'a'; low < 'g'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
