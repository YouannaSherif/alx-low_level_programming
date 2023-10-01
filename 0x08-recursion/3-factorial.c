#include "main.h"

/**
 * factorial -prints factorial of a number
 * @n: a parameter
 * Return: factorial of number
 * otherwise returns -1 on error
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
