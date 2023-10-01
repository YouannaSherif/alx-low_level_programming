#include "main.h"

/**
 * _sqrt_recursion -the square root of a function
 * @n: a parameter
 * Return: the result
 * otherwise -1 on error
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr -helping function
 * @n: a parameter
 * @x: a parameter
 * Return: square root
 */

int sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqr(n, x + 1));
	else
		return (-1);
}
