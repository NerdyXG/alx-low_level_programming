#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create an array
 * @size: stores the size of the array to be created
 * @c: stores the char
 * Return: a char ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c_ptr;

	c_ptr = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		c_ptr[i] = c;
	return (c_ptr);
}
