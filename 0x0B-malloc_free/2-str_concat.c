#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function to concatenate two strings
 * @s1: stores the first string
 * @s2: stores the second string
 * Return: char ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	s = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
