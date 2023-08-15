#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion -the square root of a number
 *
 * @n: a parameter
 *
 * Return: the square root
 * -1 if the number doesn't have a square root
 */

int sqrt(int n, int var);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1);
}

/**
 * sqrt -helps to find the square root
 *
 * @n: a parameter
 * @var: a parameter
 *
 * Return: the square root
 * -1 on failing
 */

int sqrt(int n, int var)
{
		if(n == var)
			return (var);
		if (n < var)
			return (sqrt(n,var++));
		else
			return (-1);
}
