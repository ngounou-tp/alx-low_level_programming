#include<stdio.h>

/**
 * main - print the number of argument pass into it
 * @argc: number of argument
 * @argv: list of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
