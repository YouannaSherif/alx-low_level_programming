#include "main.h"
#include <stdio.h>

/**
 * swap_int -swap two variables
 *
 * @a: is a pointer
 *
 * @b: is a pointer
 *
 * Return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
