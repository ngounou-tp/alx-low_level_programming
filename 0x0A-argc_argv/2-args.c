#include<stdio.h>

/**
 * main - liste the argument pass to it
 * @argc: number of argument
 * @argv: array of argument pass to it
 * Return: Always 0 (Suceess)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	putchar('\n');
	
	return (0);
}
