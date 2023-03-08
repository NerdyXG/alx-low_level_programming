#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (; len >= 0; len--)
		_putchar(s[len]);
}
