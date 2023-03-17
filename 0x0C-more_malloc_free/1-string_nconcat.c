#include "main.h"
#include <stdlib.h>

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
	unsigned int i, j, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	s = malloc((len_s1 * sizeof(char)) + n);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n > len_s2)
	{
		for (j = 0; j < len_s2 + 1; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n ; j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
