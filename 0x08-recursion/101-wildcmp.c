#include "main.h"

/**
 * wildcmp -compares between two strings
 * @s1: a string
 * @s2: a string
 * Return: 1 if the strings can be considered identical
 * otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	return (wildcmp(s1 + 1,s2) || wildcmp(s1, s2 + 1));
		
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
