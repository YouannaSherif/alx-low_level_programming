#include "main.h"

/**
 * _pow_recursion -finds the result of number raised to a power
 * @x: a prameter
 * @y: a parameter
 * Return: the result
 * otherwise -1 when error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return ( x * _pow_recursion(x, y - 1));
}
