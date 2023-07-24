#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -reverses a string
 *
 * @s: is a parameter
 *
 * Return: 0 on success
 */

void print_rev(char *s)
{
	int x;

	for (x = strlen(s); x <= 0; x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
