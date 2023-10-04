#include "main.h"

/**
 * _strdup -returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a string on success
 * Null on failing
 */

char *_strdup(char *str)
{
	unsigned int i, size = strlen(str) + 1;
	char *ptr = (char *) malloc(size * sizeof(char));

	if (str && ptr)
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
		ptr[size] = putchar('\0');
		return (ptr);
	}
	return (NULL);
}
