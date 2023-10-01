#include "main.h"

/**
 * _strlen_recursion -length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
		x += _strlen_recursion(s + 1) + 1;
	return (x);
}
