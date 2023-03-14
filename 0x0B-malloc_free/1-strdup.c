#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that stores a copy of a string
 * @str: stores the string
 * Return: char ptr
 */

char *_strdup(char *str)
{
	unsigned long i;
	char *str_ptr;

	str_ptr = malloc(sizeof(char) * sizeof(str));
	if (str_ptr == NULL)
		return (NULL);
	for (i = 0; i < sizeof(str); i++)
		str_ptr[i] = str[i];
	return (str_ptr);
}
