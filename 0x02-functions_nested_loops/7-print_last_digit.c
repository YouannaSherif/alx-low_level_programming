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
	n = x % 10;
	if (n > 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
