#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion -returns the length of string
 *
 * @s: a poiner
 *
 * Return: 0 on success
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
	n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
