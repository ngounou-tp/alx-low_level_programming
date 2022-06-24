#include<stdio.h>

/**
 * main - entry point
 * @argc: number of argument pass to the command line
 * @argv[]: liste of argument
 * Description: prints the name of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 0)
		printf("%s/n", argv[0]);

	return (0);
}
