#include<stdio.h>

/**
 * _memcpy - copy the  n bits of a given memory adress
 * @dest: the memory adres to which we copy
 * @src: the memory address from which we copy
 * @n: unsigned interrger bits to be copied
 * Description: copy the n bits of src to dest
 * Return: the address of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (c);
}
