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
	unsigned int i, j;
	char *str_ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; i != '\0'; i++)
		;
	str_ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (str_ptr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		str_ptr[j] = str[j];
	return (str_ptr);
}
