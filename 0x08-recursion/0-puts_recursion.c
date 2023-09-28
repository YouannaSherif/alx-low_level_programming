#include "main.h"

/**
 * _puts_recursion -prints a string followed by a new line
 * @s: string
 * Return: nothihng
 */

void _puts_recursion(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
		putchar(s[i]);
	putchar('\n');
}
