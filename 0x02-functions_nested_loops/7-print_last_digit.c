#include "main.h"
#include <stdio.h>

/**
 * print_last_digit -prints last digit of a number
 *
 * @x: is a parameter
 *
 * Return: 0 on success
 */

int print_last_digit(int x)
{
	int n;
	n = _abs(x);
	x = n % 10;
	if (x > 0)
	{
		_putchar(x + '0');
		return (x);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
