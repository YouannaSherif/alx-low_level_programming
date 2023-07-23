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
	x %= 10;
	n = 48 + x;
	_putchar(n);
	return (n);
}
