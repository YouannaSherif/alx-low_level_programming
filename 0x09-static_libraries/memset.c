#include "main.h"

/**
 * _memset -function
 * @s: string
 * @b: a parameter
 * @n: a parameter
 * Retturn: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	*s = '\0';
	b++;
	n++;
	return (s);
}
