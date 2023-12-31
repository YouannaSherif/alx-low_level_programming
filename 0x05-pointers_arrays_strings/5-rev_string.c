#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string -reverses string but without printing it on stout
 * @s: points to a string
 * Return: 0 on success
 */

void rev_string(char *s)
{
	int x = strlen(s);
	int i = 0;
	char rev;

	for (i = 0; i < x; i++)
	{
		x--;
		rev = s[i];
		s[i] = s[x];
		s[x] = rev;
	}
}
