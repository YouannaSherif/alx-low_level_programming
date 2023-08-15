#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion -the square root of a number
 *
 * @n: a parameter
 * @var: a parameter
 *
 * Return: the square root
 * -1 if the number doesn't have a square root
 */

int sq(int n, int var);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq -helps to find the square root
 *
 * @n: a parameter
 * @var: a parameter
 *
 * Return: the square root
 * -1 on failing
 */

int sq(int n, int var)
{
		if (var * var == n)
			return (var);
		if (var * var < n)
			return (sq(n, var + 1));
		else
			return (-1);
}
