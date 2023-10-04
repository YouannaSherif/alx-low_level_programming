#include "main.h"

/**
 * str_concat -print the content of s1 followed by the content of s2
 * @s1: string
 * @s2: string
 * Return: the concat of two strings
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;
	ptr =  (char *) malloc(size * sizeof(char));

	if (!ptr)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (i = strlen(s1), j = 0; i < size - 1; j++, i++)
		ptr[i] = s2[j];
	i++;
	ptr[i] = '\0';
	return (ptr);
}
