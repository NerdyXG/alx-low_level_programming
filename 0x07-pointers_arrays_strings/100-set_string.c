#include "main.h"

/**
 * set_string - function
 * @s: source address
 * @to: target address
 */

void set_string(char **s, char *to)
{
	*s = to;
	_putchar('\0');
}
