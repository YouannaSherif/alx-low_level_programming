#include "main.h"
#include <string.h>

/**
 * is_palindrome -finds if a string is palindrome or not
 *
 * @s: points to a string
 * @i: a parameter
 * @j: a parameter
 *
 * Return: 1 if s is palindrome
 * 0 otherwise
 */

int isp(char *s, unsigned int i, int j);
int is_palindrome(char *s)
{
	int j = strlen(s);

	return (isp(s, 0, j));
}

/**
 * isp -helps in finding if string is palindrome
 *
 * @s: points to a string
 * @i: a parameter
 * @j: a parameter
 *
 * Return: 1 if s is palindrome
 * 0 otherwise
 */

int isp(char *s, unsigned int i, int j)
{
	if (i < strlen(s) / 2)
	{
		j--;
	if (s[i] == s[j])
	{
		i++;
		return (isp(s, i, j));
	}
	else
		return (0);
	}
	return (1);
}
