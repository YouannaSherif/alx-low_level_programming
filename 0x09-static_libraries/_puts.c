#include "main.h"

/**
 * _puts -prints string to stdout followed by a new line
 *
 * @str: a pointer
 *
 * Return: 0 on success
 */

void _puts(char *str)
{
	if (*str == '\0')
		_putchar('\n');
	else
	{
		_putchar(*str);
		_puts(str + 1);
	}
}
