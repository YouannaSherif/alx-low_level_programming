#include "main.h"

/**
 * is_prime_number -finds the prime numbers
 *
 * @n: a parameter
 * @c: a parameter
 * @i: a parameter
 *
 * Return: 1 if n is a prime number
 * 0 otherwise
 */

int is_prime(int n, int c, int i);
int is_prime_number(int n)
{
	return (is_prime(n, 0, 0));
}

/**
 * is_prime -helps to find prime number
 *
 * @n: a parameter
 * @c: a parameter
 * @i: a parameter
 *
 * Return: 1 if n is a prime number
 * 0 otherwise
 */

int is_prime(int n, int c, int i)
{
	if (i <= n)
	{
		i++;
		if (n % i == 0)
		return (is_prime(n, c + 1, i));
		else
			return (is_prime(n, c, i));
	}

	if (c == 2)
		return (1);
	else
		return (0);
}
