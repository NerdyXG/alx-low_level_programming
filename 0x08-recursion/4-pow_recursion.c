#include "main.h"

/**
 * _pow_recursion - returns the power of a numeral
 * @x: stores the number
 * @y: stores the index/power
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
