#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -present x raised to the power of y
 *
 * @x: a parameter
 * @y: a parameter
 *
 * Return: the result
 * If y is lower than 0 it returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x *= _pow_recursion(x, y - 1));
}
