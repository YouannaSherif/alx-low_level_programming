#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array -prints all elemnts of an array
 * @a: is the array
 * @n: is a parameter
 * Return: 0 on success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 2); i++)
		printf("%d, ", a[i]);
	printf("%d", a[n - 1]);
	putchar('\n');
}
