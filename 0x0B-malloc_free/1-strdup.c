#include "main.h"

/**
 * _strdup -returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a string on success
 * Null on failing
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	ptr = (char *)malloc(size * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}
		for (i = 0; i < strlen(str); i++)
			ptr[i] = str[i];

	return (ptr);
}
