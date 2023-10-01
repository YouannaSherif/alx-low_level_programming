#include "main.h"

/**
 * is_palindrome -writes 1 when a string is a palindrome
 * @s: string
 * Return: 1 if string is palindrome
 * 0 if itherwise
 */

int is_palindrome(char *s)
{
	return(pal(s, 0, strlen(s) - 1));
}

/**
 * pal -helping function
 * @s: string
 * @x: a parameter
 * @y: a parameter
 * Return: 1 if palindrome
 * 0 otherwise
 */

int pal(char *s, unsigned int x, unsigned int y)
{
	if (s[x] && *s && x < (strlen(s) / 2))
	{
		if (s[x] == s[y])
		{
			pal(s, x + 1, y - 1);
			return (1);
		}
	}
			return (0);
}
