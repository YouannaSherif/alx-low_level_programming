#include "main.h"
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
	int x = strlen(src);

	for (i = 0; i <= (x - 1); i++)
		dest[i] = src[i];
	dest[x] = '\0';
	return (src);
}
