#include "main.h"

/**
 * pow_opr - determines wheter the number is a perfect square
 * @n: stores the num
 * @r: iterator
 * Return: square root or -1
 */

int pow_opr(int n, int r)
{
	if (r % (n / r) == 0)
	{
		if (r * (n / r) == n)
			return (r);
		else
			return (-1);
	}
	return (pow_opr(n, r + 1));
}

/**
 * _sqrt_recursion - a functionto find the square root of a number recursively
 * @n: number
 * Return: sqrt n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (pow_opr(n, 2));
}
