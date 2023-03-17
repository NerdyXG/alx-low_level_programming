#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fuction
 * @b: size of allocaed memory
 * Return: ptr or 98
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
