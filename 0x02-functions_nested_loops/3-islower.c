#include "main.h"

/**
 * 3-islowe -checks for lowercase characters
 *
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
