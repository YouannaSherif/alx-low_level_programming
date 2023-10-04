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
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr)
	{
		for (i = 0; i < strlen(str); i++)
			ptr[i] = str[i];
		return (ptr);
	}
	return (NULL);
}
