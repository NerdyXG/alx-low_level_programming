#include "main.h"

/**
 * _strchr - function to check for the presence of a char in a str
 * @s: parameter that holds string
 * @c: parameter that holds char
 * Return: s when found, and NULL when not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (i >= 0)
	{
		if (*s == c)
			break;
		if (*s == '\0')
			break;
		s++;
		i++;
	}
	if (*s == '\0')
		return ('\0');
	else
		return (s);
}
