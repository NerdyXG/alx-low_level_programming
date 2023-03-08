#include "main.h"

/**
 * factorial - function to get the factorial of a number
 * @n: stores number
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
