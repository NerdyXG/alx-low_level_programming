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
	unsigned int len = sizeof(str);

	if (str == NULL)
		return (NULL);
	str_ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (str_ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		str_ptr[i] = str[i];
	return (str_ptr);
}
