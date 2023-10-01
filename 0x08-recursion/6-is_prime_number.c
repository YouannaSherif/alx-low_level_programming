#include "main.h"

/**
 * is_prime_number -finds if n is a prime number
 * @n: a parmeter
 * Return: 1 if n is prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime -helping function
 * @n: a parameter
 * @x: a parameter
 * Return: 1 if prime
 * 0 otherwise
 */

int prime(int n, int x)
{
	if (n % x != 0 && x < n)
	{
		prime(n, x + 1);
		return (1);
	}
	else
		return (0);
}
