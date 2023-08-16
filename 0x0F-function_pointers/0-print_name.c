#include "function_pointers.h"

/**
 * print_name -print names
 *
 * @name: points to string
 * @f: points to a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
