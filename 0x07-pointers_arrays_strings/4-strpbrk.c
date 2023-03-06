#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: string at index 0
 * @accept: string at index 1
 * Return: a ptr
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
