#include "main.h"

/**
 * _memcpy - function to copy memory addresses
 * @dest: para that holds destination
 * @src: param that holds source
 * @n: para that holds the size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
