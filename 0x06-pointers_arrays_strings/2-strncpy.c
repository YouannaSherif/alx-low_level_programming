#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy -copy string of at most n bytes of the src
 * @dest: a poiner to a string
 * @src: a poiner to a string
 * @n: is a parameter
 * Return: 0 on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
