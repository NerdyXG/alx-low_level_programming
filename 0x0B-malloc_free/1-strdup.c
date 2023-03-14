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
	long unsigned int i;
	char *str_ptr;

	str_ptr = malloc(sizeof(char) * strlen(str));
	if (*str == '\0')
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		str_ptr[i] = str[i];
	return (str_ptr);
}
