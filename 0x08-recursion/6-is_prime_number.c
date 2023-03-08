#include "main.h"

/**
 * prime_number - checks if the num is prime or not
 * @n: number
 * @i: iterator
 * Return: 0 when not prime, and 1 otherwise
 */

int prime_number(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number
 * Return: 0 when not prime, and 1 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (prime_number(n, 2));
}
