#include "lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_list - print the elements of a list
 * @h: input list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
