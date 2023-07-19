#include "main.h"

/**
 * 3-islower.c -checks for lowercase characters
 *
 * @c: parameter which we want to know is it a lowercase or otherwise
 * Return: 1 if c is lowercase
 * Otherwise it returns 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
