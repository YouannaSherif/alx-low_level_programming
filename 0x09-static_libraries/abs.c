#include "main.h"
#include <stdio.h>

/**
 * _abs -prints the absolute value of an intger
 *
 * @x: is a parameter
 *
 * Return: 0 on success
 */

int _abs(int x)
{
	if (x < 0)
	{
		x *= -1;
		return (x);
	}
	else
		return (x);
}
