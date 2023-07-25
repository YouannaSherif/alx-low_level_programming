#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half -prints the second half of the string
 * @str: a pointer
 * Return: 0 on success
 */

void puts_half(char *str)
{
	int x = strlen(str);
	int i;
	int j;

	if ((x % 2) != 0)
	{
		for (i = ((x / 2) + 1); i <= x; i++)
			putchar(str[i]);
	}
	if ((x % 2) == 0)
	{
		for (j = (((x - 1) / 2) + 1); j <= x; j++)
			putchar(str[j]);
	}
	putchar('\n');
}
