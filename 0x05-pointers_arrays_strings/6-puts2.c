#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 -rints every other character of a string
 * @str: a pointer
 * Return: 0 on success
 */

void puts2(char *str)
{
	int x = strlen(str) - 1;
	int i;

	for (i = 0; i <= x; i += 2)
		putchar(str[i]);
	putchar('\n');
}
