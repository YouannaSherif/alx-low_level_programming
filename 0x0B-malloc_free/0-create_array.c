#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars, initialized with a specific char.
 *
 * @size: a parameter
 * @c: a parameter
 *
 * Return: 0 on success
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(c));
	unsigned int i;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
	}
	else
		return (NULL);
}
