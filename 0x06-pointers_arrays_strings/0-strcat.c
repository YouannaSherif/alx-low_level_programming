#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat -it concatenates two strings
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * Return: 0 on sucess
 */

char *_strcat(char *dest, char *src)
{
	int d = strlen(dest) - 1;
	int s = strlen(src) - 1;
	int i;
	int count = 1;

	for (i = 0; i <= s; i++)
	{
		count++;
		dest[d + count] = src[i];
	}
	dest[d + s + 2] = '\0';
	return (dest);
}
