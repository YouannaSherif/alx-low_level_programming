#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -puts a string into a pointer
 *
 * @str: a pointer
 *
 * Return: a pointer
 * On failing it returns NULL
 */

char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
	}
		return (ptr);
}
