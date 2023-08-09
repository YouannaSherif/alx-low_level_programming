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
	int size = strlen(str);
	char *ptr = (char *) malloc(size * sizeof(str));
	int i;

	if (str == NULL)
		return (NULL);
	if (size > 0)
	{
		for (i = 0; str[i]; i++)
			ptr[i] = str[i];
		return (ptr);
	}
	else
		return (NULL);
}
