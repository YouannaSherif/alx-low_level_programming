#include "main.h"
#include <stdio.h>

/**
 * factorial -prints the factorial of a number
 *
 * @n: a parameter
 *
 * Return: the factorial of a number if n is greater than 0
 * If n is less than 0 it returns -1
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
