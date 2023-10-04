#include "main.h"

/**
 * create_array -creats array of chars
 * @size: a parameter
 * @c: character
 * Return: NULL if error or size = 0
 * pointer on success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *) malloc(size * sizeof(c));

	if (ptr && size > 0)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}

	return (NULL);
}
