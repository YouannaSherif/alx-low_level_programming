#include "function_pointers.h"

/**
 * int_index -searches for an integer
 *
 * @array: points to array
 * @size: parameter
 * @cmp: points to a function
 *
 * Return: the index of the first element
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
		return (-1);
}
