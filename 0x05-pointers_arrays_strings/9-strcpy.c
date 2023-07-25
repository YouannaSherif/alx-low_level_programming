#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy -copies a string into an array
 * @dest: is the destination
 * @src: is the source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int x = strlen(src) - 1;

	for (i = 0, j = 0; i <= x; i++, j++)
		dest[i] = src[j];
	return (src);
}
