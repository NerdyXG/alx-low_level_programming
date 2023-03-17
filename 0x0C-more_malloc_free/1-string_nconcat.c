#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function
 * @s1: stores first str
 * @s2: stores second str
 * @n: size of allocated memory
 * Return: char ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s = malloc(strlen(s1) + n);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (strlen(s2) < n)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	return (s);
}
