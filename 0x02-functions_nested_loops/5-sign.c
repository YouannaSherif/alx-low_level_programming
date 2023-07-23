#include "main.h"

/**
 * print_sign -print the sign of the number
 *
 * @n: is a parameter
 *
 * Returns: 1 and prints + if n is greater than zero
 * it returns 0 and prints 0 if n is zero
 * it returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}