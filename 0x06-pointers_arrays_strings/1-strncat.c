#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat -limited version of adding two strings
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: a parameter
 * Return: 0 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = strlen(dest) - 1;
	int i;
	int count = 0;

	for (i = 0; i <= (n - 1); i++)
	{
		count++;
		dest[d + count] = src[i];
	}
	return (dest);
}
