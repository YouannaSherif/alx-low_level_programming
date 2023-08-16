#include "function_pointers.h"
#include <string.h>

/**
 * array_iterator -executes function deals with an array's elemants
 *
 * @array: points to array
 * @size: a parameter
 * @action: points to a function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
