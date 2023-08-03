#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion -displays a string in reverse
 *
 * @s: a poiner
 *
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
