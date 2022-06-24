#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies the first two argument
 * @argc: number of argument
 * @argv: lise of argument
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	r = a * b;
	printf("%d\n", r);

	return (0);
}
