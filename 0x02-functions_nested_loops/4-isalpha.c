#include "main.h"

/**
 * _isalpha -checks the alphabet uppercase or lowercase
 *
 * @c: parameter to print
 *
 * Return: 1 if c is alphabet
 * otherwise it returns 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
