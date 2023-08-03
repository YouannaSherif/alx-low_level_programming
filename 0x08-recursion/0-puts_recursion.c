#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion -prints a string followed by a new line
 *
 * @s: a poiner
 *
 * Return: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
